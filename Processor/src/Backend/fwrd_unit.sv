`timescale 1ns/1ns


module fwrd_unit (
    // Register Read
    input  logic [$clog2(NUM_PREGS)-1:0]    src1_preg_i,
    input  logic [$clog2(NUM_PREGS)-1:0]    src2_preg_i,
    output logic                            src1_hit_o,
    output logic [31:0]                     src1_val_o,
    output logic                            src2_hit_o,
    output logic [31:0]                     src2_val_o,
    // Execute
    input  logic                            ex_valid_i      [NUM_FUS],
    input  logic [$clog2(NUM_PREGS)-1:0]    ex_dst_preg_i   [NUM_FUS],
    input  logic [31:0]                     ex_val_i        [NUM_FUS]
);


logic [NUM_FUS-1:0] src1_hit;
logic [31:0] src1_fwrd_val [NUM_FUS];
logic [NUM_FUS-1:0] src2_hit;
logic [31:0] src2_fwrd_val [NUM_FUS];

// Search execute pipes for matching destination and source registers
genvar i;
generate
    for(i=0; i<NUM_FUS; i++) begin
        always_comb begin

            // search exec pipes for matches with src1
            src1_hit[i] = ex_valid_i[i] & (src1_preg_i == ex_dst_preg_i[i]);
            src1_fwrd_val[i] = ex_val_i[i];

            // search exec pipes for matches with src2
            src2_hit[i] = ex_valid_i[i] & (src2_preg_i == ex_dst_preg_i[i]);
            src2_fwrd_val[i] = ex_val_i[i];
        end
    end
endgenerate

// Select forwarded value
always_comb begin
    src1_hit_o = |src1_hit;
    src2_hit_o = |src2_hit;
    src1_val_o = '0;
    src2_val_o = '0;

    for(int i = 0; i<NUM_FUS; i++) begin
        if(src1_hit[i]) begin
            src1_val_o = src1_fwrd_val[i];
        end
        if(src2_hit[i]) begin
            src2_val_o = src2_fwrd_val[i];
        end
    end
end

endmodule
