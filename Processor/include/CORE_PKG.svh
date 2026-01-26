`timescale 1ns / 1ps

`ifndef CORE_PKG_SVH
`define CORE_PKG_SVH

package CORE_PKG;

parameter NUM_PREGS = 64;
parameter NUM_AREGS = 32;

parameter RS_ENTRIES = 4;
parameter NUM_FUS = 4;

parameter ROB_ENTRIES = 16;

parameter RETIRE_WIDTH = 2;
parameter FIRE_WIDTH = 2;

typedef enum {
    ADD, 
    SUB,     
    AND,    
    OR,      
    XOR,    
    SLT,    
    SLTU,   
    SRA,    
    SRL,    
    SLL,    
    MUL,    
    ADDI,    
    ANDI,   
    ORI,    
    XORI,   
    SLTI,   
    SLTIU,  
    SRAI,   
    SRLI,   
    SLLI,   
    LUI,    
    AUIPC,  
    LW,     
    SW,     
    JAL,    
    JR,     
    JALR,   
    BEQ,    
    BNE,    
    BLT,    
    BGE,    
    BLTU,   
    BGEU,   
    CSRR,   
    CSRW,   
    CSR,    
    INVALID
} instr_opcode;

typedef struct packed {
    instr_opcode opcode;
    logic [$clog2(NUM_AREGS)-1:0] dst_areg;
    logic [$clog2(NUM_PREGS)-1:0] dst_preg;
    logic [$clog2(NUM_PREGS)-1:0] src1_preg;
    logic [$clog2(NUM_PREGS)-1:0] src2_preg;
    logic [$clog2(ROB_ENTRIES)-1:0] rob_entry_idx;
    logic [31:0] imm_val;
    logic instr_valid;
    logic [31:0] pc;
    logic alu_en;
    logic br_taken;
} disp_packet_t;

typedef struct packed {
    instr_opcode opcode;
    logic [$clog2(NUM_AREGS)-1:0] dst_areg;
    logic [$clog2(NUM_PREGS)-1:0] dst_preg;
    logic [$clog2(NUM_PREGS)-1:0] src1_preg;
    logic [$clog2(NUM_PREGS)-1:0] src2_preg;
    logic [$clog2(ROB_ENTRIES)-1:0] rob_entry_idx;
    logic [31:0] imm_val;
    logic instr_valid;
    logic [31:0] pc;
    logic [31:0] src1_val;
    logic [31:0] src2_val;
    logic alu_en;
    logic br_taken;
} exec_packet_t;

typedef enum {
    REG_FILE,
    FORWARD
} fwrd_mux;

// structs and emnums (need to move to core_pkg)
typedef struct packed {
    logic [4:0] dest_reg;
    logic wb_en;
    logic [31:0] pc;
    logic mispred;
    logic exception;
} rob_entry_t;

typedef struct packed {
    logic valid;                
    logic ready;
    logic [31:0] result;
} rob_status_t;


// ======== Memory ======== //

parameter LDQ_ENTRIES = 16;
parameter SDQ_ENTRIES = 16;

typedef struct packed {
    logic valid;
    logic addr_valid;
    logic [31:0] addr;
    logic [$clog2(SDQ_ENTRIES):0] sdq_marker;
    logic issued;
    logic [$clog2(ROB_ENTRIES)-1:0] rob_entry_idx;

} ldq_entry_t;

typedef struct packed {
    logic valid;
    logic [31:0] store_data;
    logic addr_valid;
    logic [31:0] addr;
    logic committed;
    logic issued;
    logic [$clog2(ROB_ENTRIES)-1:0] rob_entry_idx;
} sdq_entry_t;

typedef struct packed {
    logic [CACHE_BLOCK_SIZE-1:0] data;
} cache_data_block;

typedef struct packed {
    logic [NUM_TAG_BITS-1:0] tag;
    logic valid;
    logic dirty;
} cache_metadata_block;

parameter CACHE_BLOCK_SIZE = 128;
parameter NUM_CACHE_ENTS = 64;
// |      Tag     | Index | Block Offset | Byte Offset |
// |      22      |   6   |     2        |      2      |
parameter NUM_IDX_BITS = $clog2(NUM_CACHE_ENTS);
parameter BLOCK_OFFSET_BITS = $clog2((CACHE_BLOCK_SIZE)/32);
parameter NUM_TAG_BITS = 32 - NUM_IDX_BITS - BLOCK_OFFSET_BITS - 2;

endpackage
`endif
