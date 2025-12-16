`timescale 1ns/1ns
module phys_reg_file (
    input clk,
    input rst,
    reg_read_phys_reg_file_if.phys_reg_file reg_read_if[NUM_FUS],
    execute_phys_reg_file_if.phys_reg_file exec_if[NUM_FUS]
);


logic [31:0] phys_reg_file [0:NUM_PREGS-1];


// ==== Reading From Register File ==== //
genvar i;
generate
    for(i = 0; i < NUM_FUS; i++) begin
        always_comb begin
            reg_read_if[i].src1_val = phys_reg_file[reg_read_if[i].src1_reg];
            reg_read_if[i].src2_val = phys_reg_file[reg_read_if[i].src2_reg];
        end
    end
endgenerate


// ==== Writing to Register File ==== //
genvar j;
generate
    for(j = 0; j < NUM_FUS; j++) begin : gen_reg_write
        always@(posedge clk) begin
            if(!rst && exec_if[j].ex_valid) begin
                phys_reg_file[exec_if[j].ex_dst_reg] <= exec_if[j].ex_val;
            end
        end
    end
endgenerate

always@(posedge clk) begin
    if(rst) begin
        for(int i = 0; i < NUM_PREGS; i++) begin
            phys_reg_file[i] <= '0;
        end
    end
end
endmodule
