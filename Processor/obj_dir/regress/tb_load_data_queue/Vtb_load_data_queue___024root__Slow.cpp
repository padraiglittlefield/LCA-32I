// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_load_data_queue.h for the primary calling header

#include "Vtb_load_data_queue__pch.h"

void Vtb_load_data_queue___024root___ctor_var_reset(Vtb_load_data_queue___024root* vlSelf);

Vtb_load_data_queue___024root::Vtb_load_data_queue___024root(Vtb_load_data_queue__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_load_data_queue___024root___ctor_var_reset(this);
}

void Vtb_load_data_queue___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_load_data_queue___024root::~Vtb_load_data_queue___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
