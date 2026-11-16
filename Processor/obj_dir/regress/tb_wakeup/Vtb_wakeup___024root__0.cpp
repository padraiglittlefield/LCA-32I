// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_wakeup.h for the primary calling header

#include "Vtb_wakeup__pch.h"

VL_ATTR_COLD void Vtb_wakeup___024root___eval_initial__TOP(Vtb_wakeup___024root* vlSelf);
VlCoroutine Vtb_wakeup___024root___eval_initial__TOP__Vtiming__0(Vtb_wakeup___024root* vlSelf);
VlCoroutine Vtb_wakeup___024root___eval_initial__TOP__Vtiming__1(Vtb_wakeup___024root* vlSelf);

void Vtb_wakeup___024root___eval_initial(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___eval_initial\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_wakeup___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vtb_wakeup___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_wakeup___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_wakeup___024root___eval_initial__TOP__Vtiming__0(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "sim/tb_wakeup.sv", 
                                             49);
        vlSelfRef.tb_wakeup__DOT__clk = 1U;
        vlSelfRef.tb_wakeup__DOT__cycle_count = ((IData)(1U) 
                                                 + vlSelfRef.tb_wakeup__DOT__cycle_count);
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "sim/tb_wakeup.sv", 
                                             51);
        vlSelfRef.tb_wakeup__DOT__clk = 0U;
    }
    co_return;
}

void Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(Vtb_wakeup___024root* vlSelf, const char* __VeventDescription);
void Vtb_wakeup___024root____VbeforeTrig_h4d4c80cd__0(Vtb_wakeup___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_wakeup___024root___eval_initial__TOP__Vtiming__1(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_wakeup__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_wakeup__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    SData/*15:0*/ __Vtask_tb_wakeup__DOT__dispatch_entry__3__dep_mask;
    __Vtask_tb_wakeup__DOT__dispatch_entry__3__dep_mask = 0;
    CData/*0:0*/ __Vtask_tb_wakeup__DOT__check_assertion__4__condition;
    __Vtask_tb_wakeup__DOT__check_assertion__4__condition = 0;
    CData/*0:0*/ __Vtask_tb_wakeup__DOT__check_assertion__5__condition;
    __Vtask_tb_wakeup__DOT__check_assertion__5__condition = 0;
    IData/*31:0*/ __Vtask_tb_wakeup__DOT__grant_entry__7__unnamedblk1__DOT__i;
    __Vtask_tb_wakeup__DOT__grant_entry__7__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_wakeup__DOT__check_assertion__8__condition;
    __Vtask_tb_wakeup__DOT__check_assertion__8__condition = 0;
    CData/*0:0*/ __Vtask_tb_wakeup__DOT__check_assertion__9__condition;
    __Vtask_tb_wakeup__DOT__check_assertion__9__condition = 0;
    CData/*1:0*/ __Vtask_tb_wakeup__DOT__retire_entry_task__11__entry;
    __Vtask_tb_wakeup__DOT__retire_entry_task__11__entry = 0;
    CData/*0:0*/ __Vtask_tb_wakeup__DOT__check_assertion__12__condition;
    __Vtask_tb_wakeup__DOT__check_assertion__12__condition = 0;
    CData/*0:0*/ __Vtask_tb_wakeup__DOT__check_assertion__13__condition;
    __Vtask_tb_wakeup__DOT__check_assertion__13__condition = 0;
    SData/*15:0*/ __Vtask_tb_wakeup__DOT__dispatch_entry__15__dep_mask;
    __Vtask_tb_wakeup__DOT__dispatch_entry__15__dep_mask = 0;
    CData/*0:0*/ __Vtask_tb_wakeup__DOT__check_assertion__16__condition;
    __Vtask_tb_wakeup__DOT__check_assertion__16__condition = 0;
    CData/*0:0*/ __Vtask_tb_wakeup__DOT__check_assertion__17__condition;
    __Vtask_tb_wakeup__DOT__check_assertion__17__condition = 0;
    IData/*31:0*/ __Vtask_tb_wakeup__DOT__test_clear_dependencies__18__unnamedblk2__DOT__i;
    __Vtask_tb_wakeup__DOT__test_clear_dependencies__18__unnamedblk2__DOT__i = 0;
    SData/*15:0*/ __Vtask_tb_wakeup__DOT__set_ready__19__mask;
    __Vtask_tb_wakeup__DOT__set_ready__19__mask = 0;
    CData/*0:0*/ __Vtask_tb_wakeup__DOT__check_assertion__20__condition;
    __Vtask_tb_wakeup__DOT__check_assertion__20__condition = 0;
    SData/*15:0*/ __Vtask_tb_wakeup__DOT__set_ready__21__mask;
    __Vtask_tb_wakeup__DOT__set_ready__21__mask = 0;
    CData/*0:0*/ __Vtask_tb_wakeup__DOT__check_assertion__22__condition;
    __Vtask_tb_wakeup__DOT__check_assertion__22__condition = 0;
    CData/*0:0*/ __Vtask_tb_wakeup__DOT__check_assertion__23__condition;
    __Vtask_tb_wakeup__DOT__check_assertion__23__condition = 0;
    IData/*31:0*/ __Vtask_tb_wakeup__DOT__test_fill_rs__24__unnamedblk3__DOT__i;
    __Vtask_tb_wakeup__DOT__test_fill_rs__24__unnamedblk3__DOT__i = 0;
    SData/*15:0*/ __Vtask_tb_wakeup__DOT__dispatch_entry__25__dep_mask;
    __Vtask_tb_wakeup__DOT__dispatch_entry__25__dep_mask = 0;
    CData/*0:0*/ __Vtask_tb_wakeup__DOT__check_assertion__26__condition;
    __Vtask_tb_wakeup__DOT__check_assertion__26__condition = 0;
    CData/*0:0*/ __Vtask_tb_wakeup__DOT__check_assertion__27__condition;
    __Vtask_tb_wakeup__DOT__check_assertion__27__condition = 0;
    CData/*0:0*/ __Vtask_tb_wakeup__DOT__check_assertion__29__condition;
    __Vtask_tb_wakeup__DOT__check_assertion__29__condition = 0;
    CData/*0:0*/ __Vtask_tb_wakeup__DOT__check_assertion__30__condition;
    __Vtask_tb_wakeup__DOT__check_assertion__30__condition = 0;
    IData/*31:0*/ __Vtask_tb_wakeup__DOT__test_grant_retire_multiple__31__unnamedblk7__DOT__i;
    __Vtask_tb_wakeup__DOT__test_grant_retire_multiple__31__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_wakeup__DOT__grant_entry__32__unnamedblk1__DOT__i;
    __Vtask_tb_wakeup__DOT__grant_entry__32__unnamedblk1__DOT__i = 0;
    CData/*1:0*/ __Vtask_tb_wakeup__DOT__retire_entry_task__33__entry;
    __Vtask_tb_wakeup__DOT__retire_entry_task__33__entry = 0;
    CData/*0:0*/ __Vtask_tb_wakeup__DOT__check_assertion__34__condition;
    __Vtask_tb_wakeup__DOT__check_assertion__34__condition = 0;
    SData/*15:0*/ __Vtask_tb_wakeup__DOT__dispatch_entry__36__dep_mask;
    __Vtask_tb_wakeup__DOT__dispatch_entry__36__dep_mask = 0;
    CData/*0:0*/ __Vtask_tb_wakeup__DOT__check_assertion__37__condition;
    __Vtask_tb_wakeup__DOT__check_assertion__37__condition = 0;
    CData/*0:0*/ __Vtask_tb_wakeup__DOT__check_assertion__38__condition;
    __Vtask_tb_wakeup__DOT__check_assertion__38__condition = 0;
    // Body
    vlSelfRef.tb_wakeup__DOT__clk = 0U;
    vlSelfRef.tb_wakeup__DOT__rst = 1U;
    vlSelfRef.tb_wakeup__DOT__disp_valid = 0U;
    vlSelfRef.tb_wakeup__DOT__dependency_mask = 0U;
    vlSelfRef.tb_wakeup__DOT__grant = 0U;
    vlSelfRef.tb_wakeup__DOT__grant_valid = 0U;
    vlSelfRef.tb_wakeup__DOT__ready_mask = 0U;
    vlSelfRef.tb_wakeup__DOT__retire_entry = 0U;
    vlSelfRef.tb_wakeup__DOT__retire_valid = 0U;
    VL_WRITEF_NX("=== Wakeup Module Testbench ===\nRS_ENTRIES: 4, NUM_FUS: 4\n",0);
    VL_WRITEF_NX("\n[RESET] Resetting DUT\n",0);
    Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                     "@(negedge tb_wakeup.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_wakeup.clk)", 
                                                         "sim/tb_wakeup.sv", 
                                                         93);
    vlSelfRef.tb_wakeup__DOT__rst = 1U;
    Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                     "@(negedge tb_wakeup.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_wakeup.clk)", 
                                                         "sim/tb_wakeup.sv", 
                                                         95);
    Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                     "@(negedge tb_wakeup.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_wakeup.clk)", 
                                                         "sim/tb_wakeup.sv", 
                                                         96);
    vlSelfRef.tb_wakeup__DOT__rst = 0U;
    Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                     "@(negedge tb_wakeup.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_wakeup.clk)", 
                                                         "sim/tb_wakeup.sv", 
                                                         98);
    VL_WRITEF_NX("[RESET] Reset complete\n\n",0);
    VL_WRITEF_NX("\n[Test 1] Dispatch entry with no dependencies\n",0);
    __Vtask_tb_wakeup__DOT__dispatch_entry__3__dep_mask = 0U;
    vlSelfRef.tb_wakeup__DOT__disp_valid = 1U;
    vlSelfRef.tb_wakeup__DOT__dependency_mask = __Vtask_tb_wakeup__DOT__dispatch_entry__3__dep_mask;
    Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                     "@(negedge tb_wakeup.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_wakeup.clk)", 
                                                         "sim/tb_wakeup.sv", 
                                                         108);
    VL_WRITEF_NX("  Dispatched to entry: %0#, Full: %0b, Reqs: %b\n",0,
                 2,vlSelfRef.tb_wakeup__DOT__free_entry_out,
                 1,(IData)(vlSelfRef.tb_wakeup__DOT__full_out),
                 4,vlSelfRef.tb_wakeup__DOT__reqs);
    vlSelfRef.tb_wakeup__DOT__disp_valid = 0U;
    Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                     "@(negedge tb_wakeup.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_wakeup.clk)", 
                                                         "sim/tb_wakeup.sv", 
                                                         111);
    Vtb_wakeup___024root____VbeforeTrig_h4d4c80cd__0(vlSelf, 
                                                     "@(posedge tb_wakeup.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h4d4c80cd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_wakeup.clk)", 
                                                         "sim/tb_wakeup.sv", 
                                                         164);
    __Vtask_tb_wakeup__DOT__check_assertion__4__condition 
        = (1U & (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid));
    vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__4__test_name = "Entry should be valid after dispatch"s;
    if (__Vtask_tb_wakeup__DOT__check_assertion__4__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__4__test_name));
        vlSelfRef.tb_wakeup__DOT__pass_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__4__test_name));
        vlSelfRef.tb_wakeup__DOT__fail_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__fail_count);
    }
    __Vtask_tb_wakeup__DOT__check_assertion__5__condition 
        = (1U & (IData)(vlSelfRef.tb_wakeup__DOT__reqs));
    vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__5__test_name = "Should have request after dispatch with no deps"s;
    if (__Vtask_tb_wakeup__DOT__check_assertion__5__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__5__test_name));
        vlSelfRef.tb_wakeup__DOT__pass_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__5__test_name));
        vlSelfRef.tb_wakeup__DOT__fail_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 2] Grant ready entry\n",0);
    vlSelfRef.tb_wakeup__DOT__test_grant_ready__Vstatic__granted_entry 
        = vlSelfRef.tb_wakeup__DOT__grant;
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_wakeup__DOT__reqs))))) {
        vlSelfRef.tb_wakeup__DOT__grant_valid = 1U;
        vlSelfRef.tb_wakeup__DOT__grant = 0U;
        __Vtask_tb_wakeup__DOT__grant_entry__7__unnamedblk1__DOT__i = 0U;
        __Vtask_tb_wakeup__DOT__grant_entry__7__unnamedblk1__DOT__i = 0U;
        {
            while (VL_GTS_III(32, 4U, __Vtask_tb_wakeup__DOT__grant_entry__7__unnamedblk1__DOT__i)) {
                if ((1U & ((IData)(vlSelfRef.tb_wakeup__DOT__reqs) 
                           >> (3U & __Vtask_tb_wakeup__DOT__grant_entry__7__unnamedblk1__DOT__i)))) {
                    vlSelfRef.tb_wakeup__DOT__grant 
                        = (3U & __Vtask_tb_wakeup__DOT__grant_entry__7__unnamedblk1__DOT__i);
                    goto __Vlabel0;
                }
                __Vtask_tb_wakeup__DOT__grant_entry__7__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_wakeup__DOT__grant_entry__7__unnamedblk1__DOT__i);
            }
            __Vlabel0: ;
        }
        VL_WRITEF_NX("  Granting entry: %0#\n",0,2,
                     vlSelfRef.tb_wakeup__DOT__grant);
        Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                         "@(negedge tb_wakeup.clk)");
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_wakeup.clk)", 
                                                             "sim/tb_wakeup.sv", 
                                                             128);
        vlSelfRef.tb_wakeup__DOT__grant_valid = 0U;
        VL_WRITEF_NX("  Reqs after grant: %b\n",0,4,
                     vlSelfRef.tb_wakeup__DOT__reqs);
        Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                         "@(negedge tb_wakeup.clk)");
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_wakeup.clk)", 
                                                             "sim/tb_wakeup.sv", 
                                                             131);
    } else {
        VL_WRITEF_NX("  No requests to grant\n",0);
    }
    __Vtask_tb_wakeup__DOT__check_assertion__8__condition 
        = (1U & (~ ((IData)(vlSelfRef.tb_wakeup__DOT__reqs) 
                    >> (IData)(vlSelfRef.tb_wakeup__DOT__test_grant_ready__Vstatic__granted_entry))));
    vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__8__test_name = "Granted entry should not request anymore"s;
    if (__Vtask_tb_wakeup__DOT__check_assertion__8__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__8__test_name));
        vlSelfRef.tb_wakeup__DOT__pass_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__8__test_name));
        vlSelfRef.tb_wakeup__DOT__fail_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__fail_count);
    }
    __Vtask_tb_wakeup__DOT__check_assertion__9__condition 
        = (1U & ((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_granted) 
                 >> (IData)(vlSelfRef.tb_wakeup__DOT__test_grant_ready__Vstatic__granted_entry)));
    vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__9__test_name = "entry_granted flag should be set"s;
    if (__Vtask_tb_wakeup__DOT__check_assertion__9__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__9__test_name));
        vlSelfRef.tb_wakeup__DOT__pass_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__9__test_name));
        vlSelfRef.tb_wakeup__DOT__fail_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 3] Retire completed entry\n",0);
    vlSelfRef.tb_wakeup__DOT__test_retire__Vstatic__retired_entry 
        = vlSelfRef.tb_wakeup__DOT__grant;
    __Vtask_tb_wakeup__DOT__retire_entry_task__11__entry 
        = vlSelfRef.tb_wakeup__DOT__grant;
    vlSelfRef.tb_wakeup__DOT__retire_valid = 1U;
    vlSelfRef.tb_wakeup__DOT__retire_entry = __Vtask_tb_wakeup__DOT__retire_entry_task__11__entry;
    Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                     "@(negedge tb_wakeup.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_wakeup.clk)", 
                                                         "sim/tb_wakeup.sv", 
                                                         143);
    vlSelfRef.tb_wakeup__DOT__retire_valid = 0U;
    VL_WRITEF_NX("  Entry %0# retired, Full: %0b\n",0,
                 2,__Vtask_tb_wakeup__DOT__retire_entry_task__11__entry,
                 1,(IData)(vlSelfRef.tb_wakeup__DOT__full_out));
    Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                     "@(negedge tb_wakeup.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_wakeup.clk)", 
                                                         "sim/tb_wakeup.sv", 
                                                         146);
    __Vtask_tb_wakeup__DOT__check_assertion__12__condition 
        = (1U & (~ ((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid) 
                    >> (IData)(vlSelfRef.tb_wakeup__DOT__test_retire__Vstatic__retired_entry))));
    vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__12__test_name = "Retired entry should be invalid"s;
    if (__Vtask_tb_wakeup__DOT__check_assertion__12__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__12__test_name));
        vlSelfRef.tb_wakeup__DOT__pass_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__12__test_name));
        vlSelfRef.tb_wakeup__DOT__fail_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__fail_count);
    }
    __Vtask_tb_wakeup__DOT__check_assertion__13__condition 
        = (1U & (~ ((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_granted) 
                    >> (IData)(vlSelfRef.tb_wakeup__DOT__test_retire__Vstatic__retired_entry))));
    vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__13__test_name = "Retired entry should not be granted"s;
    if (__Vtask_tb_wakeup__DOT__check_assertion__13__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__13__test_name));
        vlSelfRef.tb_wakeup__DOT__pass_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__13__test_name));
        vlSelfRef.tb_wakeup__DOT__fail_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 4] Dispatch entry with dependencies\n",0);
    vlSelfRef.tb_wakeup__DOT__test_dispatch_with_deps__Vstatic__dispatched_entry 
        = vlSelfRef.tb_wakeup__DOT__free_entry_out;
    __Vtask_tb_wakeup__DOT__dispatch_entry__15__dep_mask = 3U;
    vlSelfRef.tb_wakeup__DOT__disp_valid = 1U;
    vlSelfRef.tb_wakeup__DOT__dependency_mask = __Vtask_tb_wakeup__DOT__dispatch_entry__15__dep_mask;
    Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                     "@(negedge tb_wakeup.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_wakeup.clk)", 
                                                         "sim/tb_wakeup.sv", 
                                                         108);
    VL_WRITEF_NX("  Dispatched to entry: %0#, Full: %0b, Reqs: %b\n",0,
                 2,vlSelfRef.tb_wakeup__DOT__free_entry_out,
                 1,(IData)(vlSelfRef.tb_wakeup__DOT__full_out),
                 4,vlSelfRef.tb_wakeup__DOT__reqs);
    vlSelfRef.tb_wakeup__DOT__disp_valid = 0U;
    Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                     "@(negedge tb_wakeup.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_wakeup.clk)", 
                                                         "sim/tb_wakeup.sv", 
                                                         111);
    VL_WRITEF_NX("  Reqs (blocked by deps): %b\n",0,
                 4,vlSelfRef.tb_wakeup__DOT__reqs);
    __Vtask_tb_wakeup__DOT__check_assertion__16__condition 
        = (1U & (~ ((IData)(vlSelfRef.tb_wakeup__DOT__reqs) 
                    >> (IData)(vlSelfRef.tb_wakeup__DOT__test_dispatch_with_deps__Vstatic__dispatched_entry))));
    vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__16__test_name = "Entry with dependencies should not request"s;
    if (__Vtask_tb_wakeup__DOT__check_assertion__16__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__16__test_name));
        vlSelfRef.tb_wakeup__DOT__pass_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__16__test_name));
        vlSelfRef.tb_wakeup__DOT__fail_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__fail_count);
    }
    __Vtask_tb_wakeup__DOT__check_assertion__17__condition 
        = (0U != vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row
           [vlSelfRef.tb_wakeup__DOT__test_dispatch_with_deps__Vstatic__dispatched_entry]);
    vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__17__test_name = "Dependency matrix should be non-zero"s;
    if (__Vtask_tb_wakeup__DOT__check_assertion__17__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__17__test_name));
        vlSelfRef.tb_wakeup__DOT__pass_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__17__test_name));
        vlSelfRef.tb_wakeup__DOT__fail_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__fail_count);
    }
    __Vtask_tb_wakeup__DOT__test_clear_dependencies__18__unnamedblk2__DOT__i = 0U;
    __Vtask_tb_wakeup__DOT__test_clear_dependencies__18__unnamedblk2__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 4U, __Vtask_tb_wakeup__DOT__test_clear_dependencies__18__unnamedblk2__DOT__i)) {
            if ((((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid) 
                  >> (3U & __Vtask_tb_wakeup__DOT__test_clear_dependencies__18__unnamedblk2__DOT__i)) 
                 & (0U != vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row
                    [(3U & __Vtask_tb_wakeup__DOT__test_clear_dependencies__18__unnamedblk2__DOT__i)]))) {
                vlSelfRef.tb_wakeup__DOT__test_clear_dependencies__Vstatic__dep_entry 
                    = (3U & __Vtask_tb_wakeup__DOT__test_clear_dependencies__18__unnamedblk2__DOT__i);
                goto __Vlabel1;
            }
            __Vtask_tb_wakeup__DOT__test_clear_dependencies__18__unnamedblk2__DOT__i 
                = ((IData)(1U) + __Vtask_tb_wakeup__DOT__test_clear_dependencies__18__unnamedblk2__DOT__i);
        }
        __Vlabel1: ;
    }
    VL_WRITEF_NX("\n[Test 5] Clear one dependency\n",0);
    __Vtask_tb_wakeup__DOT__set_ready__19__mask = 1U;
    vlSelfRef.tb_wakeup__DOT__ready_mask = __Vtask_tb_wakeup__DOT__set_ready__19__mask;
    Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                     "@(negedge tb_wakeup.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_wakeup.clk)", 
                                                         "sim/tb_wakeup.sv", 
                                                         154);
    VL_WRITEF_NX("  Ready mask updated: %b, Reqs: %b\n",0,
                 16,vlSelfRef.tb_wakeup__DOT__ready_mask,
                 4,(IData)(vlSelfRef.tb_wakeup__DOT__reqs));
    __Vtask_tb_wakeup__DOT__check_assertion__20__condition 
        = (3U != vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row
           [vlSelfRef.tb_wakeup__DOT__test_clear_dependencies__Vstatic__dep_entry]);
    vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__20__test_name = "Dependencies should be partially cleared"s;
    if (__Vtask_tb_wakeup__DOT__check_assertion__20__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__20__test_name));
        vlSelfRef.tb_wakeup__DOT__pass_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__20__test_name));
        vlSelfRef.tb_wakeup__DOT__fail_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 6] Clear remaining dependency\n",0);
    __Vtask_tb_wakeup__DOT__set_ready__21__mask = 3U;
    vlSelfRef.tb_wakeup__DOT__ready_mask = __Vtask_tb_wakeup__DOT__set_ready__21__mask;
    Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                     "@(negedge tb_wakeup.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_wakeup.clk)", 
                                                         "sim/tb_wakeup.sv", 
                                                         154);
    VL_WRITEF_NX("  Ready mask updated: %b, Reqs: %b\n",0,
                 16,vlSelfRef.tb_wakeup__DOT__ready_mask,
                 4,(IData)(vlSelfRef.tb_wakeup__DOT__reqs));
    __Vtask_tb_wakeup__DOT__check_assertion__22__condition 
        = (0U == vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row
           [vlSelfRef.tb_wakeup__DOT__test_clear_dependencies__Vstatic__dep_entry]);
    vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__22__test_name = "All dependencies should be cleared"s;
    if (__Vtask_tb_wakeup__DOT__check_assertion__22__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__22__test_name));
        vlSelfRef.tb_wakeup__DOT__pass_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__22__test_name));
        vlSelfRef.tb_wakeup__DOT__fail_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__fail_count);
    }
    __Vtask_tb_wakeup__DOT__check_assertion__23__condition 
        = (1U & ((IData)(vlSelfRef.tb_wakeup__DOT__reqs) 
                 >> (IData)(vlSelfRef.tb_wakeup__DOT__test_clear_dependencies__Vstatic__dep_entry)));
    vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__23__test_name = "Entry should now request"s;
    if (__Vtask_tb_wakeup__DOT__check_assertion__23__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__23__test_name));
        vlSelfRef.tb_wakeup__DOT__pass_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__23__test_name));
        vlSelfRef.tb_wakeup__DOT__fail_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__fail_count);
    }
    vlSelfRef.tb_wakeup__DOT__ready_mask = 0U;
    Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                     "@(negedge tb_wakeup.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_wakeup.clk)", 
                                                         "sim/tb_wakeup.sv", 
                                                         229);
    VL_WRITEF_NX("\n[Test 7] Fill reservation station\n",0);
    __Vtask_tb_wakeup__DOT__test_fill_rs__24__unnamedblk3__DOT__i = 0U;
    __Vtask_tb_wakeup__DOT__test_fill_rs__24__unnamedblk3__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_tb_wakeup__DOT__test_fill_rs__24__unnamedblk3__DOT__i)) {
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_wakeup__DOT__full_out)))))) {
            __Vtask_tb_wakeup__DOT__dispatch_entry__25__dep_mask = 0U;
            vlSelfRef.tb_wakeup__DOT__disp_valid = 1U;
            vlSelfRef.tb_wakeup__DOT__dependency_mask 
                = __Vtask_tb_wakeup__DOT__dispatch_entry__25__dep_mask;
            Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                             "@(negedge tb_wakeup.clk)");
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_wakeup.clk)", 
                                                                 "sim/tb_wakeup.sv", 
                                                                 108);
            VL_WRITEF_NX("  Dispatched to entry: %0#, Full: %0b, Reqs: %b\n",0,
                         2,vlSelfRef.tb_wakeup__DOT__free_entry_out,
                         1,(IData)(vlSelfRef.tb_wakeup__DOT__full_out),
                         4,vlSelfRef.tb_wakeup__DOT__reqs);
            vlSelfRef.tb_wakeup__DOT__disp_valid = 0U;
            Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                             "@(negedge tb_wakeup.clk)");
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_wakeup.clk)", 
                                                                 "sim/tb_wakeup.sv", 
                                                                 111);
        }
        __Vtask_tb_wakeup__DOT__test_fill_rs__24__unnamedblk3__DOT__i 
            = ((IData)(1U) + __Vtask_tb_wakeup__DOT__test_fill_rs__24__unnamedblk3__DOT__i);
    }
    VL_WRITEF_NX("  RS Full: %0b, Reqs: %b\n",0,1,vlSelfRef.tb_wakeup__DOT__full_out,
                 4,(IData)(vlSelfRef.tb_wakeup__DOT__reqs));
    vlSelfRef.tb_wakeup__DOT__test_fill_rs__Vstatic__valid_count = 0U;
    if ((1U & (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid))) {
        vlSelfRef.tb_wakeup__DOT__test_fill_rs__Vstatic__valid_count 
            = ((IData)(1U) + vlSelfRef.tb_wakeup__DOT__test_fill_rs__Vstatic__valid_count);
    }
    if ((2U & (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid))) {
        vlSelfRef.tb_wakeup__DOT__test_fill_rs__Vstatic__valid_count 
            = ((IData)(1U) + vlSelfRef.tb_wakeup__DOT__test_fill_rs__Vstatic__valid_count);
    }
    if ((4U & (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid))) {
        vlSelfRef.tb_wakeup__DOT__test_fill_rs__Vstatic__valid_count 
            = ((IData)(1U) + vlSelfRef.tb_wakeup__DOT__test_fill_rs__Vstatic__valid_count);
    }
    if ((8U & (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid))) {
        vlSelfRef.tb_wakeup__DOT__test_fill_rs__Vstatic__valid_count 
            = ((IData)(1U) + vlSelfRef.tb_wakeup__DOT__test_fill_rs__Vstatic__valid_count);
    }
    __Vtask_tb_wakeup__DOT__check_assertion__26__condition 
        = (4U == vlSelfRef.tb_wakeup__DOT__test_fill_rs__Vstatic__valid_count);
    vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__26__test_name = "All RS entries should be valid"s;
    if (__Vtask_tb_wakeup__DOT__check_assertion__26__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__26__test_name));
        vlSelfRef.tb_wakeup__DOT__pass_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__26__test_name));
        vlSelfRef.tb_wakeup__DOT__fail_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__fail_count);
    }
    __Vtask_tb_wakeup__DOT__check_assertion__27__condition 
        = vlSelfRef.tb_wakeup__DOT__full_out;
    vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__27__test_name = "RS should report full"s;
    if (__Vtask_tb_wakeup__DOT__check_assertion__27__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__27__test_name));
        vlSelfRef.tb_wakeup__DOT__pass_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__27__test_name));
        vlSelfRef.tb_wakeup__DOT__fail_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 8] Attempt dispatch when full\n",0);
    vlSelfRef.tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_before = 0U;
    if ((1U & (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid))) {
        vlSelfRef.tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_before 
            = ((IData)(1U) + vlSelfRef.tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_before);
    }
    if ((2U & (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid))) {
        vlSelfRef.tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_before 
            = ((IData)(1U) + vlSelfRef.tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_before);
    }
    if ((4U & (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid))) {
        vlSelfRef.tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_before 
            = ((IData)(1U) + vlSelfRef.tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_before);
    }
    vlSelfRef.tb_wakeup__DOT__disp_valid = 1U;
    vlSelfRef.tb_wakeup__DOT__dependency_mask = 0U;
    if ((8U & (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid))) {
        vlSelfRef.tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_before 
            = ((IData)(1U) + vlSelfRef.tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_before);
    }
    Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                     "@(negedge tb_wakeup.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_wakeup.clk)", 
                                                         "sim/tb_wakeup.sv", 
                                                         267);
    VL_WRITEF_NX("  Full: %0b (should reject dispatch)\n",0,
                 1,vlSelfRef.tb_wakeup__DOT__full_out);
    vlSelfRef.tb_wakeup__DOT__disp_valid = 0U;
    Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                     "@(negedge tb_wakeup.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_wakeup.clk)", 
                                                         "sim/tb_wakeup.sv", 
                                                         270);
    vlSelfRef.tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_after = 0U;
    if ((1U & (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid))) {
        vlSelfRef.tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_after 
            = ((IData)(1U) + vlSelfRef.tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_after);
    }
    if ((2U & (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid))) {
        vlSelfRef.tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_after 
            = ((IData)(1U) + vlSelfRef.tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_after);
    }
    if ((4U & (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid))) {
        vlSelfRef.tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_after 
            = ((IData)(1U) + vlSelfRef.tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_after);
    }
    if ((8U & (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid))) {
        vlSelfRef.tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_after 
            = ((IData)(1U) + vlSelfRef.tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_after);
    }
    __Vtask_tb_wakeup__DOT__check_assertion__29__condition 
        = (vlSelfRef.tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_before 
           == vlSelfRef.tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_after);
    vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__29__test_name = "No new entry should be added when full"s;
    if (__Vtask_tb_wakeup__DOT__check_assertion__29__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__29__test_name));
        vlSelfRef.tb_wakeup__DOT__pass_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__29__test_name));
        vlSelfRef.tb_wakeup__DOT__fail_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__fail_count);
    }
    __Vtask_tb_wakeup__DOT__check_assertion__30__condition 
        = vlSelfRef.tb_wakeup__DOT__full_out;
    vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__30__test_name = "RS should still be full"s;
    if (__Vtask_tb_wakeup__DOT__check_assertion__30__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__30__test_name));
        vlSelfRef.tb_wakeup__DOT__pass_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__30__test_name));
        vlSelfRef.tb_wakeup__DOT__fail_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 9] Grant and retire multiple entries to free space\n",0);
    __Vtask_tb_wakeup__DOT__test_grant_retire_multiple__31__unnamedblk7__DOT__i = 0U;
    __Vtask_tb_wakeup__DOT__test_grant_retire_multiple__31__unnamedblk7__DOT__i = 0U;
    while (VL_GTS_III(32, 2U, __Vtask_tb_wakeup__DOT__test_grant_retire_multiple__31__unnamedblk7__DOT__i)) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_wakeup__DOT__reqs))))) {
            if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_wakeup__DOT__reqs))))) {
                vlSelfRef.tb_wakeup__DOT__grant_valid = 1U;
                vlSelfRef.tb_wakeup__DOT__grant = 0U;
                __Vtask_tb_wakeup__DOT__grant_entry__32__unnamedblk1__DOT__i = 0U;
                __Vtask_tb_wakeup__DOT__grant_entry__32__unnamedblk1__DOT__i = 0U;
                {
                    while (VL_GTS_III(32, 4U, __Vtask_tb_wakeup__DOT__grant_entry__32__unnamedblk1__DOT__i)) {
                        if ((1U & ((IData)(vlSelfRef.tb_wakeup__DOT__reqs) 
                                   >> (3U & __Vtask_tb_wakeup__DOT__grant_entry__32__unnamedblk1__DOT__i)))) {
                            vlSelfRef.tb_wakeup__DOT__grant 
                                = (3U & __Vtask_tb_wakeup__DOT__grant_entry__32__unnamedblk1__DOT__i);
                            goto __Vlabel2;
                        }
                        __Vtask_tb_wakeup__DOT__grant_entry__32__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_wakeup__DOT__grant_entry__32__unnamedblk1__DOT__i);
                    }
                    __Vlabel2: ;
                }
                VL_WRITEF_NX("  Granting entry: %0#\n",0,
                             2,vlSelfRef.tb_wakeup__DOT__grant);
                Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                                 "@(negedge tb_wakeup.clk)");
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
                co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_wakeup.clk)", 
                                                                     "sim/tb_wakeup.sv", 
                                                                     128);
                vlSelfRef.tb_wakeup__DOT__grant_valid = 0U;
                VL_WRITEF_NX("  Reqs after grant: %b\n",0,
                             4,vlSelfRef.tb_wakeup__DOT__reqs);
                Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                                 "@(negedge tb_wakeup.clk)");
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
                co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_wakeup.clk)", 
                                                                     "sim/tb_wakeup.sv", 
                                                                     131);
            } else {
                VL_WRITEF_NX("  No requests to grant\n",0);
            }
            __Vtask_tb_wakeup__DOT__retire_entry_task__33__entry 
                = vlSelfRef.tb_wakeup__DOT__grant;
            vlSelfRef.tb_wakeup__DOT__retire_valid = 1U;
            vlSelfRef.tb_wakeup__DOT__retire_entry 
                = __Vtask_tb_wakeup__DOT__retire_entry_task__33__entry;
            Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                             "@(negedge tb_wakeup.clk)");
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_wakeup.clk)", 
                                                                 "sim/tb_wakeup.sv", 
                                                                 143);
            vlSelfRef.tb_wakeup__DOT__retire_valid = 0U;
            VL_WRITEF_NX("  Entry %0# retired, Full: %0b\n",0,
                         2,__Vtask_tb_wakeup__DOT__retire_entry_task__33__entry,
                         1,(IData)(vlSelfRef.tb_wakeup__DOT__full_out));
            Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                             "@(negedge tb_wakeup.clk)");
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_wakeup.clk)", 
                                                                 "sim/tb_wakeup.sv", 
                                                                 146);
        }
        __Vtask_tb_wakeup__DOT__test_grant_retire_multiple__31__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vtask_tb_wakeup__DOT__test_grant_retire_multiple__31__unnamedblk7__DOT__i);
    }
    VL_WRITEF_NX("  RS Full after retires: %0b\n",0,
                 1,vlSelfRef.tb_wakeup__DOT__full_out);
    __Vtask_tb_wakeup__DOT__check_assertion__34__condition 
        = (1U & (~ (IData)(vlSelfRef.tb_wakeup__DOT__full_out)));
    vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__34__test_name = "RS should no longer be full"s;
    if (__Vtask_tb_wakeup__DOT__check_assertion__34__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__34__test_name));
        vlSelfRef.tb_wakeup__DOT__pass_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__34__test_name));
        vlSelfRef.tb_wakeup__DOT__fail_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 10] Dispatch after freeing entries\n",0);
    vlSelfRef.tb_wakeup__DOT__test_dispatch_after_free__Vstatic__new_entry 
        = vlSelfRef.tb_wakeup__DOT__free_entry_out;
    __Vtask_tb_wakeup__DOT__dispatch_entry__36__dep_mask = 0U;
    vlSelfRef.tb_wakeup__DOT__disp_valid = 1U;
    vlSelfRef.tb_wakeup__DOT__dependency_mask = __Vtask_tb_wakeup__DOT__dispatch_entry__36__dep_mask;
    Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                     "@(negedge tb_wakeup.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_wakeup.clk)", 
                                                         "sim/tb_wakeup.sv", 
                                                         108);
    VL_WRITEF_NX("  Dispatched to entry: %0#, Full: %0b, Reqs: %b\n",0,
                 2,vlSelfRef.tb_wakeup__DOT__free_entry_out,
                 1,(IData)(vlSelfRef.tb_wakeup__DOT__full_out),
                 4,vlSelfRef.tb_wakeup__DOT__reqs);
    vlSelfRef.tb_wakeup__DOT__disp_valid = 0U;
    Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                     "@(negedge tb_wakeup.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_wakeup.clk)", 
                                                         "sim/tb_wakeup.sv", 
                                                         111);
    __Vtask_tb_wakeup__DOT__check_assertion__37__condition 
        = (1U & ((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid) 
                 >> (IData)(vlSelfRef.tb_wakeup__DOT__test_dispatch_after_free__Vstatic__new_entry)));
    vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__37__test_name = "Should successfully dispatch to freed entry"s;
    if (__Vtask_tb_wakeup__DOT__check_assertion__37__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__37__test_name));
        vlSelfRef.tb_wakeup__DOT__pass_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__37__test_name));
        vlSelfRef.tb_wakeup__DOT__fail_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__fail_count);
    }
    __Vtask_tb_wakeup__DOT__check_assertion__38__condition 
        = (1U & ((IData)(vlSelfRef.tb_wakeup__DOT__reqs) 
                 >> (IData)(vlSelfRef.tb_wakeup__DOT__test_dispatch_after_free__Vstatic__new_entry)));
    vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__38__test_name = "New entry should request"s;
    if (__Vtask_tb_wakeup__DOT__check_assertion__38__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__38__test_name));
        vlSelfRef.tb_wakeup__DOT__pass_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_wakeup__DOT__check_assertion__38__test_name));
        vlSelfRef.tb_wakeup__DOT__fail_count = ((IData)(1U) 
                                                + vlSelfRef.tb_wakeup__DOT__fail_count);
    }
    tb_wakeup__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, tb_wakeup__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(vlSelf, 
                                                         "@(negedge tb_wakeup.clk)");
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        co_await vlSelfRef.__VtrigSched_h4d4c818d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_wakeup.clk)", 
                                                             "sim/tb_wakeup.sv", 
                                                             328);
        tb_wakeup__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_wakeup__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    VL_WRITEF_NX("\n=== Testbench Complete ===\nTotal Tests: %0d\n",0,
                 32,(vlSelfRef.tb_wakeup__DOT__pass_count 
                     + vlSelfRef.tb_wakeup__DOT__fail_count));
    if ((0U == vlSelfRef.tb_wakeup__DOT__fail_count)) {
        VL_WRITEF_NX("[\033[32mALL TESTS PASSED\033[0m] %0d/%0d passed\n",0,
                     32,vlSelfRef.tb_wakeup__DOT__pass_count,
                     32,(vlSelfRef.tb_wakeup__DOT__pass_count 
                         + vlSelfRef.tb_wakeup__DOT__fail_count));
    } else {
        VL_WRITEF_NX("[\033[31mSOME TESTS FAILED\033[0m] %0d passed, %0d failed\n",0,
                     32,vlSelfRef.tb_wakeup__DOT__pass_count,
                     32,vlSelfRef.tb_wakeup__DOT__fail_count);
    }
    VL_FINISH_MT("sim/tb_wakeup.sv", 337, "");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_return;
}

void Vtb_wakeup___024root___eval_triggers_vec__act(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___eval_triggers_vec__act\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.tb_wakeup__DOT__clk)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_wakeup__DOT__clk__0)) 
                                                      << 2U) 
                                                     | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_wakeup__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_wakeup__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_wakeup__DOT__clk__0 
        = vlSelfRef.tb_wakeup__DOT__clk;
}

bool Vtb_wakeup___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___trigger_anySet__act\n"); );
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

void Vtb_wakeup___024root___act_comb__TOP__0(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___act_comb__TOP__0\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_wakeup__DOT__dut__DOT__granted = (1U 
                                                   & ((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_granted) 
                                                      | ((IData)(vlSelfRef.tb_wakeup__DOT__grant_valid) 
                                                         & (0U 
                                                            == (IData)(vlSelfRef.tb_wakeup__DOT__grant)))));
    vlSelfRef.tb_wakeup__DOT__reqs = ((0x0eU & (IData)(vlSelfRef.tb_wakeup__DOT__reqs)) 
                                      | (((0U == vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U]) 
                                          & (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid)) 
                                         & (~ (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__granted))));
    vlSelfRef.tb_wakeup__DOT__dut__DOT__granted = (1U 
                                                   & (((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_granted) 
                                                       >> 1U) 
                                                      | ((IData)(vlSelfRef.tb_wakeup__DOT__grant_valid) 
                                                         & (1U 
                                                            == (IData)(vlSelfRef.tb_wakeup__DOT__grant)))));
    vlSelfRef.tb_wakeup__DOT__reqs = ((0x0dU & (IData)(vlSelfRef.tb_wakeup__DOT__reqs)) 
                                      | ((((0U == vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U]) 
                                           & ((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid) 
                                              >> 1U)) 
                                          & (~ (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__granted))) 
                                         << 1U));
    vlSelfRef.tb_wakeup__DOT__dut__DOT__granted = (1U 
                                                   & (((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_granted) 
                                                       >> 2U) 
                                                      | ((IData)(vlSelfRef.tb_wakeup__DOT__grant_valid) 
                                                         & (2U 
                                                            == (IData)(vlSelfRef.tb_wakeup__DOT__grant)))));
    vlSelfRef.tb_wakeup__DOT__reqs = ((0x0bU & (IData)(vlSelfRef.tb_wakeup__DOT__reqs)) 
                                      | ((((0U == vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U]) 
                                           & ((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid) 
                                              >> 2U)) 
                                          & (~ (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__granted))) 
                                         << 2U));
    vlSelfRef.tb_wakeup__DOT__dut__DOT__granted = (1U 
                                                   & (((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_granted) 
                                                       >> 3U) 
                                                      | ((IData)(vlSelfRef.tb_wakeup__DOT__grant_valid) 
                                                         & (3U 
                                                            == (IData)(vlSelfRef.tb_wakeup__DOT__grant)))));
    vlSelfRef.tb_wakeup__DOT__reqs = ((7U & (IData)(vlSelfRef.tb_wakeup__DOT__reqs)) 
                                      | ((((0U == vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U]) 
                                           & ((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid) 
                                              >> 3U)) 
                                          & (~ (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__granted))) 
                                         << 3U));
}

void Vtb_wakeup___024root___eval_act(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___eval_act\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_wakeup___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_wakeup___024root___nba_sequent__TOP__0(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___nba_sequent__TOP__0\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __VdlyVal__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v0;
    __VdlyVal__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v0;
    __VdlySet__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v1;
    __VdlyVal__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v1 = 0;
    SData/*15:0*/ __VdlyVal__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v2;
    __VdlyVal__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v2 = 0;
    SData/*15:0*/ __VdlyVal__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v3;
    __VdlyVal__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v3 = 0;
    // Body
    __VdlySet__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v0 = 0U;
    if (vlSelfRef.tb_wakeup__DOT__rst) {
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U] 
            = (0xfffeU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U] 
            = (0xfffdU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U] 
            = (0xfffbU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U] 
            = (0xfff7U & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U] 
            = (0xffefU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U] 
            = (0xffdfU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U] 
            = (0xffbfU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U] 
            = (0xff7fU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U] 
            = (0xfeffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U] 
            = (0xfdffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U] 
            = (0xfbffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U] 
            = (0xf7ffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U] 
            = (0xefffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U] 
            = (0xdfffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U] 
            = (0xbfffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U] 
            = (0x7fffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U] 
            = (0xfffeU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U] 
            = (0xfffdU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U] 
            = (0xfffbU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U] 
            = (0xfff7U & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U] 
            = (0xffefU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U] 
            = (0xffdfU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U] 
            = (0xffbfU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U] 
            = (0xff7fU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U] 
            = (0xfeffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U] 
            = (0xfdffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U] 
            = (0xfbffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U] 
            = (0xf7ffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U] 
            = (0xefffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U] 
            = (0xdfffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U] 
            = (0xbfffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U] 
            = (0x7fffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U] 
            = (0xfffeU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U] 
            = (0xfffdU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U] 
            = (0xfffbU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U] 
            = (0xfff7U & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U] 
            = (0xffefU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U] 
            = (0xffdfU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U] 
            = (0xffbfU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U] 
            = (0xff7fU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U] 
            = (0xfeffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U] 
            = (0xfdffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U] 
            = (0xfbffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U] 
            = (0xf7ffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U] 
            = (0xefffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U] 
            = (0xdfffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U] 
            = (0xbfffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U] 
            = (0x7fffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U] 
            = (0xfffeU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U] 
            = (0xfffdU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U] 
            = (0xfffbU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U] 
            = (0xfff7U & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U] 
            = (0xffefU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U] 
            = (0xffdfU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U] 
            = (0xffbfU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U] 
            = (0xff7fU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U] 
            = (0xfeffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U] 
            = (0xfdffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U] 
            = (0xfbffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U] 
            = (0xf7ffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U] 
            = (0xefffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U] 
            = (0xdfffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U] 
            = (0xbfffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U] 
            = (0x7fffU & vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_granted = 0U;
        vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid = 0U;
    } else {
        if ((((IData)(vlSelfRef.tb_wakeup__DOT__disp_valid) 
              & (~ (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__full))) 
             & (0U == (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__free_entry)))) {
            __VdlyVal__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v0 
                = ((IData)(vlSelfRef.tb_wakeup__DOT__dependency_mask) 
                   & (~ (IData)(vlSelfRef.tb_wakeup__DOT__ready_mask)));
            vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid 
                = (1U | (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid));
        } else {
            __VdlyVal__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v0 
                = (vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U] 
                   & (~ (IData)(vlSelfRef.tb_wakeup__DOT__ready_mask)));
        }
        __VdlySet__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v0 = 1U;
        if ((((IData)(vlSelfRef.tb_wakeup__DOT__disp_valid) 
              & (~ (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__full))) 
             & (1U == (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__free_entry)))) {
            __VdlyVal__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v1 
                = ((IData)(vlSelfRef.tb_wakeup__DOT__dependency_mask) 
                   & (~ (IData)(vlSelfRef.tb_wakeup__DOT__ready_mask)));
            vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid 
                = (2U | (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid));
        } else {
            __VdlyVal__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v1 
                = (vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U] 
                   & (~ (IData)(vlSelfRef.tb_wakeup__DOT__ready_mask)));
        }
        if ((((IData)(vlSelfRef.tb_wakeup__DOT__disp_valid) 
              & (~ (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__full))) 
             & (2U == (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__free_entry)))) {
            __VdlyVal__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v2 
                = ((IData)(vlSelfRef.tb_wakeup__DOT__dependency_mask) 
                   & (~ (IData)(vlSelfRef.tb_wakeup__DOT__ready_mask)));
            vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid 
                = (4U | (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid));
        } else {
            __VdlyVal__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v2 
                = (vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U] 
                   & (~ (IData)(vlSelfRef.tb_wakeup__DOT__ready_mask)));
        }
        if ((((IData)(vlSelfRef.tb_wakeup__DOT__disp_valid) 
              & (~ (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__full))) 
             & (3U == (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__free_entry)))) {
            __VdlyVal__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v3 
                = ((IData)(vlSelfRef.tb_wakeup__DOT__dependency_mask) 
                   & (~ (IData)(vlSelfRef.tb_wakeup__DOT__ready_mask)));
            vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid 
                = (8U | (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid));
        } else {
            __VdlyVal__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v3 
                = (vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U] 
                   & (~ (IData)(vlSelfRef.tb_wakeup__DOT__ready_mask)));
        }
        if (vlSelfRef.tb_wakeup__DOT__grant_valid) {
            vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_granted 
                = ((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_granted) 
                   | (0x0fU & ((IData)(1U) << (IData)(vlSelfRef.tb_wakeup__DOT__grant))));
        }
        if (vlSelfRef.tb_wakeup__DOT__retire_valid) {
            vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_granted 
                = ((~ ((IData)(1U) << (IData)(vlSelfRef.tb_wakeup__DOT__retire_entry))) 
                   & (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_granted));
            vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid 
                = ((~ ((IData)(1U) << (IData)(vlSelfRef.tb_wakeup__DOT__retire_entry))) 
                   & (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid));
        }
    }
    if (__VdlySet__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v0) {
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U] 
            = __VdlyVal__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v0;
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U] 
            = __VdlyVal__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v1;
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U] 
            = __VdlyVal__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v2;
        vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U] 
            = __VdlyVal__tb_wakeup__DOT__dut__DOT__dependency_matrix_row__v3;
    }
    vlSelfRef.tb_wakeup__DOT__dut__DOT__free_entry = 0U;
    vlSelfRef.tb_wakeup__DOT__dut__DOT__full = 1U;
    vlSelfRef.tb_wakeup__DOT__dut__DOT__flag = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid)))) {
        vlSelfRef.tb_wakeup__DOT__dut__DOT__free_entry = 0U;
        vlSelfRef.tb_wakeup__DOT__dut__DOT__full = 0U;
        vlSelfRef.tb_wakeup__DOT__dut__DOT__flag = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid) 
                   >> 1U)) & (~ (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__flag))))) {
        vlSelfRef.tb_wakeup__DOT__dut__DOT__free_entry = 1U;
        vlSelfRef.tb_wakeup__DOT__dut__DOT__full = 0U;
        vlSelfRef.tb_wakeup__DOT__dut__DOT__flag = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid) 
                   >> 2U)) & (~ (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__flag))))) {
        vlSelfRef.tb_wakeup__DOT__dut__DOT__free_entry = 2U;
        vlSelfRef.tb_wakeup__DOT__dut__DOT__full = 0U;
        vlSelfRef.tb_wakeup__DOT__dut__DOT__flag = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid) 
                   >> 3U)) & (~ (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__flag))))) {
        vlSelfRef.tb_wakeup__DOT__dut__DOT__free_entry = 3U;
        vlSelfRef.tb_wakeup__DOT__dut__DOT__full = 0U;
        vlSelfRef.tb_wakeup__DOT__dut__DOT__flag = 1U;
    }
    vlSelfRef.tb_wakeup__DOT__free_entry_out = vlSelfRef.tb_wakeup__DOT__dut__DOT__free_entry;
    vlSelfRef.tb_wakeup__DOT__full_out = vlSelfRef.tb_wakeup__DOT__dut__DOT__full;
}

void Vtb_wakeup___024root___eval_nba(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___eval_nba\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_wakeup___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_wakeup___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_wakeup___024root___timing_ready(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___timing_ready\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready("@(negedge tb_wakeup.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h4d4c80cd__0.ready("@(posedge tb_wakeup.clk)");
    }
}

void Vtb_wakeup___024root___timing_resume(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___timing_resume\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h4d4c818d__0.moveToResumeQueue(
                                                          "@(negedge tb_wakeup.clk)");
    vlSelfRef.__VtrigSched_h4d4c80cd__0.moveToResumeQueue(
                                                          "@(posedge tb_wakeup.clk)");
    vlSelfRef.__VtrigSched_h4d4c818d__0.resume("@(negedge tb_wakeup.clk)");
    vlSelfRef.__VtrigSched_h4d4c80cd__0.resume("@(posedge tb_wakeup.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_wakeup___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_wakeup___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_wakeup___024root___eval_phase__act(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___eval_phase__act\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_wakeup___024root___eval_triggers_vec__act(vlSelf);
    Vtb_wakeup___024root___timing_ready(vlSelf);
    Vtb_wakeup___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_wakeup___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_wakeup___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_wakeup___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_wakeup___024root___timing_resume(vlSelf);
        Vtb_wakeup___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_wakeup___024root___eval_phase__inact(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___eval_phase__inact\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("sim/tb_wakeup.sv", 4, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_wakeup___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_wakeup___024root___eval_phase__nba(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___eval_phase__nba\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_wakeup___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_wakeup___024root___eval_nba(vlSelf);
        Vtb_wakeup___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_wakeup___024root___eval(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___eval\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_wakeup___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("sim/tb_wakeup.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("sim/tb_wakeup.sv", 4, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_wakeup___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("sim/tb_wakeup.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_wakeup___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_wakeup___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_wakeup___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0(Vtb_wakeup___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root____VbeforeTrig_h4d4c818d__0\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_wakeup__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_wakeup__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.tb_wakeup__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_wakeup__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_wakeup__DOT__clk__0 
        = vlSelfRef.tb_wakeup__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h4d4c80cd__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_wakeup___024root____VbeforeTrig_h4d4c80cd__0(Vtb_wakeup___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root____VbeforeTrig_h4d4c80cd__0\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_wakeup__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_wakeup__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.tb_wakeup__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_wakeup__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_wakeup__DOT__clk__0 
        = vlSelfRef.tb_wakeup__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h4d4c80cd__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d4c818d__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_wakeup___024root___eval_debug_assertions(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___eval_debug_assertions\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
