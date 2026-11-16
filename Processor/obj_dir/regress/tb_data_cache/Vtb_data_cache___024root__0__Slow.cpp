// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_data_cache.h for the primary calling header

#include "Vtb_data_cache__pch.h"

VL_ATTR_COLD void Vtb_data_cache___024root___eval_static(Vtb_data_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root___eval_static\n"); );
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_data_cache__DOT__clk__0 
        = vlSelfRef.tb_data_cache__DOT__clk;
}

VL_ATTR_COLD void Vtb_data_cache___024root___eval_initial(Vtb_data_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root___eval_initial\n"); );
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_data_cache___024root___eval_final(Vtb_data_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root___eval_final\n"); );
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_data_cache___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_data_cache___024root___eval_phase__stl(Vtb_data_cache___024root* vlSelf);

VL_ATTR_COLD void Vtb_data_cache___024root___eval_settle(Vtb_data_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root___eval_settle\n"); );
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_data_cache___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("sim/tb_data_cache.sv", 4, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_data_cache___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_data_cache___024root___eval_triggers_vec__stl(Vtb_data_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root___eval_triggers_vec__stl\n"); );
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_data_cache___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_data_cache___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_data_cache___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_data_cache___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_data_cache___024root___stl_sequent__TOP__0(Vtb_data_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root___stl_sequent__TOP__0\n"); );
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_data_cache__DOT__wb_evicted_en = 0U;
    vlSelfRef.tb_data_cache__DOT__wb_evicted_block[0U] = 0U;
    vlSelfRef.tb_data_cache__DOT__wb_evicted_block[1U] = 0U;
    vlSelfRef.tb_data_cache__DOT__wb_evicted_block[2U] = 0U;
    vlSelfRef.tb_data_cache__DOT__wb_evicted_block[3U] = 0U;
    if (((IData)(vlSelfRef.tb_data_cache__DOT__wr_en) 
         & (IData)(vlSelfRef.tb_data_cache__DOT__is_repair_i))) {
        if ((1U & ((vlSelfRef.tb_data_cache__DOT__dut__DOT__tag_array
                    [(0x0000003fU & (vlSelfRef.tb_data_cache__DOT__wr_addr_i 
                                     >> 4U))] >> 1U) 
                   & vlSelfRef.tb_data_cache__DOT__dut__DOT__tag_array
                   [(0x0000003fU & (vlSelfRef.tb_data_cache__DOT__wr_addr_i 
                                    >> 4U))]))) {
            vlSelfRef.tb_data_cache__DOT__wb_evicted_en = 1U;
            vlSelfRef.tb_data_cache__DOT__wb_evicted_block[0U] 
                = vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array
                [(0x0000003fU & (vlSelfRef.tb_data_cache__DOT__wr_addr_i 
                                 >> 4U))][0U];
            vlSelfRef.tb_data_cache__DOT__wb_evicted_block[1U] 
                = vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array
                [(0x0000003fU & (vlSelfRef.tb_data_cache__DOT__wr_addr_i 
                                 >> 4U))][1U];
            vlSelfRef.tb_data_cache__DOT__wb_evicted_block[2U] 
                = vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array
                [(0x0000003fU & (vlSelfRef.tb_data_cache__DOT__wr_addr_i 
                                 >> 4U))][2U];
            vlSelfRef.tb_data_cache__DOT__wb_evicted_block[3U] 
                = vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array
                [(0x0000003fU & (vlSelfRef.tb_data_cache__DOT__wr_addr_i 
                                 >> 4U))][3U];
        }
    }
}

VL_ATTR_COLD void Vtb_data_cache___024root____Vm_traceActivitySetAll(Vtb_data_cache___024root* vlSelf);

VL_ATTR_COLD void Vtb_data_cache___024root___eval_stl(Vtb_data_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root___eval_stl\n"); );
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_data_cache___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_data_cache___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_data_cache___024root___eval_phase__stl(Vtb_data_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root___eval_phase__stl\n"); );
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_data_cache___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_data_cache___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_data_cache___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_data_cache___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_data_cache___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_data_cache___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_data_cache___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_data_cache.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_data_cache___024root____Vm_traceActivitySetAll(Vtb_data_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root____Vm_traceActivitySetAll\n"); );
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vtb_data_cache___024root___ctor_var_reset(Vtb_data_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root___ctor_var_reset\n"); );
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_data_cache__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7067015812517127568ull);
    vlSelf->tb_data_cache__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4803900887315483221ull);
    vlSelf->tb_data_cache__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8050966327565958605ull);
    vlSelf->tb_data_cache__DOT__is_repair_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13399136901686121160ull);
    vlSelf->tb_data_cache__DOT__is_repair_dirty_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16503621514549543719ull);
    vlSelf->tb_data_cache__DOT__wr_addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9183824875519134475ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_data_cache__DOT__wr_data_i, __VscopeHash, 4340638600904005968ull);
    vlSelf->tb_data_cache__DOT__rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12338817536111927188ull);
    vlSelf->tb_data_cache__DOT__rd_addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2678491253922829427ull);
    vlSelf->tb_data_cache__DOT__wb_evicted_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10030548154645812235ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_data_cache__DOT__wb_evicted_block, __VscopeHash, 16885040044208320377ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_data_cache__DOT__dut__DOT__data_array[__Vi0], __VscopeHash, 17680103149518924869ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_data_cache__DOT__dut__DOT__tag_array[__Vi0] = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13867403929668327488ull);
    }
    vlSelf->tb_data_cache__DOT__dut__DOT__write_tag_block = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10850820020557409823ull);
    vlSelf->tb_data_cache__DOT__dut__DOT__read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12358657367928876197ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_data_cache__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
