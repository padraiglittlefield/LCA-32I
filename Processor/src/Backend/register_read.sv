`timescale 1ns/1ns


module register_read (
    input  logic                            clk,
    input  logic                            rst,
    // Scheduler
    input  logic                            sched_fire_valid_i,
    input  disp_packet_t                    sched_pkt_i,
    // Register File
    output logic [$clog2(NUM_PREGS)-1:0]    rf_src1_preg_o,
    output logic [$clog2(NUM_PREGS)-1:0]    rf_src2_preg_o,
    input  logic [31:0]                     rf_src1_val_i,
    input  logic [31:0]                     rf_src2_val_i,
    // Forwarding Unit
    output logic [$clog2(NUM_PREGS)-1:0]    fwrd_src1_preg_o,
    output logic [$clog2(NUM_PREGS)-1:0]    fwrd_src2_preg_o,
    input  logic                            fwrd_src1_hit_i,
    input  logic [31:0]                     fwrd_src1_val_i,
    input  logic                            fwrd_src2_hit_i,
    input  logic [31:0]                     fwrd_src2_val_i,
    // Execute
    output logic                            exec_fire_valid_o,
    output exec_packet_t                    exec_pkt_o
);

disp_packet_t sched_pkt;
exec_packet_t exec_pkt;
fwrd_mux src1_sel;
fwrd_mux src2_sel;
logic [31:0] src1_val;
logic [31:0] src2_val;

assign sched_pkt = sched_pkt_i;

always_comb begin : FwrdMuxSel
    src1_sel = REG_FILE;
    src2_sel = REG_FILE;

    if (fwrd_src1_hit_i) begin
        src1_sel = FORWARD;
    end

    if (fwrd_src2_hit_i) begin
        src2_sel = FORWARD;
    end 
end


always_comb begin : AssignSrcVals
    case(src1_sel)
        REG_FILE: exec_pkt.src1_val = rf_src1_val_i;
        FORWARD: exec_pkt.src1_val = fwrd_src1_val_i;
    endcase

    case(src2_sel)
        REG_FILE: exec_pkt.src2_val = rf_src2_val_i;
        FORWARD: exec_pkt.src2_val = fwrd_src2_val_i;
    endcase
end


always_comb begin : RegRead
    // assign read ports for register file
    rf_src1_preg_o = sched_pkt.src1_preg;
    rf_src2_preg_o = sched_pkt.src2_preg;

    // send src regs to forwarding unit
    fwrd_src1_preg_o = sched_pkt.src1_preg;
    fwrd_src2_preg_o = sched_pkt.src2_preg;
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
        exec_fire_valid_o <= 1'b0;
        exec_pkt_o <= '0;
    end else begin 
        exec_fire_valid_o <= sched_fire_valid_i;
        exec_pkt_o <= exec_pkt;
    end
end
endmodule
