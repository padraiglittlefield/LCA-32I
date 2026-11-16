// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_store_data_queue.h for the primary calling header

#ifndef VERILATED_VTB_STORE_DATA_QUEUE___024UNIT_H_
#define VERILATED_VTB_STORE_DATA_QUEUE___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_store_data_queue__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_store_data_queue___024unit final {
  public:

    // INTERNAL VARIABLES
    Vtb_store_data_queue__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_store_data_queue___024unit();
    ~Vtb_store_data_queue___024unit();
    void ctor(Vtb_store_data_queue__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_store_data_queue___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
