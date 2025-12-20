module execute_alu (
    input clk,
    input rst,
    reg_read_execute_if.execute reg_read_if,
    execute_fwrd_if.execute fwrd_if,
    execute_phys_reg_file_if.execute reg_file_if,
    execute_reorder_buffer_if.execute rob_if
    // execute_scheduler_if.execute sched_if,
);

exec_packet_t exec_pkt;
logic [31:0] aluout;
logic aluout_valid;
logic br_cond;


// ==== ALU ==== //

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

// ==== Register Read ==== //
always_comb begin 
    exec_pkt = reg_read_if.exec_pkt; // collect instr packet from reg read pipeline register
end

// ==== Write Results to Register File ==== //

always_ff @(posedge clk) begin
    if(rst) begin
        reg_file_if.ex_dst_reg <= '0;
        reg_file_if.ex_val <= '0;
        reg_file_if.ex_valid <= '0;
    end else begin
        reg_file_if.ex_dst_reg <= exec_pkt.dst_preg;
        reg_file_if.ex_val <= aluout;
        reg_file_if.ex_valid <= aluout_valid;
    end
end

// ==== Update Reorder Buffer ==== //
always_ff @(posedge clk) begin
    if(rst) begin
        rob_if.br_mispred <= '0;
        rob_if.exception <= '0;
        rob_if.rob_entry_idx <= '0;
        rob_if.ex_valid <= '0;
        rob_if.ex_val <= '0;
    end else begin
        rob_if.br_mispred <= (br_cond ^ exec_pkt.br_taken); // only signal mispred when the pred doesn't match the actual
        rob_if.exception <= 1'b0;                            // not sure if there will be exceptions with alu
        rob_if.rob_entry_idx <= exec_pkt.rob_entry_idx;       // write to rob at the instr's saved index
        rob_if.ex_valid <= aluout_valid;
        rob_if.ex_val <= aluout;
    end
end

// ==== Forwarding Values ==== //
always_comb begin
    fwrd_if.dst_reg = exec_pkt.dst_preg;
    fwrd_if.ex_val = aluout;
    fwrd_if.ex_valid = aluout_valid;
end

/* Registered Forwarding
    - This would decrease the length of the critical path, but it would add a one-cycle bubble in between 
    dependent instructions. Dependencies wouldn't be cleared after select but in register read. 
    - These tradeoffs need to be considered for timing closure
*/
// always_ff @(posedge clk) begin
//     if(rst) begin
//         fwrd_if.dst_reg <= '0;
//         fwrd_if.ex_val <= '0;
//         fwrd_if.ex_valid <= '0;
//     end else begin
//         fwrd_if.dst_reg <= exec_pkt.dst_preg;
//         fwrd_if.ex_val <= aluout;
//         fwrd_if.ex_valid <= aluout_valid;
//     end
// end

/* Note: For FUs with different latencies, execute will need to be responsible for clearing dependencies in the wakeup dep. matrix,
    and a more advanced speculative wakeup and instruction replay.  
*/

endmodule
