// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_load_data_queue.h for the primary calling header

#include "Vtb_load_data_queue__pch.h"

VL_ATTR_COLD void Vtb_load_data_queue___024root___eval_static__TOP(Vtb_load_data_queue___024root* vlSelf);
void Vtb_load_data_queue___024root___timing_ready(Vtb_load_data_queue___024root* vlSelf);

VL_ATTR_COLD void Vtb_load_data_queue___024root___eval_static(Vtb_load_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___eval_static\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_load_data_queue___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_load_data_queue__DOT__clk__0 
        = vlSelfRef.tb_load_data_queue__DOT__clk;
    Vtb_load_data_queue___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_load_data_queue___024root___eval_static__TOP(Vtb_load_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___eval_static__TOP\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_load_data_queue__DOT__cycle_count = 0U;
}

VL_ATTR_COLD void Vtb_load_data_queue___024root___eval_initial__TOP(Vtb_load_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___eval_initial__TOP\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("tb_load_data_queue.fst"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vtb_load_data_queue___024root___eval_final(Vtb_load_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___eval_final\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_load_data_queue___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_load_data_queue___024root___eval_phase__stl(Vtb_load_data_queue___024root* vlSelf);

VL_ATTR_COLD void Vtb_load_data_queue___024root___eval_settle(Vtb_load_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___eval_settle\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_load_data_queue___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("sim/tb_load_data_queue.sv", 6, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_load_data_queue___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_load_data_queue___024root___eval_triggers_vec__stl(Vtb_load_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___eval_triggers_vec__stl\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_load_data_queue___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_load_data_queue___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_load_data_queue___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_load_data_queue___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_load_data_queue___024root___stl_sequent__TOP__0(Vtb_load_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___stl_sequent__TOP__0\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vtb_load_data_queue___024root____Vm_traceActivitySetAll(Vtb_load_data_queue___024root* vlSelf);

VL_ATTR_COLD void Vtb_load_data_queue___024root___eval_stl(Vtb_load_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___eval_stl\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_load_data_queue___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_load_data_queue___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_load_data_queue___024root___eval_phase__stl(Vtb_load_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___eval_phase__stl\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_load_data_queue___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_load_data_queue___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_load_data_queue___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_load_data_queue___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_load_data_queue___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_load_data_queue___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_load_data_queue___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_load_data_queue.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge tb_load_data_queue.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_load_data_queue___024root____Vm_traceActivitySetAll(Vtb_load_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root____Vm_traceActivitySetAll\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vtb_load_data_queue___024root___ctor_var_reset(Vtb_load_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_load_data_queue___024root___ctor_var_reset\n"); );
    Vtb_load_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_load_data_queue__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1873491269658668631ull);
    vlSelf->tb_load_data_queue__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14030706107708619986ull);
    vlSelf->tb_load_data_queue__DOT__disp_vld_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4036924673691529480ull);
    vlSelf->tb_load_data_queue__DOT__disp_sdq_marker_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11152321477874017936ull);
    vlSelf->tb_load_data_queue__DOT__ldq_full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15925796838544004046ull);
    vlSelf->tb_load_data_queue__DOT__exec_vld_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3169938675867392995ull);
    vlSelf->tb_load_data_queue__DOT__exec_ldq_idx_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16837795927230430438ull);
    vlSelf->tb_load_data_queue__DOT__exec_addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 150279330964697106ull);
    vlSelf->tb_load_data_queue__DOT__issue_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16796440102097239489ull);
    vlSelf->tb_load_data_queue__DOT__issue_entry_o = VL_SCOPED_RAND_RESET_Q(44, __VscopeHash, 15139262794416721311ull);
    vlSelf->tb_load_data_queue__DOT__issue_vld_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16162960095608248197ull);
    vlSelf->tb_load_data_queue__DOT__rob_entry_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2921598946347543104ull);
    vlSelf->tb_load_data_queue__DOT__dut__DOT__issue_ack_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15086008238106986915ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_load_data_queue__DOT__dut__DOT__ldq[__Vi0] = VL_SCOPED_RAND_RESET_Q(44, __VscopeHash, 1818864389206490279ull);
    }
    vlSelf->tb_load_data_queue__DOT__dut__DOT__ldq_alloc_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 520779561458725362ull);
    vlSelf->tb_load_data_queue__DOT__dut__DOT__entries_free = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9024206642714314977ull);
    vlSelf->tb_load_data_queue__DOT__dut__DOT__alloc_idx_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16994445589323363340ull);
    vlSelf->tb_load_data_queue__DOT__dut__DOT__entries_ready = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6285022210285624742ull);
    vlSelf->tb_load_data_queue__DOT__dut__DOT__issue_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 701821737621480703ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_load_data_queue__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
