// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations

#include "verilated_fst_c.h"


void Vtb_execute_alu___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"ADD", "SUB", "AND", "OR", "XOR", "SLT", 
                                "SLTU", "SRA", "SRL", 
                                "SLL", "MUL", "ADDI", 
                                "ANDI", "ORI", "XORI", 
                                "SLTI", "SLTIU", "SRAI", 
                                "SRLI", "SLLI", "LUI", 
                                "AUIPC", "LW", "SW", 
                                "JAL", "JR", "JALR", 
                                "BEQ", "BNE", "BLT", 
                                "BGE", "BLTU", "BGEU", 
                                "INVALID"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111", 
                                "10000", "10001", "10010", 
                                "10011", "10100", "10101", 
                                "10110", "10111", "11000", 
                                "11001", "11010", "11011", 
                                "11100", "11101", "11110", 
                                "11111", "100000", 
                                "100001"};
        tracep->declDTypeEnum(1, "CORE_PKG::instr_opcode", 34, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FU_ALU", "FU_AGU"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(2, "CORE_PKG::fu_type_e", 2, 2, __VenumItemNames, __VenumItemValues);
    }
}

void Vtb_execute_alu___024root__trace_decl_types(VerilatedFst* tracep) {
    Vtb_execute_alu___024root__traceDeclTypesSub0(tracep);
}
