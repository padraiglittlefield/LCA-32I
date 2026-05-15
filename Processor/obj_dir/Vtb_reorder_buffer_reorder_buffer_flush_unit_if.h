// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_reorder_buffer.h for the primary calling header

#ifndef VERILATED_VTB_REORDER_BUFFER_REORDER_BUFFER_FLUSH_UNIT_IF_H_
#define VERILATED_VTB_REORDER_BUFFER_REORDER_BUFFER_FLUSH_UNIT_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_reorder_buffer__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_reorder_buffer_reorder_buffer_flush_unit_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ flush_out;
    IData/*31:0*/ pc;

    // INTERNAL VARIABLES
    Vtb_reorder_buffer__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_reorder_buffer_reorder_buffer_flush_unit_if(Vtb_reorder_buffer__Syms* symsp, const char* v__name);
    ~Vtb_reorder_buffer_reorder_buffer_flush_unit_if();
    VL_UNCOPYABLE(Vtb_reorder_buffer_reorder_buffer_flush_unit_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtb_reorder_buffer_reorder_buffer_flush_unit_if* obj);

#endif  // guard
