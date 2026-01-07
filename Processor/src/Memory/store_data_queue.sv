module store_data_queue #(
    parameter ALLOC_WIDTH = 2    
)(
    input logic     clk,
    input logic     rst,
    input logic     cmit_vld,       // valid commit from rob
    input logic     cmit_idx,       // index of entry holding committed instruction
    input logic     disp_vld,       // whether the instr is valid
    output logic [$clog2(SDQ_ENTRIES)-1:0] sdq_alloc_idx,  // index of recently allocated instr (for use as sdq_marker)
    output logic    sdq_full,       // whether the sdq is full
    output sdq_entry_t issue_entry, // output entry of issuing instruction
    output logic issue_valid        // valid issue
    //TODO: Associative lookup for issuing load

);

localparam SDQ_DEPTH  = 1 << $clog2(SDQ_ENTRIES); // num entries rounded to the nearest base 2
localparam PTR_WIDTH = $clog2(SDQ_DEPTH) + 1;
localparam IDX_WIDTH = $clog2(SDQ_DEPTH);   

sdq_entry_t sdq [0:SDQ_DEPTH];
logic [ALLOC_WIDTH-1:0] full;
assign sdq_full = |full;

logic [PTR_WIDTH-1:0] head_ptr;
logic [PTR_WIDTH-1:0] tail_ptr;

// TODO: How does flush interact with LDQ and SDQ
always_ff @(posedge clk) begin
    if(rst) begin

        head_ptr <= '0;
        tail_ptr <= '0;

        for(int i = 0; i < SDQ_ENTRIES) begin
            sdq[i] <= '0;
        end

    end else begin
        
        // allocate new entry upon dispatch
        if (disp_vld) begin
            sdq[tail_ptr].valid <= 1'b1;
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
            issue_valid <= sdq[head_ptr].valid & sdq[head_ptr].addr_valid & sdq[head_ptr].committed;
            head_ptr <= head_ptr + 1;
        end else begin
            issue_valid = '0;
            head_ptr <= head_ptr;
        end
    end
end

assign issue_entry = sdq[head_ptr]; 

endmodule
