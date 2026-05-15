// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_reorder_buffer.h for the primary calling header

#include "Vtb_reorder_buffer__pch.h"
#include "Vtb_reorder_buffer__Syms.h"
#include "Vtb_reorder_buffer___024root.h"

void Vtb_reorder_buffer___024root___ctor_var_reset(Vtb_reorder_buffer___024root* vlSelf);

Vtb_reorder_buffer___024root::Vtb_reorder_buffer___024root(Vtb_reorder_buffer__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_reorder_buffer___024root___ctor_var_reset(this);
}

void Vtb_reorder_buffer___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_reorder_buffer___024root::~Vtb_reorder_buffer___024root() {
}
