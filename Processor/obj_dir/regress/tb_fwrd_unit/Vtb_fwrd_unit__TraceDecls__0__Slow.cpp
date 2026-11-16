// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations

#include "verilated_fst_c.h"


void Vtb_fwrd_unit___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"FU_ALU", "FU_AGU"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(1, "CORE_PKG::fu_type_e", 2, 2, __VenumItemNames, __VenumItemValues);
    }
}

void Vtb_fwrd_unit___024root__trace_decl_types(VerilatedFst* tracep) {
    Vtb_fwrd_unit___024root__traceDeclTypesSub0(tracep);
}
