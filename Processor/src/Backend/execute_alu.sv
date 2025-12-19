module execute_alu(
    input clk,
    input rst,
    reg_read_execute_if.execute reg_read_if,
    execute_fwrd_if.execute fwrd_if,
    execute_phys_reg_file_if.execute reg_file_if,
    execute_scheduler_if.execute sched_if,
    execute_reorder_buffer_if.execute rob_if
);



exec_packet_t exec_pkt = reg_read_if.exec_pkt;
logic [31:0] aluout;
logic aluout_valid;
logic br_cond;


alu alu (
    .clk(clk),
    .rst(rst),
    .alu_en(exec_pkt.alu_en),
    .opcode(exec_pkt.opcode),
    .val1(exec_pkt.src1_val),
    .val2(exec_pkt.src2_val),
    .aluout(aluout),
    .aluout_valid(aluout_valid),
    .br_cond(br_cond)
);


endmodule