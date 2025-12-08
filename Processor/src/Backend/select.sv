module select #()(
    input logic clk,
    input logic rst,
    
    // from wakeup
    input logic [RS_ENTRIES-1:0] reqs,                       // vector of requests from 
    output logic [$clog2(RS_ENTRIES)-1:0] grant,             // granted request from select
    output logic grant_valid                                //
);

rotating_priority_arbiter #(
    .NUM_REQUESTS(RS_ENTRIES)
) request_arbiter (
        .clk(clk),
        .rst(rst),
        .req(reqs),
        .gnt(grant),
        .gnt_valid(grant_valid)
);

endmodule
