module store_data_queue #(
)(
    input   logic                               clk_i,
    input   logic                               rst_i,
    input   logic                               flush_i,
    input   logic                               disp_vld_i,
    input   logic   [31:0]                      store_data_i,       // whether the instr is valid
    input   logic                               cmit_vld_i,       // valid commit from rob
    input   logic   [$clog2(SDQ_ENTRIES)-1:0]   cmit_idx_i,       // index of entry holding committed instruction
    input   logic                               exec_vld_i,
    input   logic   [$clog2(SDQ_ENTRIES)-1:0]   exec_sdq_idx_i,
    input   logic   [31:0]                      exec_addr_i,
    output  logic   [$clog2(SDQ_ENTRIES)-1:0]   sdq_alloc_idx_o,  // index of recently allocated instr (for use as sdq_marker)
    output  logic                               sdq_full_o,       // whether the sdq is full
    input   logic                               issue_en_i,
    output  sdq_entry_t                         issue_entry_o, // output entry of issuing instruction
    output  logic                               issue_vld_o,        // valid issue
    input   logic                               ld_vld_i,
    input   logic   [31:0]                      ld_addr_i,
    input   logic   [$clog2(SDQ_ENTRIES)-1:0]   ld_sdq_marker_i,
    output  logic                               ld_hit_o,
    output  logic   [31:0]                      ld_data_o

);

localparam SDQ_DEPTH  = 1 << $clog2(SDQ_ENTRIES); // num entries rounded to the nearest base 2
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
            sdq[tail_ptr].valid <= 1'b1;
            sdq[tail_ptr].store_data <= store_data_i;
            sdq[tail_ptr].addr_valid <= 1'b0;
            sdq[tail_ptr].addr <= '0;
            sdq[tail_ptr].committed <= 1'b0;
            sdq[tail_ptr].issued <= 1'b0;
            
            tail_ptr <= tail_ptr + 1; 
        end else begin
            tail_ptr <= tail_ptr;
        end
        // check if we can issue a committed store
        if(issue_en_i && (sdq[head_ptr].valid & sdq[head_ptr].addr_valid & sdq[head_ptr].committed)) begin
            issue_entry_o <= sdq[head_ptr]; 
            issue_vld_o <= sdq[head_ptr].valid & sdq[head_ptr].addr_valid & sdq[head_ptr].committed;
            head_ptr <= head_ptr + 1;
        end else begin
            issue_entry_o <= '0;
            issue_vld_o <= '0;
            head_ptr <= head_ptr;
        end

        //
        if(cmit_vld_i) begin
            sdq[cmit_idx_i].committed <= 1'b1;
            last_cmit_idx_reg <= cmit_idx_i; 
        end

        if(exec_vld_i) begin
            sdq[exec_sdq_idx_i].addr_valid <= 1'b1;
            sdq[exec_sdq_idx_i].addr <= exec_addr_i;
        end
    end
end

assign sdq_alloc_idx_o = tail_ptr[IDX_WIDTH-1:0];
assign full = (head_ptr[IDX_WIDTH] != tail_ptr[IDX_WIDTH]) && (head_ptr[IDX_WIDTH-1:0] == tail_ptr[IDX_WIDTH-1:0]);
assign sdq_full_o = full;


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
