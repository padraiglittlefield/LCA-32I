// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_scheduler.h for the primary calling header

#include "Vtb_scheduler__pch.h"
#include "Vtb_scheduler_execute_scheduler_if.h"

std::string VL_TO_STRING(const Vtb_scheduler_execute_scheduler_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_scheduler_execute_scheduler_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
