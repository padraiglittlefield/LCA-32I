// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_dispatch.h for the primary calling header

#ifndef VERILATED_VTB_DISPATCH_CORE_PKG_H_
#define VERILATED_VTB_DISPATCH_CORE_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_dispatch__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_dispatch_CORE_PKG final {
  public:

    // INTERNAL VARIABLES
    Vtb_dispatch__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr VlUnpacked<CData/*1:0*/, 4> FU_TYPE = {{
        0U, 0U, 0U, 1U
    }};

    // CONSTRUCTORS
    Vtb_dispatch_CORE_PKG();
    ~Vtb_dispatch_CORE_PKG();
    void ctor(Vtb_dispatch__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_dispatch_CORE_PKG);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
