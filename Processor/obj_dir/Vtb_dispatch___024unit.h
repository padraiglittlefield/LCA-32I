// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_dispatch.h for the primary calling header

#ifndef VERILATED_VTB_DISPATCH___024UNIT_H_
#define VERILATED_VTB_DISPATCH___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_dispatch__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_dispatch___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_dispatch__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_dispatch___024unit(Vtb_dispatch__Syms* symsp, const char* v__name);
    ~Vtb_dispatch___024unit();
    VL_UNCOPYABLE(Vtb_dispatch___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
