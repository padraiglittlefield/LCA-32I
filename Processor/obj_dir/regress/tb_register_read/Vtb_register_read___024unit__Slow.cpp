// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_register_read.h for the primary calling header

#include "Vtb_register_read__pch.h"

void Vtb_register_read___024unit___ctor_var_reset(Vtb_register_read___024unit* vlSelf);

Vtb_register_read___024unit::Vtb_register_read___024unit() = default;
Vtb_register_read___024unit::~Vtb_register_read___024unit() = default;

void Vtb_register_read___024unit::ctor(Vtb_register_read__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_register_read___024unit___ctor_var_reset(this);
}

void Vtb_register_read___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_register_read___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
