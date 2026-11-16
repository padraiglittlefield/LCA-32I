// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_wakeup.h for the primary calling header

#include "Vtb_wakeup__pch.h"

void Vtb_wakeup___024unit___ctor_var_reset(Vtb_wakeup___024unit* vlSelf);

Vtb_wakeup___024unit::Vtb_wakeup___024unit() = default;
Vtb_wakeup___024unit::~Vtb_wakeup___024unit() = default;

void Vtb_wakeup___024unit::ctor(Vtb_wakeup__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_wakeup___024unit___ctor_var_reset(this);
}

void Vtb_wakeup___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_wakeup___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
