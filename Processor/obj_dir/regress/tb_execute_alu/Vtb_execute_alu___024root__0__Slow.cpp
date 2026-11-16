// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_execute_alu.h for the primary calling header

#include "Vtb_execute_alu__pch.h"

VL_ATTR_COLD void Vtb_execute_alu___024root___eval_static__TOP(Vtb_execute_alu___024root* vlSelf);
void Vtb_execute_alu___024root___timing_ready(Vtb_execute_alu___024root* vlSelf);

VL_ATTR_COLD void Vtb_execute_alu___024root___eval_static(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___eval_static\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_execute_alu___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_execute_alu__DOT__clk__0 
        = vlSelfRef.tb_execute_alu__DOT__clk;
    Vtb_execute_alu___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_execute_alu___024root___eval_static__TOP(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___eval_static__TOP\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_execute_alu__DOT__cycle_count = 0U;
    vlSelfRef.tb_execute_alu__DOT__pass_count = 0U;
    vlSelfRef.tb_execute_alu__DOT__fail_count = 0U;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    VL_SCOPED_RAND_RESET_W(190, vlSelf->tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt, __VscopeHash, 14662134065446386841ull);
}

VL_ATTR_COLD void Vtb_execute_alu___024root___eval_initial__TOP(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___eval_initial__TOP\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("tb_execute_alu.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vtb_execute_alu___024root___eval_final(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___eval_final\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_execute_alu___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_execute_alu___024root___eval_phase__stl(Vtb_execute_alu___024root* vlSelf);

VL_ATTR_COLD void Vtb_execute_alu___024root___eval_settle(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___eval_settle\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_execute_alu___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("sim/tb_execute_alu.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_execute_alu___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_execute_alu___024root___eval_triggers_vec__stl(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___eval_triggers_vec__stl\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_execute_alu___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_execute_alu___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_execute_alu___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_execute_alu___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___trigger_anySet__stl\n"); );
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

void Vtb_execute_alu___024root___act_comb__TOP__0(Vtb_execute_alu___024root* vlSelf);

VL_ATTR_COLD void Vtb_execute_alu___024root___eval_stl(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___eval_stl\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_execute_alu___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_execute_alu___024root___eval_phase__stl(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___eval_phase__stl\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_execute_alu___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_execute_alu___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_execute_alu___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_execute_alu___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_execute_alu___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_execute_alu___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_execute_alu___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_execute_alu.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge tb_execute_alu.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_execute_alu___024root___ctor_var_reset(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___ctor_var_reset\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_execute_alu__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 633961477626424855ull);
    vlSelf->tb_execute_alu__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9486205728872977224ull);
    vlSelf->tb_execute_alu__DOT__rr_fire_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3159410554605952958ull);
    VL_SCOPED_RAND_RESET_W(190, vlSelf->tb_execute_alu__DOT__rr_pkt, __VscopeHash, 6230566115686913565ull);
    vlSelf->tb_execute_alu__DOT__fwrd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13882779631797027009ull);
    vlSelf->tb_execute_alu__DOT__fwrd_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13138630112414560837ull);
    vlSelf->tb_execute_alu__DOT__rf_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11785665086582888895ull);
    vlSelf->tb_execute_alu__DOT__rf_wr_preg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7337248174739093294ull);
    vlSelf->tb_execute_alu__DOT__rf_wr_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10525390721517716518ull);
    vlSelf->tb_execute_alu__DOT__rob_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1746261936557140621ull);
    vlSelf->tb_execute_alu__DOT__rob_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13624784690660136817ull);
    vlSelf->tb_execute_alu__DOT__rob_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8664052491803805300ull);
    vlSelf->tb_execute_alu__DOT__rob_br_mispred = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7848214042427697822ull);
    vlSelf->tb_execute_alu__DOT__rob_exception = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4762712039939328843ull);
    vlSelf->tb_execute_alu__DOT__dut__DOT____Vcellinp__alu__imm_val = 0;
    vlSelf->tb_execute_alu__DOT__dut__DOT____Vcellinp__alu__src2_val = 0;
    vlSelf->tb_execute_alu__DOT__dut__DOT____Vcellinp__alu__src1_val = 0;
    vlSelf->tb_execute_alu__DOT__dut__DOT____Vcellinp__alu__opcode = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_6 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_15 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_execute_alu__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
