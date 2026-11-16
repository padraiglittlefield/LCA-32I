// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_register_read.h for the primary calling header

#ifndef VERILATED_VTB_REGISTER_READ___024UNIT_H_
#define VERILATED_VTB_REGISTER_READ___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_register_read__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_register_read___024unit final {
  public:

    // INTERNAL VARIABLES
    Vtb_register_read__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_register_read___024unit();
    ~Vtb_register_read___024unit();
    void ctor(Vtb_register_read__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_register_read___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
