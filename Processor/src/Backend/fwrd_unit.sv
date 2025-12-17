`timescale 1ns/1ns


module fwrd_unit (
    fwrd_reg_read_if.fwrd_unit reg_read_if,
    execute_fwrd_if.fwrd_unit exec_if[NUM_FUS] 
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
            src1_hit[i] = exec_if[i].ex_valid & (reg_read_if.src1_reg == exec_if[i].dst_reg);
            src1_fwrd_val[i] = exec_if[i].ex_val;

            // search exec pipes for matches with src2
            src2_hit[i] = exec_if[i].ex_valid & (reg_read_if.src2_reg == exec_if[i].dst_reg);
            src2_fwrd_val[i] = exec_if[i].ex_val;
        end
    end
endgenerate

// Select forwarded value
always_comb begin
    reg_read_if.src1_fwrd_hit = |src1_hit;
    reg_read_if.src2_fwrd_hit = |src2_hit;
    reg_read_if.src1_val = '0;
    reg_read_if.src2_val = '0;

    for(int i = 0; i<NUM_FUS; i++) begin
        if(src1_hit[i]) begin
            reg_read_if.src1_val = src1_fwrd_val[i];
        end
        if(src2_hit[i]) begin
            reg_read_if.src2_val = src2_fwrd_val[i];
        end
    end
end

endmodule
