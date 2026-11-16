// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_load_data_queue.h for the primary calling header

#ifndef VERILATED_VTB_LOAD_DATA_QUEUE___024ROOT_H_
#define VERILATED_VTB_LOAD_DATA_QUEUE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_load_data_queue__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_load_data_queue___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_load_data_queue__DOT__clk;
    CData/*0:0*/ tb_load_data_queue__DOT__rst;
    CData/*0:0*/ tb_load_data_queue__DOT__disp_vld_i;
    CData/*4:0*/ tb_load_data_queue__DOT__disp_sdq_marker_i;
    CData/*0:0*/ tb_load_data_queue__DOT__ldq_full_o;
    CData/*0:0*/ tb_load_data_queue__DOT__exec_vld_i;
    CData/*3:0*/ tb_load_data_queue__DOT__exec_ldq_idx_i;
    CData/*0:0*/ tb_load_data_queue__DOT__issue_en_i;
    CData/*0:0*/ tb_load_data_queue__DOT__issue_vld_o;
    CData/*3:0*/ tb_load_data_queue__DOT__rob_entry_idx;
    CData/*0:0*/ tb_load_data_queue__DOT__dut__DOT__issue_ack_i;
    CData/*3:0*/ tb_load_data_queue__DOT__dut__DOT__ldq_alloc_idx;
    CData/*0:0*/ tb_load_data_queue__DOT__dut__DOT__alloc_idx_found;
    CData/*3:0*/ tb_load_data_queue__DOT__dut__DOT__issue_idx;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_load_data_queue__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ tb_load_data_queue__DOT__dut__DOT__entries_free;
    SData/*15:0*/ tb_load_data_queue__DOT__dut__DOT__entries_ready;
    IData/*31:0*/ tb_load_data_queue__DOT__cycle_count;
    IData/*31:0*/ tb_load_data_queue__DOT__exec_addr_i;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    QData/*43:0*/ tb_load_data_queue__DOT__issue_entry_o;
    VlUnpacked<QData/*43:0*/, 16> tb_load_data_queue__DOT__dut__DOT__ldq;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h59db1fa3__0;
    VlTriggerScheduler __VtrigSched_h59db1ecf__0;

    // INTERNAL VARIABLES
    Vtb_load_data_queue__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_load_data_queue___024root(Vtb_load_data_queue__Syms* symsp, const char* namep);
    ~Vtb_load_data_queue___024root();
    VL_UNCOPYABLE(Vtb_load_data_queue___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
