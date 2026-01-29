/*  Cache Controller! 

* L1 Data Cache plus MSHR
* 
*/

module cache_controller (
    input   logic                               clk_i,              // clock
    input   logic                               rst_i,              // reset (sync, active high)
    input   logic                               flush_i,            // flush

    input   logic                               lsu_req_vld_i,      // Valid Access Request from LSU
    input   logic                               lsu_req_wr_rd_i,    // Write/Read (1/0) Flag
    input   logic   [31:0]                      lsu_req_addr_i,     // Address to be Accessed
    input   logic   [31:0]                      lsu_req_data_i,     // Data for Write Request
    input   logic   [$clog2(ROB_ENTRIES)-1:0]   lsu_req_rob_idx_i,  // ROB Index to send result to 

    output  logic                               mem_req_vld_o,      // Request data from main memory for repair
    output  logic   [31:0]                      mem_req_addr_o,     // Address of repair request
    input   logic                               mem_resp_vld_i,     // Memory response valid?
    input   logic   [CACHE_BLOCK_SIZE-1:0]      mem_resp_data_i,    // Repair block of data 
    
    output  logic                               mem_wb_vld_o,       // Writeback evicted block to main memory
    output  logic   [CACHE_BLOCK_SIZE-1:0]      mem_wb_data_o,      // Evicted block

    output  logic                               cmt_ld_vld_o,      // Send data to the ROB to Finish Instruction
    output  logic   [31:0]                      cmt_ld_data_o,     // Load Data
    output  logic   [$clog2(ROB_ENTRIES)-1:0]   cmt_rob_idx_o      // Index of ROB entry to update

);  

    // Repair State Machine 
    typedef enum logic [1:0] {
        IDLE,
        WAIT_MEM_RESP,
        REPAIR_WRITE
    } repair_state_t;

    repair_state_t repair_state, repair_state_next;

    // dcache data and control signals
    cache_data_block rd_data_wire;
    cache_metadata_block rd_tag_wire;
    cache_data_block wr_data_wire;
    logic [31:0] wr_addr_wire;
    logic wr_en;
    logic is_repair;
    logic is_repair_dirty;

    // 
    logic stall_controller;

    // Data Cache Pipeline Registers
    cache_data_block rd_data_reg;
    cache_metadata_block rd_tag_reg;
    logic req_vld_reg;
    logic req_rd_wr_reg;
    logic [31:0] req_addr_reg;
    logic [31:0] req_st_data_reg; 
    logic [$clog2(ROB_ENTRIES)-1:0] req_rob_idx_reg;   


    // Tag Compare
    logic [NUM_TAG_BITS-1:0] req_tag;
    logic req_hit;

    // Cache Write Signals
    logic store_wr_en;
    cache_data_block write_block;
    logic [31:0] write_addr;
    logic [BLOCK_OFFSET_BITS-1:0] write_block_offset;


    // Signals for MSHR
    logic ld_alloc_mshr_en;
    logic st_alloc_mshr_en;
    logic ld_mshr_full;
    logic st_mshr_full;
    logic mshr_repair_req;
    logic [31:0] mshr_repair_addr;
    logic [31:0] mshr_repair_data;
    logic [$clog2(ROB_ENTRIES)-1:0] mshr_repair_rob_idx;
    logic mshr_repair_is_store;

    // Controller signals for handling repairs ( )
    logic ctrl_repair_ack;                                      // does the controller acknowledge the request and initiate the response
    logic ctrl_repair_complete;                                 // is the repair complete?
    logic [31:0] ctrl_repair_addr_reg;                          // address of the block being retreived
    logic [31:0] ctrl_repair_data_reg;                          // store data for the repairing block
    logic [$clog2(ROB_ENTRIES)-1:0] ctrl_repair_rob_idx_reg;    // ROB idx of the load being repaired (for committing loads)
    logic ctrl_repair_is_store;                                 // is the repair a write miss?
    logic [CACHE_BLOCK_SIZE-1:0] mem_resp_block_reg;            // Response block from main memory

    cache_data_block repair_wr_data;
    logic [31:0] repair_wr_addr;

    logic [BLOCK_OFFSET_BITS-1:0] cmt_block_offset;

    logic lsu_req_vld_reg;
    logic lsu_req_wr_rd_reg;
    logic [31:0] lsu_req_addr_reg;
    logic [31:0] lsu_req_data_reg;
    logic [$clog2(ROB_ENTRIES)-1:0] lsu_req_rob_idx_reg; 


    data_cache u_data_cache (
        .clk_i(clk_i),
        .rst_i(rst_i),
        .wr_en(wr_en),
        .is_repair_i(is_repair),
        .is_repair_dirty_i(is_repair_dirty),
        .wr_addr_i(wr_addr_wire),
        .wr_data_i(wr_data_wire),
        .rd_en(lsu_req_vld_reg),
        .rd_addr_i(lsu_req_addr_reg),
        .rd_data_o(rd_data_wire),
        .rd_tag_o(rd_tag_wire),
        .wb_evicted_en(mem_wb_vld_o),
        .wb_evicted_block(mem_wb_data_o)     
    );


    miss_status_history_register mshr (
        .clk_i(clk_i),
        .rst_i(rst_i),
        .flush_i(flush_i),
        .ld_alloc_en_i(ld_alloc_mshr_en),
        .ld_alloc_addr_i(req_addr_reg),
        .ld_alloc_rob_idx_i(req_rob_idx_reg),
        .st_alloc_en_i(st_alloc_mshr_en),
        .st_alloc_addr_i(req_addr_reg),
        .st_alloc_data_i(req_st_data_reg),
        .ld_full_o(ld_mshr_full),
        .st_full_o(st_mshr_full),
        .repair_req_o(mshr_repair_req),
        .repair_req_addr_o(mshr_repair_addr),
        .repair_req_data_o(mshr_repair_data),
        .repair_req_rob_idx_o(mshr_repair_rob_idx),
        .repair_is_store_o(mshr_repair_is_store),
        .repair_ack_i(ctrl_repair_ack),
        .repair_complete_i(ctrl_repair_complete)    
    );


    assign mem_req_vld_o = (repair_state == IDLE && mshr_repair_req);
    assign mem_req_addr_o = ctrl_repair_addr_reg;
    assign ctrl_repair_ack = (repair_state == IDLE && mshr_repair_req);
    assign ctrl_repair_complete = (repair_state == REPAIR_WRITE);
    assign stall_controller = ctrl_repair_complete || ld_mshr_full || st_mshr_full;

    always_ff @(posedge clk_i) begin : dcache_pipeline_registers
        if(rst_i) begin
            
            lsu_req_vld_reg     <= '0;
            lsu_req_wr_rd_reg   <= '0;
            lsu_req_addr_reg    <= '0;
            lsu_req_data_reg    <= '0;
            lsu_req_rob_idx_reg <= '0; 
            
            rd_data_reg         <= '0;
            rd_tag_reg          <= '0;
            req_vld_reg         <= '0;
            req_rd_wr_reg       <= '0;
            req_addr_reg        <= '0;
            req_st_data_reg     <= '0;   
            req_rob_idx_reg     <= '0;

        end else if (stall_controller) begin

            lsu_req_vld_reg     <= lsu_req_vld_reg;
            lsu_req_wr_rd_reg   <= lsu_req_wr_rd_reg;
            lsu_req_addr_reg    <= lsu_req_addr_reg;
            lsu_req_data_reg    <= lsu_req_data_reg;
            lsu_req_rob_idx_reg <= lsu_req_rob_idx_reg; 

            rd_data_reg         <= rd_data_reg;
            rd_tag_reg          <= rd_tag_reg;
            req_vld_reg         <= req_vld_reg;
            req_rd_wr_reg       <= req_rd_wr_reg;
            req_addr_reg        <= req_addr_reg;
            req_st_data_reg     <= req_st_data_reg;  
            req_rob_idx_reg     <= req_rob_idx_reg;
        end else begin

            lsu_req_vld_reg     <=  lsu_req_vld_i;
            lsu_req_wr_rd_reg   <=  lsu_req_wr_rd_i;
            lsu_req_addr_reg    <=  lsu_req_addr_i;
            lsu_req_data_reg    <=  lsu_req_data_i;
            lsu_req_rob_idx_reg <=  lsu_req_rob_idx_i;

            rd_data_reg         <= rd_data_wire;
            rd_tag_reg          <= rd_tag_wire;
            req_vld_reg         <= lsu_req_vld_reg;
            req_rd_wr_reg       <= lsu_req_wr_rd_reg;
            req_addr_reg        <= lsu_req_addr_reg;
            req_st_data_reg     <= lsu_req_data_reg;  
            req_rob_idx_reg     <= lsu_req_rob_idx_reg;
        end
    end

    always_ff @(posedge clk_i) begin : repair_state_machine
        if(rst_i) begin
            
            repair_state                <= IDLE;
            ctrl_repair_addr_reg        <= '0;
            ctrl_repair_data_reg        <= '0;
            ctrl_repair_rob_idx_reg     <= '0;
            ctrl_repair_is_store        <= '0;
            mem_resp_block_reg          <= '0;
        end else begin
            
            repair_state <= repair_state_next;
            
            // register request signals for MSHR
            if(repair_state == IDLE && mshr_repair_req) begin
                ctrl_repair_addr_reg        <= mshr_repair_addr;
                ctrl_repair_data_reg        <= mshr_repair_data;
                ctrl_repair_rob_idx_reg     <= mshr_repair_rob_idx;
                ctrl_repair_is_store        <= mshr_repair_is_store;
            end

            // register data sent from main memory
            if(repair_state == WAIT_MEM_RESP && mem_resp_vld_i) begin
                mem_resp_block_reg <= mem_resp_data_i;
            end
        end
    end

    always_comb begin : tag_compare_hit_check
        
        // check tag to determine if the access hit
        req_tag = req_addr_reg[31-:NUM_TAG_BITS];
        req_hit = req_vld_reg && rd_tag_reg.valid && (req_tag == rd_tag_reg.tag);
        
        // if access request missed, send to MSHR
        ld_alloc_mshr_en = req_vld_reg && !req_hit && !req_rd_wr_reg;
        st_alloc_mshr_en = req_vld_reg && !req_hit && req_rd_wr_reg;        
    end

    always_comb begin : next_repair_state
        repair_state_next = repair_state;
        case(repair_state)
            IDLE: begin
                if(mshr_repair_req) begin
                    repair_state_next = WAIT_MEM_RESP;
                end
            end

            WAIT_MEM_RESP: begin
                if(mem_resp_vld_i) begin
                    repair_state_next = REPAIR_WRITE;
                end
            end

            REPAIR_WRITE: begin
                repair_state_next = IDLE;
            end
        endcase
    end



    always_comb begin : main_memory_request
        // set defaults
        cmt_ld_vld_o        = '0;
        cmt_block_offset    = '0;
        cmt_ld_data_o       = '0;
        cmt_rob_idx_o       = '0;
        is_repair_dirty     = '0;

        // extract block offset from address
        repair_wr_addr = ctrl_repair_addr_reg;
        repair_wr_data.data = mem_resp_block_reg;

        if(ctrl_repair_complete) begin
            if(ctrl_repair_is_store) begin 
                // repair was store, update data to be written to the cache
                is_repair_dirty = 1'b1;
                repair_wr_data.data[(cmt_block_offset*32)+:32] = ctrl_repair_data_reg;
            end else begin
                // repair was load, send the data to the ROB to commit the load
                cmt_block_offset = ctrl_repair_addr_reg[BLOCK_OFFSET_BITS+1:2];
                cmt_ld_vld_o        = 1'b1;
                cmt_ld_data_o       = mem_resp_block_reg[(cmt_block_offset*32)+:32];  // extract the actual load data
                cmt_rob_idx_o       = ctrl_repair_rob_idx_reg;

            end
        end else begin
            cmt_block_offset    = req_addr_reg[BLOCK_OFFSET_BITS+1:2];
            cmt_ld_vld_o        = req_hit;
            cmt_ld_data_o       = rd_data_reg.data[(cmt_block_offset*32)+:32];
            cmt_rob_idx_o       = req_rob_idx_reg;
        end
    end


    always_comb begin   : write_update_multiplex
        // Write Requests
        store_wr_en = req_rd_wr_reg && req_hit;                     //  Enable store if operation was store and we hit 
        write_block_offset = req_addr_reg[BLOCK_OFFSET_BITS+1:2];   //  Extract block offset from request address reg
        write_block = rd_data_reg.data;                             //  Set Write Block to Block read
        write_block[(write_block_offset*32)+:32] = req_st_data_reg; //  Update block based on write data

        // Repair Requests
        is_repair = ctrl_repair_complete;
        is_repair_dirty = ctrl_repair_is_store;


        // Multiplex (Repair has priority over writes)
        wr_en           = is_repair ? 1'b1 : store_wr_en;               
        wr_data_wire    = is_repair ? repair_wr_data : write_block;
        wr_addr_wire    = is_repair ? repair_wr_addr : req_addr_reg; 
    end
endmodule
