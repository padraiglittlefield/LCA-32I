// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_reorder_buffer.h for the primary calling header

#include "Vtb_reorder_buffer__pch.h"
#include "Vtb_reorder_buffer_dispatch_reorder_buffer_if.h"

VL_ATTR_COLD void Vtb_reorder_buffer_dispatch_reorder_buffer_if___ctor_var_reset(Vtb_reorder_buffer_dispatch_reorder_buffer_if* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_reorder_buffer_dispatch_reorder_buffer_if___ctor_var_reset\n"); );
    // Body
    vlSelf->fire_valid = VL_RAND_RESET_I(1);
    vlSelf->dest_reg = VL_RAND_RESET_I(5);
    vlSelf->wb_en = VL_RAND_RESET_I(1);
}
