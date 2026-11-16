// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_execute_alu.h for the primary calling header

#include "Vtb_execute_alu__pch.h"
VlAssocArray<IData/*31:0*/, std::string> Vtb_execute_alu___024unit::__Venumtab_enum_name15;

void Vtb_execute_alu___024unit___ctor_var_reset(Vtb_execute_alu___024unit* vlSelf);

Vtb_execute_alu___024unit::Vtb_execute_alu___024unit() = default;
Vtb_execute_alu___024unit::~Vtb_execute_alu___024unit() = default;

void Vtb_execute_alu___024unit::ctor(Vtb_execute_alu__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_execute_alu___024unit___ctor_var_reset(this);
}

void Vtb_execute_alu___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_execute_alu___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
