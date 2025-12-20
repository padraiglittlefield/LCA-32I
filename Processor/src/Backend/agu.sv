module agu (
    input logic agu_en,
    input logic [31:0] val1,
    input logic [31:0] val2,
    output logic [31:0] addr_out,
    output logic addr_valid
);

always_comb begin
    if(agu_en) begin
        addr_valid = 1'b1;
        addr_out = val1 + val2; // can always implement custom adder
    end else begin
        addr_out = 'x;
        addr_valid = 1'b0;
    end
end
endmodule
