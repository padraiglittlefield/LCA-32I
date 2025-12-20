
module alu (
  input logic alu_en,
  input instr_opcode opcode,
  input [31:0] src1_val,
  input [31:0] src2_val,
  input [31:0] imm_val,
  input [31:0] pc,
  output [31:0] aluout,
  output aluout_valid,
  output br_cond
);
 
  // Compute branch condition based on opcode
  always_comb begin
    case (opcode)
      BEQ : br_cond = (src1_val == src2_val);
      BNE : br_cond = (src1_val != src2_val);
      BLT : br_cond = ($signed(src1_val) < $signed(src2_val));
      BGE : br_cond = ($signed(src1_val) >= $signed(src2_val));
      BLTU: br_cond = (src1_val < src2_val);
      BGEU: br_cond = (src1_val >= src2_val);
    default: br_cond = 1'b0;
    endcase
  end

  // Compute ALU operations
  always_comb begin
    if(alu_en) begin
      aluout_valid = 1'b1;

      case (opcode)
        ADD:   aluout = src1_val + src2_val; 
        SUB:   aluout = src1_val - src2_val; 
        AND:   aluout = src1_val & src2_val; 
        OR:    aluout = src1_val | src2_val; 
        XOR:   aluout = src1_val ^ src2_val; 
        SLT:   aluout = ($signed(src1_val) < $signed(src2_val)) ? 1 : 0; 
        SLTU:  aluout = (src1_val < src2_val) ? 1 : 0;
        SRA:   aluout = $signed(src1_val) >>> $signed(src2_val[4:0]); 
        SRL:   aluout = src1_val >> src2_val[4:0]; 
        SLL:   aluout = src1_val << src2_val[4:0]; 
        MUL:   aluout = $signed(src1_val) * $signed(src2_val);
        ADDI:  aluout = src1_val + imm_val; 
        ANDI:  aluout = src1_val & imm_val; 
        ORI:   aluout = src1_val | imm_val; 
        XORI:  aluout = src1_val ^ imm_val;
        SLTI:  aluout = ($signed(src1_val) < $signed(imm_val)) ? 1 : 0; 
        SLTIU: aluout = (src1_val < imm_val) ? 1 : 0;
        SRAI:  aluout = $signed(src1_val) >>> $signed(imm_val[4:0]); 
        SRLI:  aluout = src1_val >> imm_val[4:0];
        SLLI:  aluout = src1_val << imm_val[4:0];
        LUI:   aluout = imm_val; 
        AUIPC: aluout = pc + imm_val;
        BEQ : aluout = src1_val + $signed(src2_val);
        BNE : aluout = src1_val + $signed(src2_val);
        BLT : aluout = src1_val + $signed(src2_val);
        BGE : aluout = src1_val + $signed(src2_val);
        BLTU: aluout = src1_val + $signed(src2_val);
        BGEU: aluout = src1_val + $signed(src2_val);
      default: aluout  = 'x; 
      endcase
    end else begin
      aluout = 'x;
      aluout_valid = 1'b0;
    end
  end 


endmodule
