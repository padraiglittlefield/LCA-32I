/*  Cache Controller! 

* L1 Data Cache plus MSHR
* 
*/

module cache_controller (
    input   logic                               clk_i,
    input   logic                               rst_i,
    input   logic                               flush_i,

    input   logic                               lsu_req_vld_i,
    input   logic                               lsu_req_wr_rd_i,
    input   logic   [31:0]                      lsu_req_addr_i,
    input   logic   [31:0]                      lsu_req_data_i,
    input   logic   [$clog2(ROB_ENTRIES)-1:0]   lsu_req_rob_idx_i,

    output  logic                               mem_req_vld_o,      // Request data from main memory for repair
    output  logic                               mem_req_addr_o,     // Address of repair request
    input   logic                               mem_resp_vld_i,     // Memory response valid?
    input   logic   [CACHE_BLOCK_SIZE-1:0]      mem_resp_data_i,    // Repair block of data 
    
    output  logic   [CACHE_BLOCK_SIZE-1:0]      mem_wb_data_o,      // Writeback evicted block to main memory
    output  logic                               mem_wb_vld_o,

    output  logic                               cmt_ld_vld_o,      // Send data to the ROB to Finish Instruction
    output  logic   [31:0]                      cmt_ld_data_o,           
    output  logic   [$clog2(ROB_ENTRIES)-1:0]   cmt_rob_idx_o

);  


    cache_data_block rd_data_wire;
    cache_metadata_block rd_tag_wire;

    data_cache u_data_cache (
        .clk_i(clk_i),
        .rst_i(rst_i),
        .wr_en(),
        .is_repair_i(),
        .is_repair_dirty_i(),
        .wr_addr_i(),
        .wr_data_i(),
        .rd_en(lsu_req_vld_i),
        .rd_addr_i(lsu_req_addr_i),
        .rd_data_o(rd_data_wire),
        .rd_tag_o(rd_tag_wire),
        .wb_evicted_en(mem_wb_vld_o),
        .wb_evicted_block(mem_wb_data_o)     
    );


    // Data Cache Pipeline Registers
    cache_data_block rd_data_reg;
    cache_metadata_block rd_tag_reg;

    logic req_vld_reg;
    logic req_rd_wr_reg;
    logic [31:0] req_addr_reg;
    logic [31:0] req_st_data_reg; 
    logic [$clog2(ROB_ENTRIES)-1:0] req_rob_idx_reg;   

    always_ff @(posedge clk) begin : dcache_pipeline_registers
        if(rst_i) begin
            rd_data_reg         <= '0;
            rd_tag_reg          <= '0;
            req_vld_reg         <= '0;
            req_rd_wr_reg       <= '0;
            req_addr_reg        <= '0;
            req_st_data_reg     <= '0;   
            req_rob_idx_reg     <= '0; 
        end else begin
            rd_data_reg         <= rd_data_wire;
            rd_tag_reg          <= rd_tag_wire;
            req_vld_reg         <= lsu_req_vld_i;
            req_rd_wr_reg       <= lsu_req_wr_rd_i;
            req_addr_reg        <= lsu_req_addr_i;
            req_st_data_reg     <= lsu_req_data_i;  
            req_rob_idx_reg     <= lsu_req_rob_idx_i;
        end
    end


    // Tag Compare
    logic [NUM_TAG_BITS-1:0] req_tag;
    logic req_hit;
    logic cache_wr_en;
    cache_data_block write_block;
    logic [31:0] write_addr;
    logic ld_alloc_mshr_en;
    logic st_alloc_mshr_en;

    always_comb begin
        
        // check tag to determine if the access hit
        req_tag = lsu_req_addr_i[31-:NUM_TAG_BITS];
        req_hit = req_vld_reg && rd_tag_reg.valid && (req_tag == rd_tag_reg.tag);
        
        // if missed, send to MSHR
        ld_alloc_mshr_en = req_vld_reg && !req_hit && !lsu_req_wr_rd_i;
        st_alloc_mshr_en = req_vld_reg && !req_hit && lsu_req_wr_rd_i;

        // update for write
        cache_wr_en = lsu_req_wr_rd_i && req_hit;
        write_block = rd_data_reg.data;
    end

    // TODO: should speculative loads affect the cache? should we not issue any repairs until we know its not speculative
    miss_status_history_register mshr (
        .clk_i(clk_i),
        .rst_i(rst_i),
        .flush_i(flush_i),
        .ld_alloc_en_i(ld_alloc_mshr_en),
        .ld_alloc_addr_i(lsu_req_addr_i),
        .ld_alloc_rob_idx_i(lsu_req_rob_idx_i),
        .st_alloc_en_i(st_alloc_mshr_en),
        .st_alloc_addr_i(lsu_req_addr_i),
        .st_alloc_data_i(lsu_req_data_i),
        .st_alloc_rob_idx_i(lsu_req_rob_idx_i),
        .ld_full_o(),
        .st_full_o(),
        .repair_complete_i(),    
        .repair_ack_i(),
        .repair_req_o(),
        .repair_req_addr_o(),
        .repair_req_data_o(),
        .repair_req_rob_idx_o(),
        .repair_is_store_o()
    );

endmodule
