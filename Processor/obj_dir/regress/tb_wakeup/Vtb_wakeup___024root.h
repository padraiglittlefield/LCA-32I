// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_wakeup.h for the primary calling header

#ifndef VERILATED_VTB_WAKEUP___024ROOT_H_
#define VERILATED_VTB_WAKEUP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_wakeup__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_wakeup___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_wakeup__DOT__clk;
    CData/*0:0*/ tb_wakeup__DOT__rst;
    CData/*0:0*/ tb_wakeup__DOT__disp_valid;
    CData/*1:0*/ tb_wakeup__DOT__free_entry_out;
    CData/*0:0*/ tb_wakeup__DOT__full_out;
    CData/*3:0*/ tb_wakeup__DOT__reqs;
    CData/*1:0*/ tb_wakeup__DOT__grant;
    CData/*0:0*/ tb_wakeup__DOT__grant_valid;
    CData/*1:0*/ tb_wakeup__DOT__retire_entry;
    CData/*0:0*/ tb_wakeup__DOT__retire_valid;
    CData/*1:0*/ tb_wakeup__DOT__test_grant_ready__Vstatic__granted_entry;
    CData/*1:0*/ tb_wakeup__DOT__test_retire__Vstatic__retired_entry;
    CData/*1:0*/ tb_wakeup__DOT__test_dispatch_with_deps__Vstatic__dispatched_entry;
    CData/*1:0*/ tb_wakeup__DOT__test_clear_dependencies__Vstatic__dep_entry;
    CData/*1:0*/ tb_wakeup__DOT__test_dispatch_after_free__Vstatic__new_entry;
    CData/*3:0*/ tb_wakeup__DOT__dut__DOT__entry_valid;
    CData/*3:0*/ tb_wakeup__DOT__dut__DOT__entry_granted;
    CData/*1:0*/ tb_wakeup__DOT__dut__DOT__free_entry;
    CData/*0:0*/ tb_wakeup__DOT__dut__DOT__full;
    CData/*0:0*/ tb_wakeup__DOT__dut__DOT__granted;
    CData/*0:0*/ tb_wakeup__DOT__dut__DOT__flag;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_wakeup__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ tb_wakeup__DOT__dependency_mask;
    SData/*15:0*/ tb_wakeup__DOT__ready_mask;
    IData/*31:0*/ tb_wakeup__DOT__cycle_count;
    IData/*31:0*/ tb_wakeup__DOT__pass_count;
    IData/*31:0*/ tb_wakeup__DOT__fail_count;
    IData/*31:0*/ tb_wakeup__DOT__test_fill_rs__Vstatic__valid_count;
    IData/*31:0*/ tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_before;
    IData/*31:0*/ tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_after;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<SData/*15:0*/, 4> tb_wakeup__DOT__dut__DOT__dependency_matrix_row;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    std::string __Vtask_tb_wakeup__DOT__check_assertion__4__test_name;
    std::string __Vtask_tb_wakeup__DOT__check_assertion__5__test_name;
    std::string __Vtask_tb_wakeup__DOT__check_assertion__8__test_name;
    std::string __Vtask_tb_wakeup__DOT__check_assertion__9__test_name;
    std::string __Vtask_tb_wakeup__DOT__check_assertion__12__test_name;
    std::string __Vtask_tb_wakeup__DOT__check_assertion__13__test_name;
    std::string __Vtask_tb_wakeup__DOT__check_assertion__16__test_name;
    std::string __Vtask_tb_wakeup__DOT__check_assertion__17__test_name;
    std::string __Vtask_tb_wakeup__DOT__check_assertion__20__test_name;
    std::string __Vtask_tb_wakeup__DOT__check_assertion__22__test_name;
    std::string __Vtask_tb_wakeup__DOT__check_assertion__23__test_name;
    std::string __Vtask_tb_wakeup__DOT__check_assertion__26__test_name;
    std::string __Vtask_tb_wakeup__DOT__check_assertion__27__test_name;
    std::string __Vtask_tb_wakeup__DOT__check_assertion__29__test_name;
    std::string __Vtask_tb_wakeup__DOT__check_assertion__30__test_name;
    std::string __Vtask_tb_wakeup__DOT__check_assertion__34__test_name;
    std::string __Vtask_tb_wakeup__DOT__check_assertion__37__test_name;
    std::string __Vtask_tb_wakeup__DOT__check_assertion__38__test_name;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h4d4c818d__0;
    VlTriggerScheduler __VtrigSched_h4d4c80cd__0;

    // INTERNAL VARIABLES
    Vtb_wakeup__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_wakeup___024root(Vtb_wakeup__Syms* symsp, const char* namep);
    ~Vtb_wakeup___024root();
    VL_UNCOPYABLE(Vtb_wakeup___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
