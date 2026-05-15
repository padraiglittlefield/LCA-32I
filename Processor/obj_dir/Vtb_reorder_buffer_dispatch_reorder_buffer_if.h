// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_reorder_buffer.h for the primary calling header

#ifndef VERILATED_VTB_REORDER_BUFFER_DISPATCH_REORDER_BUFFER_IF_H_
#define VERILATED_VTB_REORDER_BUFFER_DISPATCH_REORDER_BUFFER_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_reorder_buffer__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_reorder_buffer_dispatch_reorder_buffer_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ fire_valid;
    CData/*4:0*/ dest_reg;
    CData/*0:0*/ wb_en;

    // INTERNAL VARIABLES
    Vtb_reorder_buffer__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_reorder_buffer_dispatch_reorder_buffer_if(Vtb_reorder_buffer__Syms* symsp, const char* v__name);
    ~Vtb_reorder_buffer_dispatch_reorder_buffer_if();
    VL_UNCOPYABLE(Vtb_reorder_buffer_dispatch_reorder_buffer_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtb_reorder_buffer_dispatch_reorder_buffer_if* obj);

#endif  // guard
