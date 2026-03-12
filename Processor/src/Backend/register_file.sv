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
always_comb begin
    for (int i = 0; i < NUM_FUS; i++) begin
        // default to register file value
        reg_read_if[i].src1_val = registers[reg_read_if[i].src1_reg];
        reg_read_if[i].src2_val = registers[reg_read_if[i].src2_reg];

        // check all execute write ports for a match for forwarding opportunities
        for (int j = 0; j < NUM_FUS-1; j++) begin
            if (exec_if[j].ex_valid && exec_if[j].ex_dst_reg == reg_read_if[i].src1_reg) begin
                reg_read_if[i].src1_val = exec_if[j].ex_val;
            end
            if (exec_if[j].ex_valid && exec_if[j].ex_dst_reg == reg_read_if[i].src2_reg) begin
                reg_read_if[i].src2_val = exec_if[j].ex_val;
            end
        end
    end
end


// genvar j,k;
// always_ff @(posedge clk) begin
//     if (rst) begin
//         for (int i = 0; i < NUM_PREGS; i++)
//             registers[i] <= '0;
//     end else begin
//         for (int j = 0; j < NUM_FUS-1; j++)
//             if (exec_if[j].ex_valid)
//                 registers[exec_if[j].ex_dst_reg] <= exec_if[j].ex_val;
//         for (int k = 0; k < RETIRE_WIDTH; k++)
//             if (rob_if[k].valid)
//                 registers[rob_if[k].dest_reg] <= rob_if[k].result;
//     end
// end
// ==== Writing to Physical Register File ==== //
always_ff @(posedge clk) begin
    if (rst) begin
        for (int i = 0; i < NUM_PREGS; i++) begin
            registers[i] <= '0;
        end
    end else begin
        for (int j = 0; j < NUM_FUS-1; j++) begin
            if (exec_if[j].ex_valid) begin
                registers[exec_if[j].ex_dst_reg] <= exec_if[j].ex_val;
            end
        end 
        for (int k = 0; k < RETIRE_WIDTH; k++)
            if (rob_if[k].valid)
                registers[rob_if[k].dest_reg] <= rob_if[k].result;
    end
end


always_ff @(posedge clk) begin
    if(rst) begin
        for(int i = 0; i < NUM_PREGS; i++) begin
            registers[i] <= '0;
        end
    end
end
endmodule
