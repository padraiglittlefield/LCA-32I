// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_scheduler.h for the primary calling header

#ifndef VERILATED_VTB_SCHEDULER___024ROOT_H_
#define VERILATED_VTB_SCHEDULER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_scheduler__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_scheduler___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_scheduler__DOT__clk;
    CData/*0:0*/ tb_scheduler__DOT__rst;
    CData/*0:0*/ tb_scheduler__DOT__disp_valid;
    CData/*1:0*/ tb_scheduler__DOT__rs_entry_idx;
    CData/*0:0*/ tb_scheduler__DOT__rs_full;
    CData/*0:0*/ tb_scheduler__DOT__rr_fire_valid;
    CData/*1:0*/ tb_scheduler__DOT__test_select_grant__Vstatic__granted_entry;
    CData/*1:0*/ tb_scheduler__DOT__test5_dispatched_entry;
    CData/*5:0*/ tb_scheduler__DOT__test_fill_rs__Vstatic__dst_val;
    CData/*5:0*/ tb_scheduler__DOT__test_fill_rs__Vstatic__src1_val;
    CData/*5:0*/ tb_scheduler__DOT__test_fill_rs__Vstatic__src2_val;
    CData/*1:0*/ tb_scheduler__DOT__dut__DOT__grant;
    CData/*0:0*/ tb_scheduler__DOT__dut__DOT__grant_valid;
    CData/*3:0*/ tb_scheduler__DOT__dut__DOT__reqs_out;
    CData/*3:0*/ tb_scheduler__DOT__dut__DOT__reqs_in;
    CData/*3:0*/ tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid;
    CData/*3:0*/ tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted;
    CData/*1:0*/ tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry;
    CData/*0:0*/ tb_scheduler__DOT__dut__DOT__wakeup__DOT__full;
    CData/*0:0*/ tb_scheduler__DOT__dut__DOT__wakeup__DOT__granted;
    CData/*0:0*/ tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag;
    CData/*1:0*/ tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_priority;
    CData/*3:0*/ tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__masked_req;
    CData/*3:0*/ tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req;
    CData/*0:0*/ tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_scheduler__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ tb_scheduler__DOT__global_ready_mask;
    SData/*15:0*/ tb_scheduler__DOT__dependency_mask;
    IData/*31:0*/ tb_scheduler__DOT__cycle_count;
    IData/*31:0*/ tb_scheduler__DOT__pass_count;
    IData/*31:0*/ tb_scheduler__DOT__fail_count;
    IData/*31:0*/ tb_scheduler__DOT__test_fill_rs__Vstatic__valid_count;
    IData/*31:0*/ tb_scheduler__DOT__test_fill_rs__Vstatic__i;
    IData/*31:0*/ tb_scheduler__DOT__test_fill_rs__Vstatic__pc_val;
    IData/*31:0*/ tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_before;
    IData/*31:0*/ tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_after;
    IData/*31:0*/ tb_scheduler__DOT__test_dispatch_when_full__Vstatic__i;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlWide<4>/*127:0*/ tb_scheduler__DOT__disp_pkt;
    VlWide<4>/*127:0*/ tb_scheduler__DOT__rr_pkt;
    VlUnpacked<VlWide<4>/*127:0*/, 4> tb_scheduler__DOT__dut__DOT__payload_ram;
    VlUnpacked<SData/*15:0*/, 4> tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__4__test_name;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__5__test_name;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__6__test_name;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__8__test_name;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__9__test_name;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__10__test_name;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__12__test_name;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__13__test_name;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__14__test_name;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__15__test_name;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__18__test_name;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__19__test_name;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__20__test_name;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__23__test_name;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__25__test_name;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__26__test_name;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__31__test_name;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__32__test_name;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__34__test_name;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__35__test_name;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__41__test_name;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__42__test_name;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__43__test_name;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__44__test_name;
    std::string __Vtask_tb_scheduler__DOT__check_assertion__45__test_name;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h289396db__0;
    VlTriggerScheduler __VtrigSched_h28939637__0;

    // INTERNAL VARIABLES
    Vtb_scheduler__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_scheduler___024root(Vtb_scheduler__Syms* symsp, const char* namep);
    ~Vtb_scheduler___024root();
    VL_UNCOPYABLE(Vtb_scheduler___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
