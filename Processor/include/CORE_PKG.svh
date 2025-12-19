`timescale 1ns / 1ps

`ifndef CORE_PKG_SVH
`define CORE_PKG_SVH

package CORE_PKG;

parameter NUM_PREGS = 64;
parameter NUM_AREGS = 32;

parameter RS_ENTRIES = 4;
parameter NUM_FUS = 4;

typedef enum {
    ADD_I, 
    SUB_I,     
    AND_I,    
    OR_I,      
    XOR_I,    
    SLT_I,    
    SLTU_I,   
    SRA_I,    
    SRL_I,    
    SLL_I,    
    MUL_I,    
    ADDI_I,    
    ANDI_I,   
    ORI_I,    
    XORI_I,   
    SLTI_I,   
    SLTIU_I,  
    SRAI_I,   
    SRLI_I,   
    SLLI_I,   
    LUI_I,    
    AUIPC_I,  
    LW_I,     
    SW_I,     
    JAL_I,    
    JR_I,     
    JALR_I,   
    BEQ_I,    
    BNE_I,    
    BLT_I,    
    BGE_I,    
    BLTU_I,   
    BGEU_I,   
    CSRR_I,   
    CSRW_I,   
    CSR_I,    
    INVALID_I
} instr_opcode;

typedef struct packed {
    logic [$clog2(NUM_AREGS)-1:0] dst_areg;
    logic [$clog2(NUM_PREGS)-1:0] dst_preg;
    logic [$clog2(NUM_PREGS)-1:0] src1_preg;
    logic [$clog2(NUM_PREGS)-1:0] src2_preg;
    logic [31:0] imm_val;
    logic instr_valid;
    logic [31:0] pc;
} disp_packet_t;

typedef struct packed {
    logic [$clog2(NUM_AREGS)-1:0] dst_areg;
    logic [$clog2(NUM_PREGS)-1:0] dst_preg;
    logic [$clog2(NUM_PREGS)-1:0] src1_preg;
    logic [$clog2(NUM_PREGS)-1:0] src2_preg;
    logic [31:0] imm_val;
    logic instr_valid;
    logic [31:0] pc;
    logic [31:0] src1_val;
    logic [31:0] src2_val;
    logic alu_en;

} exec_packet_t;

typedef enum {
    REG_FILE,
    FORWARD
} fwrd_mux;


endpackage
`endif
