module store_data_queue #(
)(
    input   logic                               clk_i,
    input   logic                               rst_i,
    input   logic                               disp_vld_i,
    input   logic   [31:0]                      store_data,       // whether the instr is valid
    input   logic                               cmit_vld,       // valid commit from rob
    input   logic   [$clog2(SDQ_ENTRIES)-1:0]   cmit_idx,       // index of entry holding committed instruction
    input   logic                               exec_vld,
    input   logic   [$clog2(SDQ_ENTRIES)-1:0]   exec_sdq_idx,
    input   logic   [31:0]                      exec_addr,
    output  logic   [$clog2(SDQ_ENTRIES)-1:0]   sdq_alloc_idx,  // index of recently allocated instr (for use as sdq_marker)
    output  logic                               sdq_full,       // whether the sdq is full
    output  sdq_entry_t                         issue_entry, // output entry of issuing instruction
    output  logic                               issue_vld,        // valid issue
    input   logic                               ld_vld,
    input   logic   [31:0]                      ld_addr,
    input   logic   [$clog2(SDQ_ENTRIES)-1:0]   ld_sdq_marker,
    output  logic                               ld_hit,
    output  logic   [31:0]                      ld_data

);

localparam SDQ_DEPTH  = 1 << $clog2(SDQ_ENTRIES); // num entries rounded to the nearest base 2
localparam PTR_WIDTH = $clog2(SDQ_DEPTH) + 1;
localparam IDX_WIDTH = $clog2(SDQ_DEPTH);   

sdq_entry_t sdq [0:SDQ_DEPTH];
logic full;
logic [PTR_WIDTH-1:0] head_ptr;
logic [PTR_WIDTH-1:0] tail_ptr;

// TODO: How does flush interact with Memory System
always_ff @(posedge clk_i) begin
    if(rst_i) begin

        head_ptr <= '0;
        tail_ptr <= '0;

        for(int i = 0; i < SDQ_ENTRIES; i++) begin
            sdq[i] <= '0;
        end

    end else begin
        
        // allocate new entry upon dispatch
        if (disp_vld_i & ~full) begin
            sdq[tail_ptr].valid <= 1'b1;
            sdq[tail_ptr].store_data <= store_data;
            sdq[tail_ptr].addr_valid <= 1'b0;
            sdq[tail_ptr].addr <= '0;
            sdq[tail_ptr].committed <= 1'b0;
            sdq[tail_ptr].issued <= 1'b0;
            
            tail_ptr <= tail_ptr + 1; 
        end else begin
            tail_ptr <= tail_ptr;
        end
        // check if we can issue a committed store
        if(sdq[head_ptr].valid & sdq[head_ptr].addr_valid & sdq[head_ptr].committed) begin
            issue_entry <= sdq[head_ptr]; 
            issue_vld <= sdq[head_ptr].valid & sdq[head_ptr].addr_valid & sdq[head_ptr].committed;
            head_ptr <= head_ptr + 1;
        end else begin
            issue_entry <= '0;
            issue_vld <= '0;
            head_ptr <= head_ptr;
        end

        //
        if(cmit_vld) begin
            sdq[cmit_idx].committed <= 1'b1;
        end

        if(exec_vld) begin
            sdq[exec_sdq_idx].addr_valid <= 1'b1;
            sdq[exec_sdq_idx].addr <= exec_addr;
        end
    end
end

assign sdq_alloc_idx = tail_ptr[IDX_WIDTH-1:0];
assign full = (head_ptr[IDX_WIDTH] != tail_ptr[IDX_WIDTH]) && (head_ptr[IDX_WIDTH-1:0] == tail_ptr[IDX_WIDTH-1:0]);
assign sdq_full = full;


always_comb begin
    ld_hit = 1'b0;
    ld_data = '0;

    for(int i = 0; i < SDQ_ENTRIES; i++) begin
        if(ld_sdq_marker > i) begin
            if(sdq[i].addr_valid && ld_addr == sdq[i].addr) begin
                ld_hit = 1'b1;
                ld_data = sdq[i].store_data; 
            end
        end
    end
end

endmodule
