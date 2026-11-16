// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_reorder_buffer.h for the primary calling header

#ifndef VERILATED_VTB_REORDER_BUFFER___024ROOT_H_
#define VERILATED_VTB_REORDER_BUFFER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_reorder_buffer__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_reorder_buffer___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_reorder_buffer__DOT__clk;
        CData/*0:0*/ tb_reorder_buffer__DOT__rst;
        CData/*0:0*/ tb_reorder_buffer__DOT__flush;
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
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_reorder_buffer__DOT__clk__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        IData/*31:0*/ tb_reorder_buffer__DOT__cycle_count;
        IData/*31:0*/ tb_reorder_buffer__DOT__flush_pc;
        IData/*31:0*/ tb_reorder_buffer__DOT__dut__DOT__restore_pc;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        VlUnpacked<CData/*0:0*/, 2> tb_reorder_buffer__DOT__disp_fire_valid;
        VlUnpacked<CData/*4:0*/, 2> tb_reorder_buffer__DOT__disp_dst_areg;
        VlUnpacked<CData/*0:0*/, 2> tb_reorder_buffer__DOT__disp_wb_en;
        VlUnpacked<CData/*3:0*/, 2> tb_reorder_buffer__DOT__disp_rob_idx;
        VlUnpacked<CData/*0:0*/, 2> tb_reorder_buffer__DOT__disp_rob_full;
        VlUnpacked<CData/*0:0*/, 3> tb_reorder_buffer__DOT__ex_valid;
        VlUnpacked<CData/*3:0*/, 3> tb_reorder_buffer__DOT__ex_rob_idx;
        VlUnpacked<IData/*31:0*/, 3> tb_reorder_buffer__DOT__ex_val;
        VlUnpacked<CData/*0:0*/, 3> tb_reorder_buffer__DOT__ex_br_mispred;
        VlUnpacked<CData/*0:0*/, 3> tb_reorder_buffer__DOT__ex_exception;
        VlUnpacked<CData/*0:0*/, 2> tb_reorder_buffer__DOT__ret_wr_en;
        VlUnpacked<CData/*4:0*/, 2> tb_reorder_buffer__DOT__ret_wr_areg;
        VlUnpacked<IData/*31:0*/, 2> tb_reorder_buffer__DOT__ret_wr_val;
        VlUnpacked<CData/*0:0*/, 2> tb_reorder_buffer__DOT__dut__DOT__disp_fire_valid_i;
        VlUnpacked<CData/*4:0*/, 2> tb_reorder_buffer__DOT__dut__DOT__disp_dst_areg_i;
        VlUnpacked<CData/*0:0*/, 2> tb_reorder_buffer__DOT__dut__DOT__disp_wb_en_i;
        VlUnpacked<CData/*3:0*/, 2> tb_reorder_buffer__DOT__dut__DOT__disp_rob_idx_o;
        VlUnpacked<CData/*0:0*/, 2> tb_reorder_buffer__DOT__dut__DOT__disp_rob_full_o;
        VlUnpacked<CData/*0:0*/, 3> tb_reorder_buffer__DOT__dut__DOT__ex_valid_i;
        VlUnpacked<CData/*3:0*/, 3> tb_reorder_buffer__DOT__dut__DOT__ex_rob_idx_i;
        VlUnpacked<IData/*31:0*/, 3> tb_reorder_buffer__DOT__dut__DOT__ex_val_i;
        VlUnpacked<CData/*0:0*/, 3> tb_reorder_buffer__DOT__dut__DOT__ex_br_mispred_i;
        VlUnpacked<CData/*0:0*/, 3> tb_reorder_buffer__DOT__dut__DOT__ex_exception_i;
        VlUnpacked<CData/*0:0*/, 2> tb_reorder_buffer__DOT__dut__DOT__ret_wr_en_o;
        VlUnpacked<CData/*4:0*/, 2> tb_reorder_buffer__DOT__dut__DOT__ret_wr_areg_o;
        VlUnpacked<IData/*31:0*/, 2> tb_reorder_buffer__DOT__dut__DOT__ret_wr_val_o;
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
    };
    struct {
        VlUnpacked<IData/*31:0*/, 3> tb_reorder_buffer__DOT__dut__DOT__result_data;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h9fa7b992__0;
    VlTriggerScheduler __VtrigSched_h9fa7b8d8__0;

    // INTERNAL VARIABLES
    Vtb_reorder_buffer__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_reorder_buffer___024root(Vtb_reorder_buffer__Syms* symsp, const char* namep);
    ~Vtb_reorder_buffer___024root();
    VL_UNCOPYABLE(Vtb_reorder_buffer___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
