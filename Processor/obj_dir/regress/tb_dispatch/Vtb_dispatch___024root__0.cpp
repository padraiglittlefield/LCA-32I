// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dispatch.h for the primary calling header

#include "Vtb_dispatch__pch.h"

VL_ATTR_COLD void Vtb_dispatch___024root___eval_initial__TOP(Vtb_dispatch___024root* vlSelf);
VlCoroutine Vtb_dispatch___024root___eval_initial__TOP__Vtiming__0(Vtb_dispatch___024root* vlSelf);
VlCoroutine Vtb_dispatch___024root___eval_initial__TOP__Vtiming__1(Vtb_dispatch___024root* vlSelf);

void Vtb_dispatch___024root___eval_initial(Vtb_dispatch___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_initial\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_dispatch___024root___eval_initial__TOP(vlSelf);
    Vtb_dispatch___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_dispatch___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_dispatch___024root___eval_initial__TOP__Vtiming__0(Vtb_dispatch___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "sim/tb_dispatch.sv", 
                                             82);
        vlSelfRef.tb_dispatch__DOT__clk = 1U;
        vlSelfRef.tb_dispatch__DOT__cycle_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_dispatch__DOT__cycle_count);
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "sim/tb_dispatch.sv", 
                                             84);
        vlSelfRef.tb_dispatch__DOT__clk = 0U;
    }
    co_return;
}

void Vtb_dispatch___024root____VbeforeTrig_h04a12510__0(Vtb_dispatch___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_dispatch___024root___eval_initial__TOP__Vtiming__1(Vtb_dispatch___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_dispatch__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_dispatch__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.tb_dispatch__DOT__clk = 0U;
    vlSelfRef.tb_dispatch__DOT__rst = 1U;
    VL_WRITEF_NX("=== Example Module Testbench ===\n",0);
    VL_WRITEF_NX("\n[RESET] Resetting DUT\n",0);
    Vtb_dispatch___024root____VbeforeTrig_h04a12510__0(vlSelf, 
                                                       "@(negedge tb_dispatch.clk)");
    co_await vlSelfRef.__VtrigSched_h04a12510__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_dispatch.clk)", 
                                                         "sim/tb_dispatch.sv", 
                                                         121);
    vlSelfRef.tb_dispatch__DOT__rst = 1U;
    Vtb_dispatch___024root____VbeforeTrig_h04a12510__0(vlSelf, 
                                                       "@(negedge tb_dispatch.clk)");
    co_await vlSelfRef.__VtrigSched_h04a12510__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_dispatch.clk)", 
                                                         "sim/tb_dispatch.sv", 
                                                         123);
    Vtb_dispatch___024root____VbeforeTrig_h04a12510__0(vlSelf, 
                                                       "@(negedge tb_dispatch.clk)");
    co_await vlSelfRef.__VtrigSched_h04a12510__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_dispatch.clk)", 
                                                         "sim/tb_dispatch.sv", 
                                                         124);
    vlSelfRef.tb_dispatch__DOT__rst = 0U;
    Vtb_dispatch___024root____VbeforeTrig_h04a12510__0(vlSelf, 
                                                       "@(negedge tb_dispatch.clk)");
    co_await vlSelfRef.__VtrigSched_h04a12510__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_dispatch.clk)", 
                                                         "sim/tb_dispatch.sv", 
                                                         126);
    VL_WRITEF_NX("[RESET] Reset complete\n\n",0);
    tb_dispatch__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, tb_dispatch__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_dispatch___024root____VbeforeTrig_h04a12510__0(vlSelf, 
                                                           "@(negedge tb_dispatch.clk)");
        co_await vlSelfRef.__VtrigSched_h04a12510__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_dispatch.clk)", 
                                                             "sim/tb_dispatch.sv", 
                                                             166);
        tb_dispatch__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_dispatch__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    VL_WRITEF_NX("\n=== Testbench Complete ===\nTotal Tests: 0\n[\033[32mALL TESTS PASSED\033[0m] 0/0 passed\n",0);
    VL_FINISH_MT("sim/tb_dispatch.sv", 175, "");
    co_return;
}

void Vtb_dispatch___024root___eval_triggers_vec__act(Vtb_dispatch___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_triggers_vec__act\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.tb_dispatch__DOT__clk)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_dispatch__DOT__clk__0)) 
                                                      << 2U) 
                                                     | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_dispatch__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_dispatch__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_dispatch__DOT__clk__0 
        = vlSelfRef.tb_dispatch__DOT__clk;
}

bool Vtb_dispatch___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___trigger_anySet__act\n"); );
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

void Vtb_dispatch___024root___nba_sequent__TOP__0(Vtb_dispatch___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___nba_sequent__TOP__0\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlySet__tb_dispatch__DOT__disp_pkt__v0;
    __VdlySet__tb_dispatch__DOT__disp_pkt__v0 = 0;
    VlWide<4>/*127:0*/ __VdlyVal__tb_dispatch__DOT__disp_pkt__v4;
    VL_ZERO_W(128, __VdlyVal__tb_dispatch__DOT__disp_pkt__v4);
    CData/*1:0*/ __VdlyDim0__tb_dispatch__DOT__disp_pkt__v4;
    __VdlyDim0__tb_dispatch__DOT__disp_pkt__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_dispatch__DOT__disp_pkt__v4;
    __VdlySet__tb_dispatch__DOT__disp_pkt__v4 = 0;
    VlWide<4>/*127:0*/ __VdlyVal__tb_dispatch__DOT__disp_pkt__v5;
    VL_ZERO_W(128, __VdlyVal__tb_dispatch__DOT__disp_pkt__v5);
    CData/*1:0*/ __VdlyDim0__tb_dispatch__DOT__disp_pkt__v5;
    __VdlyDim0__tb_dispatch__DOT__disp_pkt__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_dispatch__DOT__disp_valid__v0;
    __VdlySet__tb_dispatch__DOT__disp_valid__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_dispatch__DOT__disp_valid__v4;
    __VdlyDim0__tb_dispatch__DOT__disp_valid__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_dispatch__DOT__disp_valid__v4;
    __VdlySet__tb_dispatch__DOT__disp_valid__v4 = 0;
    CData/*1:0*/ __VdlyDim0__tb_dispatch__DOT__disp_valid__v5;
    __VdlyDim0__tb_dispatch__DOT__disp_valid__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_dispatch__DOT__dependency_mask__v0;
    __VdlySet__tb_dispatch__DOT__dependency_mask__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_dispatch__DOT__dependency_mask__v4;
    __VdlyVal__tb_dispatch__DOT__dependency_mask__v4 = 0;
    CData/*1:0*/ __VdlyDim0__tb_dispatch__DOT__dependency_mask__v4;
    __VdlyDim0__tb_dispatch__DOT__dependency_mask__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_dispatch__DOT__dependency_mask__v4;
    __VdlySet__tb_dispatch__DOT__dependency_mask__v4 = 0;
    SData/*15:0*/ __VdlyVal__tb_dispatch__DOT__dependency_mask__v5;
    __VdlyVal__tb_dispatch__DOT__dependency_mask__v5 = 0;
    CData/*1:0*/ __VdlyDim0__tb_dispatch__DOT__dependency_mask__v5;
    __VdlyDim0__tb_dispatch__DOT__dependency_mask__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v0;
    __VdlySet__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v0 = 0;
    VlWide<4>/*126:0*/ __VdlyVal__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16;
    VL_ZERO_W(127, __VdlyVal__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16);
    CData/*3:0*/ __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16;
    __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16;
    __VdlySet__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16 = 0;
    VlWide<4>/*126:0*/ __VdlyVal__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17;
    VL_ZERO_W(127, __VdlyVal__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17);
    CData/*3:0*/ __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17;
    __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17 = 0;
    CData/*0:0*/ __VdlySet__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17;
    __VdlySet__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17 = 0;
    CData/*0:0*/ __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v0;
    __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v0 = 0;
    CData/*5:0*/ __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v64;
    __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v64 = 0;
    CData/*0:0*/ __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v64;
    __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v64 = 0;
    CData/*3:0*/ __VdlyVal__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v65;
    __VdlyVal__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v65 = 0;
    CData/*5:0*/ __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v65;
    __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v65 = 0;
    CData/*5:0*/ __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v66;
    __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v66 = 0;
    CData/*0:0*/ __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v66;
    __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v66 = 0;
    CData/*3:0*/ __VdlyVal__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v67;
    __VdlyVal__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v67 = 0;
    CData/*5:0*/ __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v67;
    __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v67 = 0;
    CData/*5:0*/ __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v68;
    __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v68 = 0;
    CData/*0:0*/ __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v68;
    __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v68 = 0;
    CData/*5:0*/ __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v69;
    __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v69 = 0;
    CData/*0:0*/ __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v69;
    __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v69 = 0;
    CData/*5:0*/ __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v70;
    __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v70 = 0;
    CData/*0:0*/ __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v70;
    __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v70 = 0;
    CData/*5:0*/ __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v71;
    __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v71 = 0;
    CData/*0:0*/ __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v71;
    __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v71 = 0;
    IData/*31:0*/ __Vilp1;
    // Body
    __VdlySet__tb_dispatch__DOT__disp_valid__v0 = 0U;
    __VdlySet__tb_dispatch__DOT__disp_valid__v4 = 0U;
    __VdlySet__tb_dispatch__DOT__dependency_mask__v0 = 0U;
    __VdlySet__tb_dispatch__DOT__dependency_mask__v4 = 0U;
    __VdlySet__tb_dispatch__DOT__disp_pkt__v0 = 0U;
    __VdlySet__tb_dispatch__DOT__disp_pkt__v4 = 0U;
    __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v0 = 0U;
    __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v64 = 0U;
    __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v66 = 0U;
    __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v68 = 0U;
    __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v69 = 0U;
    __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v70 = 0U;
    __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v71 = 0U;
    __VdlySet__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v0 = 0U;
    __VdlySet__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16 = 0U;
    __VdlySet__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17 = 0U;
    if (((IData)(vlSelfRef.tb_dispatch__DOT__rst) | (IData)(vlSelfRef.tb_dispatch__DOT__flush))) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__tail_ptr = 0U;
        __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v0 = 1U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr = 0U;
        __VdlySet__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v0 = 1U;
    } else {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__tail_ptr 
            = (0x0000001fU & ((IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__tail_ptr) 
                              + (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated)));
        if (vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i[0U]) {
            __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v64 
                = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[0U];
            __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v64 = 1U;
            __VdlyVal__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v65 
                = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i[0U];
            __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v65 
                = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[0U];
        }
        if (vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i[1U]) {
            __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v66 
                = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[1U];
            __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v66 = 1U;
            __VdlyVal__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v67 
                = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i[1U];
            __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v67 
                = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[1U];
        }
        if (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_vld_i[0U]) {
            __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v68 
                = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_dst_preg_i[0U];
            __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v68 = 1U;
        }
        if (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_vld_i[1U]) {
            __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v69 
                = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_dst_preg_i[1U];
            __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v69 = 1U;
        }
        if (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_vld_i[2U]) {
            __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v70 
                = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_dst_preg_i[2U];
            __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v70 = 1U;
        }
        if (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_vld_i[3U]) {
            __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v71 
                = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_dst_preg_i[3U];
            __VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v71 = 1U;
        }
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr 
            = (0x0000001fU & ((IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr) 
                              + (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched)));
        if ((1U & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en))) {
            __VdlyVal__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16[0U] 
                = vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][0U];
            __VdlyVal__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16[1U] 
                = vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][1U];
            __VdlyVal__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16[2U] 
                = vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][2U];
            __VdlyVal__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16[3U] 
                = vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][3U];
            __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16 
                = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx[0U];
            __VdlySet__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en))) {
            __VdlyVal__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17[0U] 
                = vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][0U];
            __VdlyVal__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17[1U] 
                = vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][1U];
            __VdlyVal__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17[2U] 
                = vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][2U];
            __VdlyVal__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17[3U] 
                = vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][3U];
            __VdlyDim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17 
                = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx[1U];
            __VdlySet__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17 = 1U;
        }
    }
    if (vlSelfRef.tb_dispatch__DOT__rst) {
        __VdlySet__tb_dispatch__DOT__disp_valid__v0 = 1U;
        __VdlySet__tb_dispatch__DOT__dependency_mask__v0 = 1U;
        __VdlySet__tb_dispatch__DOT__disp_pkt__v0 = 1U;
    } else {
        __VdlyDim0__tb_dispatch__DOT__disp_valid__v4 
            = vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[0U];
        __VdlySet__tb_dispatch__DOT__disp_valid__v4 = 1U;
        __VdlyDim0__tb_dispatch__DOT__disp_valid__v5 
            = vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1U];
        __VdlyVal__tb_dispatch__DOT__dependency_mask__v4 
            = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_dependency_mask[0U];
        __VdlyDim0__tb_dispatch__DOT__dependency_mask__v4 
            = vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[0U];
        __VdlySet__tb_dispatch__DOT__dependency_mask__v4 = 1U;
        __VdlyVal__tb_dispatch__DOT__dependency_mask__v5 
            = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_dependency_mask[1U];
        __VdlyDim0__tb_dispatch__DOT__dependency_mask__v5 
            = vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1U];
        __VdlyVal__tb_dispatch__DOT__disp_pkt__v4[0U] 
            = vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U];
        __VdlyVal__tb_dispatch__DOT__disp_pkt__v4[1U] 
            = vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U];
        __VdlyVal__tb_dispatch__DOT__disp_pkt__v4[2U] 
            = vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U];
        __VdlyVal__tb_dispatch__DOT__disp_pkt__v4[3U] 
            = vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][3U];
        __VdlyDim0__tb_dispatch__DOT__disp_pkt__v4 
            = vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[0U];
        __VdlySet__tb_dispatch__DOT__disp_pkt__v4 = 1U;
        __VdlyVal__tb_dispatch__DOT__disp_pkt__v5[0U] 
            = vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U];
        __VdlyVal__tb_dispatch__DOT__disp_pkt__v5[1U] 
            = vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U];
        __VdlyVal__tb_dispatch__DOT__disp_pkt__v5[2U] 
            = vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U];
        __VdlyVal__tb_dispatch__DOT__disp_pkt__v5[3U] 
            = vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][3U];
        __VdlyDim0__tb_dispatch__DOT__disp_pkt__v5 
            = vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1U];
    }
    if (__VdlySet__tb_dispatch__DOT__disp_valid__v0) {
        vlSelfRef.tb_dispatch__DOT__disp_valid[0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__disp_valid[1U] = 0U;
        vlSelfRef.tb_dispatch__DOT__disp_valid[2U] = 0U;
        vlSelfRef.tb_dispatch__DOT__disp_valid[3U] = 0U;
    }
    if (__VdlySet__tb_dispatch__DOT__disp_valid__v4) {
        vlSelfRef.tb_dispatch__DOT__disp_valid[__VdlyDim0__tb_dispatch__DOT__disp_valid__v4] = 1U;
        vlSelfRef.tb_dispatch__DOT__disp_valid[__VdlyDim0__tb_dispatch__DOT__disp_valid__v5] = 1U;
    }
    if (__VdlySet__tb_dispatch__DOT__dependency_mask__v0) {
        vlSelfRef.tb_dispatch__DOT__dependency_mask[0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dependency_mask[1U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dependency_mask[2U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dependency_mask[3U] = 0U;
    }
    if (__VdlySet__tb_dispatch__DOT__dependency_mask__v4) {
        vlSelfRef.tb_dispatch__DOT__dependency_mask[__VdlyDim0__tb_dispatch__DOT__dependency_mask__v4] 
            = __VdlyVal__tb_dispatch__DOT__dependency_mask__v4;
        vlSelfRef.tb_dispatch__DOT__dependency_mask[__VdlyDim0__tb_dispatch__DOT__dependency_mask__v5] 
            = __VdlyVal__tb_dispatch__DOT__dependency_mask__v5;
    }
    if (__VdlySet__tb_dispatch__DOT__disp_pkt__v0) {
        vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][1U] = 0U;
        vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][2U] = 0U;
        vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][3U] = 0U;
        vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][1U] = 0U;
        vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][2U] = 0U;
        vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][3U] = 0U;
        vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][1U] = 0U;
        vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][2U] = 0U;
        vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][3U] = 0U;
        vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][1U] = 0U;
        vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][2U] = 0U;
        vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][3U] = 0U;
    }
    if (__VdlySet__tb_dispatch__DOT__disp_pkt__v4) {
        vlSelfRef.tb_dispatch__DOT__disp_pkt[__VdlyDim0__tb_dispatch__DOT__disp_pkt__v4][0U] 
            = __VdlyVal__tb_dispatch__DOT__disp_pkt__v4[0U];
        vlSelfRef.tb_dispatch__DOT__disp_pkt[__VdlyDim0__tb_dispatch__DOT__disp_pkt__v4][1U] 
            = __VdlyVal__tb_dispatch__DOT__disp_pkt__v4[1U];
        vlSelfRef.tb_dispatch__DOT__disp_pkt[__VdlyDim0__tb_dispatch__DOT__disp_pkt__v4][2U] 
            = __VdlyVal__tb_dispatch__DOT__disp_pkt__v4[2U];
        vlSelfRef.tb_dispatch__DOT__disp_pkt[__VdlyDim0__tb_dispatch__DOT__disp_pkt__v4][3U] 
            = __VdlyVal__tb_dispatch__DOT__disp_pkt__v4[3U];
        vlSelfRef.tb_dispatch__DOT__disp_pkt[__VdlyDim0__tb_dispatch__DOT__disp_pkt__v5][0U] 
            = __VdlyVal__tb_dispatch__DOT__disp_pkt__v5[0U];
        vlSelfRef.tb_dispatch__DOT__disp_pkt[__VdlyDim0__tb_dispatch__DOT__disp_pkt__v5][1U] 
            = __VdlyVal__tb_dispatch__DOT__disp_pkt__v5[1U];
        vlSelfRef.tb_dispatch__DOT__disp_pkt[__VdlyDim0__tb_dispatch__DOT__disp_pkt__v5][2U] 
            = __VdlyVal__tb_dispatch__DOT__disp_pkt__v5[2U];
        vlSelfRef.tb_dispatch__DOT__disp_pkt[__VdlyDim0__tb_dispatch__DOT__disp_pkt__v5][3U] 
            = __VdlyVal__tb_dispatch__DOT__disp_pkt__v5[3U];
    }
    if (__VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v0) {
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x0000003fU)) {
            vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
    if (__VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v64) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt[__VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v64] 
            = (0x00000010U | vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
               [__VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v64]);
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt[__VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v65] 
            = ((0x10U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
                [__VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v65]) 
               | (IData)(__VdlyVal__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v65));
    }
    if (__VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v66) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt[__VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v66] 
            = (0x00000010U | vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
               [__VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v66]);
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt[__VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v67] 
            = ((0x10U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
                [__VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v67]) 
               | (IData)(__VdlyVal__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v67));
    }
    if (__VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v68) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt[__VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v68] 
            = (0x0fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
               [__VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v68]);
    }
    if (__VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v69) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt[__VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v69] 
            = (0x0fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
               [__VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v69]);
    }
    if (__VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v70) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt[__VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v70] 
            = (0x0fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
               [__VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v70]);
    }
    if (__VdlySet__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v71) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt[__VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v71] 
            = (0x0fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
               [__VdlyDim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v71]);
    }
    if (__VdlySet__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v0) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][1U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][2U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][3U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][1U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][2U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][3U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][1U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][2U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][3U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][1U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][2U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][3U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][1U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][2U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][3U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][1U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][2U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][3U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][1U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][2U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][3U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][1U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][2U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][3U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][1U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][2U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][3U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][1U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][2U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][3U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][1U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][2U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[10U][3U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][1U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][2U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[11U][3U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][1U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][2U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[12U][3U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][1U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][2U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[13U][3U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][1U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][2U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[14U][3U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][1U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][2U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[15U][3U] = 0U;
    }
    if (__VdlySet__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[__VdlyDim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16][0U] 
            = __VdlyVal__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16[0U];
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[__VdlyDim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16][1U] 
            = __VdlyVal__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16[1U];
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[__VdlyDim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16][2U] 
            = __VdlyVal__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16[2U];
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[__VdlyDim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16][3U] 
            = __VdlyVal__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16[3U];
    }
    if (__VdlySet__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[__VdlyDim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17][0U] 
            = __VdlyVal__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17[0U];
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[__VdlyDim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17][1U] 
            = __VdlyVal__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17[1U];
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[__VdlyDim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17][2U] 
            = __VdlyVal__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17[2U];
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[__VdlyDim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17][3U] 
            = __VdlyVal__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17[3U];
    }
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_valid_o[0U] 
        = vlSelfRef.tb_dispatch__DOT__disp_valid[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_valid_o[1U] 
        = vlSelfRef.tb_dispatch__DOT__disp_valid[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_valid_o[2U] 
        = vlSelfRef.tb_dispatch__DOT__disp_valid[2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_valid_o[3U] 
        = vlSelfRef.tb_dispatch__DOT__disp_valid[3U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dependency_mask_o[0U] 
        = vlSelfRef.tb_dispatch__DOT__dependency_mask[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dependency_mask_o[1U] 
        = vlSelfRef.tb_dispatch__DOT__dependency_mask[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dependency_mask_o[2U] 
        = vlSelfRef.tb_dispatch__DOT__dependency_mask[2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dependency_mask_o[3U] 
        = vlSelfRef.tb_dispatch__DOT__dependency_mask[3U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][0U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][1U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][2U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][3U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][3U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][0U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][1U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][2U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][3U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][3U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][0U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][1U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][2U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][3U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][3U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][0U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][1U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][2U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][3U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][3U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated = 0U;
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__tail_ptr;
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx[0U] 
        = (0x0000000fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[0U]);
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[0U] 
        = (((1U & ((IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr) 
                   >> 4U)) != (1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[0U] 
                                     >> 4U))) & ((0x0000000fU 
                                                  & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr)) 
                                                 == vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx[0U]));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en 
        = ((2U & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en)) 
           | (vlSelfRef.tb_dispatch__DOT__rename_vld[0U] 
              & (~ vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[0U])));
    if ((1U & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en))) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated)));
    }
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[1U] 
        = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__tail_ptr)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx[1U] 
        = (0x0000000fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[1U]);
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[1U] 
        = (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[0U] 
           | (((1U & ((IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr) 
                      >> 4U)) != (1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[1U] 
                                        >> 4U))) & 
              ((0x0000000fU & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr)) 
               == vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx[1U])));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en 
        = ((1U & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en)) 
           | ((vlSelfRef.tb_dispatch__DOT__rename_vld[1U] 
               & (~ vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[1U])) 
              << 1U));
    if ((2U & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en))) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated)));
    }
    vlSelfRef.tb_dispatch__DOT__instr_queue_full[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[0U];
    vlSelfRef.tb_dispatch__DOT__instr_queue_full[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[0U] 
        = (7U & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[1U] 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_queue_full_o[0U] 
        = vlSelfRef.tb_dispatch__DOT__instr_queue_full[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_queue_full_o[1U] 
        = vlSelfRef.tb_dispatch__DOT__instr_queue_full[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__full[0U] 
        = vlSelfRef.tb_dispatch__DOT__instr_queue_full[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__full[1U] 
        = vlSelfRef.tb_dispatch__DOT__instr_queue_full[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[0U] 
        = (1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                 [vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[0U]][1U] 
                 >> 3U));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[1U] 
        = (1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                 [vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[1U]][1U] 
                 >> 3U));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[0U]][0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[0U]][1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[0U]][2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][3U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[0U]][3U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[1U]][0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[1U]][1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[1U]][2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][3U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[1U]][3U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_vld_o[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_vld_o[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][2U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][3U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][3U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][2U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][3U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][3U];
    vlSelfRef.tb_dispatch__DOT__rob_dst_reg[0U] = (0x0000001fU 
                                                   & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                                                      >> 0x00000018U));
    vlSelfRef.tb_dispatch__DOT__rob_dst_reg[1U] = (0x0000001fU 
                                                   & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                                                      >> 0x00000018U));
    vlSelfRef.tb_dispatch__DOT__rob_wb_en[0U] = (1U 
                                                 & vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][0U]);
    vlSelfRef.tb_dispatch__DOT__rob_wb_en[1U] = (1U 
                                                 & vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][0U]);
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_dst_preg[0U] 
        = (0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                          >> 0x00000012U));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_dst_preg[1U] 
        = (0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                          >> 0x00000012U));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src1_preg[0U] 
        = (0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                          >> 0x0000000bU));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src1_preg[1U] 
        = (0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                          >> 0x0000000bU));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src2_preg[0U] 
        = (0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                          >> 4U));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src2_preg[1U] 
        = (0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                          >> 4U));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src1_vld[0U] 
        = (1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                 >> 0x00000011U));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src1_vld[1U] 
        = (1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                 >> 0x00000011U));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src2_vld[0U] 
        = (1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                 >> 0x0000000aU));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src2_vld[1U] 
        = (1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                 >> 0x0000000aU));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[0U] = 0U;
    vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[0U] = 0U;
    vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0U] = 0U;
    vlSelfRef.tb_dispatch__DOT__dut__DOT__required_fu[0U] 
        = (3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                 >> 0x0000001dU));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free 
        = ((0x0eU & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free)) 
           | (1U & (~ vlSelfRef.tb_dispatch__DOT__rs_full[0U])));
    if (((((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[0U] 
            & (0U == vlSelfRef.tb_dispatch__DOT__dut__DOT__required_fu[0U])) 
           & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free)) 
          & (~ vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[0U])) 
         & (~ vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0U]))) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0U] = 1U;
    }
    if (((((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[0U] 
            & (0U == vlSelfRef.tb_dispatch__DOT__dut__DOT__required_fu[0U])) 
           & ((IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free) 
              >> 1U)) & (~ (vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[0U] 
                            >> 1U))) & (~ vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0U]))) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[0U] = 1U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0U] = 1U;
    }
    if (((((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[0U] 
            & (0U == vlSelfRef.tb_dispatch__DOT__dut__DOT__required_fu[0U])) 
           & ((IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free) 
              >> 2U)) & (~ (vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[0U] 
                            >> 2U))) & (~ vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0U]))) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[0U] = 2U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0U] = 1U;
    }
    if (((((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[0U] 
            & (1U == vlSelfRef.tb_dispatch__DOT__dut__DOT__required_fu[0U])) 
           & ((IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free) 
              >> 3U)) & (~ (vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[0U] 
                            >> 3U))) & (~ vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0U]))) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[0U] = 3U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0U] = 1U;
    }
    vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[1U] 
        = (0x0000000fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[0U] 
                          | (vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0U]
                              ? ((IData)(1U) << vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[0U])
                              : 0U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1U] = 0U;
    vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[1U] = 0U;
    vlSelfRef.tb_dispatch__DOT__dut__DOT__required_fu[1U] 
        = (3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                 >> 0x0000001dU));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free 
        = ((0x0dU & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free)) 
           | (2U & ((~ vlSelfRef.tb_dispatch__DOT__rs_full[1U]) 
                    << 1U)));
    if (vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0U]) {
        if (((((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[1U] 
                & (0U == vlSelfRef.tb_dispatch__DOT__dut__DOT__required_fu[1U])) 
               & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free)) 
              & (~ vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[1U])) 
             & (~ vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[1U]))) {
            vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1U] = 0U;
            vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[1U] = 1U;
        }
        if (((((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[1U] 
                & (0U == vlSelfRef.tb_dispatch__DOT__dut__DOT__required_fu[1U])) 
               & ((IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free) 
                  >> 1U)) & (~ (vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[1U] 
                                >> 1U))) & (~ vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[1U]))) {
            vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1U] = 1U;
            vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[1U] = 1U;
        }
        if (((((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[1U] 
                & (0U == vlSelfRef.tb_dispatch__DOT__dut__DOT__required_fu[1U])) 
               & ((IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free) 
                  >> 2U)) & (~ (vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[1U] 
                                >> 2U))) & (~ vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[1U]))) {
            vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1U] = 2U;
            vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[1U] = 1U;
        }
        if (((((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[1U] 
                & (1U == vlSelfRef.tb_dispatch__DOT__dut__DOT__required_fu[1U])) 
               & ((IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free) 
                  >> 3U)) & (~ (vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[1U] 
                                >> 3U))) & (~ vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[1U]))) {
            vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1U] = 3U;
            vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[1U] = 1U;
        }
    }
    vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[0U] 
        = (0x0000000fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[1U] 
                          | (vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[1U]
                              ? ((IData)(1U) << vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1U])
                              : 0U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_dst_reg_o[0U] 
        = vlSelfRef.tb_dispatch__DOT__rob_dst_reg[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_dst_reg_o[1U] 
        = vlSelfRef.tb_dispatch__DOT__rob_dst_reg[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_wb_en_o[0U] 
        = vlSelfRef.tb_dispatch__DOT__rob_wb_en[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_wb_en_o[1U] 
        = vlSelfRef.tb_dispatch__DOT__rob_wb_en[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_dst_preg[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_dst_preg[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src1_preg[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src1_preg[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src2_preg[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src2_preg[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src1_vld[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src1_vld[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src2_vld[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src2_vld[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__fire_vld[0U] 
        = (vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0U] 
           & (~ vlSelfRef.tb_dispatch__DOT__rob_full[0U]));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__fire_vld[1U] 
        = (vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[1U] 
           & (~ vlSelfRef.tb_dispatch__DOT__rob_full[1U]));
    vlSelfRef.tb_dispatch__DOT__disp_vld = (1U == vlSymsp->TOP__CORE_PKG.FU_TYPE
                                            [vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1U]]);
    if ((1U == vlSymsp->TOP__CORE_PKG.FU_TYPE[vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[0U]])) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_sdq_idx_o[0U] 
            = vlSelfRef.tb_dispatch__DOT__disp_sdq_idx;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_ldq_idx_o[0U] 
            = vlSelfRef.tb_dispatch__DOT__disp_ldq_idx;
    } else {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_sdq_idx_o[0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_ldq_idx_o[0U] = 0U;
    }
    if ((1U == vlSymsp->TOP__CORE_PKG.FU_TYPE[vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1U]])) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_sdq_idx_o[1U] 
            = vlSelfRef.tb_dispatch__DOT__disp_sdq_idx;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_ldq_idx_o[1U] 
            = vlSelfRef.tb_dispatch__DOT__disp_ldq_idx;
    } else {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_sdq_idx_o[1U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_ldq_idx_o[1U] = 0U;
    }
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][3U] 
        = ((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][3U] 
            << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                      >> 0x0000001fU));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0x07ffffffU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U]) 
           | (0xf8000000U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                             << 3U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xf81fffffU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U]) 
           | (0x07e00000U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                             << 3U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xffe07fffU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U]) 
           | (0x001f8000U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                             << 4U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xffffbfffU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U]) 
           | (0x00004000U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                             >> 3U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xffffc0ffU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U]) 
           | (0x00003f00U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                             << 4U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xffffff7fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U]) 
           | (0x00000080U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                             >> 3U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U] 
        = ((7U & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U]) 
           | (0xfffffff8U & ((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                              << 0x0000001fU) | (0x7ffffff8U 
                                                 & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][1U] 
                                                    >> 1U)))));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xfffffff8U & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U]) 
           | (7U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                    >> 1U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U] 
        = ((0xfffffffbU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U]) 
           | (4U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][1U] 
                    >> 1U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U] 
        = ((3U & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U]) 
           | (0xfffffffcU & ((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][1U] 
                              << 0x0000001fU) | (0x7ffffffcU 
                                                 & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][0U] 
                                                    >> 1U)))));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U] 
        = ((0xfffffffcU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U]) 
           | (3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][1U] 
                    >> 1U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U] 
        = ((0xfffffffdU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U]) 
           | (2U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][0U] 
                    >> 1U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U] 
        = ((0xfffffffeU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U]) 
           | (1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][0U] 
                    >> 1U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xffffff87U & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U]) 
           | (vlSelfRef.tb_dispatch__DOT__rob_entry_idx
              [(1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[0U])] 
              << 3U));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][3U] 
        = ((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][3U] 
            << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                      >> 0x0000001fU));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0x07ffffffU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U]) 
           | (0xf8000000U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                             << 3U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xf81fffffU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U]) 
           | (0x07e00000U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                             << 3U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xffe07fffU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U]) 
           | (0x001f8000U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                             << 4U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xffffbfffU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U]) 
           | (0x00004000U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                             >> 3U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xffffc0ffU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U]) 
           | (0x00003f00U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                             << 4U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xffffff7fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U]) 
           | (0x00000080U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                             >> 3U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U] 
        = ((7U & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U]) 
           | (0xfffffff8U & ((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                              << 0x0000001fU) | (0x7ffffff8U 
                                                 & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][1U] 
                                                    >> 1U)))));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xfffffff8U & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U]) 
           | (7U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                    >> 1U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U] 
        = ((0xfffffffbU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U]) 
           | (4U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][1U] 
                    >> 1U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U] 
        = ((3U & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U]) 
           | (0xfffffffcU & ((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][1U] 
                              << 0x0000001fU) | (0x7ffffffcU 
                                                 & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][0U] 
                                                    >> 1U)))));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U] 
        = ((0xfffffffcU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U]) 
           | (3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][1U] 
                    >> 1U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U] 
        = ((0xfffffffdU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U]) 
           | (2U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][0U] 
                    >> 1U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U] 
        = ((0xfffffffeU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U]) 
           | (1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][0U] 
                    >> 1U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xffffff87U & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U]) 
           | (vlSelfRef.tb_dispatch__DOT__rob_entry_idx
              [(1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1U])] 
              << 3U));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_fire_loc[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_fire_loc[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dst_preg_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dst_preg_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_preg_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_preg_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_preg_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_preg_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_vld_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_vld_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_vld_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_vld_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i[1U];
    vlSelfRef.tb_dispatch__DOT__rob_fire_valid[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__fire_vld[0U];
    vlSelfRef.tb_dispatch__DOT__rob_fire_valid[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__fire_vld[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__fire_vld[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__fire_vld[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__fire_vld[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__fire_vld[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_fire_loc[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_fire_loc[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_fire_valid_o[0U] 
        = vlSelfRef.tb_dispatch__DOT__rob_fire_valid[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_fire_valid_o[1U] 
        = vlSelfRef.tb_dispatch__DOT__rob_fire_valid[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched = 0U;
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en 
        = ((2U & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en)) 
           | vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i[0U]);
    if ((1U & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en))) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched)));
    }
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en 
        = ((1U & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en)) 
           | ((vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i[0U] 
               & vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i[1U]) 
              << 1U));
    if ((2U & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en))) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched)));
    }
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__fire_vld_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__fire_vld_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__fire_loc_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__fire_loc_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[0U] = 0U;
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[0U] = 0U;
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[0U] = 0U;
    if (vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i[0U]) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[0U] 
            = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
            [vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i[0U]];
        if ((0x00000010U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[0U])) {
            vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[0U] 
                = (vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[0U] 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[0U]))));
        }
    }
    if (vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i[0U]) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[0U] 
            = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
            [vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i[0U]];
        if ((0x00000010U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[0U])) {
            vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[0U] 
                = (vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[0U] 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[0U]))));
        }
    }
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] = 0U;
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[1U] = 0U;
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[1U] = 0U;
    if (vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i[1U]) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[1U] 
            = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
            [vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i[1U]];
        if ((0x00000010U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[1U])) {
            vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] 
                = (vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[1U]))));
        }
    }
    if (vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i[1U]) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[1U] 
            = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
            [vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i[1U]];
        if ((0x00000010U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[1U])) {
            vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] 
                = (vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[1U]))));
        }
    }
    if (vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i[0U]) {
        if ((vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i[1U] 
             == vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[0U])) {
            vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] 
                = (vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] 
                   | (0x0000ffffU & ((IData)(1U) << vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i[0U])));
        }
        if ((vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i[1U] 
             == vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[0U])) {
            vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] 
                = (vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] 
                   | (0x0000ffffU & ((IData)(1U) << vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i[0U])));
        }
    }
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dependency_mask_o[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dependency_mask_o[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_dependency_mask[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_dependency_mask[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U];
}

void Vtb_dispatch___024root___eval_nba(Vtb_dispatch___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_nba\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_dispatch___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vtb_dispatch___024root___timing_ready(Vtb_dispatch___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___timing_ready\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h04a12510__0.ready("@(negedge tb_dispatch.clk)");
    }
}

void Vtb_dispatch___024root___timing_resume(Vtb_dispatch___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___timing_resume\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h04a12510__0.moveToResumeQueue(
                                                          "@(negedge tb_dispatch.clk)");
    vlSelfRef.__VtrigSched_h04a12510__0.resume("@(negedge tb_dispatch.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_dispatch___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_dispatch___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_dispatch___024root___eval_phase__act(Vtb_dispatch___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_phase__act\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_dispatch___024root___eval_triggers_vec__act(vlSelf);
    Vtb_dispatch___024root___timing_ready(vlSelf);
    Vtb_dispatch___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_dispatch___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_dispatch___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_dispatch___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_dispatch___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_dispatch___024root___eval_phase__inact(Vtb_dispatch___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_phase__inact\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("sim/tb_dispatch.sv", 7, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_dispatch___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_dispatch___024root___eval_phase__nba(Vtb_dispatch___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_phase__nba\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_dispatch___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_dispatch___024root___eval_nba(vlSelf);
        Vtb_dispatch___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_dispatch___024root___eval(Vtb_dispatch___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_dispatch___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("sim/tb_dispatch.sv", 7, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("sim/tb_dispatch.sv", 7, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_dispatch___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("sim/tb_dispatch.sv", 7, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_dispatch___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_dispatch___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_dispatch___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_dispatch___024root____VbeforeTrig_h04a12510__0(Vtb_dispatch___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root____VbeforeTrig_h04a12510__0\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.tb_dispatch__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_dispatch__DOT__clk__0)) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_dispatch__DOT__clk__0 
        = vlSelfRef.tb_dispatch__DOT__clk;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h04a12510__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h04a12510__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h04a12510__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h04a12510__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h04a12510__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_dispatch___024root___eval_debug_assertions(Vtb_dispatch___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_debug_assertions\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
