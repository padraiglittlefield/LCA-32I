`timescale 1ns/1ns


module register_read (
    input clk,
    input rst,
    scheduler_reg_read_if.reg_read sched_if,
    reg_read_reg_file_if.reg_read reg_file_if,
    fwrd_reg_read_if.reg_read fwrd_if,
    reg_read_execute_if.reg_read exec_if
);

disp_packet_t sched_pkt;
exec_packet_t exec_pkt;
fwrd_mux src1_sel;
fwrd_mux src2_sel;
logic [31:0] src1_val;
logic [31:0] src2_val;

assign sched_pkt = sched_if.sched_pkt;

always_comb begin : FwrdMuxSel
    src1_sel = REG_FILE;
    src2_sel = REG_FILE;

    if (fwrd_if.src1_fwrd_hit) begin
        src1_sel = FORWARD;
    end

    if (fwrd_if.src2_fwrd_hit) begin
        src2_sel = FORWARD;
    end 
end


always_comb begin : AssignSrcVals
    case(src1_sel)
        REG_FILE: exec_pkt.src1_val = reg_file_if.src1_val;
        FORWARD: exec_pkt.src1_val = fwrd_if.src1_val;
    endcase

    case(src2_sel)
        REG_FILE: exec_pkt.src2_val = reg_file_if.src2_val;
        FORWARD: exec_pkt.src2_val = fwrd_if.src2_val;
    endcase
end


always_comb begin : RegRead
    // assign read ports for register file
    reg_file_if.src1_reg = sched_pkt.src1_preg;
    reg_file_if.src2_reg = sched_pkt.src2_preg;

    // send src regs to forwarding unit
    fwrd_if.src1_reg = sched_pkt.src1_preg;
    fwrd_if.src2_reg = sched_pkt.src2_preg;
end


// Pass Through Signals

always_comb begin
    exec_pkt.opcode = sched_pkt.opcode;
    exec_pkt.dst_areg = sched_pkt.dst_areg;
    exec_pkt.dst_preg = sched_pkt.dst_preg;
    exec_pkt.src1_preg = sched_pkt.src1_preg;
    exec_pkt.src2_preg = sched_pkt.src2_preg;
    exec_pkt.rob_entry_idx = sched_pkt.rob_entry_idx;
    exec_pkt.imm_val = sched_pkt.imm_val;
    exec_pkt.instr_valid = sched_pkt.instr_valid;
    exec_pkt.pc = sched_pkt.pc;
    exec_pkt.alu_en = sched_pkt.alu_en;
    exec_pkt.br_taken = sched_pkt.br_taken;
end

always@(posedge clk) begin
    if(rst) begin
        exec_if.fire_valid <= 1'b0;
        exec_if.exec_pkt <= '0;
    end else begin 
        exec_if.fire_valid <= sched_if.fire_valid;
        exec_if.exec_pkt <= exec_pkt;
    end
end
endmodule
