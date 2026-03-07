import CORE_PKG::*

module FIFO #(
    parameter DEPTH = 128,
    parameter DATA_WIDITH = 8
    )(
    input logic clk,
    input logic rst,
    input logic w_en,
    input logic r_en,
    input logic [($clog2(DEPTH))-1:0]  data_in
    output logic  [($clog2(DEPTH))-1:0] data_out,
    output logic full,
    output logic empty
);


logic [$clog2(DEPTH):0] w_ptr, r_ptr;
logic [DATA_WIDITH-1:0] queue[0:(1 << $clog2(DEPTH))-1];  // do the fancy rounding to a power of 2 basically
logic empty_int; 
logic full_or_empty;

assign empty_int = (w_ptr[$clog2(DEPTH)] == r_ptr[$clog2(DEPTH)]);
assign full_or_empty  =(w_ptr[$clog2(DEPTH)-1:0] == r_ptr[$clog2(DEPTH)-1:0]);
assign full = full_or_empty & !empty_int;
assign empty = full_or_empty & empty_int;

// reset the free queue 
integer i;
always@(posedge clk) begin
  if(rst) begin
    w_ptr <= 8'd128; 
    for ( i = 0; i < 7'd64; i++) begin
        queue[i[6:0]] <= i[6:0]; 
    end
    for ( i = 64; i < 8'd128; i++) begin
        queue[i[6:0]] <= i[6:0]; 
    end
  end else if(w_en & !full) begin
        w_ptr   <= w_ptr + 1;
        queue[w_ptr[$clog2(DEPTH)-1:0]] <= data_in;
    end
end


always@(posedge clk) begin
    if(rst) begin
        r_ptr   <= 0;
    end else if(r_en & !empty) begin
        r_ptr   <= r_ptr + 1;
    end   
end 
assign data_out = queue[r_ptr[$clog2(DEPTH)-1:0]]; // assign the data_out to whatever the read pointer is pointing at
endmodule
