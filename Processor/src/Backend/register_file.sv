`timescale 1ns/1ns

module register_file (
    input clk,
    input rst,
    input flush_en,
    reg_read_reg_file_if.phys_reg_file reg_read_if[NUM_FUS],
    execute_phys_reg_file_if.phys_reg_file exec_if[(NUM_FUS-1)],
    arch_reg_file_reorder_buffer_if.reg_file rob_if[RETIRE_WIDTH]
);

logic [31:0] registers [0:NUM_PREGS-1];

// ==== Reading From Register File ==== //
genvar i;
generate
    for(i = 0; i < NUM_FUS; i++) begin
        always_comb begin
            reg_read_if[i].src1_val = registers[reg_read_if[i].src1_reg];
            reg_read_if[i].src2_val = registers[reg_read_if[i].src2_reg];
        end
    end
endgenerate


// ==== Writing to Physical Register File ==== //
genvar j;
generate
    for(j = 0; j < (NUM_FUS-1); j++) begin 
        always_ff @(posedge clk) begin
            if(!rst && exec_if[j].ex_valid) begin
                registers[exec_if[j].ex_dst_reg] <= exec_if[j].ex_val;
            end
        end
    end
endgenerate


// ==== Writing to Architecture Register File ==== //
genvar k;
generate
    for(k = 0; k < RETIRE_WIDTH; k++) begin 
        always_ff @(posedge clk) begin
            if(!rst && rob_if[k].valid) begin
                registers[rob_if[k].dest_reg] <= rob_if[k].result;
            end
        end
    end
endgenerate

always_ff @(posedge clk) begin
    if(rst) begin
        for(int i = 0; i < NUM_PREGS; i++) begin
            registers[i] <= '0;
        end
    end
end
endmodule
