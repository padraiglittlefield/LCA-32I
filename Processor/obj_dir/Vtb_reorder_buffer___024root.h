// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_reorder_buffer.h for the primary calling header

#ifndef VERILATED_VTB_REORDER_BUFFER___024ROOT_H_
#define VERILATED_VTB_REORDER_BUFFER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_reorder_buffer_dispatch_reorder_buffer_if;
class Vtb_reorder_buffer_execute_reorder_buffer_if;
class Vtb_reorder_buffer_reorder_buffer_flush_unit_if;


class Vtb_reorder_buffer__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_reorder_buffer___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_reorder_buffer_dispatch_reorder_buffer_if* __PVT__tb_reorder_buffer__DOT__disp_if__BRA__1__KET__;
    Vtb_reorder_buffer_dispatch_reorder_buffer_if* __PVT__tb_reorder_buffer__DOT__disp_if__BRA__0__KET__;
    Vtb_reorder_buffer_execute_reorder_buffer_if* __PVT__tb_reorder_buffer__DOT__exec_if__BRA__2__KET__;
    Vtb_reorder_buffer_execute_reorder_buffer_if* __PVT__tb_reorder_buffer__DOT__exec_if__BRA__1__KET__;
    Vtb_reorder_buffer_execute_reorder_buffer_if* __PVT__tb_reorder_buffer__DOT__exec_if__BRA__0__KET__;
    Vtb_reorder_buffer_reorder_buffer_flush_unit_if* __PVT__tb_reorder_buffer__DOT__flush_if;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_reorder_buffer__DOT__clk;
    CData/*0:0*/ tb_reorder_buffer__DOT__rst;
    CData/*0:0*/ tb_reorder_buffer__DOT__dut__DOT__flush_en;
    CData/*4:0*/ tb_reorder_buffer__DOT__dut__DOT__head_ptr;
    CData/*4:0*/ tb_reorder_buffer__DOT__dut__DOT__tail_ptr;
    CData/*1:0*/ tb_reorder_buffer__DOT__dut__DOT__alloc_valid;
    CData/*1:0*/ tb_reorder_buffer__DOT__dut__DOT__alloc_full;
    CData/*1:0*/ tb_reorder_buffer__DOT__dut__DOT__alloc_enable;
    CData/*1:0*/ tb_reorder_buffer__DOT__dut__DOT__num_allocations;
    CData/*1:0*/ tb_reorder_buffer__DOT__dut__DOT__retire_valid;
    CData/*1:0*/ tb_reorder_buffer__DOT__dut__DOT__retire_ready;
    CData/*1:0*/ tb_reorder_buffer__DOT__dut__DOT__retire_enable;
    CData/*1:0*/ tb_reorder_buffer__DOT__dut__DOT__retire_flush;
    CData/*1:0*/ tb_reorder_buffer__DOT__dut__DOT__retire_exception;
    CData/*1:0*/ tb_reorder_buffer__DOT__dut__DOT__num_retirements;
    CData/*2:0*/ tb_reorder_buffer__DOT__dut__DOT__result_valid;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_reorder_buffer__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_reorder_buffer__DOT__cycle_count;
    IData/*31:0*/ tb_reorder_buffer__DOT__dut__DOT__restore_pc;
    IData/*31:0*/ tb_reorder_buffer__DOT__dut__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ tb_reorder_buffer__DOT__dut__DOT__unnamedblk4__DOT__i;
    IData/*31:0*/ tb_reorder_buffer__DOT__dut__DOT__unnamedblk5__DOT__i;
    IData/*31:0*/ tb_reorder_buffer__DOT__dut__DOT__unnamedblk6__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*39:0*/, 16> tb_reorder_buffer__DOT__dut__DOT__rob_entries;
    VlUnpacked<QData/*33:0*/, 16> tb_reorder_buffer__DOT__dut__DOT__rob_status;
    VlUnpacked<CData/*3:0*/, 2> tb_reorder_buffer__DOT__dut__DOT__alloc_idx;
    VlUnpacked<CData/*4:0*/, 2> tb_reorder_buffer__DOT__dut__DOT__alloc_ptr;
    VlUnpacked<QData/*39:0*/, 2> tb_reorder_buffer__DOT__dut__DOT__alloc_entry;
    VlUnpacked<CData/*3:0*/, 2> tb_reorder_buffer__DOT__dut__DOT__retire_idx;
    VlUnpacked<CData/*4:0*/, 2> tb_reorder_buffer__DOT__dut__DOT__retire_ptr;
    VlUnpacked<QData/*39:0*/, 2> tb_reorder_buffer__DOT__dut__DOT__retire_entry;
    VlUnpacked<QData/*33:0*/, 2> tb_reorder_buffer__DOT__dut__DOT__retire_status;
    VlUnpacked<CData/*3:0*/, 3> tb_reorder_buffer__DOT__dut__DOT__result_idx;
    VlUnpacked<IData/*31:0*/, 3> tb_reorder_buffer__DOT__dut__DOT__result_data;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd125d1a8__0;
    VlTriggerScheduler __VtrigSched_hd125d1d9__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_reorder_buffer__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_reorder_buffer___024root(Vtb_reorder_buffer__Syms* symsp, const char* v__name);
    ~Vtb_reorder_buffer___024root();
    VL_UNCOPYABLE(Vtb_reorder_buffer___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
