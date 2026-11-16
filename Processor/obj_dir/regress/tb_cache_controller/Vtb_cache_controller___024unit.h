// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cache_controller.h for the primary calling header

#ifndef VERILATED_VTB_CACHE_CONTROLLER___024UNIT_H_
#define VERILATED_VTB_CACHE_CONTROLLER___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_cache_controller__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cache_controller___024unit final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vtb_cache_controller__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_cache_controller___024unit();
    ~Vtb_cache_controller___024unit();
    void ctor(Vtb_cache_controller__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_cache_controller___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
