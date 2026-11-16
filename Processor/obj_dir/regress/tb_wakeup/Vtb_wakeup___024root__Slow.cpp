// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_wakeup.h for the primary calling header

#include "Vtb_wakeup__pch.h"

void Vtb_wakeup___024root___ctor_var_reset(Vtb_wakeup___024root* vlSelf);

Vtb_wakeup___024root::Vtb_wakeup___024root(Vtb_wakeup__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_wakeup___024root___ctor_var_reset(this);
}

void Vtb_wakeup___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_wakeup___024root::~Vtb_wakeup___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
