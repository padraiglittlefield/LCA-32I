// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dispatch.h for the primary calling header

#include "Vtb_dispatch__pch.h"
#include "Vtb_dispatch___024root.h"

VL_ATTR_COLD void Vtb_dispatch___024root___eval_initial__TOP(Vtb_dispatch___024root* vlSelf);
VlCoroutine Vtb_dispatch___024root___eval_initial__TOP__Vtiming__0(Vtb_dispatch___024root* vlSelf);
VlCoroutine Vtb_dispatch___024root___eval_initial__TOP__Vtiming__1(Vtb_dispatch___024root* vlSelf);

void Vtb_dispatch___024root___eval_initial(Vtb_dispatch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_initial\n"); );
    // Body
    Vtb_dispatch___024root___eval_initial__TOP(vlSelf);
    Vtb_dispatch___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_dispatch___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_dispatch__DOT__clk__0 
        = vlSelf->tb_dispatch__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_dispatch___024root___eval_initial__TOP__Vtiming__0(Vtb_dispatch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x2710ULL, 
                                           nullptr, 
                                           "sim/tb_dispatch.sv", 
                                           86);
        vlSelf->tb_dispatch__DOT__clk = 1U;
        vlSelf->tb_dispatch__DOT__cycle_count = ((IData)(1U) 
                                                 + vlSelf->tb_dispatch__DOT__cycle_count);
        co_await vlSelf->__VdlySched.delay(0x2710ULL, 
                                           nullptr, 
                                           "sim/tb_dispatch.sv", 
                                           88);
        vlSelf->tb_dispatch__DOT__clk = 0U;
    }
}

VL_INLINE_OPT VlCoroutine Vtb_dispatch___024root___eval_initial__TOP__Vtiming__1(Vtb_dispatch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSelf->tb_dispatch__DOT__clk = 0U;
    vlSelf->tb_dispatch__DOT__rst = 1U;
    VL_WRITEF("=== Example Module Testbench ===\n");
    VL_WRITEF("\n[RESET] Resetting DUT\n");
    co_await vlSelf->__VtrigSched_h6c068567__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_dispatch.clk)", 
                                                       "sim/tb_dispatch.sv", 
                                                       125);
    vlSelf->tb_dispatch__DOT__rst = 1U;
    co_await vlSelf->__VtrigSched_h6c068567__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_dispatch.clk)", 
                                                       "sim/tb_dispatch.sv", 
                                                       127);
    co_await vlSelf->__VtrigSched_h6c068567__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_dispatch.clk)", 
                                                       "sim/tb_dispatch.sv", 
                                                       128);
    vlSelf->tb_dispatch__DOT__rst = 0U;
    co_await vlSelf->__VtrigSched_h6c068567__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_dispatch.clk)", 
                                                       "sim/tb_dispatch.sv", 
                                                       130);
    VL_WRITEF("[RESET] Reset complete\n\n");
    co_await vlSelf->__VtrigSched_h6c068567__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_dispatch.clk)", 
                                                       "sim/tb_dispatch.sv", 
                                                       170);
    co_await vlSelf->__VtrigSched_h6c068567__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_dispatch.clk)", 
                                                       "sim/tb_dispatch.sv", 
                                                       170);
    co_await vlSelf->__VtrigSched_h6c068567__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_dispatch.clk)", 
                                                       "sim/tb_dispatch.sv", 
                                                       170);
    co_await vlSelf->__VtrigSched_h6c068567__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_dispatch.clk)", 
                                                       "sim/tb_dispatch.sv", 
                                                       170);
    co_await vlSelf->__VtrigSched_h6c068567__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_dispatch.clk)", 
                                                       "sim/tb_dispatch.sv", 
                                                       170);
    VL_WRITEF("\n=== Testbench Complete ===\nTotal Tests: 0\n[\033[32mALL TESTS PASSED\033[0m] 0/0 passed\n");
    VL_FINISH_MT("sim/tb_dispatch.sv", 179, "");
}

void Vtb_dispatch___024root___eval_act(Vtb_dispatch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_dispatch___024root___nba_sequent__TOP__0(Vtb_dispatch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__tb_dispatch__DOT__disp_pkt__v0;
    __Vdlyvset__tb_dispatch__DOT__disp_pkt__v0 = 0;
    IData/*31:0*/ __Vilp;
    CData/*1:0*/ __Vdlyvdim0__tb_dispatch__DOT__disp_pkt__v4;
    __Vdlyvdim0__tb_dispatch__DOT__disp_pkt__v4 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__tb_dispatch__DOT__disp_pkt__v4;
    VL_ZERO_W(128, __Vdlyvval__tb_dispatch__DOT__disp_pkt__v4);
    CData/*0:0*/ __Vdlyvset__tb_dispatch__DOT__disp_pkt__v4;
    __Vdlyvset__tb_dispatch__DOT__disp_pkt__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb_dispatch__DOT__disp_pkt__v5;
    __Vdlyvdim0__tb_dispatch__DOT__disp_pkt__v5 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__tb_dispatch__DOT__disp_pkt__v5;
    VL_ZERO_W(128, __Vdlyvval__tb_dispatch__DOT__disp_pkt__v5);
    CData/*0:0*/ __Vdlyvset__tb_dispatch__DOT__disp_valid__v0;
    __Vdlyvset__tb_dispatch__DOT__disp_valid__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb_dispatch__DOT__disp_valid__v4;
    __Vdlyvdim0__tb_dispatch__DOT__disp_valid__v4 = 0;
    CData/*0:0*/ __Vdlyvset__tb_dispatch__DOT__disp_valid__v4;
    __Vdlyvset__tb_dispatch__DOT__disp_valid__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb_dispatch__DOT__disp_valid__v5;
    __Vdlyvdim0__tb_dispatch__DOT__disp_valid__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_dispatch__DOT__dependency_mask__v0;
    __Vdlyvset__tb_dispatch__DOT__dependency_mask__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb_dispatch__DOT__dependency_mask__v4;
    __Vdlyvdim0__tb_dispatch__DOT__dependency_mask__v4 = 0;
    SData/*15:0*/ __Vdlyvval__tb_dispatch__DOT__dependency_mask__v4;
    __Vdlyvval__tb_dispatch__DOT__dependency_mask__v4 = 0;
    CData/*0:0*/ __Vdlyvset__tb_dispatch__DOT__dependency_mask__v4;
    __Vdlyvset__tb_dispatch__DOT__dependency_mask__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb_dispatch__DOT__dependency_mask__v5;
    __Vdlyvdim0__tb_dispatch__DOT__dependency_mask__v5 = 0;
    SData/*15:0*/ __Vdlyvval__tb_dispatch__DOT__dependency_mask__v5;
    __Vdlyvval__tb_dispatch__DOT__dependency_mask__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v0;
    __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16;
    __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16 = 0;
    VlWide<4>/*126:0*/ __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16;
    VL_ZERO_W(127, __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16);
    CData/*0:0*/ __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16;
    __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17;
    __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17 = 0;
    VlWide<4>/*126:0*/ __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17;
    VL_ZERO_W(127, __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17);
    CData/*0:0*/ __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17;
    __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17 = 0;
    CData/*0:0*/ __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v0;
    __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v64;
    __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v64 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v64;
    __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v64 = 0;
    CData/*0:0*/ __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v64;
    __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v64 = 0;
    CData/*5:0*/ __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v65;
    __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v65 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v65;
    __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v65 = 0;
    CData/*3:0*/ __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v65;
    __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v65 = 0;
    CData/*5:0*/ __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v66;
    __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v66 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v66;
    __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v66 = 0;
    CData/*0:0*/ __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v66;
    __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v66 = 0;
    CData/*5:0*/ __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v67;
    __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v67 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v67;
    __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v67 = 0;
    CData/*3:0*/ __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v67;
    __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v67 = 0;
    CData/*5:0*/ __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v68;
    __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v68 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v68;
    __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v68 = 0;
    CData/*0:0*/ __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v68;
    __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v68 = 0;
    CData/*5:0*/ __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v69;
    __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v69 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v69;
    __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v69 = 0;
    CData/*0:0*/ __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v69;
    __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v69 = 0;
    CData/*5:0*/ __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v70;
    __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v70 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v70;
    __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v70 = 0;
    CData/*0:0*/ __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v70;
    __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v70 = 0;
    CData/*5:0*/ __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v71;
    __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v71 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v71;
    __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v71 = 0;
    CData/*0:0*/ __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v71;
    __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v71 = 0;
    // Body
    __Vdlyvset__tb_dispatch__DOT__disp_valid__v0 = 0U;
    __Vdlyvset__tb_dispatch__DOT__disp_valid__v4 = 0U;
    __Vdlyvset__tb_dispatch__DOT__disp_pkt__v0 = 0U;
    __Vdlyvset__tb_dispatch__DOT__disp_pkt__v4 = 0U;
    __Vdlyvset__tb_dispatch__DOT__dependency_mask__v0 = 0U;
    __Vdlyvset__tb_dispatch__DOT__dependency_mask__v4 = 0U;
    __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v0 = 0U;
    __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v64 = 0U;
    __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v66 = 0U;
    __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v68 = 0U;
    __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v69 = 0U;
    __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v70 = 0U;
    __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v71 = 0U;
    __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v0 = 0U;
    __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16 = 0U;
    __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17 = 0U;
    if ((1U & (~ (IData)(vlSelf->tb_dispatch__DOT__rst)))) {
        vlSelf->tb_dispatch__DOT__dut__DOT__pipeline_register__DOT__unnamedblk7__DOT__i = 2U;
    }
    if (vlSelf->tb_dispatch__DOT__rst) {
        vlSelf->tb_dispatch__DOT__dut__DOT__pipeline_register__DOT__unnamedblk6__DOT__i = 4U;
        __Vdlyvset__tb_dispatch__DOT__disp_valid__v0 = 1U;
        __Vdlyvset__tb_dispatch__DOT__disp_pkt__v0 = 1U;
        __Vdlyvset__tb_dispatch__DOT__dependency_mask__v0 = 1U;
    } else {
        __Vdlyvset__tb_dispatch__DOT__disp_valid__v4 = 1U;
        __Vdlyvdim0__tb_dispatch__DOT__disp_valid__v4 
            = vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe
            [0U];
        __Vdlyvdim0__tb_dispatch__DOT__disp_valid__v5 
            = vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe
            [1U];
        __Vdlyvval__tb_dispatch__DOT__disp_pkt__v4[0U] 
            = vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][0U];
        __Vdlyvval__tb_dispatch__DOT__disp_pkt__v4[1U] 
            = vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][1U];
        __Vdlyvval__tb_dispatch__DOT__disp_pkt__v4[2U] 
            = vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][2U];
        __Vdlyvval__tb_dispatch__DOT__disp_pkt__v4[3U] 
            = vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][3U];
        __Vdlyvset__tb_dispatch__DOT__disp_pkt__v4 = 1U;
        __Vdlyvdim0__tb_dispatch__DOT__disp_pkt__v4 
            = vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe
            [0U];
        __Vdlyvval__tb_dispatch__DOT__disp_pkt__v5[0U] 
            = vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][0U];
        __Vdlyvval__tb_dispatch__DOT__disp_pkt__v5[1U] 
            = vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][1U];
        __Vdlyvval__tb_dispatch__DOT__disp_pkt__v5[2U] 
            = vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][2U];
        __Vdlyvval__tb_dispatch__DOT__disp_pkt__v5[3U] 
            = vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][3U];
        __Vdlyvdim0__tb_dispatch__DOT__disp_pkt__v5 
            = vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe
            [1U];
        __Vdlyvval__tb_dispatch__DOT__dependency_mask__v4 
            = vlSelf->tb_dispatch__DOT__dut__DOT__dm_dependency_mask
            [0U];
        __Vdlyvset__tb_dispatch__DOT__dependency_mask__v4 = 1U;
        __Vdlyvdim0__tb_dispatch__DOT__dependency_mask__v4 
            = vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe
            [0U];
        __Vdlyvval__tb_dispatch__DOT__dependency_mask__v5 
            = vlSelf->tb_dispatch__DOT__dut__DOT__dm_dependency_mask
            [1U];
        __Vdlyvdim0__tb_dispatch__DOT__dependency_mask__v5 
            = vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe
            [1U];
    }
    if (((IData)(vlSelf->tb_dispatch__DOT__rst) | (IData)(vlSelf->tb_dispatch__DOT__flush))) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__unnamedblk4__DOT__i = 0x10U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__write_dependency__DOT__unnamedblk3__DOT__i = 0x40U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__tail_ptr = 0U;
        __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v0 = 1U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr = 0U;
        __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v0 = 1U;
    } else {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__tail_ptr 
            = (0x1fU & ((IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__tail_ptr) 
                        + (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated)));
        if (vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i
            [0U]) {
            __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v64 = 1U;
            __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v64 = 4U;
            __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v64 
                = vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i
                [0U];
            __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v65 
                = vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i
                [0U];
            __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v65 = 0U;
            __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v65 
                = vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i
                [0U];
        }
        if (vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i
            [1U]) {
            __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v66 = 1U;
            __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v66 = 4U;
            __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v66 
                = vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i
                [1U];
            __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v67 
                = vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i
                [1U];
            __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v67 = 0U;
            __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v67 
                = vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i
                [1U];
        }
        if (vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_vld_i
            [0U]) {
            __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v68 = 1U;
            __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v68 = 4U;
            __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v68 
                = vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_dst_preg_i
                [0U];
        }
        if (vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_vld_i
            [1U]) {
            __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v69 = 1U;
            __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v69 = 4U;
            __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v69 
                = vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_dst_preg_i
                [1U];
        }
        if (vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_vld_i
            [2U]) {
            __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v70 = 1U;
            __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v70 = 4U;
            __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v70 
                = vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_dst_preg_i
                [2U];
        }
        if (vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_vld_i
            [3U]) {
            __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v71 = 1U;
            __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v71 = 4U;
            __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v71 
                = vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_dst_preg_i
                [3U];
        }
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr 
            = (0x1fU & ((IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr) 
                        + (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched)));
        if ((1U & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en))) {
            __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16[0U] 
                = vlSelf->tb_dispatch__DOT__rename_disp_pkt
                [0U][0U];
            __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16[1U] 
                = vlSelf->tb_dispatch__DOT__rename_disp_pkt
                [0U][1U];
            __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16[2U] 
                = vlSelf->tb_dispatch__DOT__rename_disp_pkt
                [0U][2U];
            __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16[3U] 
                = vlSelf->tb_dispatch__DOT__rename_disp_pkt
                [0U][3U];
            __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16 = 1U;
            __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16 
                = vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx
                [0U];
        }
        if ((2U & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en))) {
            __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17[0U] 
                = vlSelf->tb_dispatch__DOT__rename_disp_pkt
                [1U][0U];
            __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17[1U] 
                = vlSelf->tb_dispatch__DOT__rename_disp_pkt
                [1U][1U];
            __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17[2U] 
                = vlSelf->tb_dispatch__DOT__rename_disp_pkt
                [1U][2U];
            __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17[3U] 
                = vlSelf->tb_dispatch__DOT__rename_disp_pkt
                [1U][3U];
            __Vdlyvset__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17 = 1U;
            __Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17 
                = vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx
                [1U];
        }
    }
    if ((1U & (~ ((IData)(vlSelf->tb_dispatch__DOT__rst) 
                  | (IData)(vlSelf->tb_dispatch__DOT__flush))))) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__unnamedblk5__DOT__i = 2U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__write_dependency__DOT__unnamedblk4__DOT__i = 2U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__write_dependency__DOT__unnamedblk5__DOT__i = 4U;
    }
    if (__Vdlyvset__tb_dispatch__DOT__disp_valid__v0) {
        vlSelf->tb_dispatch__DOT__disp_valid[0U] = 0U;
        vlSelf->tb_dispatch__DOT__disp_valid[1U] = 0U;
        vlSelf->tb_dispatch__DOT__disp_valid[2U] = 0U;
        vlSelf->tb_dispatch__DOT__disp_valid[3U] = 0U;
    }
    if (__Vdlyvset__tb_dispatch__DOT__disp_valid__v4) {
        vlSelf->tb_dispatch__DOT__disp_valid[__Vdlyvdim0__tb_dispatch__DOT__disp_valid__v4] = 1U;
        vlSelf->tb_dispatch__DOT__disp_valid[__Vdlyvdim0__tb_dispatch__DOT__disp_valid__v5] = 1U;
    }
    if (__Vdlyvset__tb_dispatch__DOT__disp_pkt__v0) {
        vlSelf->tb_dispatch__DOT__disp_pkt[0U][0U] = 0U;
        vlSelf->tb_dispatch__DOT__disp_pkt[0U][1U] = 0U;
        vlSelf->tb_dispatch__DOT__disp_pkt[0U][2U] = 0U;
        vlSelf->tb_dispatch__DOT__disp_pkt[0U][3U] = 0U;
        vlSelf->tb_dispatch__DOT__disp_pkt[1U][0U] = 0U;
        vlSelf->tb_dispatch__DOT__disp_pkt[1U][1U] = 0U;
        vlSelf->tb_dispatch__DOT__disp_pkt[1U][2U] = 0U;
        vlSelf->tb_dispatch__DOT__disp_pkt[1U][3U] = 0U;
        vlSelf->tb_dispatch__DOT__disp_pkt[2U][0U] = 0U;
        vlSelf->tb_dispatch__DOT__disp_pkt[2U][1U] = 0U;
        vlSelf->tb_dispatch__DOT__disp_pkt[2U][2U] = 0U;
        vlSelf->tb_dispatch__DOT__disp_pkt[2U][3U] = 0U;
        vlSelf->tb_dispatch__DOT__disp_pkt[3U][0U] = 0U;
        vlSelf->tb_dispatch__DOT__disp_pkt[3U][1U] = 0U;
        vlSelf->tb_dispatch__DOT__disp_pkt[3U][2U] = 0U;
        vlSelf->tb_dispatch__DOT__disp_pkt[3U][3U] = 0U;
    }
    if (__Vdlyvset__tb_dispatch__DOT__disp_pkt__v4) {
        vlSelf->tb_dispatch__DOT__disp_pkt[__Vdlyvdim0__tb_dispatch__DOT__disp_pkt__v4][0U] 
            = __Vdlyvval__tb_dispatch__DOT__disp_pkt__v4[0U];
        vlSelf->tb_dispatch__DOT__disp_pkt[__Vdlyvdim0__tb_dispatch__DOT__disp_pkt__v4][1U] 
            = __Vdlyvval__tb_dispatch__DOT__disp_pkt__v4[1U];
        vlSelf->tb_dispatch__DOT__disp_pkt[__Vdlyvdim0__tb_dispatch__DOT__disp_pkt__v4][2U] 
            = __Vdlyvval__tb_dispatch__DOT__disp_pkt__v4[2U];
        vlSelf->tb_dispatch__DOT__disp_pkt[__Vdlyvdim0__tb_dispatch__DOT__disp_pkt__v4][3U] 
            = __Vdlyvval__tb_dispatch__DOT__disp_pkt__v4[3U];
        vlSelf->tb_dispatch__DOT__disp_pkt[__Vdlyvdim0__tb_dispatch__DOT__disp_pkt__v5][0U] 
            = __Vdlyvval__tb_dispatch__DOT__disp_pkt__v5[0U];
        vlSelf->tb_dispatch__DOT__disp_pkt[__Vdlyvdim0__tb_dispatch__DOT__disp_pkt__v5][1U] 
            = __Vdlyvval__tb_dispatch__DOT__disp_pkt__v5[1U];
        vlSelf->tb_dispatch__DOT__disp_pkt[__Vdlyvdim0__tb_dispatch__DOT__disp_pkt__v5][2U] 
            = __Vdlyvval__tb_dispatch__DOT__disp_pkt__v5[2U];
        vlSelf->tb_dispatch__DOT__disp_pkt[__Vdlyvdim0__tb_dispatch__DOT__disp_pkt__v5][3U] 
            = __Vdlyvval__tb_dispatch__DOT__disp_pkt__v5[3U];
    }
    if (__Vdlyvset__tb_dispatch__DOT__dependency_mask__v0) {
        vlSelf->tb_dispatch__DOT__dependency_mask[0U] = 0U;
        vlSelf->tb_dispatch__DOT__dependency_mask[1U] = 0U;
        vlSelf->tb_dispatch__DOT__dependency_mask[2U] = 0U;
        vlSelf->tb_dispatch__DOT__dependency_mask[3U] = 0U;
    }
    if (__Vdlyvset__tb_dispatch__DOT__dependency_mask__v4) {
        vlSelf->tb_dispatch__DOT__dependency_mask[__Vdlyvdim0__tb_dispatch__DOT__dependency_mask__v4] 
            = __Vdlyvval__tb_dispatch__DOT__dependency_mask__v4;
        vlSelf->tb_dispatch__DOT__dependency_mask[__Vdlyvdim0__tb_dispatch__DOT__dependency_mask__v5] 
            = __Vdlyvval__tb_dispatch__DOT__dependency_mask__v5;
    }
    if (__Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v64) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt[__Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v64] 
            = (vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
               [__Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v64] 
               | (0x1fU & ((IData)(1U) << __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v64)));
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt[__Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v65] 
            = (((~ ((IData)(0xfU) << __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v65)) 
                & vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
                [__Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v65]) 
               | (0x1fU & ((IData)(__Vdlyvval__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v65) 
                           << __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v65)));
    }
    if (__Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v66) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt[__Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v66] 
            = (vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
               [__Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v66] 
               | (0x1fU & ((IData)(1U) << __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v66)));
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt[__Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v67] 
            = (((~ ((IData)(0xfU) << __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v67)) 
                & vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
                [__Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v67]) 
               | (0x1fU & ((IData)(__Vdlyvval__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v67) 
                           << __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v67)));
    }
    if (__Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v68) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt[__Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v68] 
            = ((~ ((IData)(1U) << __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v68)) 
               & vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
               [__Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v68]);
    }
    if (__Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v69) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt[__Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v69] 
            = ((~ ((IData)(1U) << __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v69)) 
               & vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
               [__Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v69]);
    }
    if (__Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v70) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt[__Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v70] 
            = ((~ ((IData)(1U) << __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v70)) 
               & vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
               [__Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v70]);
    }
    if (__Vdlyvset__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v71) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt[__Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v71] 
            = ((~ ((IData)(1U) << __Vdlyvlsb__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v71)) 
               & vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
               [__Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt__v71]);
    }
    if (__Vdlyvset__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][0U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][1U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][2U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0U][3U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][0U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][1U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][2U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[1U][3U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][0U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][1U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][2U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[2U][3U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][0U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][1U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][2U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[3U][3U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][0U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][1U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][2U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[4U][3U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][0U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][1U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][2U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[5U][3U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][0U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][1U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][2U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[6U][3U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][0U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][1U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][2U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[7U][3U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][0U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][1U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][2U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[8U][3U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][0U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][1U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][2U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[9U][3U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0xaU][0U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0xaU][1U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0xaU][2U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0xaU][3U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0xbU][0U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0xbU][1U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0xbU][2U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0xbU][3U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0xcU][0U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0xcU][1U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0xcU][2U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0xcU][3U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0xdU][0U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0xdU][1U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0xdU][2U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0xdU][3U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0xeU][0U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0xeU][1U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0xeU][2U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0xeU][3U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0xfU][0U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0xfU][1U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0xfU][2U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[0xfU][3U] = 0U;
    }
    if (__Vdlyvset__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[__Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16][0U] 
            = __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16[0U];
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[__Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16][1U] 
            = __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16[1U];
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[__Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16][2U] 
            = __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16[2U];
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[__Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16][3U] 
            = __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v16[3U];
    }
    if (__Vdlyvset__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[__Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17][0U] 
            = __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17[0U];
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[__Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17][1U] 
            = __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17[1U];
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[__Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17][2U] 
            = __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17[2U];
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[__Vdlyvdim0__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17][3U] 
            = __Vdlyvval__tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue__v17[3U];
    }
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated = 0U;
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__tail_ptr;
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx[0U] 
        = (0xfU & vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr
           [0U]);
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[0U] 
        = (((1U & ((IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr) 
                   >> 4U)) != (1U & (vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr
                                     [0U] >> 4U))) 
           & ((0xfU & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr)) 
              == vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx
              [0U]));
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en 
        = ((2U & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en)) 
           | (vlSelf->tb_dispatch__DOT__rename_vld[0U] 
              & (~ vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full
                 [0U])));
    if ((1U & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en))) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated)));
    }
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[1U] 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__tail_ptr)));
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx[1U] 
        = (0xfU & vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr
           [1U]);
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[1U] 
        = (vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full
           [0U] | (((1U & ((IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr) 
                           >> 4U)) != (1U & (vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr
                                             [1U] >> 4U))) 
                   & ((0xfU & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr)) 
                      == vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx
                      [1U])));
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en 
        = ((1U & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en)) 
           | ((vlSelf->tb_dispatch__DOT__rename_vld
               [1U] & (~ vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full
                       [1U])) << 1U));
    if ((2U & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en))) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated)));
    }
    vlSelf->tb_dispatch__DOT__instr_queue_full[0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full
        [0U];
    vlSelf->tb_dispatch__DOT__instr_queue_full[1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full
        [1U];
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[0U] 
        = (7U & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr));
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[1U] 
        = (7U & ((IData)(1U) + (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr)));
    vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld[0U] 
        = (1U & (vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                 [vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx
                 [0U]][1U] >> 3U));
    vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld[1U] 
        = (1U & (vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                 [vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx
                 [1U]][1U] >> 3U));
    vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt[0U][0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx
        [0U]][0U];
    vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt[0U][1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx
        [0U]][1U];
    vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx
        [0U]][2U];
    vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt[0U][3U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx
        [0U]][3U];
    vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt[1U][0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx
        [1U]][0U];
    vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt[1U][1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx
        [1U]][1U];
    vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx
        [1U]][2U];
    vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt[1U][3U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx
        [1U]][3U];
    vlSelf->tb_dispatch__DOT__rob_dst_reg[0U] = (0x1fU 
                                                 & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                                    [0U][2U] 
                                                    >> 0x18U));
    vlSelf->tb_dispatch__DOT__rob_dst_reg[1U] = (0x1fU 
                                                 & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                                    [1U][2U] 
                                                    >> 0x18U));
    vlSelf->tb_dispatch__DOT__rob_wb_en[0U] = (1U & 
                                               vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                               [0U][0U]);
    vlSelf->tb_dispatch__DOT__rob_wb_en[1U] = (1U & 
                                               vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                               [1U][0U]);
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_dst_preg[0U] 
        = (0x3fU & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                    [0U][2U] >> 0x12U));
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_dst_preg[1U] 
        = (0x3fU & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                    [1U][2U] >> 0x12U));
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_preg[0U] 
        = (0x3fU & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                    [0U][2U] >> 0xbU));
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_preg[1U] 
        = (0x3fU & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                    [1U][2U] >> 0xbU));
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_preg[0U] 
        = (0x3fU & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                    [0U][2U] >> 4U));
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_preg[1U] 
        = (0x3fU & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                    [1U][2U] >> 4U));
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_vld[0U] 
        = (1U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                 [0U][2U] >> 0x11U));
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_vld[1U] 
        = (1U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                 [1U][2U] >> 0x11U));
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_vld[0U] 
        = (1U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                 [0U][2U] >> 0xaU));
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_vld[1U] 
        = (1U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                 [1U][2U] >> 0xaU));
    vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed[0U] = 0U;
    vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[0U] = 0U;
    vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[0U] = 0U;
    vlSelf->tb_dispatch__DOT__dut__DOT__required_fu[0U] 
        = (3U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                 [0U][2U] >> 0x1dU));
    vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free = 
        ((0xeU & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free)) 
         | (1U & (~ vlSelf->tb_dispatch__DOT__rs_full
                  [0U])));
    if (((((vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld
            [0U] & (0U == vlSelf->tb_dispatch__DOT__dut__DOT__required_fu
                    [0U])) & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free)) 
          & (~ vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed
             [0U])) & (~ vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
                       [0U]))) {
        vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[0U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[0U] = 1U;
    }
    if (((((vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld
            [0U] & (0U == vlSelf->tb_dispatch__DOT__dut__DOT__required_fu
                    [0U])) & ((IData)(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free) 
                              >> 1U)) & (~ (vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed
                                            [0U] >> 1U))) 
         & (~ vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
            [0U]))) {
        vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[0U] = 1U;
        vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[0U] = 1U;
    }
    if (((((vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld
            [0U] & (0U == vlSelf->tb_dispatch__DOT__dut__DOT__required_fu
                    [0U])) & ((IData)(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free) 
                              >> 2U)) & (~ (vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed
                                            [0U] >> 2U))) 
         & (~ vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
            [0U]))) {
        vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[0U] = 2U;
        vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[0U] = 1U;
    }
    if (((((vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld
            [0U] & (1U == vlSelf->tb_dispatch__DOT__dut__DOT__required_fu
                    [0U])) & ((IData)(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free) 
                              >> 3U)) & (~ (vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed
                                            [0U] >> 3U))) 
         & (~ vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
            [0U]))) {
        vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[0U] = 3U;
        vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[0U] = 1U;
    }
    vlSelf->tb_dispatch__DOT__dut__DOT__pipe_steering__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed[1U] 
        = (0xfU & (vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed
                   [0U] | (vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
                           [0U] ? ((IData)(1U) << vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe
                                   [0U]) : 0U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[1U] = 0U;
    vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[1U] = 0U;
    vlSelf->tb_dispatch__DOT__dut__DOT__required_fu[1U] 
        = (3U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                 [1U][2U] >> 0x1dU));
    vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free = 
        ((0xdU & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free)) 
         | (2U & ((~ vlSelf->tb_dispatch__DOT__rs_full
                   [1U]) << 1U)));
    if (vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
        [0U]) {
        if (((((vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld
                [1U] & (0U == vlSelf->tb_dispatch__DOT__dut__DOT__required_fu
                        [1U])) & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free)) 
              & (~ vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed
                 [1U])) & (~ vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
                           [1U]))) {
            vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[1U] = 0U;
            vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[1U] = 1U;
        }
        vlSelf->tb_dispatch__DOT__dut__DOT__pipe_steering__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
        if (((((vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld
                [1U] & (0U == vlSelf->tb_dispatch__DOT__dut__DOT__required_fu
                        [1U])) & ((IData)(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free) 
                                  >> 1U)) & (~ (vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed
                                                [1U] 
                                                >> 1U))) 
             & (~ vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
                [1U]))) {
            vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[1U] = 1U;
            vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[1U] = 1U;
        }
        if (((((vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld
                [1U] & (0U == vlSelf->tb_dispatch__DOT__dut__DOT__required_fu
                        [1U])) & ((IData)(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free) 
                                  >> 2U)) & (~ (vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed
                                                [1U] 
                                                >> 2U))) 
             & (~ vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
                [1U]))) {
            vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[1U] = 2U;
            vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[1U] = 1U;
        }
        if (((((vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld
                [1U] & (1U == vlSelf->tb_dispatch__DOT__dut__DOT__required_fu
                        [1U])) & ((IData)(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free) 
                                  >> 3U)) & (~ (vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed
                                                [1U] 
                                                >> 3U))) 
             & (~ vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
                [1U]))) {
            vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[1U] = 3U;
            vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[1U] = 1U;
        }
    }
    vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed[0U] 
        = (0xfU & (vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed
                   [1U] | (vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
                           [1U] ? ((IData)(1U) << vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe
                                   [1U]) : 0U)));
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__dm_dst_preg
        [0U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__dm_dst_preg
        [1U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i[0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_preg
        [0U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i[1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_preg
        [1U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i[0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_preg
        [0U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i[1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_preg
        [1U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i[0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_vld
        [0U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i[1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_vld
        [1U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i[0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_vld
        [0U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i[1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_vld
        [1U];
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][3U] 
        = ((vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
            [0U][3U] << 1U) | (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                               [0U][2U] >> 0x1fU));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0x7ffffffU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][2U]) | (0xf8000000U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                        [0U][2U] << 3U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xf81fffffU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][2U]) | (0x7e00000U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                       [0U][2U] << 3U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xffe07fffU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][2U]) | (0x1f8000U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                      [0U][2U] << 4U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xffffbfffU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][2U]) | (0x4000U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                    [0U][2U] >> 3U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xffffc0ffU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][2U]) | (0x3f00U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                    [0U][2U] << 4U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xffffff7fU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][2U]) | (0x80U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                  [0U][2U] >> 3U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U] 
        = ((7U & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][1U]) | (0xfffffff8U & ((vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                         [0U][2U] << 0x1fU) 
                                        | (0x7ffffff8U 
                                           & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                              [0U][1U] 
                                              >> 1U)))));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xfffffff8U & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][2U]) | (7U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                               [0U][2U] >> 1U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U] 
        = ((0xfffffffbU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][1U]) | (4U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                               [0U][1U] >> 1U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U] 
        = ((3U & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][0U]) | (0xfffffffcU & ((vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                         [0U][1U] << 0x1fU) 
                                        | (0x7ffffffcU 
                                           & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                              [0U][0U] 
                                              >> 1U)))));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U] 
        = ((0xfffffffcU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][1U]) | (3U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                               [0U][1U] >> 1U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U] 
        = ((0xfffffffdU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][0U]) | (2U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                               [0U][0U] >> 1U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U] 
        = ((0xfffffffeU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][0U]) | (1U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                               [0U][0U] >> 1U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xffffff87U & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][2U]) | (vlSelf->tb_dispatch__DOT__rob_entry_idx
                         [(1U & vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe
                           [0U])] << 3U));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][3U] 
        = ((vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
            [1U][3U] << 1U) | (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                               [1U][2U] >> 0x1fU));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0x7ffffffU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][2U]) | (0xf8000000U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                        [1U][2U] << 3U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xf81fffffU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][2U]) | (0x7e00000U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                       [1U][2U] << 3U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xffe07fffU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][2U]) | (0x1f8000U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                      [1U][2U] << 4U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xffffbfffU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][2U]) | (0x4000U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                    [1U][2U] >> 3U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xffffc0ffU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][2U]) | (0x3f00U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                    [1U][2U] << 4U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xffffff7fU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][2U]) | (0x80U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                  [1U][2U] >> 3U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U] 
        = ((7U & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][1U]) | (0xfffffff8U & ((vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                         [1U][2U] << 0x1fU) 
                                        | (0x7ffffff8U 
                                           & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                              [1U][1U] 
                                              >> 1U)))));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xfffffff8U & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][2U]) | (7U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                               [1U][2U] >> 1U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U] 
        = ((0xfffffffbU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][1U]) | (4U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                               [1U][1U] >> 1U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U] 
        = ((3U & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][0U]) | (0xfffffffcU & ((vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                         [1U][1U] << 0x1fU) 
                                        | (0x7ffffffcU 
                                           & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                              [1U][0U] 
                                              >> 1U)))));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U] 
        = ((0xfffffffcU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][1U]) | (3U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                               [1U][1U] >> 1U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U] 
        = ((0xfffffffdU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][0U]) | (2U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                               [1U][0U] >> 1U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U] 
        = ((0xfffffffeU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][0U]) | (1U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                               [1U][0U] >> 1U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xffffff87U & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][2U]) | (vlSelf->tb_dispatch__DOT__rob_entry_idx
                         [(1U & vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe
                           [1U])] << 3U));
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_fire_loc[0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe
        [0U];
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_fire_loc[1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe
        [1U];
    vlSelf->tb_dispatch__DOT__dut__DOT__fire_vld[0U] 
        = (vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
           [0U] & (~ vlSelf->tb_dispatch__DOT__rob_full
                   [0U]));
    vlSelf->tb_dispatch__DOT__dut__DOT__fire_vld[1U] 
        = (vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
           [1U] & (~ vlSelf->tb_dispatch__DOT__rob_full
                   [1U]));
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i[0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__dm_fire_loc
        [0U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i[1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__dm_fire_loc
        [1U];
    vlSelf->tb_dispatch__DOT__rob_fire_valid[0U] = 
        vlSelf->tb_dispatch__DOT__dut__DOT__fire_vld
        [0U];
    vlSelf->tb_dispatch__DOT__rob_fire_valid[1U] = 
        vlSelf->tb_dispatch__DOT__dut__DOT__fire_vld
        [1U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i[0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__fire_vld
        [0U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i[1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__fire_vld
        [1U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i[0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__fire_vld
        [0U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i[1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__fire_vld
        [1U];
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched = 0U;
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en 
        = ((2U & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en)) 
           | vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i
           [0U]);
    if ((1U & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en))) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched)));
    }
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en 
        = ((1U & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en)) 
           | ((vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i
               [0U] & vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i
               [1U]) << 1U));
    if ((2U & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en))) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched)));
    }
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[0U] = 0U;
    vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[0U] = 0U;
    vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[0U] = 0U;
    if (vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i
        [0U]) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[0U] 
            = vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
            [vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i
            [0U]];
        if ((0x10U & vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry
             [0U])) {
            vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[0U] 
                = (vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o
                   [0U] | (0xffffU & ((IData)(1U) << 
                                      (0xfU & vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry
                                       [0U]))));
        }
    }
    if (vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i
        [0U]) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[0U] 
            = vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
            [vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i
            [0U]];
        if ((0x10U & vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry
             [0U])) {
            vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[0U] 
                = (vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o
                   [0U] | (0xffffU & ((IData)(1U) << 
                                      (0xfU & vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry
                                       [0U]))));
        }
    }
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] = 0U;
    vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[1U] = 0U;
    vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[1U] = 0U;
    if (vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i
        [1U]) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[1U] 
            = vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
            [vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i
            [1U]];
        if ((0x10U & vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry
             [1U])) {
            vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] 
                = (vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o
                   [1U] | (0xffffU & ((IData)(1U) << 
                                      (0xfU & vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry
                                       [1U]))));
        }
    }
    if (vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i
        [1U]) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[1U] 
            = vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
            [vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i
            [1U]];
        if ((0x10U & vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry
             [1U])) {
            vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] 
                = (vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o
                   [1U] | (0xffffU & ((IData)(1U) << 
                                      (0xfU & vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry
                                       [1U]))));
        }
    }
    if (vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i
        [0U]) {
        if ((vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i
             [1U] == vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i
             [0U])) {
            vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] 
                = (vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o
                   [1U] | (0xffffU & ((IData)(1U) << 
                                      vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i
                                      [0U])));
        }
        if ((vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i
             [1U] == vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i
             [0U])) {
            vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] 
                = (vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o
                   [1U] | (0xffffU & ((IData)(1U) << 
                                      vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i
                                      [0U])));
        }
    }
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_dependency_mask[0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o
        [0U];
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_dependency_mask[1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o
        [1U];
}

void Vtb_dispatch___024root___eval_nba(Vtb_dispatch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_dispatch___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtb_dispatch___024root___timing_resume(Vtb_dispatch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h6c068567__0.resume("@(negedge tb_dispatch.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_dispatch___024root___timing_commit(Vtb_dispatch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h6c068567__0.commit("@(negedge tb_dispatch.clk)");
    }
}

void Vtb_dispatch___024root___eval_triggers__act(Vtb_dispatch___024root* vlSelf);

bool Vtb_dispatch___024root___eval_phase__act(Vtb_dispatch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_dispatch___024root___eval_triggers__act(vlSelf);
    Vtb_dispatch___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_dispatch___024root___timing_resume(vlSelf);
        Vtb_dispatch___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_dispatch___024root___eval_phase__nba(Vtb_dispatch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_dispatch___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dispatch___024root___dump_triggers__nba(Vtb_dispatch___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dispatch___024root___dump_triggers__act(Vtb_dispatch___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_dispatch___024root___eval(Vtb_dispatch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_dispatch___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/tb_dispatch.sv", 7, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_dispatch___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/tb_dispatch.sv", 7, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_dispatch___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_dispatch___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_dispatch___024root___eval_debug_assertions(Vtb_dispatch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
