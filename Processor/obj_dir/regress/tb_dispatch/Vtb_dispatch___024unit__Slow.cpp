// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dispatch.h for the primary calling header

#include "Vtb_dispatch__pch.h"

void Vtb_dispatch___024unit___ctor_var_reset(Vtb_dispatch___024unit* vlSelf);

Vtb_dispatch___024unit::Vtb_dispatch___024unit() = default;
Vtb_dispatch___024unit::~Vtb_dispatch___024unit() = default;

void Vtb_dispatch___024unit::ctor(Vtb_dispatch__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_dispatch___024unit___ctor_var_reset(this);
}

void Vtb_dispatch___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_dispatch___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
