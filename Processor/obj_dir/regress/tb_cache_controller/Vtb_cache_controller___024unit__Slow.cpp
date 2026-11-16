// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cache_controller.h for the primary calling header

#include "Vtb_cache_controller__pch.h"

void Vtb_cache_controller___024unit___ctor_var_reset(Vtb_cache_controller___024unit* vlSelf);

Vtb_cache_controller___024unit::Vtb_cache_controller___024unit() = default;
Vtb_cache_controller___024unit::~Vtb_cache_controller___024unit() = default;

void Vtb_cache_controller___024unit::ctor(Vtb_cache_controller__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_cache_controller___024unit___ctor_var_reset(this);
}

void Vtb_cache_controller___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_cache_controller___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
