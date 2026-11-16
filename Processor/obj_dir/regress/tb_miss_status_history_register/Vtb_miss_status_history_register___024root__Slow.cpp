// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_miss_status_history_register.h for the primary calling header

#include "Vtb_miss_status_history_register__pch.h"

void Vtb_miss_status_history_register___024root___ctor_var_reset(Vtb_miss_status_history_register___024root* vlSelf);

Vtb_miss_status_history_register___024root::Vtb_miss_status_history_register___024root(Vtb_miss_status_history_register__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_miss_status_history_register___024root___ctor_var_reset(this);
}

void Vtb_miss_status_history_register___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_miss_status_history_register___024root::~Vtb_miss_status_history_register___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
