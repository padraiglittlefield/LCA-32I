// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_data_cache.h for the primary calling header

#include "Vtb_data_cache__pch.h"

void Vtb_data_cache___024unit___ctor_var_reset(Vtb_data_cache___024unit* vlSelf);

Vtb_data_cache___024unit::Vtb_data_cache___024unit() = default;
Vtb_data_cache___024unit::~Vtb_data_cache___024unit() = default;

void Vtb_data_cache___024unit::ctor(Vtb_data_cache__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_data_cache___024unit___ctor_var_reset(this);
}

void Vtb_data_cache___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_data_cache___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
