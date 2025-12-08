// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_scheduler.h for the primary calling header

#include "Vtb_scheduler__pch.h"
#include "Vtb_scheduler__Syms.h"
#include "Vtb_scheduler___024root.h"

void Vtb_scheduler___024root___ctor_var_reset(Vtb_scheduler___024root* vlSelf);

Vtb_scheduler___024root::Vtb_scheduler___024root(Vtb_scheduler__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_scheduler___024root___ctor_var_reset(this);
}

void Vtb_scheduler___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_scheduler___024root::~Vtb_scheduler___024root() {
}
