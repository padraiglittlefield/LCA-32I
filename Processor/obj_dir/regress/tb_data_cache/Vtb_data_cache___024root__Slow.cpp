// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_data_cache.h for the primary calling header

#include "Vtb_data_cache__pch.h"

void Vtb_data_cache___024root___ctor_var_reset(Vtb_data_cache___024root* vlSelf);

Vtb_data_cache___024root::Vtb_data_cache___024root(Vtb_data_cache__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_data_cache___024root___ctor_var_reset(this);
}

void Vtb_data_cache___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_data_cache___024root::~Vtb_data_cache___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
