
module alu (
  input logic alu_en,
  input instr_opcode opcode,
  input [31:0] val1,
  input [31:0] val2,
  output [31:0] aluout,
  output aluout_valid,
  output br_cond
);
 
  // Compute branch condition based on opcode
  always_comb begin
    case (opcode)
      BEQ_I : br_cond = (val1 == val2);
      BNE_I : br_cond = (val1 != val2);
      BLT_I : br_cond = ($signed(val1) < $signed(val2));
      BGE_I : br_cond = ($signed(val1) >= $signed(val2));
      BLTU_I: br_cond = (val1 < val2);
      BGEU_I: br_cond = (val1 >= val2);
    default: br_cond = 1'b0;
    endcase
  end

  // Compute ALU operations
  always_comb begin
    if(alu_en) begin
      aluout_valid = 1'b1;
      case (opcode)
        ADD_I:   aluout = val1 + val2; 
        SUB_I:   aluout = val1 - val2; 
        AND_I:   aluout = val1 & val2; 
        OR_I:    aluout = val1 | val2; 
        XOR_I:   aluout = val1 ^ val2; 
        SLT_I:   aluout = ($signed(val1) < $signed(val2)) ? 1 : 0; 
        SLTU_I:  aluout = (val1 < val2) ? 1 : 0;
        SRA_I:   aluout = $signed(val1) >>> $signed(val2[4:0]); 
        SRL_I:   aluout = val1 >> val2[4:0]; 
        SLL_I:   aluout = val1 << val2[4:0]; 
        MUL_I:   aluout = $signed(val1) * $signed(val2);
        ADDI_I:  aluout = val1 + sxt_imm_AGEX; 
        ANDI_I:  aluout = val1 & sxt_imm_AGEX; 
        ORI_I:   aluout = val1 | sxt_imm_AGEX; 
        XORI_I:  aluout = val1 ^ sxt_imm_AGEX;
        SLTI_I:  aluout = ($signed(val1) < $signed(sxt_imm_AGEX)) ? 1 : 0; 
        SLTIU_I: aluout = (val1 < sxt_imm_AGEX) ? 1 : 0;
        SRAI_I:  aluout = $signed(val1) >>> $signed(sxt_imm_AGEX[4:0]); 
        SRLI_I:  aluout = val1 >> sxt_imm_AGEX[4:0];
        SLLI_I:  aluout = val1 << sxt_imm_AGEX[4:0];
        LUI_I:   aluout = sxt_imm_AGEX; 
        AUIPC_I: aluout = PC_AGEX + sxt_imm_AGEX;
        BEQ_I : aluout = val1 + $signed(val2);
        BNE_I : aluout = val1 + $signed(val2);
        BLT_I : aluout = val1 + $signed(val2);
        BGE_I : aluout = val1 + $signed(val2);
        BLTU_I: aluout = val1 + $signed(val2);
        BGEU_I: aluout = val1 + $signed(val2);
      default: aluout  = 'x; 
      endcase
    end else begin
      aluout = 'x;
      aluout_valid = 1'b0;
    end
  end 


endmodule