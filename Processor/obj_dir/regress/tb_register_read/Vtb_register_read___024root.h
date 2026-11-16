// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_register_read.h for the primary calling header

#ifndef VERILATED_VTB_REGISTER_READ___024ROOT_H_
#define VERILATED_VTB_REGISTER_READ___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_register_read__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_register_read___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_register_read__DOT__clk;
    CData/*0:0*/ tb_register_read__DOT__rst;
    CData/*0:0*/ tb_register_read__DOT__sched_fire_valid;
    CData/*5:0*/ tb_register_read__DOT__rf_src1_preg;
    CData/*5:0*/ tb_register_read__DOT__rf_src2_preg;
    CData/*0:0*/ tb_register_read__DOT__fwrd_src1_hit;
    CData/*0:0*/ tb_register_read__DOT__fwrd_src2_hit;
    CData/*0:0*/ tb_register_read__DOT__exec_fire_valid;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_register_read__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_register_read__DOT__cycle_count;
    IData/*31:0*/ tb_register_read__DOT__pass_count;
    IData/*31:0*/ tb_register_read__DOT__fail_count;
    IData/*31:0*/ tb_register_read__DOT__rf_src1_val;
    IData/*31:0*/ tb_register_read__DOT__rf_src2_val;
    IData/*31:0*/ tb_register_read__DOT__fwrd_src1_val;
    IData/*31:0*/ tb_register_read__DOT__fwrd_src2_val;
    IData/*31:0*/ tb_register_read__DOT__dut__DOT__src1_val;
    IData/*31:0*/ tb_register_read__DOT__dut__DOT__src2_val;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlWide<4>/*127:0*/ tb_register_read__DOT__sched_pkt;
    VlWide<6>/*189:0*/ tb_register_read__DOT__exec_pkt;
    VlWide<6>/*189:0*/ tb_register_read__DOT__dut__DOT__exec_pkt;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    std::string __Vtask_tb_register_read__DOT__check_assertion__3__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__4__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__9__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__10__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__11__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__12__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__13__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__14__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__15__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__16__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__21__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__22__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__23__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__24__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__29__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__30__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__35__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__36__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__41__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__46__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__47__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__50__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__51__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__56__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__57__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__58__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__59__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__60__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__61__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__66__test_name;
    std::string __Vtask_tb_register_read__DOT__check_assertion__67__test_name;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_ha6c2d866__0;
    VlTriggerScheduler __VtrigSched_ha6c2dba4__0;

    // INTERNAL VARIABLES
    Vtb_register_read__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_register_read___024root(Vtb_register_read__Syms* symsp, const char* namep);
    ~Vtb_register_read___024root();
    VL_UNCOPYABLE(Vtb_register_read___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
