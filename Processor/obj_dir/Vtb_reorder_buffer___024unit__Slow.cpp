// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_reorder_buffer.h for the primary calling header

#include "Vtb_reorder_buffer__pch.h"
#include "Vtb_reorder_buffer__Syms.h"
#include "Vtb_reorder_buffer___024unit.h"

void Vtb_reorder_buffer___024unit___ctor_var_reset(Vtb_reorder_buffer___024unit* vlSelf);

Vtb_reorder_buffer___024unit::Vtb_reorder_buffer___024unit(Vtb_reorder_buffer__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_reorder_buffer___024unit___ctor_var_reset(this);
}

void Vtb_reorder_buffer___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_reorder_buffer___024unit::~Vtb_reorder_buffer___024unit() {
}
