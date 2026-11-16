// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_phys_reg_file.h for the primary calling header

#include "Vtb_phys_reg_file__pch.h"

void Vtb_phys_reg_file___024unit___ctor_var_reset(Vtb_phys_reg_file___024unit* vlSelf);

Vtb_phys_reg_file___024unit::Vtb_phys_reg_file___024unit() = default;
Vtb_phys_reg_file___024unit::~Vtb_phys_reg_file___024unit() = default;

void Vtb_phys_reg_file___024unit::ctor(Vtb_phys_reg_file__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_phys_reg_file___024unit___ctor_var_reset(this);
}

void Vtb_phys_reg_file___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_phys_reg_file___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
