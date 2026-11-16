// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_execute_alu.h for the primary calling header

#ifndef VERILATED_VTB_EXECUTE_ALU___024ROOT_H_
#define VERILATED_VTB_EXECUTE_ALU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_execute_alu___024unit;


class Vtb_execute_alu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_execute_alu___024root final {
  public:
    // CELLS
    Vtb_execute_alu___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_execute_alu__DOT__clk;
    CData/*0:0*/ tb_execute_alu__DOT__rst;
    CData/*0:0*/ tb_execute_alu__DOT__rr_fire_valid;
    CData/*0:0*/ tb_execute_alu__DOT__fwrd_valid;
    CData/*0:0*/ tb_execute_alu__DOT__rf_wr_en;
    CData/*5:0*/ tb_execute_alu__DOT__rf_wr_preg;
    CData/*0:0*/ tb_execute_alu__DOT__rob_valid;
    CData/*3:0*/ tb_execute_alu__DOT__rob_idx;
    CData/*0:0*/ tb_execute_alu__DOT__rob_br_mispred;
    CData/*0:0*/ tb_execute_alu__DOT__rob_exception;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_execute_alu__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_execute_alu__DOT__cycle_count;
    IData/*31:0*/ tb_execute_alu__DOT__pass_count;
    IData/*31:0*/ tb_execute_alu__DOT__fail_count;
    IData/*31:0*/ tb_execute_alu__DOT__fwrd_val;
    IData/*31:0*/ tb_execute_alu__DOT__rf_wr_val;
    IData/*31:0*/ tb_execute_alu__DOT__rob_val;
    IData/*31:0*/ tb_execute_alu__DOT__dut__DOT____Vcellinp__alu__imm_val;
    IData/*31:0*/ tb_execute_alu__DOT__dut__DOT____Vcellinp__alu__src2_val;
    IData/*31:0*/ tb_execute_alu__DOT__dut__DOT____Vcellinp__alu__src1_val;
    IData/*31:0*/ tb_execute_alu__DOT__dut__DOT____Vcellinp__alu__opcode;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_15;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlWide<6>/*189:0*/ tb_execute_alu__DOT__rr_pkt;
    VlWide<6>/*189:0*/ tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    std::string __Vtask_tb_execute_alu__DOT__check_assertion__4__test_name;
    std::string __Vtask_tb_execute_alu__DOT__check_assertion__5__test_name;
    std::string __Vtask_tb_execute_alu__DOT__check_assertion__8__test_name;
    std::string __Vtask_tb_execute_alu__DOT__check_assertion__9__test_name;
    std::string __Vtask_tb_execute_alu__DOT__check_assertion__12__test_name;
    std::string __Vtask_tb_execute_alu__DOT__check_assertion__15__test_name;
    std::string __Vtask_tb_execute_alu__DOT__check_assertion__16__test_name;
    std::string __Vtask_tb_execute_alu__DOT__check_assertion__17__test_name;
    std::string __Vtask_tb_execute_alu__DOT__check_assertion__21__test_name;
    std::string __Vtask_tb_execute_alu__DOT__check_assertion__22__test_name;
    std::string __Vtask_tb_execute_alu__DOT__check_assertion__23__test_name;
    std::string __Vtask_tb_execute_alu__DOT__check_assertion__24__test_name;
    std::string __Vtask_tb_execute_alu__DOT__check_assertion__25__test_name;
    std::string __Vtask_tb_execute_alu__DOT__check_assertion__28__test_name;
    std::string __Vtask_tb_execute_alu__DOT__check_assertion__29__test_name;
    std::string __Vtask_tb_execute_alu__DOT__check_assertion__30__test_name;
    std::string __Vtask_tb_execute_alu__DOT__check_assertion__33__test_name;
    std::string __Vtask_tb_execute_alu__DOT__check_assertion__34__test_name;
    std::string __Vtask_tb_execute_alu__DOT__check_assertion__37__test_name;
    std::string __Vtask_tb_execute_alu__DOT__check_assertion__38__test_name;
    std::string __Vtask_tb_execute_alu__DOT__check_assertion__41__test_name;
    std::string __Vtask_tb_execute_alu__DOT__check_assertion__42__test_name;
    std::string __Vtask_tb_execute_alu__DOT__check_assertion__45__test_name;
    std::string __Vtask_tb_execute_alu__DOT__check_assertion__46__test_name;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h31008f00__0;
    VlTriggerScheduler __VtrigSched_h31008eaa__0;

    // INTERNAL VARIABLES
    Vtb_execute_alu__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_execute_alu___024root(Vtb_execute_alu__Syms* symsp, const char* namep);
    ~Vtb_execute_alu___024root();
    VL_UNCOPYABLE(Vtb_execute_alu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
