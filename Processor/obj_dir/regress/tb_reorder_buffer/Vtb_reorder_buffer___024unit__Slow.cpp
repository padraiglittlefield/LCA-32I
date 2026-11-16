// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_reorder_buffer.h for the primary calling header

#include "Vtb_reorder_buffer__pch.h"

void Vtb_reorder_buffer___024unit___ctor_var_reset(Vtb_reorder_buffer___024unit* vlSelf);

Vtb_reorder_buffer___024unit::Vtb_reorder_buffer___024unit() = default;
Vtb_reorder_buffer___024unit::~Vtb_reorder_buffer___024unit() = default;

void Vtb_reorder_buffer___024unit::ctor(Vtb_reorder_buffer__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_reorder_buffer___024unit___ctor_var_reset(this);
}

void Vtb_reorder_buffer___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_reorder_buffer___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
