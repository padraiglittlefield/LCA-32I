// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_execute_alu.h for the primary calling header

#ifndef VERILATED_VTB_EXECUTE_ALU___024UNIT_H_
#define VERILATED_VTB_EXECUTE_ALU___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_execute_alu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_execute_alu___024unit final {
  public:

    // DESIGN SPECIFIC STATE
    static VlAssocArray<IData/*31:0*/, std::string> __Venumtab_enum_name15;

    // INTERNAL VARIABLES
    Vtb_execute_alu__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_execute_alu___024unit();
    ~Vtb_execute_alu___024unit();
    void ctor(Vtb_execute_alu__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_execute_alu___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
