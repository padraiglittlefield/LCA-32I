// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fwrd_unit.h for the primary calling header

#include "Vtb_fwrd_unit__pch.h"

VL_ATTR_COLD void Vtb_fwrd_unit___024root___eval_static__TOP(Vtb_fwrd_unit___024root* vlSelf);
void Vtb_fwrd_unit___024root___timing_ready(Vtb_fwrd_unit___024root* vlSelf);

VL_ATTR_COLD void Vtb_fwrd_unit___024root___eval_static(Vtb_fwrd_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___eval_static\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_fwrd_unit___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fwrd_unit__DOT__clk__0 
        = vlSelfRef.tb_fwrd_unit__DOT__clk;
    Vtb_fwrd_unit___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_fwrd_unit___024root___eval_static__TOP(Vtb_fwrd_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___eval_static__TOP\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fwrd_unit__DOT__cycle_count = 0U;
    vlSelfRef.tb_fwrd_unit__DOT__pass_count = 0U;
    vlSelfRef.tb_fwrd_unit__DOT__fail_count = 0U;
}

VL_ATTR_COLD void Vtb_fwrd_unit___024root___eval_initial__TOP(Vtb_fwrd_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___eval_initial__TOP\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("tb_phys_reg_file.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vtb_fwrd_unit___024root___eval_final(Vtb_fwrd_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___eval_final\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fwrd_unit___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_fwrd_unit___024root___eval_phase__stl(Vtb_fwrd_unit___024root* vlSelf);

VL_ATTR_COLD void Vtb_fwrd_unit___024root___eval_settle(Vtb_fwrd_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___eval_settle\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_fwrd_unit___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("sim/tb_fwrd_unit.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_fwrd_unit___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_fwrd_unit___024root___eval_triggers_vec__stl(Vtb_fwrd_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___eval_triggers_vec__stl\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_fwrd_unit___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fwrd_unit___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_fwrd_unit___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_fwrd_unit___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___trigger_anySet__stl\n"); );
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

void Vtb_fwrd_unit___024root___act_sequent__TOP__0(Vtb_fwrd_unit___024root* vlSelf);
VL_ATTR_COLD void Vtb_fwrd_unit___024root____Vm_traceActivitySetAll(Vtb_fwrd_unit___024root* vlSelf);

VL_ATTR_COLD void Vtb_fwrd_unit___024root___eval_stl(Vtb_fwrd_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___eval_stl\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_fwrd_unit___024root___act_sequent__TOP__0(vlSelf);
        Vtb_fwrd_unit___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_fwrd_unit___024root___eval_phase__stl(Vtb_fwrd_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___eval_phase__stl\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_fwrd_unit___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fwrd_unit___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_fwrd_unit___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_fwrd_unit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_fwrd_unit___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fwrd_unit___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_fwrd_unit___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_fwrd_unit.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fwrd_unit___024root____Vm_traceActivitySetAll(Vtb_fwrd_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root____Vm_traceActivitySetAll\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtb_fwrd_unit___024root___ctor_var_reset(Vtb_fwrd_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fwrd_unit___024root___ctor_var_reset\n"); );
    Vtb_fwrd_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_fwrd_unit__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14601388484222466349ull);
    vlSelf->tb_fwrd_unit__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15142785374972601844ull);
    vlSelf->tb_fwrd_unit__DOT__src1_preg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7884661835081017560ull);
    vlSelf->tb_fwrd_unit__DOT__src2_preg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14786537475189359672ull);
    vlSelf->tb_fwrd_unit__DOT__src1_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6427970252057484053ull);
    vlSelf->tb_fwrd_unit__DOT__src2_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2211546022413373522ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_fwrd_unit__DOT__ex_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13498488282294812050ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_fwrd_unit__DOT__ex_dst_preg[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12883386617666853527ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_fwrd_unit__DOT__ex_val[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12850515188004804032ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_fwrd_unit__DOT__dut__DOT__ex_valid_i[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2050814277662592797ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_fwrd_unit__DOT__dut__DOT__ex_dst_preg_i[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14194215080214545493ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_fwrd_unit__DOT__dut__DOT__ex_val_i[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7553494556290382012ull);
    }
    vlSelf->tb_fwrd_unit__DOT__dut__DOT__src1_hit = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4250461147013750262ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_fwrd_unit__DOT__dut__DOT__src1_fwrd_val[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14528418461490543600ull);
    }
    vlSelf->tb_fwrd_unit__DOT__dut__DOT__src2_hit = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17776248517043403057ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_fwrd_unit__DOT__dut__DOT__src2_fwrd_val[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 796866700670983909ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_fwrd_unit__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
