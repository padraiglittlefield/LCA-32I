// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_store_data_queue.h for the primary calling header

#include "Vtb_store_data_queue__pch.h"

VL_ATTR_COLD void Vtb_store_data_queue___024root___eval_initial__TOP(Vtb_store_data_queue___024root* vlSelf);
VlCoroutine Vtb_store_data_queue___024root___eval_initial__TOP__Vtiming__0(Vtb_store_data_queue___024root* vlSelf);
VlCoroutine Vtb_store_data_queue___024root___eval_initial__TOP__Vtiming__1(Vtb_store_data_queue___024root* vlSelf);

void Vtb_store_data_queue___024root___eval_initial(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___eval_initial\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_store_data_queue___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_store_data_queue___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_store_data_queue___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_store_data_queue___024root___eval_initial__TOP__Vtiming__0(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "sim/tb_store_data_queue.sv", 
                                             21);
        vlSelfRef.tb_store_data_queue__DOT__clk = 1U;
        vlSelfRef.tb_store_data_queue__DOT__cycle_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__cycle_count);
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "sim/tb_store_data_queue.sv", 
                                             23);
        vlSelfRef.tb_store_data_queue__DOT__clk = 0U;
    }
    co_return;
}

void Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(Vtb_store_data_queue___024root* vlSelf, const char* __VeventDescription);
void Vtb_store_data_queue___024root____VbeforeTrig_h142a2e2e__0(Vtb_store_data_queue___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_store_data_queue___024root___eval_initial__TOP__Vtiming__1(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_store_data_queue__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_store_data_queue__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*0:0*/ __Vtask_tb_store_data_queue__DOT__check_assertion__4__condition;
    __Vtask_tb_store_data_queue__DOT__check_assertion__4__condition = 0;
    CData/*0:0*/ __Vtask_tb_store_data_queue__DOT__check_assertion__5__condition;
    __Vtask_tb_store_data_queue__DOT__check_assertion__5__condition = 0;
    CData/*3:0*/ __Vtask_tb_store_data_queue__DOT__update_addr__7__addr_ldq_idx;
    __Vtask_tb_store_data_queue__DOT__update_addr__7__addr_ldq_idx = 0;
    IData/*31:0*/ __Vtask_tb_store_data_queue__DOT__update_addr__7__addr;
    __Vtask_tb_store_data_queue__DOT__update_addr__7__addr = 0;
    IData/*31:0*/ __Vtask_tb_store_data_queue__DOT__update_addr__7__data;
    __Vtask_tb_store_data_queue__DOT__update_addr__7__data = 0;
    CData/*0:0*/ __Vtask_tb_store_data_queue__DOT__check_assertion__8__condition;
    __Vtask_tb_store_data_queue__DOT__check_assertion__8__condition = 0;
    CData/*0:0*/ __Vtask_tb_store_data_queue__DOT__check_assertion__9__condition;
    __Vtask_tb_store_data_queue__DOT__check_assertion__9__condition = 0;
    CData/*0:0*/ __Vtask_tb_store_data_queue__DOT__check_assertion__10__condition;
    __Vtask_tb_store_data_queue__DOT__check_assertion__10__condition = 0;
    CData/*3:0*/ __Vtask_tb_store_data_queue__DOT__commit_store__12__sdq_idx;
    __Vtask_tb_store_data_queue__DOT__commit_store__12__sdq_idx = 0;
    CData/*0:0*/ __Vtask_tb_store_data_queue__DOT__check_assertion__13__condition;
    __Vtask_tb_store_data_queue__DOT__check_assertion__13__condition = 0;
    CData/*0:0*/ __Vtask_tb_store_data_queue__DOT__check_assertion__14__condition;
    __Vtask_tb_store_data_queue__DOT__check_assertion__14__condition = 0;
    CData/*0:0*/ __Vtask_tb_store_data_queue__DOT__check_assertion__15__condition;
    __Vtask_tb_store_data_queue__DOT__check_assertion__15__condition = 0;
    CData/*0:0*/ __Vtask_tb_store_data_queue__DOT__check_assertion__16__condition;
    __Vtask_tb_store_data_queue__DOT__check_assertion__16__condition = 0;
    IData/*31:0*/ __Vtask_tb_store_data_queue__DOT__test_fill__18__unnamedblk1__DOT__i;
    __Vtask_tb_store_data_queue__DOT__test_fill__18__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_store_data_queue__DOT__check_assertion__20__condition;
    __Vtask_tb_store_data_queue__DOT__check_assertion__20__condition = 0;
    IData/*31:0*/ __Vtask_tb_store_data_queue__DOT__test_empty__21__unnamedblk2__DOT__i;
    __Vtask_tb_store_data_queue__DOT__test_empty__21__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_store_data_queue__DOT__test_empty__21__unnamedblk3__DOT__i;
    __Vtask_tb_store_data_queue__DOT__test_empty__21__unnamedblk3__DOT__i = 0;
    CData/*3:0*/ __Vtask_tb_store_data_queue__DOT__update_addr__22__addr_ldq_idx;
    __Vtask_tb_store_data_queue__DOT__update_addr__22__addr_ldq_idx = 0;
    IData/*31:0*/ __Vtask_tb_store_data_queue__DOT__update_addr__22__addr;
    __Vtask_tb_store_data_queue__DOT__update_addr__22__addr = 0;
    IData/*31:0*/ __Vtask_tb_store_data_queue__DOT__update_addr__22__data;
    __Vtask_tb_store_data_queue__DOT__update_addr__22__data = 0;
    CData/*3:0*/ __Vtask_tb_store_data_queue__DOT__commit_store__23__sdq_idx;
    __Vtask_tb_store_data_queue__DOT__commit_store__23__sdq_idx = 0;
    CData/*3:0*/ __Vtask_tb_store_data_queue__DOT__update_addr__27__addr_ldq_idx;
    __Vtask_tb_store_data_queue__DOT__update_addr__27__addr_ldq_idx = 0;
    IData/*31:0*/ __Vtask_tb_store_data_queue__DOT__update_addr__27__addr;
    __Vtask_tb_store_data_queue__DOT__update_addr__27__addr = 0;
    IData/*31:0*/ __Vtask_tb_store_data_queue__DOT__update_addr__27__data;
    __Vtask_tb_store_data_queue__DOT__update_addr__27__data = 0;
    IData/*31:0*/ __Vtask_tb_store_data_queue__DOT__load_lookup__28__addr;
    __Vtask_tb_store_data_queue__DOT__load_lookup__28__addr = 0;
    CData/*3:0*/ __Vtask_tb_store_data_queue__DOT__load_lookup__28__sdq_marker;
    __Vtask_tb_store_data_queue__DOT__load_lookup__28__sdq_marker = 0;
    CData/*0:0*/ __Vtask_tb_store_data_queue__DOT__check_assertion__29__condition;
    __Vtask_tb_store_data_queue__DOT__check_assertion__29__condition = 0;
    IData/*31:0*/ __Vtask_tb_store_data_queue__DOT__load_lookup__30__addr;
    __Vtask_tb_store_data_queue__DOT__load_lookup__30__addr = 0;
    CData/*3:0*/ __Vtask_tb_store_data_queue__DOT__load_lookup__30__sdq_marker;
    __Vtask_tb_store_data_queue__DOT__load_lookup__30__sdq_marker = 0;
    CData/*0:0*/ __Vtask_tb_store_data_queue__DOT__check_assertion__31__condition;
    __Vtask_tb_store_data_queue__DOT__check_assertion__31__condition = 0;
    CData/*0:0*/ __Vtask_tb_store_data_queue__DOT__check_assertion__32__condition;
    __Vtask_tb_store_data_queue__DOT__check_assertion__32__condition = 0;
    IData/*31:0*/ __Vtask_tb_store_data_queue__DOT__load_lookup__33__addr;
    __Vtask_tb_store_data_queue__DOT__load_lookup__33__addr = 0;
    CData/*3:0*/ __Vtask_tb_store_data_queue__DOT__load_lookup__33__sdq_marker;
    __Vtask_tb_store_data_queue__DOT__load_lookup__33__sdq_marker = 0;
    CData/*0:0*/ __Vtask_tb_store_data_queue__DOT__check_assertion__34__condition;
    __Vtask_tb_store_data_queue__DOT__check_assertion__34__condition = 0;
    IData/*31:0*/ __Vtask_tb_store_data_queue__DOT__load_lookup__35__addr;
    __Vtask_tb_store_data_queue__DOT__load_lookup__35__addr = 0;
    CData/*3:0*/ __Vtask_tb_store_data_queue__DOT__load_lookup__35__sdq_marker;
    __Vtask_tb_store_data_queue__DOT__load_lookup__35__sdq_marker = 0;
    CData/*0:0*/ __Vtask_tb_store_data_queue__DOT__check_assertion__36__condition;
    __Vtask_tb_store_data_queue__DOT__check_assertion__36__condition = 0;
    // Body
    vlSelfRef.tb_store_data_queue__DOT__clk = 0U;
    vlSelfRef.tb_store_data_queue__DOT__rst = 0U;
    vlSelfRef.tb_store_data_queue__DOT__disp_vld_i = 0U;
    vlSelfRef.tb_store_data_queue__DOT__exec_store_data_i = 0U;
    vlSelfRef.tb_store_data_queue__DOT__exec_vld_i = 0U;
    vlSelfRef.tb_store_data_queue__DOT__exec_sdq_idx_i = 0U;
    vlSelfRef.tb_store_data_queue__DOT__exec_addr_i = 0U;
    vlSelfRef.tb_store_data_queue__DOT__cmit_vld_i = 0U;
    vlSelfRef.tb_store_data_queue__DOT__cmit_idx_i = 0U;
    vlSelfRef.tb_store_data_queue__DOT__ld_vld_i = 0U;
    vlSelfRef.tb_store_data_queue__DOT__ld_addr_i = 0U;
    vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i = 0U;
    vlSelfRef.tb_store_data_queue__DOT__exec_rob_idx_i = 0U;
    vlSelfRef.tb_store_data_queue__DOT__issue_en_i = 1U;
    vlSelfRef.tb_store_data_queue__DOT__issue_ack_i = 0U;
    VL_WRITEF_NX("=== SDQ Testbench ===\n",0);
    VL_WRITEF_NX("\n[RESET] Resetting DUT\n",0);
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         125);
    vlSelfRef.tb_store_data_queue__DOT__rst = 1U;
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         127);
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         128);
    vlSelfRef.tb_store_data_queue__DOT__rst = 0U;
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         130);
    VL_WRITEF_NX("[RESET] Reset complete\n\n",0);
    vlSelfRef.tb_store_data_queue__DOT__disp_vld_i = 1U;
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         143);
    vlSelfRef.tb_store_data_queue__DOT__disp_vld_i = 0U;
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         145);
    __Vtask_tb_store_data_queue__DOT__check_assertion__4__condition 
        = (1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][2U] 
                 >> 7U));
    vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__4__test_name = "First entry should be valid"s;
    if (__Vtask_tb_store_data_queue__DOT__check_assertion__4__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__4__test_name));
        vlSelfRef.tb_store_data_queue__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__4__test_name));
        vlSelfRef.tb_store_data_queue__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__fail_count);
    }
    __Vtask_tb_store_data_queue__DOT__check_assertion__5__condition 
        = (0U == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][2U] 
                   << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][1U] 
                                      >> 7U)));
    vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__5__test_name = "First entry data should be unknown until execute"s;
    if (__Vtask_tb_store_data_queue__DOT__check_assertion__5__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__5__test_name));
        vlSelfRef.tb_store_data_queue__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__5__test_name));
        vlSelfRef.tb_store_data_queue__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__fail_count);
    }
    __Vtask_tb_store_data_queue__DOT__update_addr__7__data = 0x00000015U;
    __Vtask_tb_store_data_queue__DOT__update_addr__7__addr = 0x000013f4U;
    __Vtask_tb_store_data_queue__DOT__update_addr__7__addr_ldq_idx 
        = (0x0000000fU & (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr));
    vlSelfRef.tb_store_data_queue__DOT__exec_vld_i = 1U;
    vlSelfRef.tb_store_data_queue__DOT__exec_sdq_idx_i 
        = __Vtask_tb_store_data_queue__DOT__update_addr__7__addr_ldq_idx;
    vlSelfRef.tb_store_data_queue__DOT__exec_addr_i 
        = __Vtask_tb_store_data_queue__DOT__update_addr__7__addr;
    vlSelfRef.tb_store_data_queue__DOT__exec_store_data_i 
        = __Vtask_tb_store_data_queue__DOT__update_addr__7__data;
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         160);
    vlSelfRef.tb_store_data_queue__DOT__exec_vld_i = 0U;
    vlSelfRef.tb_store_data_queue__DOT__exec_store_data_i = 0U;
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         163);
    __Vtask_tb_store_data_queue__DOT__check_assertion__8__condition 
        = (1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][1U] 
                 >> 6U));
    vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__8__test_name = "First entry should have valid addr"s;
    if (__Vtask_tb_store_data_queue__DOT__check_assertion__8__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__8__test_name));
        vlSelfRef.tb_store_data_queue__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__8__test_name));
        vlSelfRef.tb_store_data_queue__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__fail_count);
    }
    __Vtask_tb_store_data_queue__DOT__check_assertion__9__condition 
        = (0x000013f4U == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][1U] 
                            << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][0U] 
                                               >> 6U)));
    vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__9__test_name = "First entry should have correct addr"s;
    if (__Vtask_tb_store_data_queue__DOT__check_assertion__9__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__9__test_name));
        vlSelfRef.tb_store_data_queue__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__9__test_name));
        vlSelfRef.tb_store_data_queue__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__fail_count);
    }
    __Vtask_tb_store_data_queue__DOT__check_assertion__10__condition 
        = (0x00000015U == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][2U] 
                            << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][1U] 
                                               >> 7U)));
    vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__10__test_name = "First entry should have correct data"s;
    if (__Vtask_tb_store_data_queue__DOT__check_assertion__10__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__10__test_name));
        vlSelfRef.tb_store_data_queue__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__10__test_name));
        vlSelfRef.tb_store_data_queue__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__fail_count);
    }
    __Vtask_tb_store_data_queue__DOT__commit_store__12__sdq_idx 
        = (0x0000000fU & (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr));
    vlSelfRef.tb_store_data_queue__DOT__cmit_vld_i = 1U;
    vlSelfRef.tb_store_data_queue__DOT__cmit_idx_i 
        = __Vtask_tb_store_data_queue__DOT__commit_store__12__sdq_idx;
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         174);
    vlSelfRef.tb_store_data_queue__DOT__cmit_vld_i = 0U;
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         176);
    __Vtask_tb_store_data_queue__DOT__check_assertion__13__condition 
        = (1U & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][0U] 
                 >> 5U));
    vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__13__test_name = "First entry should be committed"s;
    if (__Vtask_tb_store_data_queue__DOT__check_assertion__13__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__13__test_name));
        vlSelfRef.tb_store_data_queue__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__13__test_name));
        vlSelfRef.tb_store_data_queue__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__fail_count);
    }
    __Vtask_tb_store_data_queue__DOT__check_assertion__14__condition 
        = vlSelfRef.tb_store_data_queue__DOT__issue_vld_o;
    vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__14__test_name = "First entry should be issued"s;
    if (__Vtask_tb_store_data_queue__DOT__check_assertion__14__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__14__test_name));
        vlSelfRef.tb_store_data_queue__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__14__test_name));
        vlSelfRef.tb_store_data_queue__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__fail_count);
    }
    __Vtask_tb_store_data_queue__DOT__check_assertion__15__condition 
        = (0x00000015U == ((vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[2U] 
                            << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[1U] 
                                               >> 7U)));
    vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__15__test_name = "Issued entry should have correct data"s;
    if (__Vtask_tb_store_data_queue__DOT__check_assertion__15__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__15__test_name));
        vlSelfRef.tb_store_data_queue__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__15__test_name));
        vlSelfRef.tb_store_data_queue__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__fail_count);
    }
    __Vtask_tb_store_data_queue__DOT__check_assertion__16__condition 
        = (0x000013f4U == ((vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[1U] 
                            << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[0U] 
                                               >> 6U)));
    vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__16__test_name = "Issued entry should have correct addr"s;
    if (__Vtask_tb_store_data_queue__DOT__check_assertion__16__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__16__test_name));
        vlSelfRef.tb_store_data_queue__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__16__test_name));
        vlSelfRef.tb_store_data_queue__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[RESET] Resetting DUT\n",0);
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         125);
    vlSelfRef.tb_store_data_queue__DOT__rst = 1U;
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         127);
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         128);
    vlSelfRef.tb_store_data_queue__DOT__rst = 0U;
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         130);
    VL_WRITEF_NX("[RESET] Reset complete\n\n",0);
    __Vtask_tb_store_data_queue__DOT__test_fill__18__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_store_data_queue__DOT__test_fill__18__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000011U, __Vtask_tb_store_data_queue__DOT__test_fill__18__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_store_data_queue__DOT__disp_vld_i = 1U;
        Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                                   "@(negedge tb_store_data_queue.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_store_data_queue.clk)", 
                                                             "sim/tb_store_data_queue.sv", 
                                                             143);
        vlSelfRef.tb_store_data_queue__DOT__disp_vld_i = 0U;
        Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                                   "@(negedge tb_store_data_queue.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_store_data_queue.clk)", 
                                                             "sim/tb_store_data_queue.sv", 
                                                             145);
        __Vtask_tb_store_data_queue__DOT__test_fill__18__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_store_data_queue__DOT__test_fill__18__unnamedblk1__DOT__i);
    }
    __Vtask_tb_store_data_queue__DOT__check_assertion__20__condition 
        = (((1U & ((IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr) 
                   >> 4U)) != (1U & ((IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr) 
                                     >> 4U))) & ((0x0000000fU 
                                                  & (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr)) 
                                                 == 
                                                 (0x0000000fU 
                                                  & (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr))));
    vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__20__test_name = "SDQ should be full"s;
    if (__Vtask_tb_store_data_queue__DOT__check_assertion__20__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__20__test_name));
        vlSelfRef.tb_store_data_queue__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__20__test_name));
        vlSelfRef.tb_store_data_queue__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__fail_count);
    }
    __Vtask_tb_store_data_queue__DOT__test_empty__21__unnamedblk2__DOT__i = 0U;
    __Vtask_tb_store_data_queue__DOT__test_empty__21__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, __Vtask_tb_store_data_queue__DOT__test_empty__21__unnamedblk2__DOT__i)) {
        __Vtask_tb_store_data_queue__DOT__update_addr__22__data 
            = __Vtask_tb_store_data_queue__DOT__test_empty__21__unnamedblk2__DOT__i;
        __Vtask_tb_store_data_queue__DOT__update_addr__22__addr 
            = VL_MULS_III(32, (IData)(3U), __Vtask_tb_store_data_queue__DOT__test_empty__21__unnamedblk2__DOT__i);
        __Vtask_tb_store_data_queue__DOT__update_addr__22__addr_ldq_idx 
            = (0x0000000fU & __Vtask_tb_store_data_queue__DOT__test_empty__21__unnamedblk2__DOT__i);
        vlSelfRef.tb_store_data_queue__DOT__exec_vld_i = 1U;
        vlSelfRef.tb_store_data_queue__DOT__exec_sdq_idx_i 
            = __Vtask_tb_store_data_queue__DOT__update_addr__22__addr_ldq_idx;
        vlSelfRef.tb_store_data_queue__DOT__exec_addr_i 
            = __Vtask_tb_store_data_queue__DOT__update_addr__22__addr;
        vlSelfRef.tb_store_data_queue__DOT__exec_store_data_i 
            = __Vtask_tb_store_data_queue__DOT__update_addr__22__data;
        Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                                   "@(negedge tb_store_data_queue.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_store_data_queue.clk)", 
                                                             "sim/tb_store_data_queue.sv", 
                                                             160);
        vlSelfRef.tb_store_data_queue__DOT__exec_vld_i = 0U;
        vlSelfRef.tb_store_data_queue__DOT__exec_store_data_i = 0U;
        Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                                   "@(negedge tb_store_data_queue.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_store_data_queue.clk)", 
                                                             "sim/tb_store_data_queue.sv", 
                                                             163);
        __Vtask_tb_store_data_queue__DOT__test_empty__21__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_store_data_queue__DOT__test_empty__21__unnamedblk2__DOT__i);
    }
    __Vtask_tb_store_data_queue__DOT__test_empty__21__unnamedblk3__DOT__i = 0U;
    __Vtask_tb_store_data_queue__DOT__test_empty__21__unnamedblk3__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, __Vtask_tb_store_data_queue__DOT__test_empty__21__unnamedblk3__DOT__i)) {
        __Vtask_tb_store_data_queue__DOT__commit_store__23__sdq_idx 
            = (0x0000000fU & __Vtask_tb_store_data_queue__DOT__test_empty__21__unnamedblk3__DOT__i);
        vlSelfRef.tb_store_data_queue__DOT__cmit_vld_i = 1U;
        vlSelfRef.tb_store_data_queue__DOT__cmit_idx_i 
            = __Vtask_tb_store_data_queue__DOT__commit_store__23__sdq_idx;
        Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                                   "@(negedge tb_store_data_queue.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_store_data_queue.clk)", 
                                                             "sim/tb_store_data_queue.sv", 
                                                             174);
        vlSelfRef.tb_store_data_queue__DOT__cmit_vld_i = 0U;
        Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                                   "@(negedge tb_store_data_queue.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_store_data_queue.clk)", 
                                                             "sim/tb_store_data_queue.sv", 
                                                             176);
        __Vtask_tb_store_data_queue__DOT__test_empty__21__unnamedblk3__DOT__i 
            = ((IData)(1U) + __Vtask_tb_store_data_queue__DOT__test_empty__21__unnamedblk3__DOT__i);
    }
    VL_WRITEF_NX("\n[RESET] Resetting DUT\n",0);
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         125);
    vlSelfRef.tb_store_data_queue__DOT__rst = 1U;
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         127);
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         128);
    vlSelfRef.tb_store_data_queue__DOT__rst = 0U;
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         130);
    VL_WRITEF_NX("[RESET] Reset complete\n\n",0);
    vlSelfRef.tb_store_data_queue__DOT__disp_vld_i = 1U;
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         143);
    vlSelfRef.tb_store_data_queue__DOT__disp_vld_i = 0U;
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         145);
    __Vtask_tb_store_data_queue__DOT__update_addr__27__data = 0x000001feU;
    __Vtask_tb_store_data_queue__DOT__update_addr__27__addr = 8U;
    __Vtask_tb_store_data_queue__DOT__update_addr__27__addr_ldq_idx 
        = (0x0000000fU & (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr));
    vlSelfRef.tb_store_data_queue__DOT__exec_vld_i = 1U;
    vlSelfRef.tb_store_data_queue__DOT__exec_sdq_idx_i 
        = __Vtask_tb_store_data_queue__DOT__update_addr__27__addr_ldq_idx;
    vlSelfRef.tb_store_data_queue__DOT__exec_addr_i 
        = __Vtask_tb_store_data_queue__DOT__update_addr__27__addr;
    vlSelfRef.tb_store_data_queue__DOT__exec_store_data_i 
        = __Vtask_tb_store_data_queue__DOT__update_addr__27__data;
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         160);
    vlSelfRef.tb_store_data_queue__DOT__exec_vld_i = 0U;
    vlSelfRef.tb_store_data_queue__DOT__exec_store_data_i = 0U;
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         163);
    __Vtask_tb_store_data_queue__DOT__load_lookup__28__sdq_marker = 0U;
    __Vtask_tb_store_data_queue__DOT__load_lookup__28__addr = 8U;
    vlSelfRef.tb_store_data_queue__DOT__ld_vld_i = 1U;
    vlSelfRef.tb_store_data_queue__DOT__ld_addr_i = __Vtask_tb_store_data_queue__DOT__load_lookup__28__addr;
    vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i 
        = __Vtask_tb_store_data_queue__DOT__load_lookup__28__sdq_marker;
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         188);
    vlSelfRef.tb_store_data_queue__DOT__ld_vld_i = 0U;
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         190);
    __Vtask_tb_store_data_queue__DOT__check_assertion__29__condition 
        = (1U & (~ (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_hit_o)));
    vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__29__test_name = "Load Miss, correct addr but wrong ordering"s;
    if (__Vtask_tb_store_data_queue__DOT__check_assertion__29__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__29__test_name));
        vlSelfRef.tb_store_data_queue__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__29__test_name));
        vlSelfRef.tb_store_data_queue__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__fail_count);
    }
    __Vtask_tb_store_data_queue__DOT__load_lookup__30__sdq_marker = 1U;
    __Vtask_tb_store_data_queue__DOT__load_lookup__30__addr = 8U;
    vlSelfRef.tb_store_data_queue__DOT__ld_vld_i = 1U;
    vlSelfRef.tb_store_data_queue__DOT__ld_addr_i = __Vtask_tb_store_data_queue__DOT__load_lookup__30__addr;
    vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i 
        = __Vtask_tb_store_data_queue__DOT__load_lookup__30__sdq_marker;
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         188);
    vlSelfRef.tb_store_data_queue__DOT__ld_vld_i = 0U;
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         190);
    __Vtask_tb_store_data_queue__DOT__check_assertion__31__condition 
        = vlSelfRef.tb_store_data_queue__DOT__ld_hit_o;
    vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__31__test_name = "Load Hit, correct addr and correct ordering"s;
    if (__Vtask_tb_store_data_queue__DOT__check_assertion__31__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__31__test_name));
        vlSelfRef.tb_store_data_queue__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__31__test_name));
        vlSelfRef.tb_store_data_queue__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__fail_count);
    }
    __Vtask_tb_store_data_queue__DOT__check_assertion__32__condition 
        = (0x000001feU == vlSelfRef.tb_store_data_queue__DOT__ld_data_o);
    vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__32__test_name = "Hit results in correct data"s;
    if (__Vtask_tb_store_data_queue__DOT__check_assertion__32__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__32__test_name));
        vlSelfRef.tb_store_data_queue__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__32__test_name));
        vlSelfRef.tb_store_data_queue__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__fail_count);
    }
    __Vtask_tb_store_data_queue__DOT__load_lookup__33__sdq_marker = 1U;
    __Vtask_tb_store_data_queue__DOT__load_lookup__33__addr = 0x0000000fU;
    vlSelfRef.tb_store_data_queue__DOT__ld_vld_i = 1U;
    vlSelfRef.tb_store_data_queue__DOT__ld_addr_i = __Vtask_tb_store_data_queue__DOT__load_lookup__33__addr;
    vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i 
        = __Vtask_tb_store_data_queue__DOT__load_lookup__33__sdq_marker;
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         188);
    vlSelfRef.tb_store_data_queue__DOT__ld_vld_i = 0U;
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         190);
    __Vtask_tb_store_data_queue__DOT__check_assertion__34__condition 
        = (1U & (~ (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_hit_o)));
    vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__34__test_name = "Load Miss, wrong addr and correct ordering"s;
    if (__Vtask_tb_store_data_queue__DOT__check_assertion__34__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__34__test_name));
        vlSelfRef.tb_store_data_queue__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__34__test_name));
        vlSelfRef.tb_store_data_queue__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__fail_count);
    }
    __Vtask_tb_store_data_queue__DOT__load_lookup__35__sdq_marker = 0U;
    __Vtask_tb_store_data_queue__DOT__load_lookup__35__addr = 0x0000000fU;
    vlSelfRef.tb_store_data_queue__DOT__ld_vld_i = 1U;
    vlSelfRef.tb_store_data_queue__DOT__ld_addr_i = __Vtask_tb_store_data_queue__DOT__load_lookup__35__addr;
    vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i 
        = __Vtask_tb_store_data_queue__DOT__load_lookup__35__sdq_marker;
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         188);
    vlSelfRef.tb_store_data_queue__DOT__ld_vld_i = 0U;
    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(vlSelf, 
                                                               "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h142a2edc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_store_data_queue.clk)", 
                                                         "sim/tb_store_data_queue.sv", 
                                                         190);
    __Vtask_tb_store_data_queue__DOT__check_assertion__36__condition 
        = (1U & (~ (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_hit_o)));
    vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__36__test_name = "Load Miss, wrong addr and wrong ordering"s;
    if (__Vtask_tb_store_data_queue__DOT__check_assertion__36__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__36__test_name));
        vlSelfRef.tb_store_data_queue__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_store_data_queue__DOT__check_assertion__36__test_name));
        vlSelfRef.tb_store_data_queue__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_store_data_queue__DOT__fail_count);
    }
    tb_store_data_queue__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, tb_store_data_queue__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_store_data_queue___024root____VbeforeTrig_h142a2e2e__0(vlSelf, 
                                                                   "@(posedge tb_store_data_queue.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h142a2e2e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_store_data_queue.clk)", 
                                                             "sim/tb_store_data_queue.sv", 
                                                             292);
        tb_store_data_queue__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_store_data_queue__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    VL_WRITEF_NX("\n=== Testbench Complete ===\nTotal Tests: %0d\n",0,
                 32,(vlSelfRef.tb_store_data_queue__DOT__pass_count 
                     + vlSelfRef.tb_store_data_queue__DOT__fail_count));
    if ((0U == vlSelfRef.tb_store_data_queue__DOT__fail_count)) {
        VL_WRITEF_NX("[\033[32mALL TESTS PASSED\033[0m] %0d/%0d passed\n",0,
                     32,vlSelfRef.tb_store_data_queue__DOT__pass_count,
                     32,(vlSelfRef.tb_store_data_queue__DOT__pass_count 
                         + vlSelfRef.tb_store_data_queue__DOT__fail_count));
    } else {
        VL_WRITEF_NX("[\033[31mSOME TESTS FAILED\033[0m] %0d passed, %0d failed\n",0,
                     32,vlSelfRef.tb_store_data_queue__DOT__pass_count,
                     32,vlSelfRef.tb_store_data_queue__DOT__fail_count);
    }
    VL_FINISH_MT("sim/tb_store_data_queue.sv", 301, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

void Vtb_store_data_queue___024root___eval_triggers_vec__act(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___eval_triggers_vec__act\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.tb_store_data_queue__DOT__clk)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_store_data_queue__DOT__clk__0)) 
                                                      << 2U) 
                                                     | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_store_data_queue__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_store_data_queue__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_store_data_queue__DOT__clk__0 
        = vlSelfRef.tb_store_data_queue__DOT__clk;
}

bool Vtb_store_data_queue___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___trigger_anySet__act\n"); );
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

void Vtb_store_data_queue___024root___act_comb__TOP__0(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___act_comb__TOP__0\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_store_data_queue__DOT__dut__DOT__prev_st_addr_unresolved = 0U;
    if (vlSelfRef.tb_store_data_queue__DOT__ld_vld_i) {
        if ((((0U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i)) 
              & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][2U] 
                 >> 7U)) & (~ (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][1U] 
                               >> 6U)))) {
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT__prev_st_addr_unresolved = 1U;
        }
        if ((((1U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i)) 
              & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][2U] 
                 >> 7U)) & (~ (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][1U] 
                               >> 6U)))) {
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT__prev_st_addr_unresolved = 1U;
        }
        if ((((2U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i)) 
              & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][2U] 
                 >> 7U)) & (~ (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][1U] 
                               >> 6U)))) {
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT__prev_st_addr_unresolved = 1U;
        }
        if ((((3U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i)) 
              & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][2U] 
                 >> 7U)) & (~ (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][1U] 
                               >> 6U)))) {
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT__prev_st_addr_unresolved = 1U;
        }
        if ((((4U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i)) 
              & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][2U] 
                 >> 7U)) & (~ (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][1U] 
                               >> 6U)))) {
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT__prev_st_addr_unresolved = 1U;
        }
        if ((((5U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i)) 
              & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][2U] 
                 >> 7U)) & (~ (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][1U] 
                               >> 6U)))) {
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT__prev_st_addr_unresolved = 1U;
        }
        if ((((6U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i)) 
              & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][2U] 
                 >> 7U)) & (~ (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][1U] 
                               >> 6U)))) {
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT__prev_st_addr_unresolved = 1U;
        }
        if ((((7U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i)) 
              & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][2U] 
                 >> 7U)) & (~ (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][1U] 
                               >> 6U)))) {
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT__prev_st_addr_unresolved = 1U;
        }
        if ((((8U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i)) 
              & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][2U] 
                 >> 7U)) & (~ (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][1U] 
                               >> 6U)))) {
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT__prev_st_addr_unresolved = 1U;
        }
        if ((((9U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i)) 
              & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][2U] 
                 >> 7U)) & (~ (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][1U] 
                               >> 6U)))) {
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT__prev_st_addr_unresolved = 1U;
        }
        if ((((0x0aU < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i)) 
              & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][2U] 
                 >> 7U)) & (~ (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][1U] 
                               >> 6U)))) {
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT__prev_st_addr_unresolved = 1U;
        }
        if ((((0x0bU < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i)) 
              & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][2U] 
                 >> 7U)) & (~ (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][1U] 
                               >> 6U)))) {
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT__prev_st_addr_unresolved = 1U;
        }
        if ((((0x0cU < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i)) 
              & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][2U] 
                 >> 7U)) & (~ (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][1U] 
                               >> 6U)))) {
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT__prev_st_addr_unresolved = 1U;
        }
        if ((((0x0dU < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i)) 
              & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][2U] 
                 >> 7U)) & (~ (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][1U] 
                               >> 6U)))) {
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT__prev_st_addr_unresolved = 1U;
        }
        if ((((0x0eU < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i)) 
              & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][2U] 
                 >> 7U)) & (~ (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][1U] 
                               >> 6U)))) {
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT__prev_st_addr_unresolved = 1U;
        }
    }
    vlSelfRef.tb_store_data_queue__DOT__ld_hit_o = 0U;
    if ((0U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_hit_o = 1U;
        }
    }
    if ((1U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_hit_o = 1U;
        }
    }
    if ((2U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_hit_o = 1U;
        }
    }
    if ((3U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_hit_o = 1U;
        }
    }
    if ((4U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_hit_o = 1U;
        }
    }
    if ((5U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_hit_o = 1U;
        }
    }
    if ((6U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_hit_o = 1U;
        }
    }
    if ((7U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_hit_o = 1U;
        }
    }
    if ((8U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_hit_o = 1U;
        }
    }
    if ((9U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_hit_o = 1U;
        }
    }
    if ((0x0aU < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_hit_o = 1U;
        }
    }
    if ((0x0bU < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_hit_o = 1U;
        }
    }
    if ((0x0cU < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_hit_o = 1U;
        }
    }
    if ((0x0dU < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_hit_o = 1U;
        }
    }
    vlSelfRef.tb_store_data_queue__DOT__ld_data_o = 0U;
    if ((0U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_data_o 
                = ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][2U] 
                    << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][1U] 
                                       >> 7U));
        }
    }
    if ((1U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_data_o 
                = ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][2U] 
                    << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][1U] 
                                       >> 7U));
        }
    }
    if ((2U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_data_o 
                = ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][2U] 
                    << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][1U] 
                                       >> 7U));
        }
    }
    if ((3U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_data_o 
                = ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][2U] 
                    << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][1U] 
                                       >> 7U));
        }
    }
    if ((4U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_data_o 
                = ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][2U] 
                    << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][1U] 
                                       >> 7U));
        }
    }
    if ((5U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_data_o 
                = ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][2U] 
                    << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][1U] 
                                       >> 7U));
        }
    }
    if ((6U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_data_o 
                = ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][2U] 
                    << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][1U] 
                                       >> 7U));
        }
    }
    if ((7U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_data_o 
                = ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][2U] 
                    << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][1U] 
                                       >> 7U));
        }
    }
    if ((8U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_data_o 
                = ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][2U] 
                    << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][1U] 
                                       >> 7U));
        }
    }
    if ((9U < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_data_o 
                = ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][2U] 
                    << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][1U] 
                                       >> 7U));
        }
    }
    if ((0x0aU < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_data_o 
                = ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][2U] 
                    << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][1U] 
                                       >> 7U));
        }
    }
    if ((0x0bU < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_data_o 
                = ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][2U] 
                    << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][1U] 
                                       >> 7U));
        }
    }
    if ((0x0cU < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_data_o 
                = ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][2U] 
                    << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][1U] 
                                       >> 7U));
        }
    }
    if ((0x0dU < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_data_o 
                = ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][2U] 
                    << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][1U] 
                                       >> 7U));
        }
    }
    if ((0x0eU < (IData)(vlSelfRef.tb_store_data_queue__DOT__ld_sdq_marker_i))) {
        if (((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][1U] 
              >> 6U) & (vlSelfRef.tb_store_data_queue__DOT__ld_addr_i 
                        == ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][1U] 
                             << 0x0000001aU) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][0U] 
                                                >> 6U))))) {
            vlSelfRef.tb_store_data_queue__DOT__ld_hit_o = 1U;
            vlSelfRef.tb_store_data_queue__DOT__ld_data_o 
                = ((vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][2U] 
                    << 0x00000019U) | (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][1U] 
                                       >> 7U));
        }
    }
    vlSelfRef.tb_store_data_queue__DOT__issue_vld_o 
        = ((((IData)(vlSelfRef.tb_store_data_queue__DOT__issue_en_i) 
             & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq
                [((0x10U >= (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr))
                   ? (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr)
                   : 0U)][2U] >> 7U)) & (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq
                                         [((0x10U >= (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr))
                                            ? (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr)
                                            : 0U)][1U] 
                                         >> 6U)) & 
           (vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq
            [((0x10U >= (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr))
               ? (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr)
               : 0U)][0U] >> 5U));
    if (vlSelfRef.tb_store_data_queue__DOT__issue_vld_o) {
        vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[0U] 
            = vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq
            [((0x10U >= (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr))
               ? (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr)
               : 0U)][0U];
        vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[1U] 
            = vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq
            [((0x10U >= (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr))
               ? (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr)
               : 0U)][1U];
        vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[2U] 
            = vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq
            [((0x10U >= (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr))
               ? (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr)
               : 0U)][2U];
    } else {
        vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[0U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[1U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__issue_entry_o[2U] = 0U;
    }
}

void Vtb_store_data_queue___024root___eval_act(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___eval_act\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_store_data_queue___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

void Vtb_store_data_queue___024root___nba_sequent__TOP__0(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___nba_sequent__TOP__0\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__tb_store_data_queue__DOT__dut__DOT__head_ptr;
    __Vdly__tb_store_data_queue__DOT__dut__DOT__head_ptr = 0;
    CData/*4:0*/ __Vdly__tb_store_data_queue__DOT__dut__DOT__tail_ptr;
    __Vdly__tb_store_data_queue__DOT__dut__DOT__tail_ptr = 0;
    CData/*0:0*/ __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v0;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v16;
    __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v16 = 0;
    CData/*4:0*/ __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v16;
    __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v16;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v16 = 0;
    IData/*31:0*/ __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v17;
    __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v17 = 0;
    CData/*4:0*/ __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v17;
    __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v17 = 0;
    CData/*0:0*/ __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v17;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v17 = 0;
    CData/*0:0*/ __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v18;
    __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v18 = 0;
    CData/*4:0*/ __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v18;
    __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v18 = 0;
    CData/*0:0*/ __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v18;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v18 = 0;
    IData/*31:0*/ __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v19;
    __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v19 = 0;
    CData/*4:0*/ __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v19;
    __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v19 = 0;
    CData/*0:0*/ __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v19;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v19 = 0;
    CData/*0:0*/ __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v20;
    __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v20 = 0;
    CData/*4:0*/ __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v20;
    __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v20 = 0;
    CData/*0:0*/ __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v20;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v20 = 0;
    CData/*0:0*/ __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v21;
    __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v21 = 0;
    CData/*4:0*/ __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v21;
    __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v21 = 0;
    CData/*0:0*/ __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v21;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v21 = 0;
    CData/*3:0*/ __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v22;
    __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v22 = 0;
    CData/*4:0*/ __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v22;
    __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v22 = 0;
    CData/*0:0*/ __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v22;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v22 = 0;
    CData/*4:0*/ __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v23;
    __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v23 = 0;
    CData/*0:0*/ __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v23;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v23 = 0;
    CData/*4:0*/ __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v24;
    __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v24 = 0;
    CData/*0:0*/ __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v24;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v24 = 0;
    IData/*31:0*/ __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v25;
    __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v25 = 0;
    CData/*4:0*/ __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v25;
    __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v25 = 0;
    CData/*0:0*/ __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v25;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v25 = 0;
    IData/*31:0*/ __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v26;
    __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v26 = 0;
    CData/*4:0*/ __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v26;
    __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v26 = 0;
    CData/*0:0*/ __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v26;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v26 = 0;
    CData/*3:0*/ __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v27;
    __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v27 = 0;
    CData/*4:0*/ __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v27;
    __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v27 = 0;
    CData/*0:0*/ __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v27;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v27 = 0;
    // Body
    __Vdly__tb_store_data_queue__DOT__dut__DOT__head_ptr 
        = vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr;
    __Vdly__tb_store_data_queue__DOT__dut__DOT__tail_ptr 
        = vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v0 = 0U;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v16 = 0U;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v17 = 0U;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v18 = 0U;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v19 = 0U;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v20 = 0U;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v21 = 0U;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v22 = 0U;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v23 = 0U;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v24 = 0U;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v25 = 0U;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v26 = 0U;
    __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v27 = 0U;
    if (vlSelfRef.tb_store_data_queue__DOT__rst) {
        __Vdly__tb_store_data_queue__DOT__dut__DOT__head_ptr = 0U;
        __Vdly__tb_store_data_queue__DOT__dut__DOT__tail_ptr = 0U;
        __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v0 = 1U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__last_cmit_idx_reg = 0U;
    } else {
        if (vlSelfRef.tb_store_data_queue__DOT__issue_ack_i) {
            __Vdly__tb_store_data_queue__DOT__dut__DOT__head_ptr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr)));
        }
        if (((IData)(vlSelfRef.tb_store_data_queue__DOT__disp_vld_i) 
             & (~ (IData)(vlSelfRef.tb_store_data_queue__DOT__sdq_full_o)))) {
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT____Vlvbound_h2a03438d__0 = 1U;
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT____Vlvbound_h29babf9d__0 = 0U;
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT____Vlvbound_h2a031b86__0 = 0U;
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT____Vlvbound_h29bad768__0 = 0U;
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT____Vlvbound_h2a0334bc__0 = 0U;
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT____Vlvbound_h2a0334fb__0 = 0U;
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT____Vlvbound_h97a0456c__0 = 0U;
            if ((0x10U >= (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr))) {
                __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v16 
                    = vlSelfRef.tb_store_data_queue__DOT__dut__DOT____Vlvbound_h2a03438d__0;
                __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v16 
                    = vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr;
                __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v16 = 1U;
                __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v17 
                    = vlSelfRef.tb_store_data_queue__DOT__dut__DOT____Vlvbound_h29babf9d__0;
                __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v17 
                    = vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr;
                __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v17 = 1U;
                __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v18 
                    = vlSelfRef.tb_store_data_queue__DOT__dut__DOT____Vlvbound_h2a031b86__0;
                __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v18 
                    = vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr;
                __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v18 = 1U;
                __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v19 
                    = vlSelfRef.tb_store_data_queue__DOT__dut__DOT____Vlvbound_h29bad768__0;
                __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v19 
                    = vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr;
                __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v19 = 1U;
                __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v20 
                    = vlSelfRef.tb_store_data_queue__DOT__dut__DOT____Vlvbound_h2a0334bc__0;
                __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v20 
                    = vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr;
                __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v20 = 1U;
                __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v21 
                    = vlSelfRef.tb_store_data_queue__DOT__dut__DOT____Vlvbound_h2a0334fb__0;
                __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v21 
                    = vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr;
                __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v21 = 1U;
                __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v22 
                    = vlSelfRef.tb_store_data_queue__DOT__dut__DOT____Vlvbound_h97a0456c__0;
                __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v22 
                    = vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr;
                __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v22 = 1U;
            }
            __Vdly__tb_store_data_queue__DOT__dut__DOT__tail_ptr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr)));
        } else {
            __Vdly__tb_store_data_queue__DOT__dut__DOT__tail_ptr 
                = vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr;
        }
        if (vlSelfRef.tb_store_data_queue__DOT__cmit_vld_i) {
            __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v23 
                = vlSelfRef.tb_store_data_queue__DOT__cmit_idx_i;
            __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v23 = 1U;
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT__last_cmit_idx_reg 
                = vlSelfRef.tb_store_data_queue__DOT__cmit_idx_i;
        }
        if (vlSelfRef.tb_store_data_queue__DOT__exec_vld_i) {
            __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v24 
                = vlSelfRef.tb_store_data_queue__DOT__exec_sdq_idx_i;
            __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v24 = 1U;
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT____Vlvbound_haff31b5c__0 
                = vlSelfRef.tb_store_data_queue__DOT__exec_store_data_i;
            __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v25 
                = vlSelfRef.tb_store_data_queue__DOT__dut__DOT____Vlvbound_haff31b5c__0;
            __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v25 
                = vlSelfRef.tb_store_data_queue__DOT__exec_sdq_idx_i;
            __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v25 = 1U;
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT____Vlvbound_haff32323__0 
                = vlSelfRef.tb_store_data_queue__DOT__exec_addr_i;
            __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v26 
                = vlSelfRef.tb_store_data_queue__DOT__dut__DOT____Vlvbound_haff32323__0;
            __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v26 
                = vlSelfRef.tb_store_data_queue__DOT__exec_sdq_idx_i;
            __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v26 = 1U;
            vlSelfRef.tb_store_data_queue__DOT__dut__DOT____Vlvbound_hb2049f2f__0 
                = vlSelfRef.tb_store_data_queue__DOT__exec_rob_idx_i;
            __VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v27 
                = vlSelfRef.tb_store_data_queue__DOT__dut__DOT____Vlvbound_hb2049f2f__0;
            __VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v27 
                = vlSelfRef.tb_store_data_queue__DOT__exec_sdq_idx_i;
            __VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v27 = 1U;
        }
    }
    vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr 
        = __Vdly__tb_store_data_queue__DOT__dut__DOT__head_ptr;
    vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr 
        = __Vdly__tb_store_data_queue__DOT__dut__DOT__tail_ptr;
    if (__VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v0) {
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][0U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][1U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[0U][2U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][0U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][1U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[1U][2U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][0U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][1U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[2U][2U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][0U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][1U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[3U][2U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][0U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][1U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[4U][2U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][0U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][1U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[5U][2U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][0U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][1U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[6U][2U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][0U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][1U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[7U][2U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][0U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][1U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[8U][2U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][0U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][1U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[9U][2U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][0U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][1U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[10U][2U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][0U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][1U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[11U][2U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][0U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][1U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[12U][2U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][0U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][1U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[13U][2U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][0U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][1U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[14U][2U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[15U][0U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[15U][1U] = 0U;
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[15U][2U] = 0U;
    }
    if (__VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v16) {
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v16][2U] 
            = ((0x0000007fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq
                [__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v16][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v16) 
                                 << 7U)));
    }
    if (__VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v17) {
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v17][1U] 
            = ((0x0000007fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq
                [__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v17][1U]) 
               | (__VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v17 
                  << 7U));
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v17][2U] 
            = ((0x00000080U & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq
                [__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v17][2U]) 
               | (0x000000ffU & (__VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v17 
                                 >> 0x00000019U)));
    }
    if (__VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v18) {
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v18][1U] 
            = ((0xffffffbfU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq
                [__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v18][1U]) 
               | ((IData)(__VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v18) 
                  << 6U));
    }
    if (__VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v19) {
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v19][0U] 
            = ((0x0000003fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq
                [__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v19][0U]) 
               | (__VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v19 
                  << 6U));
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v19][1U] 
            = ((0xffffffc0U & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq
                [__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v19][1U]) 
               | (__VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v19 
                  >> 0x0000001aU));
    }
    if (__VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v20) {
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v20][0U] 
            = ((0xffffffdfU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq
                [__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v20][0U]) 
               | ((IData)(__VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v20) 
                  << 5U));
    }
    if (__VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v21) {
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v21][0U] 
            = ((0xffffffefU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq
                [__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v21][0U]) 
               | ((IData)(__VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v21) 
                  << 4U));
    }
    if (__VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v22) {
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v22][0U] 
            = ((0xfffffff0U & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq
                [__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v22][0U]) 
               | (IData)(__VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v22));
    }
    if (__VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v23) {
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v23][0U] 
            = (0x00000020U | vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq
               [__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v23][0U]);
    }
    if (__VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v24) {
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v24][1U] 
            = (0x00000040U | vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq
               [__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v24][1U]);
    }
    if (__VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v25) {
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v25][1U] 
            = ((0x0000007fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq
                [__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v25][1U]) 
               | (__VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v25 
                  << 7U));
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v25][2U] 
            = ((0x00000080U & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq
                [__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v25][2U]) 
               | (0x000000ffU & (__VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v25 
                                 >> 0x00000019U)));
    }
    if (__VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v26) {
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v26][0U] 
            = ((0x0000003fU & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq
                [__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v26][0U]) 
               | (__VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v26 
                  << 6U));
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v26][1U] 
            = ((0xffffffc0U & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq
                [__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v26][1U]) 
               | (__VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v26 
                  >> 0x0000001aU));
    }
    if (__VdlySet__tb_store_data_queue__DOT__dut__DOT__sdq__v27) {
        vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq[__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v27][0U] 
            = ((0xfffffff0U & vlSelfRef.tb_store_data_queue__DOT__dut__DOT__sdq
                [__VdlyDim0__tb_store_data_queue__DOT__dut__DOT__sdq__v27][0U]) 
               | (IData)(__VdlyVal__tb_store_data_queue__DOT__dut__DOT__sdq__v27));
    }
    vlSelfRef.tb_store_data_queue__DOT__sdq_full_o 
        = (((1U & ((IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr) 
                   >> 4U)) != (1U & ((IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr) 
                                     >> 4U))) & ((0x0000000fU 
                                                  & (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr)) 
                                                 == 
                                                 (0x0000000fU 
                                                  & (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr))));
}

void Vtb_store_data_queue___024root___eval_nba(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___eval_nba\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_store_data_queue___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_store_data_queue___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

void Vtb_store_data_queue___024root___timing_ready(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___timing_ready\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h142a2edc__0.ready("@(negedge tb_store_data_queue.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h142a2e2e__0.ready("@(posedge tb_store_data_queue.clk)");
    }
}

void Vtb_store_data_queue___024root___timing_resume(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___timing_resume\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h142a2edc__0.moveToResumeQueue(
                                                          "@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__VtrigSched_h142a2e2e__0.moveToResumeQueue(
                                                          "@(posedge tb_store_data_queue.clk)");
    vlSelfRef.__VtrigSched_h142a2edc__0.resume("@(negedge tb_store_data_queue.clk)");
    vlSelfRef.__VtrigSched_h142a2e2e__0.resume("@(posedge tb_store_data_queue.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_store_data_queue___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_store_data_queue___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_store_data_queue___024root___eval_phase__act(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___eval_phase__act\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_store_data_queue___024root___eval_triggers_vec__act(vlSelf);
    Vtb_store_data_queue___024root___timing_ready(vlSelf);
    Vtb_store_data_queue___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_store_data_queue___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_store_data_queue___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_store_data_queue___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_store_data_queue___024root___timing_resume(vlSelf);
        Vtb_store_data_queue___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_store_data_queue___024root___eval_phase__inact(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___eval_phase__inact\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("sim/tb_store_data_queue.sv", 6, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_store_data_queue___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_store_data_queue___024root___eval_phase__nba(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___eval_phase__nba\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_store_data_queue___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_store_data_queue___024root___eval_nba(vlSelf);
        Vtb_store_data_queue___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_store_data_queue___024root___eval(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___eval\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_store_data_queue___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("sim/tb_store_data_queue.sv", 6, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("sim/tb_store_data_queue.sv", 6, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_store_data_queue___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("sim/tb_store_data_queue.sv", 6, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_store_data_queue___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_store_data_queue___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_store_data_queue___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0(Vtb_store_data_queue___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root____VbeforeTrig_h142a2edc__0\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_store_data_queue__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_store_data_queue__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.tb_store_data_queue__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_store_data_queue__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_store_data_queue__DOT__clk__0 
        = vlSelfRef.tb_store_data_queue__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h142a2e2e__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_store_data_queue___024root____VbeforeTrig_h142a2e2e__0(Vtb_store_data_queue___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root____VbeforeTrig_h142a2e2e__0\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_store_data_queue__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_store_data_queue__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.tb_store_data_queue__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_store_data_queue__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_store_data_queue__DOT__clk__0 
        = vlSelfRef.tb_store_data_queue__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h142a2e2e__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h142a2edc__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_store_data_queue___024root___eval_debug_assertions(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___eval_debug_assertions\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
