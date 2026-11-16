// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_execute_alu.h for the primary calling header

#include "Vtb_execute_alu__pch.h"

void Vtb_execute_alu___024root___ctor_var_reset(Vtb_execute_alu___024root* vlSelf);

Vtb_execute_alu___024root::Vtb_execute_alu___024root(Vtb_execute_alu__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_execute_alu___024root___ctor_var_reset(this);
}

void Vtb_execute_alu___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_execute_alu___024root::~Vtb_execute_alu___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
