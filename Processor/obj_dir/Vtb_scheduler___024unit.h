// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_scheduler.h for the primary calling header

#ifndef VERILATED_VTB_SCHEDULER___024UNIT_H_
#define VERILATED_VTB_SCHEDULER___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_scheduler__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_scheduler___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_scheduler__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_scheduler___024unit(Vtb_scheduler__Syms* symsp, const char* v__name);
    ~Vtb_scheduler___024unit();
    VL_UNCOPYABLE(Vtb_scheduler___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
