// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_store_data_queue.h for the primary calling header

#include "Vtb_store_data_queue__pch.h"

void Vtb_store_data_queue___024unit___ctor_var_reset(Vtb_store_data_queue___024unit* vlSelf);

Vtb_store_data_queue___024unit::Vtb_store_data_queue___024unit() = default;
Vtb_store_data_queue___024unit::~Vtb_store_data_queue___024unit() = default;

void Vtb_store_data_queue___024unit::ctor(Vtb_store_data_queue__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_store_data_queue___024unit___ctor_var_reset(this);
}

void Vtb_store_data_queue___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_store_data_queue___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
