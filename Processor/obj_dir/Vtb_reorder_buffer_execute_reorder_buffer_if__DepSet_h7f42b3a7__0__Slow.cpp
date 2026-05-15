// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_reorder_buffer.h for the primary calling header

#include "Vtb_reorder_buffer__pch.h"
#include "Vtb_reorder_buffer_execute_reorder_buffer_if.h"

VL_ATTR_COLD void Vtb_reorder_buffer_execute_reorder_buffer_if___ctor_var_reset(Vtb_reorder_buffer_execute_reorder_buffer_if* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_reorder_buffer_execute_reorder_buffer_if___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__br_mispred = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exception = VL_RAND_RESET_I(1);
    vlSelf->rob_entry_idx = VL_RAND_RESET_I(4);
    vlSelf->ex_valid = VL_RAND_RESET_I(1);
    vlSelf->ex_val = VL_RAND_RESET_I(32);
}
