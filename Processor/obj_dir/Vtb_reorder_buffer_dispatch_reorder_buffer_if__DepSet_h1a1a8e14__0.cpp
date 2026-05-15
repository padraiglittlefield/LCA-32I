// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_reorder_buffer.h for the primary calling header

#include "Vtb_reorder_buffer__pch.h"
#include "Vtb_reorder_buffer_dispatch_reorder_buffer_if.h"

std::string VL_TO_STRING(const Vtb_reorder_buffer_dispatch_reorder_buffer_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_reorder_buffer_dispatch_reorder_buffer_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
