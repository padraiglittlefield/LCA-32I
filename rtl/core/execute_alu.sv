module execute_alu
    import CORE_PKG::*;
(
    input  logic                            clk,
    input  logic                            rst,
    // Register Read
    input  logic                            rr_fire_valid_i,
    input  exec_packet_t                    rr_pkt_i,
    // Forwarding Unit
    output logic                            fwrd_valid_o,
    output logic [$clog2(NUM_PREGS)-1:0]    fwrd_dst_preg_o,
    output logic [31:0]                     fwrd_val_o,
    // Register File
    output logic                            rf_wr_en_o,
    output logic [$clog2(NUM_PREGS)-1:0]    rf_wr_preg_o,
    output logic [31:0]                     rf_wr_val_o,
    // Reorder Buffer
    output logic                            rob_valid_o,
    output logic [$clog2(ROB_ENTRIES)-1:0]  rob_idx_o,
    output logic [31:0]                     rob_val_o,
    output logic                            rob_br_mispred_o,
    output logic                            rob_exception_o
);

exec_packet_t exec_pkt;
logic [31:0] aluout;
logic aluout_valid;
logic br_cond;


// ==== ALU ==== //

alu alu (
    .alu_en(exec_pkt.alu_en),
    .opcode(exec_pkt.opcode),
    .src1_val(exec_pkt.src1_val),
    .src2_val(exec_pkt.src2_val),
    .imm_val(exec_pkt.imm_val),
    .pc(exec_pkt.pc),
    .aluout(aluout),
    .aluout_valid(aluout_valid),
    .br_cond(br_cond)
);

// ==== Register Read ==== //
always_comb begin 
    exec_pkt = rr_pkt_i; // collect instr packet from reg read pipeline register
end

// ==== Write Results to Register File ==== //

always_ff @(posedge clk) begin
    if(rst) begin
        rf_wr_preg_o <= '0;
        rf_wr_val_o <= '0;
        rf_wr_en_o <= '0;
    end else begin
        rf_wr_preg_o <= exec_pkt.dst_preg;
        rf_wr_val_o <= aluout;
        rf_wr_en_o <= aluout_valid;
    end
end

// ==== Update Reorder Buffer ==== //
always_ff @(posedge clk) begin
    if(rst) begin
        rob_br_mispred_o <= '0;
        rob_exception_o <= '0;
        rob_idx_o <= '0;
        rob_valid_o <= '0;
        rob_val_o <= '0;
    end else begin
        rob_br_mispred_o <= (br_cond ^ exec_pkt.br_taken); // only signal mispred when the pred doesn't match the actual
        rob_exception_o <= 1'b0;                            // not sure if there will be exceptions with alu
        rob_idx_o <= exec_pkt.rob_entry_idx;                // write to rob at the instr's saved index
        rob_valid_o <= aluout_valid;
        rob_val_o <= aluout;
    end
end

// ==== Forwarding Values ==== //
always_comb begin
    fwrd_dst_preg_o = exec_pkt.dst_preg;
    fwrd_val_o = aluout;
    fwrd_valid_o = aluout_valid;
end

/* Registered Forwarding
    - This would decrease the length of the critical path, but it would add a one-cycle bubble in between 
    dependent instructions. Dependencies wouldn't be cleared after select but in register read. 
    - These tradeoffs need to be considered for timing closure
*/
// always_ff @(posedge clk) begin
//     if(rst) begin
//         fwrd_dst_preg_o <= '0;
//         fwrd_val_o <= '0;
//         fwrd_valid_o <= '0;
//     end else begin
//         fwrd_dst_preg_o <= exec_pkt.dst_preg;
//         fwrd_val_o <= aluout;
//         fwrd_valid_o <= aluout_valid;
//     end
// end

/* Note: For FUs with different latencies, execute will need to be responsible for clearing dependencies in the wakeup dep. matrix,
    and a more advanced speculative wakeup and instruction replay.  
*/

endmodule
