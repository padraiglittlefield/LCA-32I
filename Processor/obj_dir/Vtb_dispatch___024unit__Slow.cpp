// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dispatch.h for the primary calling header

#include "Vtb_dispatch__pch.h"
#include "Vtb_dispatch__Syms.h"
#include "Vtb_dispatch___024unit.h"

void Vtb_dispatch___024unit___ctor_var_reset(Vtb_dispatch___024unit* vlSelf);

Vtb_dispatch___024unit::Vtb_dispatch___024unit(Vtb_dispatch__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_dispatch___024unit___ctor_var_reset(this);
}

void Vtb_dispatch___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_dispatch___024unit::~Vtb_dispatch___024unit() {
}
