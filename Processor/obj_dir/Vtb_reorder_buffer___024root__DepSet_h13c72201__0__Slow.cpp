// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_reorder_buffer.h for the primary calling header

#include "Vtb_reorder_buffer__pch.h"
#include "Vtb_reorder_buffer___024root.h"

VL_ATTR_COLD void Vtb_reorder_buffer___024root___eval_static__TOP(Vtb_reorder_buffer___024root* vlSelf);

VL_ATTR_COLD void Vtb_reorder_buffer___024root___eval_static(Vtb_reorder_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_static\n"); );
    // Body
    Vtb_reorder_buffer___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root___eval_static__TOP(Vtb_reorder_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_reorder_buffer__DOT__cycle_count = 0U;
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root___eval_final(Vtb_reorder_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_reorder_buffer___024root___dump_triggers__stl(Vtb_reorder_buffer___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_reorder_buffer___024root___eval_phase__stl(Vtb_reorder_buffer___024root* vlSelf);

VL_ATTR_COLD void Vtb_reorder_buffer___024root___eval_settle(Vtb_reorder_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_reorder_buffer___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/tb_reorder_buffer.sv", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_reorder_buffer___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_reorder_buffer___024root___dump_triggers__stl(Vtb_reorder_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_reorder_buffer___024root___stl_sequent__TOP__0(Vtb_reorder_buffer___024root* vlSelf);

VL_ATTR_COLD void Vtb_reorder_buffer___024root___eval_stl(Vtb_reorder_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_reorder_buffer___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root___eval_triggers__stl(Vtb_reorder_buffer___024root* vlSelf);

VL_ATTR_COLD bool Vtb_reorder_buffer___024root___eval_phase__stl(Vtb_reorder_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_reorder_buffer___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_reorder_buffer___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_reorder_buffer___024root___dump_triggers__act(Vtb_reorder_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_reorder_buffer.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_reorder_buffer.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_reorder_buffer___024root___dump_triggers__nba(Vtb_reorder_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_reorder_buffer.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_reorder_buffer.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_reorder_buffer___024root___ctor_var_reset(Vtb_reorder_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_reorder_buffer__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_reorder_buffer__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tb_reorder_buffer__DOT__cycle_count = VL_RAND_RESET_I(32);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__flush_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries[__Vi0] = VL_RAND_RESET_Q(40);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__head_ptr = VL_RAND_RESET_I(5);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__tail_ptr = VL_RAND_RESET_I(5);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_full = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_idx[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_ptr[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_entry[__Vi0] = VL_RAND_RESET_Q(40);
    }
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_enable = VL_RAND_RESET_I(2);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__num_allocations = VL_RAND_RESET_I(2);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_ready = VL_RAND_RESET_I(2);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_enable = VL_RAND_RESET_I(2);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_flush = VL_RAND_RESET_I(2);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_exception = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_idx[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_ptr[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_entry[__Vi0] = VL_RAND_RESET_Q(40);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_status[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__num_retirements = VL_RAND_RESET_I(2);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_valid = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_idx[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__restore_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_reorder_buffer__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
