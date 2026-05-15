// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dispatch.h for the primary calling header

#include "Vtb_dispatch__pch.h"
#include "Vtb_dispatch__Syms.h"
#include "Vtb_dispatch___024root.h"

void Vtb_dispatch___024root___ctor_var_reset(Vtb_dispatch___024root* vlSelf);

Vtb_dispatch___024root::Vtb_dispatch___024root(Vtb_dispatch__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_dispatch___024root___ctor_var_reset(this);
}

void Vtb_dispatch___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_dispatch___024root::~Vtb_dispatch___024root() {
}
