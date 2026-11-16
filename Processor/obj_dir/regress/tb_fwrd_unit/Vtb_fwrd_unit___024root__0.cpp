// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fwrd_unit.h for the primary calling header

#include "Vtb_fwrd_unit__pch.h"

VL_ATTR_COLD void Vtb_fwrd_unit___024root___eval_initial__TOP(Vtb_fwrd_unit___024root* vlSelf);
VlCoroutine Vtb_fwrd_unit___024root___eval_initial__TOP__Vtiming__0(Vtb_fwrd_unit___024root* vlSelf);
VlCoroutine Vtb_fwrd_unit___024root___eval_initial__TOP__Vtiming__1(Vtb_fwrd_unit___024root* vlSelf);

void Vtb_fwrd_unit___024root___eval_initial(Vtb_fwrd_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___eval_initial\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_fwrd_unit___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_fwrd_unit___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_fwrd_unit___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_fwrd_unit___024root___eval_initial__TOP__Vtiming__0(Vtb_fwrd_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "sim/tb_fwrd_unit.sv", 
                                             20);
        vlSelfRef.tb_fwrd_unit__DOT__clk = 1U;
        vlSelfRef.tb_fwrd_unit__DOT__cycle_count = 
            ((IData)(1U) + vlSelfRef.tb_fwrd_unit__DOT__cycle_count);
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "sim/tb_fwrd_unit.sv", 
                                             22);
        vlSelfRef.tb_fwrd_unit__DOT__clk = 0U;
    }
    co_return;
}

void Vtb_fwrd_unit___024root____VbeforeTrig_h1c6909ae__0(Vtb_fwrd_unit___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_fwrd_unit___024root___eval_initial__TOP__Vtiming__1(Vtb_fwrd_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtask_tb_fwrd_unit__DOT__check_assertion__3__condition;
    __Vtask_tb_fwrd_unit__DOT__check_assertion__3__condition = 0;
    CData/*0:0*/ __Vtask_tb_fwrd_unit__DOT__check_assertion__4__condition;
    __Vtask_tb_fwrd_unit__DOT__check_assertion__4__condition = 0;
    CData/*0:0*/ __Vtask_tb_fwrd_unit__DOT__check_assertion__6__condition;
    __Vtask_tb_fwrd_unit__DOT__check_assertion__6__condition = 0;
    CData/*0:0*/ __Vtask_tb_fwrd_unit__DOT__check_assertion__7__condition;
    __Vtask_tb_fwrd_unit__DOT__check_assertion__7__condition = 0;
    CData/*0:0*/ __Vtask_tb_fwrd_unit__DOT__check_assertion__8__condition;
    __Vtask_tb_fwrd_unit__DOT__check_assertion__8__condition = 0;
    CData/*0:0*/ __Vtask_tb_fwrd_unit__DOT__check_assertion__10__condition;
    __Vtask_tb_fwrd_unit__DOT__check_assertion__10__condition = 0;
    CData/*0:0*/ __Vtask_tb_fwrd_unit__DOT__check_assertion__11__condition;
    __Vtask_tb_fwrd_unit__DOT__check_assertion__11__condition = 0;
    CData/*0:0*/ __Vtask_tb_fwrd_unit__DOT__check_assertion__12__condition;
    __Vtask_tb_fwrd_unit__DOT__check_assertion__12__condition = 0;
    CData/*0:0*/ __Vtask_tb_fwrd_unit__DOT__check_assertion__14__condition;
    __Vtask_tb_fwrd_unit__DOT__check_assertion__14__condition = 0;
    CData/*0:0*/ __Vtask_tb_fwrd_unit__DOT__check_assertion__15__condition;
    __Vtask_tb_fwrd_unit__DOT__check_assertion__15__condition = 0;
    CData/*0:0*/ __Vtask_tb_fwrd_unit__DOT__check_assertion__16__condition;
    __Vtask_tb_fwrd_unit__DOT__check_assertion__16__condition = 0;
    CData/*0:0*/ __Vtask_tb_fwrd_unit__DOT__check_assertion__17__condition;
    __Vtask_tb_fwrd_unit__DOT__check_assertion__17__condition = 0;
    CData/*0:0*/ __Vtask_tb_fwrd_unit__DOT__check_assertion__19__condition;
    __Vtask_tb_fwrd_unit__DOT__check_assertion__19__condition = 0;
    CData/*0:0*/ __Vtask_tb_fwrd_unit__DOT__check_assertion__20__condition;
    __Vtask_tb_fwrd_unit__DOT__check_assertion__20__condition = 0;
    CData/*0:0*/ __Vtask_tb_fwrd_unit__DOT__check_assertion__21__condition;
    __Vtask_tb_fwrd_unit__DOT__check_assertion__21__condition = 0;
    CData/*0:0*/ __Vtask_tb_fwrd_unit__DOT__check_assertion__22__condition;
    __Vtask_tb_fwrd_unit__DOT__check_assertion__22__condition = 0;
    // Body
    vlSelfRef.tb_fwrd_unit__DOT__ex_valid[0U] = 0U;
    vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[0U] = 0U;
    vlSelfRef.tb_fwrd_unit__DOT__ex_val[0U] = 0U;
    vlSelfRef.tb_fwrd_unit__DOT__ex_valid[1U] = 0U;
    vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[1U] = 0U;
    vlSelfRef.tb_fwrd_unit__DOT__ex_val[1U] = 0U;
    vlSelfRef.tb_fwrd_unit__DOT__ex_valid[2U] = 0U;
    vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[2U] = 0U;
    vlSelfRef.tb_fwrd_unit__DOT__ex_val[2U] = 0U;
    vlSelfRef.tb_fwrd_unit__DOT__ex_valid[3U] = 0U;
    vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[3U] = 0U;
    vlSelfRef.tb_fwrd_unit__DOT__ex_val[3U] = 0U;
    VL_WRITEF_NX("=== Forwarding Unit Testbench ===\n",0);
    VL_WRITEF_NX("\n[RESET] Resetting DUT\n",0);
    Vtb_fwrd_unit___024root____VbeforeTrig_h1c6909ae__0(vlSelf, 
                                                        "@(negedge tb_fwrd_unit.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h1c6909ae__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fwrd_unit.clk)", 
                                                         "sim/tb_fwrd_unit.sv", 
                                                         89);
    vlSelfRef.tb_fwrd_unit__DOT__rst = 1U;
    Vtb_fwrd_unit___024root____VbeforeTrig_h1c6909ae__0(vlSelf, 
                                                        "@(negedge tb_fwrd_unit.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h1c6909ae__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fwrd_unit.clk)", 
                                                         "sim/tb_fwrd_unit.sv", 
                                                         91);
    Vtb_fwrd_unit___024root____VbeforeTrig_h1c6909ae__0(vlSelf, 
                                                        "@(negedge tb_fwrd_unit.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h1c6909ae__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fwrd_unit.clk)", 
                                                         "sim/tb_fwrd_unit.sv", 
                                                         92);
    vlSelfRef.tb_fwrd_unit__DOT__rst = 0U;
    Vtb_fwrd_unit___024root____VbeforeTrig_h1c6909ae__0(vlSelf, 
                                                        "@(negedge tb_fwrd_unit.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h1c6909ae__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fwrd_unit.clk)", 
                                                         "sim/tb_fwrd_unit.sv", 
                                                         94);
    VL_WRITEF_NX("[RESET] Reset complete\n\n",0);
    VL_WRITEF_NX("\n[Test 1] Verify Forward Miss\n",0);
    vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[0U] = 0x15U;
    vlSelfRef.tb_fwrd_unit__DOT__ex_valid[0U] = 1U;
    vlSelfRef.tb_fwrd_unit__DOT__ex_val[0U] = 0x00000015U;
    vlSelfRef.tb_fwrd_unit__DOT__src1_preg = 9U;
    vlSelfRef.tb_fwrd_unit__DOT__src2_preg = 0x0aU;
    Vtb_fwrd_unit___024root____VbeforeTrig_h1c6909ae__0(vlSelf, 
                                                        "@(negedge tb_fwrd_unit.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h1c6909ae__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fwrd_unit.clk)", 
                                                         "sim/tb_fwrd_unit.sv", 
                                                         110);
    VL_WRITEF_NX("Foward Unit Output: src1 hit: %b, src1 val: %0#, src2 Hit: %b, src1 val: %0#\n",0,
                 1,(0U != (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit)),
                 32,vlSelfRef.tb_fwrd_unit__DOT__src1_val,
                 1,(0U != (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit)),
                 32,vlSelfRef.tb_fwrd_unit__DOT__src2_val);
    __Vtask_tb_fwrd_unit__DOT__check_assertion__3__condition 
        = (1U & (~ (0U != (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit))));
    vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__3__test_name = "Src1 should receive forward miss"s;
    if (__Vtask_tb_fwrd_unit__DOT__check_assertion__3__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__3__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__3__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__fail_count);
    }
    __Vtask_tb_fwrd_unit__DOT__check_assertion__4__condition 
        = (1U & (~ (0U != (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit))));
    vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__4__test_name = "Src2 should receive forward miss"s;
    if (__Vtask_tb_fwrd_unit__DOT__check_assertion__4__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__4__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__4__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 2] Verify Source 1 Hit\n",0);
    vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[0U] = 0x0aU;
    vlSelfRef.tb_fwrd_unit__DOT__ex_valid[0U] = 1U;
    vlSelfRef.tb_fwrd_unit__DOT__ex_val[0U] = 0x00000015U;
    vlSelfRef.tb_fwrd_unit__DOT__src1_preg = 0x0aU;
    vlSelfRef.tb_fwrd_unit__DOT__src2_preg = 0x13U;
    Vtb_fwrd_unit___024root____VbeforeTrig_h1c6909ae__0(vlSelf, 
                                                        "@(negedge tb_fwrd_unit.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h1c6909ae__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fwrd_unit.clk)", 
                                                         "sim/tb_fwrd_unit.sv", 
                                                         133);
    VL_WRITEF_NX("Foward Unit Output: src1 hit: %b, src1 val: %0#, src2 Hit: %b, src1 val: %0#\n",0,
                 1,(0U != (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit)),
                 32,vlSelfRef.tb_fwrd_unit__DOT__src1_val,
                 1,(0U != (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit)),
                 32,vlSelfRef.tb_fwrd_unit__DOT__src2_val);
    __Vtask_tb_fwrd_unit__DOT__check_assertion__6__condition 
        = (0U != (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit));
    vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__6__test_name = "Src1 should receive forward hit"s;
    if (__Vtask_tb_fwrd_unit__DOT__check_assertion__6__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__6__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__6__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__fail_count);
    }
    __Vtask_tb_fwrd_unit__DOT__check_assertion__7__condition 
        = (0x00000015U == vlSelfRef.tb_fwrd_unit__DOT__src1_val);
    vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__7__test_name = "Correct value should have been forwarded"s;
    if (__Vtask_tb_fwrd_unit__DOT__check_assertion__7__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__7__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__7__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__fail_count);
    }
    __Vtask_tb_fwrd_unit__DOT__check_assertion__8__condition 
        = (1U & (~ (0U != (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit))));
    vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__8__test_name = "Src2 should receive forward miss"s;
    if (__Vtask_tb_fwrd_unit__DOT__check_assertion__8__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__8__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__8__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 3] Verify Source 2 Hit\n",0);
    vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[0U] = 0x0aU;
    vlSelfRef.tb_fwrd_unit__DOT__ex_valid[0U] = 1U;
    vlSelfRef.tb_fwrd_unit__DOT__ex_val[0U] = 0x00000015U;
    vlSelfRef.tb_fwrd_unit__DOT__src1_preg = 0x13U;
    vlSelfRef.tb_fwrd_unit__DOT__src2_preg = 0x0aU;
    Vtb_fwrd_unit___024root____VbeforeTrig_h1c6909ae__0(vlSelf, 
                                                        "@(negedge tb_fwrd_unit.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h1c6909ae__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fwrd_unit.clk)", 
                                                         "sim/tb_fwrd_unit.sv", 
                                                         157);
    VL_WRITEF_NX("Foward Unit Output: src1 hit: %b, src1 val: %0#, src2 Hit: %b, src1 val: %0#\n",0,
                 1,(0U != (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit)),
                 32,vlSelfRef.tb_fwrd_unit__DOT__src1_val,
                 1,(0U != (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit)),
                 32,vlSelfRef.tb_fwrd_unit__DOT__src2_val);
    __Vtask_tb_fwrd_unit__DOT__check_assertion__10__condition 
        = (1U & (~ (0U != (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit))));
    vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__10__test_name = "Src1 should receive forward miss"s;
    if (__Vtask_tb_fwrd_unit__DOT__check_assertion__10__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__10__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__10__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__fail_count);
    }
    __Vtask_tb_fwrd_unit__DOT__check_assertion__11__condition 
        = (0x00000015U == vlSelfRef.tb_fwrd_unit__DOT__src2_val);
    vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__11__test_name = "Correct value should have been forwarded"s;
    if (__Vtask_tb_fwrd_unit__DOT__check_assertion__11__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__11__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__11__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__fail_count);
    }
    __Vtask_tb_fwrd_unit__DOT__check_assertion__12__condition 
        = (0U != (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit));
    vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__12__test_name = "Src2 should receive forward hit"s;
    if (__Vtask_tb_fwrd_unit__DOT__check_assertion__12__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__12__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__12__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 4] Verify Both Sources can Hit on different Functional Units\n",0);
    vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[1U] = 6U;
    vlSelfRef.tb_fwrd_unit__DOT__ex_valid[1U] = 1U;
    vlSelfRef.tb_fwrd_unit__DOT__ex_val[1U] = 0x00000020U;
    vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[3U] = 7U;
    vlSelfRef.tb_fwrd_unit__DOT__ex_valid[3U] = 1U;
    vlSelfRef.tb_fwrd_unit__DOT__ex_val[3U] = 0x00000040U;
    vlSelfRef.tb_fwrd_unit__DOT__src1_preg = 6U;
    vlSelfRef.tb_fwrd_unit__DOT__src2_preg = 7U;
    Vtb_fwrd_unit___024root____VbeforeTrig_h1c6909ae__0(vlSelf, 
                                                        "@(negedge tb_fwrd_unit.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h1c6909ae__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fwrd_unit.clk)", 
                                                         "sim/tb_fwrd_unit.sv", 
                                                         185);
    VL_WRITEF_NX("Foward Unit Output: src1 hit: %b, src1 val: %0#, src2 Hit: %b, src2 val: %0#\n",0,
                 1,(0U != (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit)),
                 32,vlSelfRef.tb_fwrd_unit__DOT__src1_val,
                 1,(0U != (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit)),
                 32,vlSelfRef.tb_fwrd_unit__DOT__src2_val);
    __Vtask_tb_fwrd_unit__DOT__check_assertion__14__condition 
        = (0U != (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit));
    vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__14__test_name = "Src1 should receive forward hit"s;
    if (__Vtask_tb_fwrd_unit__DOT__check_assertion__14__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__14__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__14__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__fail_count);
    }
    __Vtask_tb_fwrd_unit__DOT__check_assertion__15__condition 
        = (0x00000020U == vlSelfRef.tb_fwrd_unit__DOT__src1_val);
    vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__15__test_name = "Correct value should have been forwarded to src1"s;
    if (__Vtask_tb_fwrd_unit__DOT__check_assertion__15__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__15__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__15__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__fail_count);
    }
    __Vtask_tb_fwrd_unit__DOT__check_assertion__16__condition 
        = (0U != (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit));
    vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__16__test_name = "Src2 should receive forward hit"s;
    if (__Vtask_tb_fwrd_unit__DOT__check_assertion__16__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__16__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__16__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__fail_count);
    }
    __Vtask_tb_fwrd_unit__DOT__check_assertion__17__condition 
        = (0x00000040U == vlSelfRef.tb_fwrd_unit__DOT__src2_val);
    vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__17__test_name = "Correct value should have been forwarded to src2"s;
    if (__Vtask_tb_fwrd_unit__DOT__check_assertion__17__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__17__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__17__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 5] Verify Both Sources can Hit on the same Functional Units\n",0);
    vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[2U] = 8U;
    vlSelfRef.tb_fwrd_unit__DOT__ex_valid[2U] = 1U;
    vlSelfRef.tb_fwrd_unit__DOT__ex_val[2U] = 0x00000010U;
    vlSelfRef.tb_fwrd_unit__DOT__src1_preg = 8U;
    vlSelfRef.tb_fwrd_unit__DOT__src2_preg = 8U;
    Vtb_fwrd_unit___024root____VbeforeTrig_h1c6909ae__0(vlSelf, 
                                                        "@(negedge tb_fwrd_unit.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h1c6909ae__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fwrd_unit.clk)", 
                                                         "sim/tb_fwrd_unit.sv", 
                                                         210);
    VL_WRITEF_NX("Foward Unit Output: src1 hit: %b, src1 val: %0#, src2 Hit: %b, src1 val: %0#\n",0,
                 1,(0U != (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit)),
                 32,vlSelfRef.tb_fwrd_unit__DOT__src1_val,
                 1,(0U != (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit)),
                 32,vlSelfRef.tb_fwrd_unit__DOT__src2_val);
    __Vtask_tb_fwrd_unit__DOT__check_assertion__19__condition 
        = (0U != (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit));
    vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__19__test_name = "Src1 should receive forward hit"s;
    if (__Vtask_tb_fwrd_unit__DOT__check_assertion__19__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__19__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__19__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__fail_count);
    }
    __Vtask_tb_fwrd_unit__DOT__check_assertion__20__condition 
        = (0x00000010U == vlSelfRef.tb_fwrd_unit__DOT__src1_val);
    vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__20__test_name = "Correct value should have been forwarded to src1"s;
    if (__Vtask_tb_fwrd_unit__DOT__check_assertion__20__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__20__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__20__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__fail_count);
    }
    __Vtask_tb_fwrd_unit__DOT__check_assertion__21__condition 
        = (0U != (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit));
    vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__21__test_name = "Src2 should receive forward hit"s;
    if (__Vtask_tb_fwrd_unit__DOT__check_assertion__21__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__21__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__21__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__fail_count);
    }
    __Vtask_tb_fwrd_unit__DOT__check_assertion__22__condition 
        = (0x00000010U == vlSelfRef.tb_fwrd_unit__DOT__src1_val);
    vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__22__test_name = "Correct value should have been forwarded to src2"s;
    if (__Vtask_tb_fwrd_unit__DOT__check_assertion__22__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__22__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_fwrd_unit__DOT__check_assertion__22__test_name));
        vlSelfRef.tb_fwrd_unit__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_fwrd_unit__DOT__fail_count);
    }
    VL_WRITEF_NX("\n=== Testbench Complete ===\nTotal Tests: %0d\n",0,
                 32,(vlSelfRef.tb_fwrd_unit__DOT__pass_count 
                     + vlSelfRef.tb_fwrd_unit__DOT__fail_count));
    if ((0U == vlSelfRef.tb_fwrd_unit__DOT__fail_count)) {
        VL_WRITEF_NX("[\033[32mALL TESTS PASSED\033[0m] %0d/%0d passed\n",0,
                     32,vlSelfRef.tb_fwrd_unit__DOT__pass_count,
                     32,(vlSelfRef.tb_fwrd_unit__DOT__pass_count 
                         + vlSelfRef.tb_fwrd_unit__DOT__fail_count));
    } else {
        VL_WRITEF_NX("[\033[31mSOME TESTS FAILED\033[0m] %0d passed, %0d failed\n",0,
                     32,vlSelfRef.tb_fwrd_unit__DOT__pass_count,
                     32,vlSelfRef.tb_fwrd_unit__DOT__fail_count);
    }
    VL_FINISH_MT("sim/tb_fwrd_unit.sv", 246, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

void Vtb_fwrd_unit___024root___eval_triggers_vec__act(Vtb_fwrd_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___eval_triggers_vec__act\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.tb_fwrd_unit__DOT__clk)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fwrd_unit__DOT__clk__0)) 
                                                      << 1U) 
                                                     | vlSelfRef.__VdlySched.awaitingCurrentTime())));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fwrd_unit__DOT__clk__0 
        = vlSelfRef.tb_fwrd_unit__DOT__clk;
}

bool Vtb_fwrd_unit___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___trigger_anySet__act\n"); );
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

void Vtb_fwrd_unit___024root___act_sequent__TOP__0(Vtb_fwrd_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___act_sequent__TOP__0\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_valid_i[0U] 
        = vlSelfRef.tb_fwrd_unit__DOT__ex_valid[0U];
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_valid_i[1U] 
        = vlSelfRef.tb_fwrd_unit__DOT__ex_valid[1U];
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_valid_i[2U] 
        = vlSelfRef.tb_fwrd_unit__DOT__ex_valid[2U];
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_valid_i[3U] 
        = vlSelfRef.tb_fwrd_unit__DOT__ex_valid[3U];
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_dst_preg_i[0U] 
        = vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[0U];
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_dst_preg_i[1U] 
        = vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[1U];
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_dst_preg_i[2U] 
        = vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[2U];
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_dst_preg_i[3U] 
        = vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[3U];
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_val_i[0U] 
        = vlSelfRef.tb_fwrd_unit__DOT__ex_val[0U];
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_val_i[1U] 
        = vlSelfRef.tb_fwrd_unit__DOT__ex_val[1U];
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_val_i[2U] 
        = vlSelfRef.tb_fwrd_unit__DOT__ex_val[2U];
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__ex_val_i[3U] 
        = vlSelfRef.tb_fwrd_unit__DOT__ex_val[3U];
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_fwrd_val[0U] 
        = vlSelfRef.tb_fwrd_unit__DOT__ex_val[0U];
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_fwrd_val[0U] 
        = vlSelfRef.tb_fwrd_unit__DOT__ex_val[0U];
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_fwrd_val[1U] 
        = vlSelfRef.tb_fwrd_unit__DOT__ex_val[1U];
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_fwrd_val[1U] 
        = vlSelfRef.tb_fwrd_unit__DOT__ex_val[1U];
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_fwrd_val[2U] 
        = vlSelfRef.tb_fwrd_unit__DOT__ex_val[2U];
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_fwrd_val[2U] 
        = vlSelfRef.tb_fwrd_unit__DOT__ex_val[2U];
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_fwrd_val[3U] 
        = vlSelfRef.tb_fwrd_unit__DOT__ex_val[3U];
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_fwrd_val[3U] 
        = vlSelfRef.tb_fwrd_unit__DOT__ex_val[3U];
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit 
        = ((0x0eU & (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit)) 
           | (vlSelfRef.tb_fwrd_unit__DOT__ex_valid[0U] 
              & ((IData)(vlSelfRef.tb_fwrd_unit__DOT__src1_preg) 
                 == vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[0U])));
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit 
        = ((0x0eU & (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit)) 
           | (vlSelfRef.tb_fwrd_unit__DOT__ex_valid[0U] 
              & ((IData)(vlSelfRef.tb_fwrd_unit__DOT__src2_preg) 
                 == vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[0U])));
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit 
        = ((0x0dU & (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit)) 
           | ((vlSelfRef.tb_fwrd_unit__DOT__ex_valid[1U] 
               & ((IData)(vlSelfRef.tb_fwrd_unit__DOT__src1_preg) 
                  == vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[1U])) 
              << 1U));
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit 
        = ((0x0dU & (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit)) 
           | ((vlSelfRef.tb_fwrd_unit__DOT__ex_valid[1U] 
               & ((IData)(vlSelfRef.tb_fwrd_unit__DOT__src2_preg) 
                  == vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[1U])) 
              << 1U));
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit 
        = ((0x0bU & (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit)) 
           | ((vlSelfRef.tb_fwrd_unit__DOT__ex_valid[2U] 
               & ((IData)(vlSelfRef.tb_fwrd_unit__DOT__src1_preg) 
                  == vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[2U])) 
              << 2U));
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit 
        = ((0x0bU & (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit)) 
           | ((vlSelfRef.tb_fwrd_unit__DOT__ex_valid[2U] 
               & ((IData)(vlSelfRef.tb_fwrd_unit__DOT__src2_preg) 
                  == vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[2U])) 
              << 2U));
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit 
        = ((7U & (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit)) 
           | ((vlSelfRef.tb_fwrd_unit__DOT__ex_valid[3U] 
               & ((IData)(vlSelfRef.tb_fwrd_unit__DOT__src1_preg) 
                  == vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[3U])) 
              << 3U));
    vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit 
        = ((7U & (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit)) 
           | ((vlSelfRef.tb_fwrd_unit__DOT__ex_valid[3U] 
               & ((IData)(vlSelfRef.tb_fwrd_unit__DOT__src2_preg) 
                  == vlSelfRef.tb_fwrd_unit__DOT__ex_dst_preg[3U])) 
              << 3U));
    vlSelfRef.tb_fwrd_unit__DOT__src1_val = 0U;
    if ((1U & (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit))) {
        vlSelfRef.tb_fwrd_unit__DOT__src1_val = vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_fwrd_val[0U];
    }
    if ((2U & (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit))) {
        vlSelfRef.tb_fwrd_unit__DOT__src1_val = vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_fwrd_val[1U];
    }
    if ((4U & (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit))) {
        vlSelfRef.tb_fwrd_unit__DOT__src1_val = vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_fwrd_val[2U];
    }
    if ((8U & (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_hit))) {
        vlSelfRef.tb_fwrd_unit__DOT__src1_val = vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src1_fwrd_val[3U];
    }
    vlSelfRef.tb_fwrd_unit__DOT__src2_val = 0U;
    if ((1U & (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit))) {
        vlSelfRef.tb_fwrd_unit__DOT__src2_val = vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_fwrd_val[0U];
    }
    if ((2U & (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit))) {
        vlSelfRef.tb_fwrd_unit__DOT__src2_val = vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_fwrd_val[1U];
    }
    if ((4U & (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit))) {
        vlSelfRef.tb_fwrd_unit__DOT__src2_val = vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_fwrd_val[2U];
    }
    if ((8U & (IData)(vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_hit))) {
        vlSelfRef.tb_fwrd_unit__DOT__src2_val = vlSelfRef.tb_fwrd_unit__DOT__dut__DOT__src2_fwrd_val[3U];
    }
}

void Vtb_fwrd_unit___024root___eval_act(Vtb_fwrd_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___eval_act\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_fwrd_unit___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

void Vtb_fwrd_unit___024root___eval_nba(Vtb_fwrd_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___eval_nba\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_fwrd_unit___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

void Vtb_fwrd_unit___024root___timing_ready(Vtb_fwrd_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___timing_ready\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h1c6909ae__0.ready("@(negedge tb_fwrd_unit.clk)");
    }
}

void Vtb_fwrd_unit___024root___timing_resume(Vtb_fwrd_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___timing_resume\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h1c6909ae__0.moveToResumeQueue(
                                                          "@(negedge tb_fwrd_unit.clk)");
    vlSelfRef.__VtrigSched_h1c6909ae__0.resume("@(negedge tb_fwrd_unit.clk)");
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_fwrd_unit___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_fwrd_unit___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_fwrd_unit___024root___eval_phase__act(Vtb_fwrd_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___eval_phase__act\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_fwrd_unit___024root___eval_triggers_vec__act(vlSelf);
    Vtb_fwrd_unit___024root___timing_ready(vlSelf);
    Vtb_fwrd_unit___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fwrd_unit___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_fwrd_unit___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_fwrd_unit___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_fwrd_unit___024root___timing_resume(vlSelf);
        Vtb_fwrd_unit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_fwrd_unit___024root___eval_phase__inact(Vtb_fwrd_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___eval_phase__inact\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("sim/tb_fwrd_unit.sv", 5, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_fwrd_unit___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_fwrd_unit___024root___eval_phase__nba(Vtb_fwrd_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___eval_phase__nba\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_fwrd_unit___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_fwrd_unit___024root___eval_nba(vlSelf);
        Vtb_fwrd_unit___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_fwrd_unit___024root___eval(Vtb_fwrd_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___eval\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_fwrd_unit___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("sim/tb_fwrd_unit.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("sim/tb_fwrd_unit.sv", 5, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_fwrd_unit___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("sim/tb_fwrd_unit.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_fwrd_unit___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_fwrd_unit___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_fwrd_unit___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_fwrd_unit___024root____VbeforeTrig_h1c6909ae__0(Vtb_fwrd_unit___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root____VbeforeTrig_h1c6909ae__0\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.tb_fwrd_unit__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fwrd_unit__DOT__clk__0)) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fwrd_unit__DOT__clk__0 
        = vlSelfRef.tb_fwrd_unit__DOT__clk;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h1c6909ae__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1c6909ae__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1c6909ae__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1c6909ae__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1c6909ae__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1c6909ae__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1c6909ae__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1c6909ae__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1c6909ae__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_fwrd_unit___024root___eval_debug_assertions(Vtb_fwrd_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___eval_debug_assertions\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
