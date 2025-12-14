`timescale 1ns / 1ps

`ifndef CORE_PKG_SVH
`define CORE_PKG_SVH

package CORE_PKG;

parameter NUM_PREGS = 64;
parameter NUM_AREGS = 32;

parameter RS_ENTRIES = 4;
parameter NUM_FUS = 4;

typedef struct packed {
    logic [$clog2(NUM_PREGS)-1:0] dst_preg;
    logic [$clog2(NUM_PREGS)-1:0] src1_preg;
    logic [$clog2(NUM_PREGS)-1:0] src2_preg;
    logic [31:0] imm_val;
    logic instr_valid;
    logic [31:0] pc;
} disp_packet_t;

endpackage
`endif
