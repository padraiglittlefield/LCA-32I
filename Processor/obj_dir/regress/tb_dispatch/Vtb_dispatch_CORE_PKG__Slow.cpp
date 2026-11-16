// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dispatch.h for the primary calling header

#include "Vtb_dispatch__pch.h"

// Parameter definitions for Vtb_dispatch_CORE_PKG
constexpr VlUnpacked<CData/*1:0*/, 4> Vtb_dispatch_CORE_PKG::FU_TYPE;


void Vtb_dispatch_CORE_PKG___ctor_var_reset(Vtb_dispatch_CORE_PKG* vlSelf);

Vtb_dispatch_CORE_PKG::Vtb_dispatch_CORE_PKG() = default;
Vtb_dispatch_CORE_PKG::~Vtb_dispatch_CORE_PKG() = default;

void Vtb_dispatch_CORE_PKG::ctor(Vtb_dispatch__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_dispatch_CORE_PKG___ctor_var_reset(this);
}

void Vtb_dispatch_CORE_PKG::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_dispatch_CORE_PKG::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
