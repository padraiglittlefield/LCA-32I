/*
    Rotation Prioirty Round Robin Arbiter Design
        - Implemented from https://www.siliconcrafters.com/post/round-robin-arbiter
        - Original Design Matt Weber, MWeber Consulting

    Configuration:
        4 Requests, Single Grant
    
    Notes:
        1. Per Matt Weber, this has the best balance between speed and area.
        2. Not sure how well it scales to multiple grants though

*/
module rotating_priority_arbiter #(
    parameter NUM_REQUESTS = 4
)(
    input logic     clk,
    input logic     rst,
    input logic     [(NUM_REQUESTS-1):0] req,
    output logic    [($clog2(NUM_REQUESTS)-1):0] gnt,
    output logic    gnt_valid
);


logic [(NUM_REQUESTS-1):0] mask;
logic [($clog2(NUM_REQUESTS)-1):0] curr_priority;

always_comb begin : MaskSelect
    mask = '1;
    mask = mask >> curr_priority;
end

logic [(NUM_REQUESTS-1):0] masked_req;
logic [(NUM_REQUESTS-1):0] curr_req;
logic flag;

always_comb begin
    flag = 1'b0;
    gnt = '0;
    gnt_valid = 1'b0;
    masked_req = req & mask;
    curr_req = masked_req == 0 ? req : masked_req;

    for(int i = NUM_REQUESTS-1; i >= 0; i--) begin
        if(curr_req[i] == 1'b1 & flag != 1'b1) begin
            flag = 1'b1;
            gnt = i;
            gnt_valid = 1'b1;
        end
    end 
end

always_ff @(posedge clk) begin
    if(rst) begin
        curr_priority <= '0;
    end else if(gnt_valid) begin
        curr_priority <= curr_priority + 1;
    end else begin
        curr_priority <= curr_priority;
    end
end

endmodule
