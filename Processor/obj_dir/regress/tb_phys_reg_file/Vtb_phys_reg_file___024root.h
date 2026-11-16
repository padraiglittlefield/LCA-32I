// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_phys_reg_file.h for the primary calling header

#ifndef VERILATED_VTB_PHYS_REG_FILE___024ROOT_H_
#define VERILATED_VTB_PHYS_REG_FILE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_phys_reg_file__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_phys_reg_file___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_phys_reg_file__DOT__clk;
    CData/*0:0*/ tb_phys_reg_file__DOT__rst;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_phys_reg_file__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_phys_reg_file__DOT__cycle_count;
    IData/*31:0*/ tb_phys_reg_file__DOT__pass_count;
    IData/*31:0*/ tb_phys_reg_file__DOT__fail_count;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<CData/*5:0*/, 4> tb_phys_reg_file__DOT__rd_src1_preg;
    VlUnpacked<CData/*5:0*/, 4> tb_phys_reg_file__DOT__rd_src2_preg;
    VlUnpacked<IData/*31:0*/, 4> tb_phys_reg_file__DOT__rd_src1_val;
    VlUnpacked<IData/*31:0*/, 4> tb_phys_reg_file__DOT__rd_src2_val;
    VlUnpacked<CData/*0:0*/, 3> tb_phys_reg_file__DOT__ex_wr_en;
    VlUnpacked<CData/*5:0*/, 3> tb_phys_reg_file__DOT__ex_wr_preg;
    VlUnpacked<IData/*31:0*/, 3> tb_phys_reg_file__DOT__ex_wr_val;
    VlUnpacked<CData/*0:0*/, 2> tb_phys_reg_file__DOT__rob_wr_en;
    VlUnpacked<CData/*4:0*/, 2> tb_phys_reg_file__DOT__rob_wr_areg;
    VlUnpacked<IData/*31:0*/, 2> tb_phys_reg_file__DOT__rob_wr_val;
    VlUnpacked<CData/*5:0*/, 4> tb_phys_reg_file__DOT__dut__DOT__rd_src1_preg_i;
    VlUnpacked<CData/*5:0*/, 4> tb_phys_reg_file__DOT__dut__DOT__rd_src2_preg_i;
    VlUnpacked<IData/*31:0*/, 4> tb_phys_reg_file__DOT__dut__DOT__rd_src1_val_o;
    VlUnpacked<IData/*31:0*/, 4> tb_phys_reg_file__DOT__dut__DOT__rd_src2_val_o;
    VlUnpacked<CData/*0:0*/, 3> tb_phys_reg_file__DOT__dut__DOT__ex_wr_en_i;
    VlUnpacked<CData/*5:0*/, 3> tb_phys_reg_file__DOT__dut__DOT__ex_wr_preg_i;
    VlUnpacked<IData/*31:0*/, 3> tb_phys_reg_file__DOT__dut__DOT__ex_wr_val_i;
    VlUnpacked<CData/*0:0*/, 2> tb_phys_reg_file__DOT__dut__DOT__rob_wr_en_i;
    VlUnpacked<CData/*4:0*/, 2> tb_phys_reg_file__DOT__dut__DOT__rob_wr_areg_i;
    VlUnpacked<IData/*31:0*/, 2> tb_phys_reg_file__DOT__dut__DOT__rob_wr_val_i;
    VlUnpacked<IData/*31:0*/, 64> tb_phys_reg_file__DOT__dut__DOT__registers;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    std::string __Vtask_tb_phys_reg_file__DOT__check_assertion__5__test_name;
    std::string __Vtask_tb_phys_reg_file__DOT__check_assertion__6__test_name;
    std::string __Vtask_tb_phys_reg_file__DOT__check_assertion__8__test_name;
    std::string __Vtask_tb_phys_reg_file__DOT__check_assertion__9__test_name;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_ha54dc797__0;
    VlTriggerScheduler __VtrigSched_ha54dc6bb__0;

    // INTERNAL VARIABLES
    Vtb_phys_reg_file__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_phys_reg_file___024root(Vtb_phys_reg_file__Syms* symsp, const char* namep);
    ~Vtb_phys_reg_file___024root();
    VL_UNCOPYABLE(Vtb_phys_reg_file___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
