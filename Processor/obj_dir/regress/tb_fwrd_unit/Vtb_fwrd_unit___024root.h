// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_fwrd_unit.h for the primary calling header

#ifndef VERILATED_VTB_FWRD_UNIT___024ROOT_H_
#define VERILATED_VTB_FWRD_UNIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_fwrd_unit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_fwrd_unit___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_fwrd_unit__DOT__clk;
    CData/*0:0*/ tb_fwrd_unit__DOT__rst;
    CData/*5:0*/ tb_fwrd_unit__DOT__src1_preg;
    CData/*5:0*/ tb_fwrd_unit__DOT__src2_preg;
    CData/*3:0*/ tb_fwrd_unit__DOT__dut__DOT__src1_hit;
    CData/*3:0*/ tb_fwrd_unit__DOT__dut__DOT__src2_hit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fwrd_unit__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_fwrd_unit__DOT__cycle_count;
    IData/*31:0*/ tb_fwrd_unit__DOT__pass_count;
    IData/*31:0*/ tb_fwrd_unit__DOT__fail_count;
    IData/*31:0*/ tb_fwrd_unit__DOT__src1_val;
    IData/*31:0*/ tb_fwrd_unit__DOT__src2_val;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<CData/*0:0*/, 4> tb_fwrd_unit__DOT__ex_valid;
    VlUnpacked<CData/*5:0*/, 4> tb_fwrd_unit__DOT__ex_dst_preg;
    VlUnpacked<IData/*31:0*/, 4> tb_fwrd_unit__DOT__ex_val;
    VlUnpacked<CData/*0:0*/, 4> tb_fwrd_unit__DOT__dut__DOT__ex_valid_i;
    VlUnpacked<CData/*5:0*/, 4> tb_fwrd_unit__DOT__dut__DOT__ex_dst_preg_i;
    VlUnpacked<IData/*31:0*/, 4> tb_fwrd_unit__DOT__dut__DOT__ex_val_i;
    VlUnpacked<IData/*31:0*/, 4> tb_fwrd_unit__DOT__dut__DOT__src1_fwrd_val;
    VlUnpacked<IData/*31:0*/, 4> tb_fwrd_unit__DOT__dut__DOT__src2_fwrd_val;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    std::string __Vtask_tb_fwrd_unit__DOT__check_assertion__3__test_name;
    std::string __Vtask_tb_fwrd_unit__DOT__check_assertion__4__test_name;
    std::string __Vtask_tb_fwrd_unit__DOT__check_assertion__6__test_name;
    std::string __Vtask_tb_fwrd_unit__DOT__check_assertion__7__test_name;
    std::string __Vtask_tb_fwrd_unit__DOT__check_assertion__8__test_name;
    std::string __Vtask_tb_fwrd_unit__DOT__check_assertion__10__test_name;
    std::string __Vtask_tb_fwrd_unit__DOT__check_assertion__11__test_name;
    std::string __Vtask_tb_fwrd_unit__DOT__check_assertion__12__test_name;
    std::string __Vtask_tb_fwrd_unit__DOT__check_assertion__14__test_name;
    std::string __Vtask_tb_fwrd_unit__DOT__check_assertion__15__test_name;
    std::string __Vtask_tb_fwrd_unit__DOT__check_assertion__16__test_name;
    std::string __Vtask_tb_fwrd_unit__DOT__check_assertion__17__test_name;
    std::string __Vtask_tb_fwrd_unit__DOT__check_assertion__19__test_name;
    std::string __Vtask_tb_fwrd_unit__DOT__check_assertion__20__test_name;
    std::string __Vtask_tb_fwrd_unit__DOT__check_assertion__21__test_name;
    std::string __Vtask_tb_fwrd_unit__DOT__check_assertion__22__test_name;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h1c6909ae__0;

    // INTERNAL VARIABLES
    Vtb_fwrd_unit__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_fwrd_unit___024root(Vtb_fwrd_unit__Syms* symsp, const char* namep);
    ~Vtb_fwrd_unit___024root();
    VL_UNCOPYABLE(Vtb_fwrd_unit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
