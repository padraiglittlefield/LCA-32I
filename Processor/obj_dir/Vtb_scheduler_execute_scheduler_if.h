// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_scheduler.h for the primary calling header

#ifndef VERILATED_VTB_SCHEDULER_EXECUTE_SCHEDULER_IF_H_
#define VERILATED_VTB_SCHEDULER_EXECUTE_SCHEDULER_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_scheduler__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_scheduler_execute_scheduler_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*4:0*/ __PVT__retire_rs_entry;
    CData/*0:0*/ __PVT__retire_rs_valid;

    // INTERNAL VARIABLES
    Vtb_scheduler__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_scheduler_execute_scheduler_if(Vtb_scheduler__Syms* symsp, const char* v__name);
    ~Vtb_scheduler_execute_scheduler_if();
    VL_UNCOPYABLE(Vtb_scheduler_execute_scheduler_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtb_scheduler_execute_scheduler_if* obj);

#endif  // guard
