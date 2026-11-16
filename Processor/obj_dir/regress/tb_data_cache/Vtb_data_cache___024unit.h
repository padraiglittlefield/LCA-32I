// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_data_cache.h for the primary calling header

#ifndef VERILATED_VTB_DATA_CACHE___024UNIT_H_
#define VERILATED_VTB_DATA_CACHE___024UNIT_H_  // guard

#include "verilated.h"


class Vtb_data_cache__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_data_cache___024unit final {
  public:

    // INTERNAL VARIABLES
    Vtb_data_cache__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_data_cache___024unit();
    ~Vtb_data_cache___024unit();
    void ctor(Vtb_data_cache__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_data_cache___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
