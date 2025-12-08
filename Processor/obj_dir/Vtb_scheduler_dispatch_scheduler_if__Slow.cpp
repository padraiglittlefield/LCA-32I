// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_scheduler.h for the primary calling header

#include "Vtb_scheduler__pch.h"
#include "Vtb_scheduler__Syms.h"
#include "Vtb_scheduler_dispatch_scheduler_if.h"

void Vtb_scheduler_dispatch_scheduler_if___ctor_var_reset(Vtb_scheduler_dispatch_scheduler_if* vlSelf);

Vtb_scheduler_dispatch_scheduler_if::Vtb_scheduler_dispatch_scheduler_if(Vtb_scheduler__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_scheduler_dispatch_scheduler_if___ctor_var_reset(this);
}

void Vtb_scheduler_dispatch_scheduler_if::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_scheduler_dispatch_scheduler_if::~Vtb_scheduler_dispatch_scheduler_if() {
}
