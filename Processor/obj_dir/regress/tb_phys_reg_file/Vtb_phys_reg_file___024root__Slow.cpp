// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_phys_reg_file.h for the primary calling header

#include "Vtb_phys_reg_file__pch.h"

void Vtb_phys_reg_file___024root___ctor_var_reset(Vtb_phys_reg_file___024root* vlSelf);

Vtb_phys_reg_file___024root::Vtb_phys_reg_file___024root(Vtb_phys_reg_file__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_phys_reg_file___024root___ctor_var_reset(this);
}

void Vtb_phys_reg_file___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_phys_reg_file___024root::~Vtb_phys_reg_file___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
