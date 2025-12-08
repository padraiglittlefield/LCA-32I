// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_scheduler.h for the primary calling header

#include "Vtb_scheduler__pch.h"
#include "Vtb_scheduler_execute_scheduler_if.h"

VL_ATTR_COLD void Vtb_scheduler_execute_scheduler_if___ctor_var_reset(Vtb_scheduler_execute_scheduler_if* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_scheduler_execute_scheduler_if___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__retire_rs_entry = VL_RAND_RESET_I(5);
    vlSelf->__PVT__retire_rs_valid = VL_RAND_RESET_I(1);
}
