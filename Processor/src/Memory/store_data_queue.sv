module store_data_queue #(
)(
    input   logic                               clk_i,
    input   logic                               rst_i,
    input   logic                               flush_i,
    // Dispatch Signals (Entry Allocation)
    input   logic                               disp_vld_i,         // whether the instr is valid
    // Committing Store from ROB
    input   logic                               cmit_vld_i,         // valid commit from rob
    input   logic   [$clog2(SDQ_ENTRIES)-1:0]   cmit_idx_i,         // index of entry holding committed instruction
    // AGU from Execute
    input   logic                               exec_vld_i,         // valid address from execute
    input   logic   [31:0]                      exec_store_data_i,  // Store data of this instruction
    input   logic   [$clog2(SDQ_ENTRIES)-1:0]   exec_sdq_idx_i,     // sdq entry to write address to
    input   logic   [31:0]                      exec_addr_i,        // generated address
    input   logic   [$clog2(ROB_ENTRIES)-1:0]   exec_rob_idx_i,       // rob address for store instruction
    // SDQ Status
    output  logic   [$clog2(SDQ_ENTRIES)-1:0]   sdq_alloc_idx_o,    // index of recently allocated instr (for use as sdq_marker)
    output  logic                               sdq_full_o,         // whether the sdq is full
    // Issuing Store Instruction
    input   logic                               issue_en_i,
    input   logic                               issue_ack_i,
    output  sdq_entry_t                         issue_entry_o,      // output entry of issuing instruction
    output  logic                               issue_vld_o,        // valid issue

    // Load Hit Search
    input   logic                               ld_vld_i,           // Valid Load Instruction        
    input   logic   [31:0]                      ld_addr_i,          // Address of load
    input   logic   [$clog2(SDQ_ENTRIES)-1:0]   ld_sdq_marker_i,    // "SDQ Marker" of load
    output  logic                               ld_hit_o,           // Load Hit
    output  logic   [31:0]                      ld_data_o,          // Data from hit
    output  logic                               ld_ambig_stall_o,   // signals that there is an unresolved address in an older store and we need to stall  

    // input   logic                               clear_sdq_ent_vld_i,   // fuck why is this here??  
    // input   logic   [$clog2(SDQ_ENTRIES)-1:0]   clear_sdq_ent_idx_i

);

localparam SDQ_DEPTH = 1 << $clog2(SDQ_ENTRIES); // num entries rounded to the nearest base 2
localparam PTR_WIDTH = $clog2(SDQ_DEPTH) + 1;
localparam IDX_WIDTH = $clog2(SDQ_DEPTH);   

sdq_entry_t sdq [0:SDQ_DEPTH];
logic full;
logic [PTR_WIDTH-1:0] head_ptr;
logic [PTR_WIDTH-1:0] tail_ptr;


 // register storing the last committed instruction in the event of a flush and we need to remove uncommitted entries
logic [$clog2(SDQ_ENTRIES)-1:0] last_cmit_idx_reg;

// TODO: How does flush interact with Memory System
always_ff @(posedge clk_i) begin
    if(rst_i) begin

        head_ptr <= '0;
        tail_ptr <= '0;

        for(int i = 0; i < SDQ_ENTRIES; i++) begin
            sdq[i] <= '0;
        end

        last_cmit_idx_reg <= '0;

    end else if(flush_i) begin
        head_ptr <= head_ptr;
        tail_ptr <= {tail_ptr[PTR_WIDTH],last_cmit_idx_reg};

        for(int i = 0; i < SDQ_ENTRIES; i++) begin
            sdq[i].valid <= sdq[i].committed;
        end

    end else begin
        
        // allocate new entry upon dispatch
        if (disp_vld_i & ~full) begin
            sdq[tail_ptr].valid         <= 1'b1;
            sdq[tail_ptr].store_data    <= '0; // dont know the data yet as we haven't read the register file 
            sdq[tail_ptr].addr_valid    <= 1'b0;
            sdq[tail_ptr].addr          <= '0; // dont know the addr yet for the same reasons
            sdq[tail_ptr].committed     <= 1'b0;
            sdq[tail_ptr].issued        <= 1'b0;
            sdq[tail_ptr].rob_entry_idx <= '0;
            
            tail_ptr <= tail_ptr + 1; 
        end else begin
            tail_ptr <= tail_ptr;
        end

        // was our sdq issue acknowledged, if so move head pointer
        if (issue_ack_i) begin
            head_ptr <= head_ptr + 1;
        end

        //
        if(cmit_vld_i) begin
            sdq[cmit_idx_i].committed   <= 1'b1;
            last_cmit_idx_reg           <= cmit_idx_i; 
        end

        if(exec_vld_i) begin
            sdq[exec_sdq_idx_i].addr_valid      <= 1'b1;
            sdq[exec_sdq_idx_i].store_data      <= exec_store_data_i;
            sdq[exec_sdq_idx_i].addr            <= exec_addr_i;
            sdq[exec_sdq_idx_i].rob_entry_idx   <= exec_rob_idx_i;
        end 
    end
end

always_comb begin
    issue_vld_o   = issue_en_i & sdq[head_ptr].valid & sdq[head_ptr].addr_valid & sdq[head_ptr].committed;
    issue_entry_o = issue_vld_o ? sdq[head_ptr] : '0;
end

assign sdq_alloc_idx_o = tail_ptr[IDX_WIDTH-1:0];
assign full = (head_ptr[IDX_WIDTH] != tail_ptr[IDX_WIDTH]) && (head_ptr[IDX_WIDTH-1:0] == tail_ptr[IDX_WIDTH-1:0]);
assign sdq_full_o = full;

// ============= Load Forwarding ============= //


// check for memory disambiguity

logic prev_st_addr_unresolved;

assign ld_ambig_stall_o = prev_st_addr_unresolved;

always_comb begin
    prev_st_addr_unresolved = 1'b0;

    if (ld_vld_i) begin
        for (int i = 0; i < SDQ_ENTRIES; i++) begin
            if (ld_sdq_marker_i > i && sdq[i].valid && !sdq[i].addr_valid)
                prev_st_addr_unresolved = 1'b1;
        end
    end
end

// forward value from sdq
always_comb begin
    ld_hit_o = 1'b0;
    ld_data_o = '0;

    for(int i = 0; i < SDQ_ENTRIES; i++) begin
        if(ld_sdq_marker_i > i) begin
            if(sdq[i].addr_valid && ld_addr_i == sdq[i].addr) begin
                ld_hit_o = 1'b1;
                ld_data_o = sdq[i].store_data; 
            end
        end
    end
end

endmodule
