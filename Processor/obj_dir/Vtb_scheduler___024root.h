// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_scheduler.h for the primary calling header

#ifndef VERILATED_VTB_SCHEDULER___024ROOT_H_
#define VERILATED_VTB_SCHEDULER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_scheduler_dispatch_scheduler_if;
class Vtb_scheduler_execute_scheduler_if;


class Vtb_scheduler__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_scheduler___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_scheduler_dispatch_scheduler_if* __PVT__tb_scheduler__DOT__disp_if;
    Vtb_scheduler_execute_scheduler_if* __PVT__tb_scheduler__DOT__exec_if;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_scheduler__DOT__clk;
    CData/*0:0*/ tb_scheduler__DOT__rst;
    CData/*4:0*/ tb_scheduler__DOT__dut__DOT__grant;
    CData/*0:0*/ tb_scheduler__DOT__dut__DOT__grant_valid;
    CData/*0:0*/ tb_scheduler__DOT__dut__DOT____Vcellout__wakeup__full_out;
    CData/*4:0*/ tb_scheduler__DOT__dut__DOT____Vcellout__wakeup__free_entry_out;
    CData/*0:0*/ tb_scheduler__DOT__dut__DOT__all_fu_ready_mask;
    CData/*0:0*/ tb_scheduler__DOT__dut__DOT__valid;
    CData/*4:0*/ tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry;
    CData/*0:0*/ tb_scheduler__DOT__dut__DOT__wakeup__DOT__full;
    CData/*0:0*/ tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag;
    CData/*4:0*/ tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_priority;
    CData/*0:0*/ tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_scheduler__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_scheduler__DOT__cycle_count;
    VlWide<4>/*127:0*/ tb_scheduler__DOT__global_ready_mask;
    IData/*31:0*/ tb_scheduler__DOT__dut__DOT__reqs;
    IData/*31:0*/ tb_scheduler__DOT__dut__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid;
    IData/*31:0*/ tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted;
    IData/*31:0*/ tb_scheduler__DOT__dut__DOT__wakeup__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ tb_scheduler__DOT__dut__DOT__wakeup__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
    IData/*31:0*/ tb_scheduler__DOT__dut__DOT__wakeup__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__masked_req;
    IData/*31:0*/ tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<VlWide<3>/*82:0*/, 32> tb_scheduler__DOT__dut__DOT__payload_ram;
    VlUnpacked<VlWide<4>/*127:0*/, 32> tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc9429d78__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_scheduler__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_scheduler___024root(Vtb_scheduler__Syms* symsp, const char* v__name);
    ~Vtb_scheduler___024root();
    VL_UNCOPYABLE(Vtb_scheduler___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
