// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_reorder_buffer.h for the primary calling header

#ifndef VERILATED_VTB_REORDER_BUFFER___024UNIT_H_
#define VERILATED_VTB_REORDER_BUFFER___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_reorder_buffer__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_reorder_buffer___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_reorder_buffer__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_reorder_buffer___024unit(Vtb_reorder_buffer__Syms* symsp, const char* v__name);
    ~Vtb_reorder_buffer___024unit();
    VL_UNCOPYABLE(Vtb_reorder_buffer___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
