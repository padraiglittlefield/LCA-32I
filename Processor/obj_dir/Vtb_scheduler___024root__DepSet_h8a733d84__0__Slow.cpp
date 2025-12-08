// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_scheduler.h for the primary calling header

#include "Vtb_scheduler__pch.h"
#include "Vtb_scheduler___024root.h"

VL_ATTR_COLD void Vtb_scheduler___024root___eval_static__TOP(Vtb_scheduler___024root* vlSelf);

VL_ATTR_COLD void Vtb_scheduler___024root___eval_static(Vtb_scheduler___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___eval_static\n"); );
    // Body
    Vtb_scheduler___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_scheduler___024root___eval_static__TOP(Vtb_scheduler___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_scheduler__DOT__cycle_count = 0U;
}

VL_ATTR_COLD void Vtb_scheduler___024root___eval_final(Vtb_scheduler___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scheduler___024root___dump_triggers__stl(Vtb_scheduler___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_scheduler___024root___eval_phase__stl(Vtb_scheduler___024root* vlSelf);

VL_ATTR_COLD void Vtb_scheduler___024root___eval_settle(Vtb_scheduler___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___eval_settle\n"); );
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
            Vtb_scheduler___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/tb_scheduler.sv", 7, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_scheduler___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scheduler___024root___dump_triggers__stl(Vtb_scheduler___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_scheduler___024root___stl_sequent__TOP__0(Vtb_scheduler___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0U;
    vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 1U;
    vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 0U;
    if ((1U & (~ vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 1U)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 2U)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 2U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 3U)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 3U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 4U)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 4U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 5U)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 5U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 6U)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 6U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 7U)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 7U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 8U)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 8U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 9U)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 9U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 0xaU)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0xaU;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 0xbU)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0xbU;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 0xcU)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0xcU;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 0xdU)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0xdU;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 0xeU)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0xeU;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 0xfU)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0xfU;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 0x10U)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0x10U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 0x11U)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0x11U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 0x12U)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0x12U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 0x13U)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0x13U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 0x14U)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0x14U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 0x15U)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0x15U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 0x16U)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0x16U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 0x17U)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0x17U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 0x18U)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0x18U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 0x19U)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0x19U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 0x1aU)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0x1aU;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 0x1bU)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0x1bU;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 0x1cU)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0x1cU;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 0x1dU)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0x1dU;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 0x1eU)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0x1eU;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                   >> 0x1fU)) & (~ (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0x1fU;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    vlSelf->tb_scheduler__DOT__dut__DOT____Vcellout__wakeup__free_entry_out 
        = vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry;
    vlSelf->tb_scheduler__DOT__dut__DOT____Vcellout__wakeup__full_out 
        = vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full;
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xfffffffeU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | (((0U 
                                                      == 
                                                      (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [0U][0U] 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [0U][1U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [0U][2U]) 
                                                       | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                       [0U][3U])) 
                                                     & vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid) 
                                                    & (~ vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted)));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xfffffffdU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [1U][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [1U][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [1U][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [1U][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 1U)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 1U))) 
                                                    << 1U));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xfffffffbU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [2U][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [2U][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [2U][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [2U][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 2U)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 2U))) 
                                                    << 2U));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xfffffff7U 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [3U][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [3U][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [3U][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [3U][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 3U)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 3U))) 
                                                    << 3U));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xffffffefU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [4U][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [4U][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [4U][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [4U][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 4U)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 4U))) 
                                                    << 4U));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xffffffdfU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [5U][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [5U][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [5U][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [5U][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 5U)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 5U))) 
                                                    << 5U));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xffffffbfU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [6U][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [6U][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [6U][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [6U][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 6U)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 6U))) 
                                                    << 6U));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xffffff7fU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [7U][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [7U][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [7U][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [7U][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 7U)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 7U))) 
                                                    << 7U));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xfffffeffU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [8U][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [8U][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [8U][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [8U][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 8U)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 8U))) 
                                                    << 8U));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xfffffdffU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [9U][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [9U][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [9U][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [9U][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 9U)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 9U))) 
                                                    << 9U));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xfffffbffU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0xaU][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0xaU][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [0xaU][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [0xaU][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 0xaU)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 0xaU))) 
                                                    << 0xaU));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xfffff7ffU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0xbU][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0xbU][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [0xbU][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [0xbU][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 0xbU)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 0xbU))) 
                                                    << 0xbU));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xffffefffU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0xcU][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0xcU][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [0xcU][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [0xcU][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 0xcU)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 0xcU))) 
                                                    << 0xcU));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xffffdfffU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0xdU][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0xdU][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [0xdU][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [0xdU][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 0xdU)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 0xdU))) 
                                                    << 0xdU));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xffffbfffU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0xeU][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0xeU][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [0xeU][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [0xeU][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 0xeU)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 0xeU))) 
                                                    << 0xeU));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xffff7fffU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0xfU][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0xfU][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [0xfU][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [0xfU][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 0xfU)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 0xfU))) 
                                                    << 0xfU));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xfffeffffU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x10U][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x10U][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [0x10U][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [0x10U][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 0x10U)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 0x10U))) 
                                                    << 0x10U));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xfffdffffU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x11U][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x11U][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [0x11U][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [0x11U][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 0x11U)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 0x11U))) 
                                                    << 0x11U));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xfffbffffU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x12U][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x12U][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [0x12U][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [0x12U][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 0x12U)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 0x12U))) 
                                                    << 0x12U));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xfff7ffffU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x13U][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x13U][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [0x13U][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [0x13U][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 0x13U)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 0x13U))) 
                                                    << 0x13U));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xffefffffU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x14U][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x14U][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [0x14U][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [0x14U][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 0x14U)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 0x14U))) 
                                                    << 0x14U));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xffdfffffU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x15U][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x15U][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [0x15U][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [0x15U][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 0x15U)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 0x15U))) 
                                                    << 0x15U));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xffbfffffU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x16U][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x16U][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [0x16U][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [0x16U][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 0x16U)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 0x16U))) 
                                                    << 0x16U));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xff7fffffU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x17U][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x17U][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [0x17U][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [0x17U][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 0x17U)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 0x17U))) 
                                                    << 0x17U));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xfeffffffU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x18U][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x18U][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [0x18U][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [0x18U][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 0x18U)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 0x18U))) 
                                                    << 0x18U));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xfdffffffU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x19U][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x19U][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [0x19U][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [0x19U][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 0x19U)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 0x19U))) 
                                                    << 0x19U));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xfbffffffU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x1aU][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x1aU][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [0x1aU][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [0x1aU][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 0x1aU)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 0x1aU))) 
                                                    << 0x1aU));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xf7ffffffU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x1bU][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x1bU][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [0x1bU][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [0x1bU][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 0x1bU)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 0x1bU))) 
                                                    << 0x1bU));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xefffffffU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x1cU][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x1cU][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [0x1cU][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [0x1cU][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 0x1cU)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 0x1cU))) 
                                                    << 0x1cU));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xdfffffffU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x1dU][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x1dU][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [0x1dU][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [0x1dU][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 0x1dU)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 0x1dU))) 
                                                    << 0x1dU));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0xbfffffffU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x1eU][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x1eU][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [0x1eU][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [0x1eU][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 0x1eU)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 0x1eU))) 
                                                    << 0x1eU));
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = ((0x7fffffffU 
                                                  & vlSelf->tb_scheduler__DOT__dut__DOT__reqs) 
                                                 | ((((0U 
                                                       == 
                                                       (((vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x1fU][0U] 
                                                          | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                          [0x1fU][1U]) 
                                                         | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                         [0x1fU][2U]) 
                                                        | vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                                                        [0x1fU][3U])) 
                                                      & (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                                                         >> 0x1fU)) 
                                                     & (~ 
                                                        (vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                                                         >> 0x1fU))) 
                                                    << 0x1fU));
    vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 0U;
    vlSelf->tb_scheduler__DOT__dut__DOT__grant = 0U;
    vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 0U;
    vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__masked_req 
        = (vlSelf->tb_scheduler__DOT__dut__DOT__reqs 
           & (0xffffffffU >> (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_priority)));
    vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req 
        = ((0U == vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__masked_req)
            ? vlSelf->tb_scheduler__DOT__dut__DOT__reqs
            : vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__masked_req);
    if ((vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req 
         >> 0x1fU)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 0x1fU;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x40000000U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 0x1eU;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x20000000U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 0x1dU;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x10000000U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 0x1cU;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x8000000U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 0x1bU;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x4000000U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 0x1aU;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x2000000U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 0x19U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x1000000U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 0x18U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x800000U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 0x17U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x400000U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 0x16U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x200000U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 0x15U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x100000U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 0x14U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x80000U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 0x13U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x40000U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 0x12U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x20000U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 0x11U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x10000U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 0x10U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x8000U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 0xfU;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x4000U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 0xeU;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x2000U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 0xdU;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x1000U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 0xcU;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x800U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 0xbU;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x400U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 0xaU;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x200U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 9U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x100U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 8U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x80U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 7U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x40U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 6U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x20U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 5U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((0x10U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 4U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((8U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 3U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((4U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 2U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((2U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((1U & vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req)) {
        vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant = 0U;
        vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
}

VL_ATTR_COLD void Vtb_scheduler___024root___eval_stl(Vtb_scheduler___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_scheduler___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_scheduler___024root___eval_triggers__stl(Vtb_scheduler___024root* vlSelf);

VL_ATTR_COLD bool Vtb_scheduler___024root___eval_phase__stl(Vtb_scheduler___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_scheduler___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_scheduler___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scheduler___024root___dump_triggers__act(Vtb_scheduler___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_scheduler.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_scheduler.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scheduler___024root___dump_triggers__nba(Vtb_scheduler___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_scheduler.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_scheduler.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_scheduler___024root___ctor_var_reset(Vtb_scheduler___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_scheduler__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_scheduler__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tb_scheduler__DOT__cycle_count = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->tb_scheduler__DOT__global_ready_mask);
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs = VL_RAND_RESET_I(32);
    vlSelf->tb_scheduler__DOT__dut__DOT__grant = VL_RAND_RESET_I(5);
    vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_scheduler__DOT__dut__DOT____Vcellout__wakeup__full_out = VL_RAND_RESET_I(1);
    vlSelf->tb_scheduler__DOT__dut__DOT____Vcellout__wakeup__free_entry_out = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_RAND_RESET_W(83, vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram[__Vi0]);
    }
    vlSelf->tb_scheduler__DOT__dut__DOT__all_fu_ready_mask = VL_RAND_RESET_I(1);
    vlSelf->tb_scheduler__DOT__dut__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->tb_scheduler__DOT__dut__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid = VL_RAND_RESET_I(32);
    vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted = VL_RAND_RESET_I(32);
    vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = VL_RAND_RESET_I(5);
    vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[__Vi0]);
    }
    vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = VL_RAND_RESET_I(1);
    vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_priority = VL_RAND_RESET_I(5);
    vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__masked_req = VL_RAND_RESET_I(32);
    vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req = VL_RAND_RESET_I(32);
    vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_scheduler__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
