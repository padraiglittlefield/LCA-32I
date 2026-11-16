// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_register_read.h for the primary calling header

#include "Vtb_register_read__pch.h"

VL_ATTR_COLD void Vtb_register_read___024root___eval_static__TOP(Vtb_register_read___024root* vlSelf);
void Vtb_register_read___024root___timing_ready(Vtb_register_read___024root* vlSelf);

VL_ATTR_COLD void Vtb_register_read___024root___eval_static(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___eval_static\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_register_read___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_register_read__DOT__clk__0 
        = vlSelfRef.tb_register_read__DOT__clk;
    Vtb_register_read___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_register_read___024root___eval_static__TOP(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___eval_static__TOP\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_register_read__DOT__cycle_count = 0U;
    vlSelfRef.tb_register_read__DOT__pass_count = 0U;
    vlSelfRef.tb_register_read__DOT__fail_count = 0U;
}

VL_ATTR_COLD void Vtb_register_read___024root___eval_initial__TOP(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___eval_initial__TOP\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("tb_register_read.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vtb_register_read___024root___eval_final(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___eval_final\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_register_read___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_register_read___024root___eval_phase__stl(Vtb_register_read___024root* vlSelf);

VL_ATTR_COLD void Vtb_register_read___024root___eval_settle(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___eval_settle\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_register_read___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("sim/tb_register_read.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_register_read___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_register_read___024root___eval_triggers_vec__stl(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___eval_triggers_vec__stl\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_register_read___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_register_read___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_register_read___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_register_read___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___trigger_anySet__stl\n"); );
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

void Vtb_register_read___024root___act_comb__TOP__0(Vtb_register_read___024root* vlSelf);
VL_ATTR_COLD void Vtb_register_read___024root____Vm_traceActivitySetAll(Vtb_register_read___024root* vlSelf);

VL_ATTR_COLD void Vtb_register_read___024root___eval_stl(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___eval_stl\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_register_read___024root___act_comb__TOP__0(vlSelf);
        Vtb_register_read___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_register_read___024root___eval_phase__stl(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___eval_phase__stl\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_register_read___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_register_read___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_register_read___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_register_read___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_register_read___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_register_read___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_register_read___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_register_read.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge tb_register_read.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_register_read___024root____Vm_traceActivitySetAll(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root____Vm_traceActivitySetAll\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void Vtb_register_read___024root___ctor_var_reset(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___ctor_var_reset\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_register_read__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9633306572142336020ull);
    vlSelf->tb_register_read__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4339130296576253173ull);
    vlSelf->tb_register_read__DOT__sched_fire_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10970688171831914038ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_register_read__DOT__sched_pkt, __VscopeHash, 14002795035468119748ull);
    vlSelf->tb_register_read__DOT__rf_src1_preg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3872698628040017301ull);
    vlSelf->tb_register_read__DOT__rf_src2_preg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12904535910119174499ull);
    vlSelf->tb_register_read__DOT__rf_src1_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7737312008918772717ull);
    vlSelf->tb_register_read__DOT__rf_src2_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10844524405069367003ull);
    vlSelf->tb_register_read__DOT__fwrd_src1_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12412582018946033670ull);
    vlSelf->tb_register_read__DOT__fwrd_src1_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14495585574398234632ull);
    vlSelf->tb_register_read__DOT__fwrd_src2_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8266239868748233576ull);
    vlSelf->tb_register_read__DOT__fwrd_src2_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14863303970617754812ull);
    vlSelf->tb_register_read__DOT__exec_fire_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5024348964012109959ull);
    VL_SCOPED_RAND_RESET_W(190, vlSelf->tb_register_read__DOT__exec_pkt, __VscopeHash, 9863530620907306799ull);
    VL_SCOPED_RAND_RESET_W(190, vlSelf->tb_register_read__DOT__dut__DOT__exec_pkt, __VscopeHash, 2808794967032949768ull);
    vlSelf->tb_register_read__DOT__dut__DOT__src1_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2756803455075709153ull);
    vlSelf->tb_register_read__DOT__dut__DOT__src2_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12364985358181513478ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_register_read__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
