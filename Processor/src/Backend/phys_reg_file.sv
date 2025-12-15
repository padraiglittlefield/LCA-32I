`timescale 1ns/1ns

import CORE_PKG::*;

module phys_reg_file (
    input clk,
    input rst,
    reg_read_phys_reg_file_if.phys_reg_file reg_read_if[NUM_FUS],
    execute_phys_reg_file_if.phys_reg_file execute_if[NUM_FUS]
);


logic [31:0] phys_reg_file [0:NUM_PREGS-1];

// Writing to Register File from Execute
always@(posedge clk) begin : PhysRegWrite
    if(rst) begin
        for(int i = 0 ; i < NUM_PREGS; i++) begin
            phys_reg_file[i] = '0;
        end
    end else begin
        for(int i = 0; i < NUM_FUS; i++) begin
            if(ex_pipes[i].ex_valid) begin
                phys_reg_file[execute_if[i].ex_dst_reg] <= ex_val; 
            end
        end
    end
end

always_comb begin :PhysRegRead
    for(int i = 0; i < NUM_FUS; i++) begin
        reg_reg_if[i].src1_val = phys_reg_file[reg_reg_if[i].src1_reg];
        reg_reg_if[i].src2_val = phys_reg_file[reg_reg_if[i].src2_reg];
    end
end

endmodule