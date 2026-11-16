// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cache_controller.h for the primary calling header

#include "Vtb_cache_controller__pch.h"

VL_ATTR_COLD void Vtb_cache_controller___024root___eval_static__TOP(Vtb_cache_controller___024root* vlSelf);
void Vtb_cache_controller___024root___timing_ready(Vtb_cache_controller___024root* vlSelf);

VL_ATTR_COLD void Vtb_cache_controller___024root___eval_static(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___eval_static\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_cache_controller___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000020ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000040ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000080ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000100ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__cmt_ld_data_o__0 
        = vlSelfRef.tb_cache_controller__DOT__cmt_ld_data_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__cmt_ld_vld_o__0 
        = vlSelfRef.tb_cache_controller__DOT__cmt_ld_vld_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__cmt_rob_idx_o__0 
        = vlSelfRef.tb_cache_controller__DOT__cmt_rob_idx_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__cycle_count__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block__0[0U] 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block__0[1U] 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block__0[2U] 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block__0[3U] 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[3U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__dut__DOT__ctrl_repair_addr_reg__0 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_addr_reg;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__mem_req_vld_o__0 
        = vlSelfRef.tb_cache_controller__DOT__mem_req_vld_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__mem_wb_vld_o__0 
        = vlSelfRef.tb_cache_controller__DOT__mem_wb_vld_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__rst__0 
        = vlSelfRef.tb_cache_controller__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__clk__0 
        = vlSelfRef.tb_cache_controller__DOT__clk;
    Vtb_cache_controller___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_cache_controller___024root___eval_static__TOP(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___eval_static__TOP\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cache_controller__DOT__cycle_count = 0U;
}

VL_ATTR_COLD void Vtb_cache_controller___024root___eval_initial__TOP(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___eval_initial__TOP\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("tb_cache_controller.fst"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vtb_cache_controller___024root___eval_final(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___eval_final\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cache_controller___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_cache_controller___024root___eval_phase__stl(Vtb_cache_controller___024root* vlSelf);

VL_ATTR_COLD void Vtb_cache_controller___024root___eval_settle(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___eval_settle\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cache_controller___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("sim/tb_cache_controller.sv", 4, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_cache_controller___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_cache_controller___024root___eval_triggers_vec__stl(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___eval_triggers_vec__stl\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_cache_controller___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cache_controller___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cache_controller___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_cache_controller___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*1:0*/, 16> Vtb_cache_controller__ConstPool__TABLE_h72be0ac8_0;

VL_ATTR_COLD void Vtb_cache_controller___024root___stl_sequent__TOP__0(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___stl_sequent__TOP__0\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.tb_cache_controller__DOT__cmt_rob_idx_o = 0U;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx = 0U;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found = 0U;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free 
        = ((0xfeU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free)) 
           | (1U & (~ (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[0U][2U] 
                       >> 4U))));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free 
        = ((0xfdU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free)) 
           | (2U & ((~ (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[1U][2U] 
                        >> 4U)) << 1U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free 
        = ((0xfbU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free)) 
           | (4U & ((~ (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[2U][2U] 
                        >> 4U)) << 2U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free 
        = ((0xf7U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free)) 
           | (8U & ((~ (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[3U][2U] 
                        >> 4U)) << 3U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free 
        = ((0xefU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free)) 
           | (0x00000010U & ((~ (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[4U][2U] 
                                 >> 4U)) << 4U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free 
        = ((0xdfU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free)) 
           | (0x00000020U & ((~ (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[5U][2U] 
                                 >> 4U)) << 5U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free 
        = ((0xbfU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free)) 
           | (0x00000040U & ((~ (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[6U][2U] 
                                 >> 4U)) << 6U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free 
        = ((0x7fU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free)) 
           | (0x00000080U & ((~ (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[7U][2U] 
                                 >> 4U)) << 7U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__ld_mshr_full 
        = (1U & (~ (0U != (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free))));
    if ((1U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free) 
                >> 1U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx = 1U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free) 
                >> 2U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx = 2U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free) 
                >> 3U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx = 3U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free) 
                >> 4U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx = 4U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free) 
                >> 5U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx = 5U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free) 
                >> 6U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx = 6U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found = 1U;
    }
    if ((IData)((((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free) 
                  >> 7U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx = 7U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found = 1U;
    }
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx = 0U;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found = 0U;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free 
        = ((0xfeU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free)) 
           | (1U & (~ vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[0U][2U])));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free 
        = ((0xfdU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free)) 
           | (2U & ((~ vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[1U][2U]) 
                    << 1U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free 
        = ((0xfbU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free)) 
           | (4U & ((~ vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[2U][2U]) 
                    << 2U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free 
        = ((0xf7U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free)) 
           | (8U & ((~ vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[3U][2U]) 
                    << 3U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free 
        = ((0xefU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free)) 
           | (0x00000010U & ((~ vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[4U][2U]) 
                             << 4U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free 
        = ((0xdfU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free)) 
           | (0x00000020U & ((~ vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[5U][2U]) 
                             << 5U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free 
        = ((0xbfU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free)) 
           | (0x00000040U & ((~ vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[6U][2U]) 
                             << 6U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free 
        = ((0x7fU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free)) 
           | (0x00000080U & ((~ vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[7U][2U]) 
                             << 7U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__st_mshr_full 
        = (1U & (~ (0U != (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free))));
    if ((1U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free) 
                >> 1U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx = 1U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free) 
                >> 2U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx = 2U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free) 
                >> 3U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx = 3U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free) 
                >> 4U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx = 4U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free) 
                >> 5U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx = 5U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free) 
                >> 6U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx = 6U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found = 1U;
    }
    if ((IData)((((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free) 
                  >> 7U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx = 7U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found = 1U;
    }
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req = 0U;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req = 0U;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req 
        = ((0xfeU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req)) 
           | (1U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[0U][2U] 
                    >> 4U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req 
        = ((0xfeU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req)) 
           | (1U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[0U][2U]));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req 
        = ((0xfdU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req)) 
           | (2U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[1U][2U] 
                    >> 3U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req 
        = ((0xfdU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req)) 
           | (2U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[1U][2U] 
                    << 1U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req 
        = ((0xfbU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req)) 
           | (4U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[2U][2U] 
                    >> 2U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req 
        = ((0xfbU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req)) 
           | (4U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[2U][2U] 
                    << 2U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req 
        = ((0xf7U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req)) 
           | (8U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[3U][2U] 
                    >> 1U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req 
        = ((0xf7U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req)) 
           | (8U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[3U][2U] 
                    << 3U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req 
        = ((0xefU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req)) 
           | (0x00000010U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[4U][2U]));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req 
        = ((0xefU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req)) 
           | (0x00000010U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[4U][2U] 
                             << 4U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req 
        = ((0xdfU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req)) 
           | (0x00000020U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[5U][2U] 
                             << 1U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req 
        = ((0xdfU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req)) 
           | (0x00000020U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[5U][2U] 
                             << 5U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req 
        = ((0xbfU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req)) 
           | (0x00000040U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[6U][2U] 
                             << 2U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req 
        = ((0xbfU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req)) 
           | (0x00000040U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[6U][2U] 
                             << 6U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req 
        = ((0x7fU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req)) 
           | (0x00000080U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[7U][2U] 
                             << 3U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req 
        = ((0x7fU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req)) 
           | (0x00000080U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[7U][2U] 
                             << 7U)));
    if ((1U & ((~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repairing_ld)) 
               & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repairing_st))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 0U;
        if ((0U != (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req))) {
            if ((0x00000080U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 7U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld = 1U;
            }
            if ((0x00000040U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 6U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld = 1U;
            }
            if ((0x00000020U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 5U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld = 1U;
            }
            if ((0x00000010U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 4U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld = 1U;
            }
            if ((8U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 3U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld = 1U;
            }
            if ((4U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 2U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld = 1U;
            }
            if ((2U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 1U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld = 1U;
            }
            if ((1U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 0U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld = 1U;
            }
        } else if ((0U != (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req))) {
            if ((0x00000080U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 7U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st = 1U;
            }
            if ((0x00000040U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 6U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st = 1U;
            }
            if ((0x00000020U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 5U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st = 1U;
            }
            if ((0x00000010U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 4U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st = 1U;
            }
            if ((8U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 3U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st = 1U;
            }
            if ((4U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 2U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st = 1U;
            }
            if ((2U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 1U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st = 1U;
            }
            if ((1U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 0U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st = 1U;
            }
        } else {
            vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 0U;
            vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld = 0U;
            vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st = 0U;
        }
    } else {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st = 0U;
    }
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset = 0U;
    vlSelfRef.tb_cache_controller__DOT__cmt_ld_data_o = 0U;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_wr_data[0U] 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__mem_resp_block_reg[0U];
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_wr_data[1U] 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__mem_resp_block_reg[1U];
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_wr_data[2U] 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__mem_resp_block_reg[2U];
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_wr_data[3U] 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__mem_resp_block_reg[3U];
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_hit 
        = ((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_vld_reg) 
           & ((vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_tag_reg 
               >> 1U) & ((vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_addr_reg 
                          >> 0x0000000aU) == (0x003fffffU 
                                              & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_tag_reg 
                                                 >> 2U)))));
    vlSelfRef.tb_cache_controller__DOT__stall_controller_o 
        = ((2U == (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state)) 
           | ((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__ld_mshr_full) 
              | (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__st_mshr_full)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr_repair_req 
        = ((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld) 
           | (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT____VdfgRegularize_h0e291f09_0_0 
        = ((~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_hit)) 
           & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_vld_reg));
    vlSelfRef.tb_cache_controller__DOT__cmt_ld_vld_o = 0U;
    if ((2U == (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_is_store)))) {
            vlSelfRef.tb_cache_controller__DOT__cmt_rob_idx_o 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_rob_idx_reg;
            vlSelfRef.tb_cache_controller__DOT__cmt_ld_vld_o = 1U;
        }
        if (vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_is_store) {
            VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & 
                                      VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset), 5U)), vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_wr_data, vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_data_reg);
        } else {
            vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset 
                = (3U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_addr_reg 
                         >> 2U));
            vlSelfRef.tb_cache_controller__DOT__cmt_ld_data_o 
                = (((0U == (0x0000001fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset), 5U)))
                     ? 0U : (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mem_resp_block_reg
                             [(((IData)(0x0000001fU) 
                                + (0x0000007fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset), 5U))) 
                               >> 5U)] << ((IData)(0x00000020U) 
                                           - (0x0000001fU 
                                              & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset), 5U))))) 
                   | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mem_resp_block_reg
                      [(3U & (VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset), 5U) 
                              >> 5U))] >> (0x0000001fU 
                                           & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset), 5U))));
        }
    } else {
        vlSelfRef.tb_cache_controller__DOT__cmt_rob_idx_o 
            = vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_rob_idx_reg;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset 
            = (3U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_addr_reg 
                     >> 2U));
        vlSelfRef.tb_cache_controller__DOT__cmt_ld_data_o 
            = (((0U == (0x0000001fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset), 5U)))
                 ? 0U : (vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg
                         [(((IData)(0x0000001fU) + 
                            (0x0000007fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset), 5U))) 
                           >> 5U)] << ((IData)(0x00000020U) 
                                       - (0x0000001fU 
                                          & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset), 5U))))) 
               | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg
                  [(3U & (VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset), 5U) 
                          >> 5U))] >> (0x0000001fU 
                                       & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset), 5U))));
        vlSelfRef.tb_cache_controller__DOT__cmt_ld_vld_o 
            = ((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_hit) 
               & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_rd_wr_reg)));
    }
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__store_wr_en 
        = ((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_rd_wr_reg) 
           & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_hit));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block_offset 
        = (3U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_addr_reg 
                 >> 2U));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block[0U] 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[0U];
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block[1U] 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[1U];
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block[2U] 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[2U];
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block[3U] 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[3U];
    VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block_offset), 5U)), vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block, vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_st_data_reg);
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__is_repair 
        = (2U == (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_en 
        = ((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__is_repair) 
           | (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__store_wr_en));
    if (vlSelfRef.tb_cache_controller__DOT__dut__DOT__is_repair) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_data_wire[0U] 
            = vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_wr_data[0U];
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_data_wire[1U] 
            = vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_wr_data[1U];
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_data_wire[2U] 
            = vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_wr_data[2U];
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_data_wire[3U] 
            = vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_wr_data[3U];
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
            = vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_addr_reg;
    } else {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_data_wire[0U] 
            = vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block[0U];
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_data_wire[1U] 
            = vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block[1U];
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_data_wire[2U] 
            = vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block[2U];
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_data_wire[3U] 
            = vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block[3U];
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
            = vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_addr_reg;
    }
    vlSelfRef.tb_cache_controller__DOT__mem_req_vld_o 
        = ((0U == (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state)) 
           & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr_repair_req));
    __Vtableidx1 = (((IData)(vlSelfRef.tb_cache_controller__DOT__mem_resp_vld_i) 
                     << 3U) | (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr_repair_req) 
                                << 2U) | (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state_next 
        = Vtb_cache_controller__ConstPool__TABLE_h72be0ac8_0
        [__Vtableidx1];
    vlSelfRef.tb_cache_controller__DOT__mem_wb_vld_o = 0U;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[0U] = 0U;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[1U] = 0U;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[2U] = 0U;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[3U] = 0U;
    if (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_en) 
         & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__is_repair))) {
        if ((1U & ((vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array
                    [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
                                     >> 4U))] >> 1U) 
                   & vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array
                   [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
                                    >> 4U))]))) {
            vlSelfRef.tb_cache_controller__DOT__mem_wb_vld_o = 1U;
            vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[0U] 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array
                [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
                                 >> 4U))][0U];
            vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[1U] 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array
                [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
                                 >> 4U))][1U];
            vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[2U] 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array
                [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
                                 >> 4U))][2U];
            vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[3U] 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array
                [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
                                 >> 4U))][3U];
        }
    }
}

VL_ATTR_COLD void Vtb_cache_controller___024root____Vm_traceActivitySetAll(Vtb_cache_controller___024root* vlSelf);

VL_ATTR_COLD void Vtb_cache_controller___024root___eval_stl(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___eval_stl\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_cache_controller___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_cache_controller___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_cache_controller___024root___eval_phase__stl(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___eval_phase__stl\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_cache_controller___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cache_controller___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_cache_controller___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_cache_controller___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_cache_controller___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cache_controller___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cache_controller___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( tb_cache_controller.cmt_ld_data_o)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( tb_cache_controller.cmt_ld_vld_o)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( tb_cache_controller.cmt_rob_idx_o)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( tb_cache_controller.cycle_count)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( tb_cache_controller.dut.__Vcellout__u_data_cache__wb_evicted_block)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( tb_cache_controller.dut.ctrl_repair_addr_reg)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( tb_cache_controller.mem_req_vld_o)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @( tb_cache_controller.mem_wb_vld_o)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @( tb_cache_controller.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @(posedge tb_cache_controller.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @(negedge tb_cache_controller.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cache_controller___024root____Vm_traceActivitySetAll(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root____Vm_traceActivitySetAll\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtb_cache_controller___024root___ctor_var_reset(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___ctor_var_reset\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_cache_controller__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7508371999956822606ull);
    vlSelf->tb_cache_controller__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14050026474666212549ull);
    vlSelf->tb_cache_controller__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15641632849220466655ull);
    vlSelf->tb_cache_controller__DOT__lsu_req_vld_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13082722162151978831ull);
    vlSelf->tb_cache_controller__DOT__lsu_req_wr_rd_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15581435982857407563ull);
    vlSelf->tb_cache_controller__DOT__lsu_req_addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10982126887796341955ull);
    vlSelf->tb_cache_controller__DOT__lsu_req_data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18181270011127257795ull);
    vlSelf->tb_cache_controller__DOT__lsu_req_rob_idx_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17386325812149896500ull);
    vlSelf->tb_cache_controller__DOT__mem_req_vld_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 141005937621444939ull);
    vlSelf->tb_cache_controller__DOT__mem_resp_vld_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6629210804485545923ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_cache_controller__DOT__mem_resp_data_i, __VscopeHash, 13622695798671321801ull);
    vlSelf->tb_cache_controller__DOT__mem_wb_vld_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15149852543059224984ull);
    vlSelf->tb_cache_controller__DOT__cmt_ld_vld_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2394415527817363345ull);
    vlSelf->tb_cache_controller__DOT__cmt_ld_data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8181774637678056346ull);
    vlSelf->tb_cache_controller__DOT__cmt_rob_idx_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17854932283122847174ull);
    vlSelf->tb_cache_controller__DOT__stall_controller_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11858429123645037569ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__repair_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5610502279813504689ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__repair_state_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9851650675063141764ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_cache_controller__DOT__dut__DOT__wr_data_wire, __VscopeHash, 3257336172593892605ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__wr_addr_wire = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6669735168616552514ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12553017882526520868ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__is_repair = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5658751968467960359ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_cache_controller__DOT__dut__DOT__rd_data_reg, __VscopeHash, 2190508467531865467ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__rd_tag_reg = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16990227017959898492ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__req_vld_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6691856517041132866ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__req_rd_wr_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4729085563768878775ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__req_addr_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12395181302990242563ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__req_st_data_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10600825279444951719ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__req_rob_idx_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11858474853016800665ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__req_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10376365102940439160ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__store_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15138175405418449388ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_cache_controller__DOT__dut__DOT__write_block, __VscopeHash, 10241087530638380029ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__write_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4374064372516766156ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__write_block_offset = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 676582947595416311ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__ld_mshr_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8808675826652006194ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__st_mshr_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 900640330778236798ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__mshr_repair_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17889217708436462331ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__ctrl_repair_addr_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8676302926884425090ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__ctrl_repair_data_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15359200342370236002ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__ctrl_repair_rob_idx_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9165011602807559311ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__ctrl_repair_is_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1141546274573465624ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_cache_controller__DOT__dut__DOT__mem_resp_block_reg, __VscopeHash, 10171501626130722757ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_cache_controller__DOT__dut__DOT__repair_wr_data, __VscopeHash, 2952721964018481883ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__cmt_block_offset = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9672483244887413888ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__lsu_req_vld_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12843515122310110567ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__lsu_req_wr_rd_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16367056413271150342ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16171304828279875339ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__lsu_req_data_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10230245655784061308ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__lsu_req_rob_idx_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16246804415049224277ull);
    VL_ZERO_RESET_W(128, vlSelf->tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block);
    vlSelf->tb_cache_controller__DOT__dut__DOT____VdfgRegularize_h0e291f09_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[__Vi0], __VscopeHash, 15731689495712411644ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array[__Vi0] = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 18289999872557470974ull);
    }
    vlSelf->tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__write_tag_block = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7362756655297659650ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5948335831963516924ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(69, vlSelf->tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[__Vi0], __VscopeHash, 1597967354132260955ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(65, vlSelf->tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[__Vi0], __VscopeHash, 12935652788387979593ull);
    }
    vlSelf->tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4038325850526593871ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10112731513738050360ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11943206379176630824ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8891640101629903803ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5262602698496870291ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9317417572954351866ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__mshr__DOT__repairing_ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13827541637987348011ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__mshr__DOT__repairing_st = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6874263498704128756ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16863470187209208127ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16936432111810787118ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11051040456356897665ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr_reg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15293797315651905403ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6784142288155662624ull);
    vlSelf->tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17053646982240959899ull);
    vlSelf->__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v0 = 0;
    vlSelf->__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v8 = 0;
    vlSelf->__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v16 = 0;
    vlSelf->__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v16 = 0;
    vlSelf->__VdlyVal__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v17 = 0;
    vlSelf->__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v17 = 0;
    vlSelf->__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v18 = 0;
    vlSelf->__VdlyVal__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v19 = 0;
    vlSelf->__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v19 = 0;
    vlSelf->__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v20 = 0;
    vlSelf->__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v20 = 0;
    vlSelf->__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v0 = 0;
    vlSelf->__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v8 = 0;
    vlSelf->__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v8 = 0;
    vlSelf->__VdlyVal__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v9 = 0;
    vlSelf->__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v9 = 0;
    vlSelf->__VdlyVal__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v10 = 0;
    vlSelf->__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v10 = 0;
    vlSelf->__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v11 = 0;
    vlSelf->__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v11 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_cache_controller__DOT__cmt_ld_data_o__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_cache_controller__DOT__cmt_ld_vld_o__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_cache_controller__DOT__cmt_rob_idx_o__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_cache_controller__DOT__cycle_count__0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vtrigprevexpr___TOP__tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block__0);
    vlSelf->__Vtrigprevexpr___TOP__tb_cache_controller__DOT__dut__DOT__ctrl_repair_addr_reg__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_cache_controller__DOT__mem_req_vld_o__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_cache_controller__DOT__mem_wb_vld_o__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_cache_controller__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_cache_controller__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
