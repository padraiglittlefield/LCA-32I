// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_store_data_queue.h for the primary calling header

#ifndef VERILATED_VTB_STORE_DATA_QUEUE___024ROOT_H_
#define VERILATED_VTB_STORE_DATA_QUEUE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_store_data_queue__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_store_data_queue___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_store_data_queue__DOT__clk;
    CData/*0:0*/ tb_store_data_queue__DOT__rst;
    CData/*0:0*/ tb_store_data_queue__DOT__disp_vld_i;
    CData/*0:0*/ tb_store_data_queue__DOT__cmit_vld_i;
    CData/*3:0*/ tb_store_data_queue__DOT__cmit_idx_i;
    CData/*0:0*/ tb_store_data_queue__DOT__exec_vld_i;
    CData/*3:0*/ tb_store_data_queue__DOT__exec_sdq_idx_i;
    CData/*0:0*/ tb_store_data_queue__DOT__sdq_full_o;
    CData/*0:0*/ tb_store_data_queue__DOT__issue_en_i;
    CData/*0:0*/ tb_store_data_queue__DOT__issue_ack_i;
    CData/*0:0*/ tb_store_data_queue__DOT__issue_vld_o;
    CData/*0:0*/ tb_store_data_queue__DOT__ld_vld_i;
    CData/*3:0*/ tb_store_data_queue__DOT__ld_sdq_marker_i;
    CData/*0:0*/ tb_store_data_queue__DOT__ld_hit_o;
    CData/*3:0*/ tb_store_data_queue__DOT__exec_rob_idx_i;
    CData/*3:0*/ tb_store_data_queue__DOT__dut__DOT____Vlvbound_hb2049f2f__0;
    CData/*3:0*/ tb_store_data_queue__DOT__dut__DOT____Vlvbound_h97a0456c__0;
    CData/*0:0*/ tb_store_data_queue__DOT__dut__DOT____Vlvbound_h2a0334fb__0;
    CData/*0:0*/ tb_store_data_queue__DOT__dut__DOT____Vlvbound_h2a0334bc__0;
    CData/*0:0*/ tb_store_data_queue__DOT__dut__DOT____Vlvbound_h2a031b86__0;
    CData/*0:0*/ tb_store_data_queue__DOT__dut__DOT____Vlvbound_h2a03438d__0;
    CData/*4:0*/ tb_store_data_queue__DOT__dut__DOT__head_ptr;
    CData/*4:0*/ tb_store_data_queue__DOT__dut__DOT__tail_ptr;
    CData/*3:0*/ tb_store_data_queue__DOT__dut__DOT__last_cmit_idx_reg;
    CData/*0:0*/ tb_store_data_queue__DOT__dut__DOT__prev_st_addr_unresolved;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_store_data_queue__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_store_data_queue__DOT__cycle_count;
    IData/*31:0*/ tb_store_data_queue__DOT__pass_count;
    IData/*31:0*/ tb_store_data_queue__DOT__fail_count;
    IData/*31:0*/ tb_store_data_queue__DOT__exec_store_data_i;
    IData/*31:0*/ tb_store_data_queue__DOT__exec_addr_i;
    IData/*31:0*/ tb_store_data_queue__DOT__ld_addr_i;
    IData/*31:0*/ tb_store_data_queue__DOT__ld_data_o;
    IData/*31:0*/ tb_store_data_queue__DOT__dut__DOT____Vlvbound_haff32323__0;
    IData/*31:0*/ tb_store_data_queue__DOT__dut__DOT____Vlvbound_haff31b5c__0;
    IData/*31:0*/ tb_store_data_queue__DOT__dut__DOT____Vlvbound_h29bad768__0;
    IData/*31:0*/ tb_store_data_queue__DOT__dut__DOT____Vlvbound_h29babf9d__0;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlWide<3>/*71:0*/ tb_store_data_queue__DOT__issue_entry_o;
    VlUnpacked<VlWide<3>/*71:0*/, 17> tb_store_data_queue__DOT__dut__DOT__sdq;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    std::string __Vtask_tb_store_data_queue__DOT__check_assertion__4__test_name;
    std::string __Vtask_tb_store_data_queue__DOT__check_assertion__5__test_name;
    std::string __Vtask_tb_store_data_queue__DOT__check_assertion__8__test_name;
    std::string __Vtask_tb_store_data_queue__DOT__check_assertion__9__test_name;
    std::string __Vtask_tb_store_data_queue__DOT__check_assertion__10__test_name;
    std::string __Vtask_tb_store_data_queue__DOT__check_assertion__13__test_name;
    std::string __Vtask_tb_store_data_queue__DOT__check_assertion__14__test_name;
    std::string __Vtask_tb_store_data_queue__DOT__check_assertion__15__test_name;
    std::string __Vtask_tb_store_data_queue__DOT__check_assertion__16__test_name;
    std::string __Vtask_tb_store_data_queue__DOT__check_assertion__20__test_name;
    std::string __Vtask_tb_store_data_queue__DOT__check_assertion__29__test_name;
    std::string __Vtask_tb_store_data_queue__DOT__check_assertion__31__test_name;
    std::string __Vtask_tb_store_data_queue__DOT__check_assertion__32__test_name;
    std::string __Vtask_tb_store_data_queue__DOT__check_assertion__34__test_name;
    std::string __Vtask_tb_store_data_queue__DOT__check_assertion__36__test_name;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h142a2edc__0;
    VlTriggerScheduler __VtrigSched_h142a2e2e__0;

    // INTERNAL VARIABLES
    Vtb_store_data_queue__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_store_data_queue___024root(Vtb_store_data_queue__Syms* symsp, const char* namep);
    ~Vtb_store_data_queue___024root();
    VL_UNCOPYABLE(Vtb_store_data_queue___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
