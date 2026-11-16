// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_phys_reg_file.h for the primary calling header

#ifndef VERILATED_VTB_PHYS_REG_FILE___024UNIT_H_
#define VERILATED_VTB_PHYS_REG_FILE___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_phys_reg_file__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_phys_reg_file___024unit final {
  public:

    // INTERNAL VARIABLES
    Vtb_phys_reg_file__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_phys_reg_file___024unit();
    ~Vtb_phys_reg_file___024unit();
    void ctor(Vtb_phys_reg_file__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_phys_reg_file___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
