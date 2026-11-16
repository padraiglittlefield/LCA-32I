// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_load_data_queue.h for the primary calling header

#include "Vtb_load_data_queue__pch.h"

VL_ATTR_COLD void Vtb_load_data_queue___024root___eval_initial__TOP(Vtb_load_data_queue___024root* vlSelf);
VlCoroutine Vtb_load_data_queue___024root___eval_initial__TOP__Vtiming__0(Vtb_load_data_queue___024root* vlSelf);
VlCoroutine Vtb_load_data_queue___024root___eval_initial__TOP__Vtiming__1(Vtb_load_data_queue___024root* vlSelf);

void Vtb_load_data_queue___024root___eval_initial(Vtb_load_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___eval_initial\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_load_data_queue___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_load_data_queue___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_load_data_queue___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_load_data_queue___024root___eval_initial__TOP__Vtiming__0(Vtb_load_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "sim/tb_load_data_queue.sv", 
                                             21);
        vlSelfRef.tb_load_data_queue__DOT__clk = 1U;
        vlSelfRef.tb_load_data_queue__DOT__cycle_count 
            = ((IData)(1U) + vlSelfRef.tb_load_data_queue__DOT__cycle_count);
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "sim/tb_load_data_queue.sv", 
                                             23);
        vlSelfRef.tb_load_data_queue__DOT__clk = 0U;
    }
    co_return;
}

void Vtb_load_data_queue___024root____VbeforeTrig_h59db1fa3__0(Vtb_load_data_queue___024root* vlSelf, const char* __VeventDescription);
void Vtb_load_data_queue___024root____VbeforeTrig_h59db1ecf__0(Vtb_load_data_queue___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_load_data_queue___024root___eval_initial__TOP__Vtiming__1(Vtb_load_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_load_data_queue__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_load_data_queue__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*4:0*/ __Vtask_tb_load_data_queue__DOT__dispatch_entry__3__sdq_marker;
    __Vtask_tb_load_data_queue__DOT__dispatch_entry__3__sdq_marker = 0;
    CData/*3:0*/ __Vtask_tb_load_data_queue__DOT__update_addr__5__addr_ldq_idx;
    __Vtask_tb_load_data_queue__DOT__update_addr__5__addr_ldq_idx = 0;
    IData/*31:0*/ __Vtask_tb_load_data_queue__DOT__update_addr__5__addr;
    __Vtask_tb_load_data_queue__DOT__update_addr__5__addr = 0;
    CData/*3:0*/ __Vtask_tb_load_data_queue__DOT__update_addr__6__addr_ldq_idx;
    __Vtask_tb_load_data_queue__DOT__update_addr__6__addr_ldq_idx = 0;
    IData/*31:0*/ __Vtask_tb_load_data_queue__DOT__update_addr__6__addr;
    __Vtask_tb_load_data_queue__DOT__update_addr__6__addr = 0;
    IData/*31:0*/ __Vtask_tb_load_data_queue__DOT__test_fill__8__unnamedblk1__DOT__i;
    __Vtask_tb_load_data_queue__DOT__test_fill__8__unnamedblk1__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_load_data_queue__DOT__dispatch_entry__9__sdq_marker;
    __Vtask_tb_load_data_queue__DOT__dispatch_entry__9__sdq_marker = 0;
    IData/*31:0*/ __Vtask_tb_load_data_queue__DOT__test_empty__10__unnamedblk2__DOT__i;
    __Vtask_tb_load_data_queue__DOT__test_empty__10__unnamedblk2__DOT__i = 0;
    CData/*3:0*/ __Vtask_tb_load_data_queue__DOT__update_addr_repeat__11__addr_ldq_idx;
    __Vtask_tb_load_data_queue__DOT__update_addr_repeat__11__addr_ldq_idx = 0;
    IData/*31:0*/ __Vtask_tb_load_data_queue__DOT__update_addr_repeat__11__addr;
    __Vtask_tb_load_data_queue__DOT__update_addr_repeat__11__addr = 0;
    // Body
    vlSelfRef.tb_load_data_queue__DOT__clk = 0U;
    vlSelfRef.tb_load_data_queue__DOT__rst = 0U;
    vlSelfRef.tb_load_data_queue__DOT__disp_vld_i = 0U;
    vlSelfRef.tb_load_data_queue__DOT__disp_sdq_marker_i = 0U;
    vlSelfRef.tb_load_data_queue__DOT__exec_vld_i = 0U;
    vlSelfRef.tb_load_data_queue__DOT__exec_ldq_idx_i = 0U;
    vlSelfRef.tb_load_data_queue__DOT__exec_addr_i = 0U;
    vlSelfRef.tb_load_data_queue__DOT__rob_entry_idx = 0U;
    VL_WRITEF_NX("=== LDQ Testbench ===\n",0);
    VL_WRITEF_NX("\n[RESET] Resetting DUT\n",0);
    Vtb_load_data_queue___024root____VbeforeTrig_h59db1fa3__0(vlSelf, 
                                                              "@(negedge tb_load_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h59db1fa3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_load_data_queue.clk)", 
                                                         "sim/tb_load_data_queue.sv", 
                                                         101);
    vlSelfRef.tb_load_data_queue__DOT__rst = 1U;
    Vtb_load_data_queue___024root____VbeforeTrig_h59db1fa3__0(vlSelf, 
                                                              "@(negedge tb_load_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h59db1fa3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_load_data_queue.clk)", 
                                                         "sim/tb_load_data_queue.sv", 
                                                         103);
    Vtb_load_data_queue___024root____VbeforeTrig_h59db1fa3__0(vlSelf, 
                                                              "@(negedge tb_load_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h59db1fa3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_load_data_queue.clk)", 
                                                         "sim/tb_load_data_queue.sv", 
                                                         104);
    vlSelfRef.tb_load_data_queue__DOT__rst = 0U;
    Vtb_load_data_queue___024root____VbeforeTrig_h59db1fa3__0(vlSelf, 
                                                              "@(negedge tb_load_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h59db1fa3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_load_data_queue.clk)", 
                                                         "sim/tb_load_data_queue.sv", 
                                                         106);
    VL_WRITEF_NX("[RESET] Reset complete\n\n",0);
    __Vtask_tb_load_data_queue__DOT__dispatch_entry__3__sdq_marker = 5U;
    vlSelfRef.tb_load_data_queue__DOT__disp_sdq_marker_i 
        = __Vtask_tb_load_data_queue__DOT__dispatch_entry__3__sdq_marker;
    vlSelfRef.tb_load_data_queue__DOT__disp_vld_i = 1U;
    Vtb_load_data_queue___024root____VbeforeTrig_h59db1fa3__0(vlSelf, 
                                                              "@(negedge tb_load_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h59db1fa3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_load_data_queue.clk)", 
                                                         "sim/tb_load_data_queue.sv", 
                                                         121);
    vlSelfRef.tb_load_data_queue__DOT__disp_vld_i = 0U;
    Vtb_load_data_queue___024root____VbeforeTrig_h59db1fa3__0(vlSelf, 
                                                              "@(negedge tb_load_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h59db1fa3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_load_data_queue.clk)", 
                                                         "sim/tb_load_data_queue.sv", 
                                                         123);
    __Vtask_tb_load_data_queue__DOT__update_addr__5__addr = 0x000013f4U;
    __Vtask_tb_load_data_queue__DOT__update_addr__5__addr_ldq_idx = 0x0fU;
    vlSelfRef.tb_load_data_queue__DOT__exec_vld_i = 1U;
    vlSelfRef.tb_load_data_queue__DOT__exec_ldq_idx_i 
        = __Vtask_tb_load_data_queue__DOT__update_addr__5__addr_ldq_idx;
    vlSelfRef.tb_load_data_queue__DOT__exec_addr_i 
        = __Vtask_tb_load_data_queue__DOT__update_addr__5__addr;
    Vtb_load_data_queue___024root____VbeforeTrig_h59db1fa3__0(vlSelf, 
                                                              "@(negedge tb_load_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h59db1fa3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_load_data_queue.clk)", 
                                                         "sim/tb_load_data_queue.sv", 
                                                         136);
    vlSelfRef.tb_load_data_queue__DOT__exec_vld_i = 0U;
    Vtb_load_data_queue___024root____VbeforeTrig_h59db1fa3__0(vlSelf, 
                                                              "@(negedge tb_load_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h59db1fa3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_load_data_queue.clk)", 
                                                         "sim/tb_load_data_queue.sv", 
                                                         138);
    __Vtask_tb_load_data_queue__DOT__update_addr__6__addr = 0x000013f4U;
    __Vtask_tb_load_data_queue__DOT__update_addr__6__addr_ldq_idx = 0x0fU;
    vlSelfRef.tb_load_data_queue__DOT__exec_vld_i = 1U;
    vlSelfRef.tb_load_data_queue__DOT__exec_ldq_idx_i 
        = __Vtask_tb_load_data_queue__DOT__update_addr__6__addr_ldq_idx;
    vlSelfRef.tb_load_data_queue__DOT__exec_addr_i 
        = __Vtask_tb_load_data_queue__DOT__update_addr__6__addr;
    Vtb_load_data_queue___024root____VbeforeTrig_h59db1fa3__0(vlSelf, 
                                                              "@(negedge tb_load_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h59db1fa3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_load_data_queue.clk)", 
                                                         "sim/tb_load_data_queue.sv", 
                                                         136);
    vlSelfRef.tb_load_data_queue__DOT__exec_vld_i = 0U;
    Vtb_load_data_queue___024root____VbeforeTrig_h59db1fa3__0(vlSelf, 
                                                              "@(negedge tb_load_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h59db1fa3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_load_data_queue.clk)", 
                                                         "sim/tb_load_data_queue.sv", 
                                                         138);
    VL_WRITEF_NX("\n[RESET] Resetting DUT\n",0);
    Vtb_load_data_queue___024root____VbeforeTrig_h59db1fa3__0(vlSelf, 
                                                              "@(negedge tb_load_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h59db1fa3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_load_data_queue.clk)", 
                                                         "sim/tb_load_data_queue.sv", 
                                                         101);
    vlSelfRef.tb_load_data_queue__DOT__rst = 1U;
    Vtb_load_data_queue___024root____VbeforeTrig_h59db1fa3__0(vlSelf, 
                                                              "@(negedge tb_load_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h59db1fa3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_load_data_queue.clk)", 
                                                         "sim/tb_load_data_queue.sv", 
                                                         103);
    Vtb_load_data_queue___024root____VbeforeTrig_h59db1fa3__0(vlSelf, 
                                                              "@(negedge tb_load_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h59db1fa3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_load_data_queue.clk)", 
                                                         "sim/tb_load_data_queue.sv", 
                                                         104);
    vlSelfRef.tb_load_data_queue__DOT__rst = 0U;
    Vtb_load_data_queue___024root____VbeforeTrig_h59db1fa3__0(vlSelf, 
                                                              "@(negedge tb_load_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h59db1fa3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_load_data_queue.clk)", 
                                                         "sim/tb_load_data_queue.sv", 
                                                         106);
    VL_WRITEF_NX("[RESET] Reset complete\n\n",0);
    __Vtask_tb_load_data_queue__DOT__test_fill__8__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_load_data_queue__DOT__test_fill__8__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000011U, __Vtask_tb_load_data_queue__DOT__test_fill__8__unnamedblk1__DOT__i)) {
        __Vtask_tb_load_data_queue__DOT__dispatch_entry__9__sdq_marker = 5U;
        vlSelfRef.tb_load_data_queue__DOT__disp_sdq_marker_i 
            = __Vtask_tb_load_data_queue__DOT__dispatch_entry__9__sdq_marker;
        vlSelfRef.tb_load_data_queue__DOT__disp_vld_i = 1U;
        Vtb_load_data_queue___024root____VbeforeTrig_h59db1fa3__0(vlSelf, 
                                                                  "@(negedge tb_load_data_queue.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h59db1fa3__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_load_data_queue.clk)", 
                                                             "sim/tb_load_data_queue.sv", 
                                                             121);
        vlSelfRef.tb_load_data_queue__DOT__disp_vld_i = 0U;
        Vtb_load_data_queue___024root____VbeforeTrig_h59db1fa3__0(vlSelf, 
                                                                  "@(negedge tb_load_data_queue.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h59db1fa3__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_load_data_queue.clk)", 
                                                             "sim/tb_load_data_queue.sv", 
                                                             123);
        __Vtask_tb_load_data_queue__DOT__test_fill__8__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_load_data_queue__DOT__test_fill__8__unnamedblk1__DOT__i);
    }
    __Vtask_tb_load_data_queue__DOT__test_empty__10__unnamedblk2__DOT__i = 0U;
    __Vtask_tb_load_data_queue__DOT__test_empty__10__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000011U, __Vtask_tb_load_data_queue__DOT__test_empty__10__unnamedblk2__DOT__i)) {
        __Vtask_tb_load_data_queue__DOT__update_addr_repeat__11__addr 
            = VL_MULS_III(32, (IData)(3U), __Vtask_tb_load_data_queue__DOT__test_empty__10__unnamedblk2__DOT__i);
        __Vtask_tb_load_data_queue__DOT__update_addr_repeat__11__addr_ldq_idx 
            = (0x0000000fU & __Vtask_tb_load_data_queue__DOT__test_empty__10__unnamedblk2__DOT__i);
        vlSelfRef.tb_load_data_queue__DOT__exec_vld_i = 1U;
        vlSelfRef.tb_load_data_queue__DOT__exec_ldq_idx_i 
            = __Vtask_tb_load_data_queue__DOT__update_addr_repeat__11__addr_ldq_idx;
        vlSelfRef.tb_load_data_queue__DOT__exec_addr_i 
            = __Vtask_tb_load_data_queue__DOT__update_addr_repeat__11__addr;
        Vtb_load_data_queue___024root____VbeforeTrig_h59db1fa3__0(vlSelf, 
                                                                  "@(negedge tb_load_data_queue.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h59db1fa3__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_load_data_queue.clk)", 
                                                             "sim/tb_load_data_queue.sv", 
                                                             151);
        __Vtask_tb_load_data_queue__DOT__test_empty__10__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_load_data_queue__DOT__test_empty__10__unnamedblk2__DOT__i);
    }
    tb_load_data_queue__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, tb_load_data_queue__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_load_data_queue___024root____VbeforeTrig_h59db1ecf__0(vlSelf, 
                                                                  "@(posedge tb_load_data_queue.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h59db1ecf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_load_data_queue.clk)", 
                                                             "sim/tb_load_data_queue.sv", 
                                                             202);
        tb_load_data_queue__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_load_data_queue__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    VL_WRITEF_NX("\n=== Testbench Complete ===\nTotal Tests: 0\n[\033[32mALL TESTS PASSED\033[0m] 0/0 passed\n",0);
    VL_FINISH_MT("sim/tb_load_data_queue.sv", 211, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

void Vtb_load_data_queue___024root___eval_triggers_vec__act(Vtb_load_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___eval_triggers_vec__act\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.tb_load_data_queue__DOT__clk)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_load_data_queue__DOT__clk__0)) 
                                                      << 2U) 
                                                     | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_load_data_queue__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_load_data_queue__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_load_data_queue__DOT__clk__0 
        = vlSelfRef.tb_load_data_queue__DOT__clk;
}

bool Vtb_load_data_queue___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_load_data_queue___024root___nba_sequent__TOP__0(Vtb_load_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___nba_sequent__TOP__0\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlySet__tb_load_data_queue__DOT__dut__DOT__ldq__v0;
    __VdlySet__tb_load_data_queue__DOT__dut__DOT__ldq__v0 = 0;
    QData/*43:0*/ __VdlyVal__tb_load_data_queue__DOT__dut__DOT__ldq__v16;
    __VdlyVal__tb_load_data_queue__DOT__dut__DOT__ldq__v16 = 0;
    CData/*3:0*/ __VdlyDim0__tb_load_data_queue__DOT__dut__DOT__ldq__v16;
    __VdlyDim0__tb_load_data_queue__DOT__dut__DOT__ldq__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_load_data_queue__DOT__dut__DOT__ldq__v16;
    __VdlySet__tb_load_data_queue__DOT__dut__DOT__ldq__v16 = 0;
    IData/*31:0*/ __VdlyVal__tb_load_data_queue__DOT__dut__DOT__ldq__v17;
    __VdlyVal__tb_load_data_queue__DOT__dut__DOT__ldq__v17 = 0;
    CData/*3:0*/ __VdlyDim0__tb_load_data_queue__DOT__dut__DOT__ldq__v17;
    __VdlyDim0__tb_load_data_queue__DOT__dut__DOT__ldq__v17 = 0;
    CData/*0:0*/ __VdlySet__tb_load_data_queue__DOT__dut__DOT__ldq__v17;
    __VdlySet__tb_load_data_queue__DOT__dut__DOT__ldq__v17 = 0;
    CData/*3:0*/ __VdlyDim0__tb_load_data_queue__DOT__dut__DOT__ldq__v18;
    __VdlyDim0__tb_load_data_queue__DOT__dut__DOT__ldq__v18 = 0;
    CData/*3:0*/ __VdlyVal__tb_load_data_queue__DOT__dut__DOT__ldq__v19;
    __VdlyVal__tb_load_data_queue__DOT__dut__DOT__ldq__v19 = 0;
    CData/*3:0*/ __VdlyDim0__tb_load_data_queue__DOT__dut__DOT__ldq__v19;
    __VdlyDim0__tb_load_data_queue__DOT__dut__DOT__ldq__v19 = 0;
    CData/*3:0*/ __VdlyDim0__tb_load_data_queue__DOT__dut__DOT__ldq__v20;
    __VdlyDim0__tb_load_data_queue__DOT__dut__DOT__ldq__v20 = 0;
    CData/*0:0*/ __VdlySet__tb_load_data_queue__DOT__dut__DOT__ldq__v20;
    __VdlySet__tb_load_data_queue__DOT__dut__DOT__ldq__v20 = 0;
    // Body
    __VdlySet__tb_load_data_queue__DOT__dut__DOT__ldq__v0 = 0U;
    __VdlySet__tb_load_data_queue__DOT__dut__DOT__ldq__v16 = 0U;
    __VdlySet__tb_load_data_queue__DOT__dut__DOT__ldq__v17 = 0U;
    __VdlySet__tb_load_data_queue__DOT__dut__DOT__ldq__v20 = 0U;
    if (vlSelfRef.tb_load_data_queue__DOT__rst) {
        __VdlySet__tb_load_data_queue__DOT__dut__DOT__ldq__v0 = 1U;
    } else {
        if (((IData)(vlSelfRef.tb_load_data_queue__DOT__disp_vld_i) 
             & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__ldq_full_o)))) {
            __VdlyVal__tb_load_data_queue__DOT__dut__DOT__ldq__v16 
                = (0x0000080000000000ULL | (QData)((IData)(
                                                           ((IData)(vlSelfRef.tb_load_data_queue__DOT__disp_sdq_marker_i) 
                                                            << 5U))));
            __VdlyDim0__tb_load_data_queue__DOT__dut__DOT__ldq__v16 
                = vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq_alloc_idx;
            __VdlySet__tb_load_data_queue__DOT__dut__DOT__ldq__v16 = 1U;
        }
        if (vlSelfRef.tb_load_data_queue__DOT__exec_vld_i) {
            __VdlyVal__tb_load_data_queue__DOT__dut__DOT__ldq__v17 
                = vlSelfRef.tb_load_data_queue__DOT__exec_addr_i;
            __VdlyDim0__tb_load_data_queue__DOT__dut__DOT__ldq__v17 
                = vlSelfRef.tb_load_data_queue__DOT__exec_ldq_idx_i;
            __VdlySet__tb_load_data_queue__DOT__dut__DOT__ldq__v17 = 1U;
            __VdlyDim0__tb_load_data_queue__DOT__dut__DOT__ldq__v18 
                = vlSelfRef.tb_load_data_queue__DOT__exec_ldq_idx_i;
            __VdlyVal__tb_load_data_queue__DOT__dut__DOT__ldq__v19 
                = vlSelfRef.tb_load_data_queue__DOT__rob_entry_idx;
            __VdlyDim0__tb_load_data_queue__DOT__dut__DOT__ldq__v19 
                = vlSelfRef.tb_load_data_queue__DOT__exec_ldq_idx_i;
        }
        if (((IData)(vlSelfRef.tb_load_data_queue__DOT__issue_vld_o) 
             & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__issue_ack_i))) {
            __VdlyDim0__tb_load_data_queue__DOT__dut__DOT__ldq__v20 
                = vlSelfRef.tb_load_data_queue__DOT__dut__DOT__issue_idx;
            __VdlySet__tb_load_data_queue__DOT__dut__DOT__ldq__v20 = 1U;
        }
    }
    if (__VdlySet__tb_load_data_queue__DOT__dut__DOT__ldq__v0) {
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[0U] = 0ULL;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[1U] = 0ULL;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[2U] = 0ULL;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[3U] = 0ULL;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[4U] = 0ULL;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[5U] = 0ULL;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[6U] = 0ULL;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[7U] = 0ULL;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[8U] = 0ULL;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[9U] = 0ULL;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[10U] = 0ULL;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[11U] = 0ULL;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[12U] = 0ULL;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[13U] = 0ULL;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[14U] = 0ULL;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[15U] = 0ULL;
    }
    if (__VdlySet__tb_load_data_queue__DOT__dut__DOT__ldq__v16) {
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[__VdlyDim0__tb_load_data_queue__DOT__dut__DOT__ldq__v16] 
            = __VdlyVal__tb_load_data_queue__DOT__dut__DOT__ldq__v16;
    }
    if (__VdlySet__tb_load_data_queue__DOT__dut__DOT__ldq__v17) {
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[__VdlyDim0__tb_load_data_queue__DOT__dut__DOT__ldq__v17] 
            = ((0x00000c00000003ffULL & vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq
                [__VdlyDim0__tb_load_data_queue__DOT__dut__DOT__ldq__v17]) 
               | ((QData)((IData)(__VdlyVal__tb_load_data_queue__DOT__dut__DOT__ldq__v17)) 
                  << 0x0000000aU));
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[__VdlyDim0__tb_load_data_queue__DOT__dut__DOT__ldq__v18] 
            = (0x0000040000000000ULL | vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq
               [__VdlyDim0__tb_load_data_queue__DOT__dut__DOT__ldq__v18]);
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[__VdlyDim0__tb_load_data_queue__DOT__dut__DOT__ldq__v19] 
            = ((0x00000ffffffffff0ULL & vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq
                [__VdlyDim0__tb_load_data_queue__DOT__dut__DOT__ldq__v19]) 
               | (IData)((IData)(__VdlyVal__tb_load_data_queue__DOT__dut__DOT__ldq__v19)));
    }
    if (__VdlySet__tb_load_data_queue__DOT__dut__DOT__ldq__v20) {
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[__VdlyDim0__tb_load_data_queue__DOT__dut__DOT__ldq__v20] 
            = (0x000007ffffffffffULL & vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq
               [__VdlyDim0__tb_load_data_queue__DOT__dut__DOT__ldq__v20]);
    }
    vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free 
        = ((0xfffeU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free)) 
           | (1U & (~ (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[0U] 
                               >> 0x0000002bU)))));
    vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free 
        = ((0xfffdU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free)) 
           | (2U & ((~ (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[1U] 
                                >> 0x0000002bU))) << 1U)));
    vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free 
        = ((0xfffbU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free)) 
           | (4U & ((~ (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[2U] 
                                >> 0x0000002bU))) << 2U)));
    vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free 
        = ((0xfff7U & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free)) 
           | (8U & ((~ (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[3U] 
                                >> 0x0000002bU))) << 3U)));
    vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free 
        = ((0xffefU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free)) 
           | (0x00000010U & ((~ (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[4U] 
                                         >> 0x0000002bU))) 
                             << 4U)));
    vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free 
        = ((0xffdfU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free)) 
           | (0x00000020U & ((~ (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[5U] 
                                         >> 0x0000002bU))) 
                             << 5U)));
    vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free 
        = ((0xffbfU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free)) 
           | (0x00000040U & ((~ (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[6U] 
                                         >> 0x0000002bU))) 
                             << 6U)));
    vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free 
        = ((0xff7fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free)) 
           | (0x00000080U & ((~ (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[7U] 
                                         >> 0x0000002bU))) 
                             << 7U)));
    vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free 
        = ((0xfeffU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free)) 
           | (0x00000100U & ((~ (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[8U] 
                                         >> 0x0000002bU))) 
                             << 8U)));
    vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free 
        = ((0xfdffU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free)) 
           | (0x00000200U & ((~ (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[9U] 
                                         >> 0x0000002bU))) 
                             << 9U)));
    vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free 
        = ((0xfbffU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free)) 
           | (0x00000400U & ((~ (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[10U] 
                                         >> 0x0000002bU))) 
                             << 0x0000000aU)));
    vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free 
        = ((0xf7ffU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free)) 
           | (0x00000800U & ((~ (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[11U] 
                                         >> 0x0000002bU))) 
                             << 0x0000000bU)));
    vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free 
        = ((0xefffU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free)) 
           | (0x00001000U & ((~ (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[12U] 
                                         >> 0x0000002bU))) 
                             << 0x0000000cU)));
    vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free 
        = ((0xdfffU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free)) 
           | (0x00002000U & ((~ (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[13U] 
                                         >> 0x0000002bU))) 
                             << 0x0000000dU)));
    vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free 
        = ((0xbfffU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free)) 
           | (0x00004000U & ((~ (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[14U] 
                                         >> 0x0000002bU))) 
                             << 0x0000000eU)));
    vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free 
        = ((0x7fffU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free)) 
           | (0x00008000U & ((~ (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[15U] 
                                         >> 0x0000002bU))) 
                             << 0x0000000fU)));
    vlSelfRef.tb_load_data_queue__DOT__ldq_full_o = 
        (1U & (~ (0U != (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free))));
    vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq_alloc_idx = 0U;
    vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found = 0U;
    if ((1U & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free))) {
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq_alloc_idx = 0U;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free) 
                >> 1U) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found))))) {
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq_alloc_idx = 1U;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free) 
                >> 2U) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found))))) {
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq_alloc_idx = 2U;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free) 
                >> 3U) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found))))) {
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq_alloc_idx = 3U;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free) 
                >> 4U) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found))))) {
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq_alloc_idx = 4U;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free) 
                >> 5U) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found))))) {
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq_alloc_idx = 5U;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free) 
                >> 6U) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found))))) {
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq_alloc_idx = 6U;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free) 
                >> 7U) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found))))) {
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq_alloc_idx = 7U;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free) 
                >> 8U) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found))))) {
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq_alloc_idx = 8U;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free) 
                >> 9U) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found))))) {
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq_alloc_idx = 9U;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free) 
                >> 0x0aU) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found))))) {
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq_alloc_idx = 0x0aU;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free) 
                >> 0x0bU) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found))))) {
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq_alloc_idx = 0x0bU;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free) 
                >> 0x0cU) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found))))) {
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq_alloc_idx = 0x0cU;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free) 
                >> 0x0dU) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found))))) {
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq_alloc_idx = 0x0dU;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free) 
                >> 0x0eU) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found))))) {
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq_alloc_idx = 0x0eU;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found = 1U;
    }
    if ((IData)((((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_free) 
                  >> 0x0000000fU) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found))))) {
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq_alloc_idx = 0x0fU;
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__alloc_idx_found = 1U;
    }
    vlSelfRef.tb_load_data_queue__DOT__issue_vld_o = 0U;
    vlSelfRef.tb_load_data_queue__DOT__dut__DOT__issue_idx = 0U;
    vlSelfRef.tb_load_data_queue__DOT__issue_entry_o = 0ULL;
    if (vlSelfRef.tb_load_data_queue__DOT__issue_en_i) {
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready 
            = ((0xfffeU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready)) 
               | (1U & ((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[0U] 
                                 >> 0x0000002bU)) & (IData)(
                                                            (vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[0U] 
                                                             >> 0x0000002aU)))));
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready 
            = ((0xfffdU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready)) 
               | (2U & (((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[1U] 
                                  >> 0x0000002bU)) 
                         & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[1U] 
                                    >> 0x0000002aU))) 
                        << 1U)));
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready 
            = ((0xfffbU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready)) 
               | (4U & (((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[2U] 
                                  >> 0x0000002bU)) 
                         & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[2U] 
                                    >> 0x0000002aU))) 
                        << 2U)));
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready 
            = ((0xfff7U & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready)) 
               | (8U & (((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[3U] 
                                  >> 0x0000002bU)) 
                         & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[3U] 
                                    >> 0x0000002aU))) 
                        << 3U)));
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready 
            = ((0xffefU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready)) 
               | (0x00000010U & (((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[4U] 
                                           >> 0x0000002bU)) 
                                  & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[4U] 
                                             >> 0x0000002aU))) 
                                 << 4U)));
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready 
            = ((0xffdfU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready)) 
               | (0x00000020U & (((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[5U] 
                                           >> 0x0000002bU)) 
                                  & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[5U] 
                                             >> 0x0000002aU))) 
                                 << 5U)));
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready 
            = ((0xffbfU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready)) 
               | (0x00000040U & (((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[6U] 
                                           >> 0x0000002bU)) 
                                  & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[6U] 
                                             >> 0x0000002aU))) 
                                 << 6U)));
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready 
            = ((0xff7fU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready)) 
               | (0x00000080U & (((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[7U] 
                                           >> 0x0000002bU)) 
                                  & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[7U] 
                                             >> 0x0000002aU))) 
                                 << 7U)));
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready 
            = ((0xfeffU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready)) 
               | (0x00000100U & (((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[8U] 
                                           >> 0x0000002bU)) 
                                  & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[8U] 
                                             >> 0x0000002aU))) 
                                 << 8U)));
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready 
            = ((0xfdffU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready)) 
               | (0x00000200U & (((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[9U] 
                                           >> 0x0000002bU)) 
                                  & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[9U] 
                                             >> 0x0000002aU))) 
                                 << 9U)));
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready 
            = ((0xfbffU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready)) 
               | (0x00000400U & (((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[10U] 
                                           >> 0x0000002bU)) 
                                  & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[10U] 
                                             >> 0x0000002aU))) 
                                 << 0x0000000aU)));
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready 
            = ((0xf7ffU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready)) 
               | (0x00000800U & (((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[11U] 
                                           >> 0x0000002bU)) 
                                  & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[11U] 
                                             >> 0x0000002aU))) 
                                 << 0x0000000bU)));
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready 
            = ((0xefffU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready)) 
               | (0x00001000U & (((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[12U] 
                                           >> 0x0000002bU)) 
                                  & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[12U] 
                                             >> 0x0000002aU))) 
                                 << 0x0000000cU)));
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready 
            = ((0xdfffU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready)) 
               | (0x00002000U & (((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[13U] 
                                           >> 0x0000002bU)) 
                                  & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[13U] 
                                             >> 0x0000002aU))) 
                                 << 0x0000000dU)));
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready 
            = ((0xbfffU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready)) 
               | (0x00004000U & (((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[14U] 
                                           >> 0x0000002bU)) 
                                  & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[14U] 
                                             >> 0x0000002aU))) 
                                 << 0x0000000eU)));
        vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready 
            = ((0x7fffU & (IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready)) 
               | (0x00008000U & (((IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[15U] 
                                           >> 0x0000002bU)) 
                                  & (IData)((vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[15U] 
                                             >> 0x0000002aU))) 
                                 << 0x0000000fU)));
        if ((1U & ((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready) 
                   & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__issue_vld_o))))) {
            vlSelfRef.tb_load_data_queue__DOT__dut__DOT__issue_idx = 0U;
            vlSelfRef.tb_load_data_queue__DOT__issue_vld_o = 1U;
            vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                = vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[0U];
        }
        if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready) 
                    >> 1U) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__issue_vld_o))))) {
            vlSelfRef.tb_load_data_queue__DOT__dut__DOT__issue_idx = 1U;
            vlSelfRef.tb_load_data_queue__DOT__issue_vld_o = 1U;
            vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                = vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[1U];
        }
        if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready) 
                    >> 2U) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__issue_vld_o))))) {
            vlSelfRef.tb_load_data_queue__DOT__dut__DOT__issue_idx = 2U;
            vlSelfRef.tb_load_data_queue__DOT__issue_vld_o = 1U;
            vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                = vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[2U];
        }
        if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready) 
                    >> 3U) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__issue_vld_o))))) {
            vlSelfRef.tb_load_data_queue__DOT__dut__DOT__issue_idx = 3U;
            vlSelfRef.tb_load_data_queue__DOT__issue_vld_o = 1U;
            vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                = vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[3U];
        }
        if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready) 
                    >> 4U) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__issue_vld_o))))) {
            vlSelfRef.tb_load_data_queue__DOT__dut__DOT__issue_idx = 4U;
            vlSelfRef.tb_load_data_queue__DOT__issue_vld_o = 1U;
            vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                = vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[4U];
        }
        if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready) 
                    >> 5U) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__issue_vld_o))))) {
            vlSelfRef.tb_load_data_queue__DOT__dut__DOT__issue_idx = 5U;
            vlSelfRef.tb_load_data_queue__DOT__issue_vld_o = 1U;
            vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                = vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[5U];
        }
        if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready) 
                    >> 6U) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__issue_vld_o))))) {
            vlSelfRef.tb_load_data_queue__DOT__dut__DOT__issue_idx = 6U;
            vlSelfRef.tb_load_data_queue__DOT__issue_vld_o = 1U;
            vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                = vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[6U];
        }
        if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready) 
                    >> 7U) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__issue_vld_o))))) {
            vlSelfRef.tb_load_data_queue__DOT__dut__DOT__issue_idx = 7U;
            vlSelfRef.tb_load_data_queue__DOT__issue_vld_o = 1U;
            vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                = vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[7U];
        }
        if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready) 
                    >> 8U) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__issue_vld_o))))) {
            vlSelfRef.tb_load_data_queue__DOT__dut__DOT__issue_idx = 8U;
            vlSelfRef.tb_load_data_queue__DOT__issue_vld_o = 1U;
            vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                = vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[8U];
        }
        if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready) 
                    >> 9U) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__issue_vld_o))))) {
            vlSelfRef.tb_load_data_queue__DOT__dut__DOT__issue_idx = 9U;
            vlSelfRef.tb_load_data_queue__DOT__issue_vld_o = 1U;
            vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                = vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[9U];
        }
        if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready) 
                    >> 0x0aU) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__issue_vld_o))))) {
            vlSelfRef.tb_load_data_queue__DOT__dut__DOT__issue_idx = 0x0aU;
            vlSelfRef.tb_load_data_queue__DOT__issue_vld_o = 1U;
            vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                = vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[10U];
        }
        if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready) 
                    >> 0x0bU) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__issue_vld_o))))) {
            vlSelfRef.tb_load_data_queue__DOT__dut__DOT__issue_idx = 0x0bU;
            vlSelfRef.tb_load_data_queue__DOT__issue_vld_o = 1U;
            vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                = vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[11U];
        }
        if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready) 
                    >> 0x0cU) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__issue_vld_o))))) {
            vlSelfRef.tb_load_data_queue__DOT__dut__DOT__issue_idx = 0x0cU;
            vlSelfRef.tb_load_data_queue__DOT__issue_vld_o = 1U;
            vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                = vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[12U];
        }
        if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready) 
                    >> 0x0dU) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__issue_vld_o))))) {
            vlSelfRef.tb_load_data_queue__DOT__dut__DOT__issue_idx = 0x0dU;
            vlSelfRef.tb_load_data_queue__DOT__issue_vld_o = 1U;
            vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                = vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[13U];
        }
        if ((1U & (((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready) 
                    >> 0x0eU) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__issue_vld_o))))) {
            vlSelfRef.tb_load_data_queue__DOT__dut__DOT__issue_idx = 0x0eU;
            vlSelfRef.tb_load_data_queue__DOT__issue_vld_o = 1U;
            vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                = vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[14U];
        }
        if ((IData)((((IData)(vlSelfRef.tb_load_data_queue__DOT__dut__DOT__entries_ready) 
                      >> 0x0000000fU) & (~ (IData)(vlSelfRef.tb_load_data_queue__DOT__issue_vld_o))))) {
            vlSelfRef.tb_load_data_queue__DOT__dut__DOT__issue_idx = 0x0fU;
            vlSelfRef.tb_load_data_queue__DOT__issue_vld_o = 1U;
            vlSelfRef.tb_load_data_queue__DOT__issue_entry_o 
                = vlSelfRef.tb_load_data_queue__DOT__dut__DOT__ldq[15U];
        }
    }
}

void Vtb_load_data_queue___024root___eval_nba(Vtb_load_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___eval_nba\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_load_data_queue___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

void Vtb_load_data_queue___024root___timing_ready(Vtb_load_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___timing_ready\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready("@(negedge tb_load_data_queue.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h59db1ecf__0.ready("@(posedge tb_load_data_queue.clk)");
    }
}

void Vtb_load_data_queue___024root___timing_resume(Vtb_load_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___timing_resume\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h59db1fa3__0.moveToResumeQueue(
                                                          "@(negedge tb_load_data_queue.clk)");
    vlSelfRef.__VtrigSched_h59db1ecf__0.moveToResumeQueue(
                                                          "@(posedge tb_load_data_queue.clk)");
    vlSelfRef.__VtrigSched_h59db1fa3__0.resume("@(negedge tb_load_data_queue.clk)");
    vlSelfRef.__VtrigSched_h59db1ecf__0.resume("@(posedge tb_load_data_queue.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_load_data_queue___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_load_data_queue___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_load_data_queue___024root___eval_phase__act(Vtb_load_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___eval_phase__act\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_load_data_queue___024root___eval_triggers_vec__act(vlSelf);
    Vtb_load_data_queue___024root___timing_ready(vlSelf);
    Vtb_load_data_queue___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_load_data_queue___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_load_data_queue___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_load_data_queue___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_load_data_queue___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_load_data_queue___024root___eval_phase__inact(Vtb_load_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___eval_phase__inact\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("sim/tb_load_data_queue.sv", 6, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_load_data_queue___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_load_data_queue___024root___eval_phase__nba(Vtb_load_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___eval_phase__nba\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_load_data_queue___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_load_data_queue___024root___eval_nba(vlSelf);
        Vtb_load_data_queue___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_load_data_queue___024root___eval(Vtb_load_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___eval\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_load_data_queue___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("sim/tb_load_data_queue.sv", 6, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("sim/tb_load_data_queue.sv", 6, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_load_data_queue___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("sim/tb_load_data_queue.sv", 6, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_load_data_queue___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_load_data_queue___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_load_data_queue___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_load_data_queue___024root____VbeforeTrig_h59db1fa3__0(Vtb_load_data_queue___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root____VbeforeTrig_h59db1fa3__0\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_load_data_queue__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_load_data_queue__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.tb_load_data_queue__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_load_data_queue__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_load_data_queue__DOT__clk__0 
        = vlSelfRef.tb_load_data_queue__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h59db1ecf__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_load_data_queue___024root____VbeforeTrig_h59db1ecf__0(Vtb_load_data_queue___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root____VbeforeTrig_h59db1ecf__0\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_load_data_queue__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_load_data_queue__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.tb_load_data_queue__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_load_data_queue__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_load_data_queue__DOT__clk__0 
        = vlSelfRef.tb_load_data_queue__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h59db1ecf__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h59db1fa3__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_load_data_queue___024root___eval_debug_assertions(Vtb_load_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___eval_debug_assertions\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
