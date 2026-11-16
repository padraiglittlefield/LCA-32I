// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fwrd_unit.h for the primary calling header

#include "Vtb_fwrd_unit__pch.h"

void Vtb_fwrd_unit___024unit___ctor_var_reset(Vtb_fwrd_unit___024unit* vlSelf);

Vtb_fwrd_unit___024unit::Vtb_fwrd_unit___024unit() = default;
Vtb_fwrd_unit___024unit::~Vtb_fwrd_unit___024unit() = default;

void Vtb_fwrd_unit___024unit::ctor(Vtb_fwrd_unit__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_fwrd_unit___024unit___ctor_var_reset(this);
}

void Vtb_fwrd_unit___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_fwrd_unit___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
