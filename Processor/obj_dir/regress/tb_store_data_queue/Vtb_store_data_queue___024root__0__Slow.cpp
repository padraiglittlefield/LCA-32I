// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_store_data_queue.h for the primary calling header

#include "Vtb_store_data_queue__pch.h"

VL_ATTR_COLD void Vtb_store_data_queue___024root___eval_static__TOP(Vtb_store_data_queue___024root* vlSelf);
void Vtb_store_data_queue___024root___timing_ready(Vtb_store_data_queue___024root* vlSelf);

VL_ATTR_COLD void Vtb_store_data_queue___024root___eval_static(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___eval_static\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_store_data_queue___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_store_data_queue__DOT__clk__0 
        = vlSelfRef.tb_store_data_queue__DOT__clk;
    Vtb_store_data_queue___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_store_data_queue___024root___eval_static__TOP(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___eval_static__TOP\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_store_data_queue__DOT__cycle_count = 0U;
    vlSelfRef.tb_store_data_queue__DOT__pass_count = 0U;
    vlSelfRef.tb_store_data_queue__DOT__fail_count = 0U;
}

VL_ATTR_COLD void Vtb_store_data_queue___024root___eval_initial__TOP(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___eval_initial__TOP\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("tb_store_data_queue.fst"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vtb_store_data_queue___024root___eval_final(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___eval_final\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_store_data_queue___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_store_data_queue___024root___eval_phase__stl(Vtb_store_data_queue___024root* vlSelf);

VL_ATTR_COLD void Vtb_store_data_queue___024root___eval_settle(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___eval_settle\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_store_data_queue___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("sim/tb_store_data_queue.sv", 6, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_store_data_queue___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_store_data_queue___024root___eval_triggers_vec__stl(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___eval_triggers_vec__stl\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_store_data_queue___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_store_data_queue___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_store_data_queue___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_store_data_queue___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_store_data_queue___024root___stl_sequent__TOP__0(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___stl_sequent__TOP__0\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_store_data_queue__DOT__sdq_full_o 
        = (((1U & ((IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr) 
                   >> 4U)) != (1U & ((IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr) 
                                     >> 4U))) & ((0x0000000fU 
                                                  & (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__head_ptr)) 
                                                 == 
                                                 (0x0000000fU 
                                                  & (IData)(vlSelfRef.tb_store_data_queue__DOT__dut__DOT__tail_ptr))));
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

VL_ATTR_COLD void Vtb_store_data_queue___024root____Vm_traceActivitySetAll(Vtb_store_data_queue___024root* vlSelf);

VL_ATTR_COLD void Vtb_store_data_queue___024root___eval_stl(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___eval_stl\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_store_data_queue___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_store_data_queue___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_store_data_queue___024root___eval_phase__stl(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___eval_phase__stl\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_store_data_queue___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_store_data_queue___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_store_data_queue___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_store_data_queue___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_store_data_queue___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_store_data_queue___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_store_data_queue___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_store_data_queue.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge tb_store_data_queue.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_store_data_queue___024root____Vm_traceActivitySetAll(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root____Vm_traceActivitySetAll\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void Vtb_store_data_queue___024root___ctor_var_reset(Vtb_store_data_queue___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_store_data_queue___024root___ctor_var_reset\n"); );
    Vtb_store_data_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_store_data_queue__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3452648643408249955ull);
    vlSelf->tb_store_data_queue__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13433567805766379929ull);
    vlSelf->tb_store_data_queue__DOT__disp_vld_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2397288109728922625ull);
    vlSelf->tb_store_data_queue__DOT__exec_store_data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3580590726599514530ull);
    vlSelf->tb_store_data_queue__DOT__cmit_vld_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15703909470558818796ull);
    vlSelf->tb_store_data_queue__DOT__cmit_idx_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5953707589609671328ull);
    vlSelf->tb_store_data_queue__DOT__exec_vld_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 34178393886208058ull);
    vlSelf->tb_store_data_queue__DOT__exec_sdq_idx_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13404034052482017706ull);
    vlSelf->tb_store_data_queue__DOT__exec_addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8813051348622334544ull);
    vlSelf->tb_store_data_queue__DOT__sdq_full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2752321968253113794ull);
    vlSelf->tb_store_data_queue__DOT__issue_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15535570226507736124ull);
    vlSelf->tb_store_data_queue__DOT__issue_ack_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 86247101720337484ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->tb_store_data_queue__DOT__issue_entry_o, __VscopeHash, 7700259167914724638ull);
    vlSelf->tb_store_data_queue__DOT__issue_vld_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5326195989948824858ull);
    vlSelf->tb_store_data_queue__DOT__ld_vld_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12896951523181002637ull);
    vlSelf->tb_store_data_queue__DOT__ld_addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11125598823395212977ull);
    vlSelf->tb_store_data_queue__DOT__ld_sdq_marker_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15130943487050503059ull);
    vlSelf->tb_store_data_queue__DOT__ld_hit_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5050121066080570116ull);
    vlSelf->tb_store_data_queue__DOT__ld_data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15316890432226845637ull);
    vlSelf->tb_store_data_queue__DOT__exec_rob_idx_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12093240033896963542ull);
    vlSelf->tb_store_data_queue__DOT__dut__DOT____Vlvbound_hb2049f2f__0 = 0;
    vlSelf->tb_store_data_queue__DOT__dut__DOT____Vlvbound_haff32323__0 = 0;
    vlSelf->tb_store_data_queue__DOT__dut__DOT____Vlvbound_haff31b5c__0 = 0;
    vlSelf->tb_store_data_queue__DOT__dut__DOT____Vlvbound_h97a0456c__0 = 0;
    vlSelf->tb_store_data_queue__DOT__dut__DOT____Vlvbound_h2a0334fb__0 = 0;
    vlSelf->tb_store_data_queue__DOT__dut__DOT____Vlvbound_h2a0334bc__0 = 0;
    vlSelf->tb_store_data_queue__DOT__dut__DOT____Vlvbound_h29bad768__0 = 0;
    vlSelf->tb_store_data_queue__DOT__dut__DOT____Vlvbound_h2a031b86__0 = 0;
    vlSelf->tb_store_data_queue__DOT__dut__DOT____Vlvbound_h29babf9d__0 = 0;
    vlSelf->tb_store_data_queue__DOT__dut__DOT____Vlvbound_h2a03438d__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(72, vlSelf->tb_store_data_queue__DOT__dut__DOT__sdq[__Vi0], __VscopeHash, 512135413969631068ull);
    }
    vlSelf->tb_store_data_queue__DOT__dut__DOT__head_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8591808324339498626ull);
    vlSelf->tb_store_data_queue__DOT__dut__DOT__tail_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4874874233581519325ull);
    vlSelf->tb_store_data_queue__DOT__dut__DOT__last_cmit_idx_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10212848538382354419ull);
    vlSelf->tb_store_data_queue__DOT__dut__DOT__prev_st_addr_unresolved = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4446148111057671127ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_store_data_queue__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
