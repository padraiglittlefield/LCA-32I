// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_scheduler.h for the primary calling header

#include "Vtb_scheduler__pch.h"

void Vtb_scheduler___024unit___ctor_var_reset(Vtb_scheduler___024unit* vlSelf);

Vtb_scheduler___024unit::Vtb_scheduler___024unit() = default;
Vtb_scheduler___024unit::~Vtb_scheduler___024unit() = default;

void Vtb_scheduler___024unit::ctor(Vtb_scheduler__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_scheduler___024unit___ctor_var_reset(this);
}

void Vtb_scheduler___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_scheduler___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
