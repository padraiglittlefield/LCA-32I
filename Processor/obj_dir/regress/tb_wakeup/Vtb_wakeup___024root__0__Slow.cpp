// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_wakeup.h for the primary calling header

#include "Vtb_wakeup__pch.h"

VL_ATTR_COLD void Vtb_wakeup___024root___eval_static__TOP(Vtb_wakeup___024root* vlSelf);
void Vtb_wakeup___024root___timing_ready(Vtb_wakeup___024root* vlSelf);

VL_ATTR_COLD void Vtb_wakeup___024root___eval_static(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___eval_static\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_wakeup___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_wakeup__DOT__clk__0 
        = vlSelfRef.tb_wakeup__DOT__clk;
    Vtb_wakeup___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_wakeup___024root___eval_static__TOP(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___eval_static__TOP\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_wakeup__DOT__cycle_count = 0U;
    vlSelfRef.tb_wakeup__DOT__pass_count = 0U;
    vlSelfRef.tb_wakeup__DOT__fail_count = 0U;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_wakeup__DOT__test_grant_ready__Vstatic__granted_entry = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14375903012549327979ull);
    vlSelf->tb_wakeup__DOT__test_retire__Vstatic__retired_entry = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 473580573203261291ull);
    vlSelf->tb_wakeup__DOT__test_dispatch_with_deps__Vstatic__dispatched_entry = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17996914346408092373ull);
    vlSelf->tb_wakeup__DOT__test_clear_dependencies__Vstatic__dep_entry = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17246818276934400901ull);
    vlSelf->tb_wakeup__DOT__test_fill_rs__Vstatic__valid_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9410538297115124129ull);
    vlSelf->tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_before = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4531631739518172458ull);
    vlSelf->tb_wakeup__DOT__test_dispatch_when_full__Vstatic__valid_count_after = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13551746745416076888ull);
    vlSelf->tb_wakeup__DOT__test_dispatch_after_free__Vstatic__new_entry = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13194051251437180432ull);
}

VL_ATTR_COLD void Vtb_wakeup___024root___eval_initial__TOP(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___eval_initial__TOP\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("tb_wakeup.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vtb_wakeup___024root___eval_final(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___eval_final\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_wakeup___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_wakeup___024root___eval_phase__stl(Vtb_wakeup___024root* vlSelf);

VL_ATTR_COLD void Vtb_wakeup___024root___eval_settle(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___eval_settle\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_wakeup___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("sim/tb_wakeup.sv", 4, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_wakeup___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_wakeup___024root___eval_triggers_vec__stl(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___eval_triggers_vec__stl\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_wakeup___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_wakeup___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_wakeup___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_wakeup___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_wakeup___024root___stl_sequent__TOP__0(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___stl_sequent__TOP__0\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_wakeup__DOT__dut__DOT__granted = (1U 
                                                   & ((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_granted) 
                                                      | ((IData)(vlSelfRef.tb_wakeup__DOT__grant_valid) 
                                                         & (0U 
                                                            == (IData)(vlSelfRef.tb_wakeup__DOT__grant)))));
    vlSelfRef.tb_wakeup__DOT__reqs = ((0x0eU & (IData)(vlSelfRef.tb_wakeup__DOT__reqs)) 
                                      | (((0U == vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[0U]) 
                                          & (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid)) 
                                         & (~ (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__granted))));
    vlSelfRef.tb_wakeup__DOT__dut__DOT__granted = (1U 
                                                   & (((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_granted) 
                                                       >> 1U) 
                                                      | ((IData)(vlSelfRef.tb_wakeup__DOT__grant_valid) 
                                                         & (1U 
                                                            == (IData)(vlSelfRef.tb_wakeup__DOT__grant)))));
    vlSelfRef.tb_wakeup__DOT__reqs = ((0x0dU & (IData)(vlSelfRef.tb_wakeup__DOT__reqs)) 
                                      | ((((0U == vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[1U]) 
                                           & ((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid) 
                                              >> 1U)) 
                                          & (~ (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__granted))) 
                                         << 1U));
    vlSelfRef.tb_wakeup__DOT__dut__DOT__granted = (1U 
                                                   & (((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_granted) 
                                                       >> 2U) 
                                                      | ((IData)(vlSelfRef.tb_wakeup__DOT__grant_valid) 
                                                         & (2U 
                                                            == (IData)(vlSelfRef.tb_wakeup__DOT__grant)))));
    vlSelfRef.tb_wakeup__DOT__reqs = ((0x0bU & (IData)(vlSelfRef.tb_wakeup__DOT__reqs)) 
                                      | ((((0U == vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[2U]) 
                                           & ((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid) 
                                              >> 2U)) 
                                          & (~ (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__granted))) 
                                         << 2U));
    vlSelfRef.tb_wakeup__DOT__dut__DOT__granted = (1U 
                                                   & (((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_granted) 
                                                       >> 3U) 
                                                      | ((IData)(vlSelfRef.tb_wakeup__DOT__grant_valid) 
                                                         & (3U 
                                                            == (IData)(vlSelfRef.tb_wakeup__DOT__grant)))));
    vlSelfRef.tb_wakeup__DOT__reqs = ((7U & (IData)(vlSelfRef.tb_wakeup__DOT__reqs)) 
                                      | ((((0U == vlSelfRef.tb_wakeup__DOT__dut__DOT__dependency_matrix_row[3U]) 
                                           & ((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid) 
                                              >> 3U)) 
                                          & (~ (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__granted))) 
                                         << 3U));
    vlSelfRef.tb_wakeup__DOT__dut__DOT__free_entry = 0U;
    vlSelfRef.tb_wakeup__DOT__dut__DOT__full = 1U;
    vlSelfRef.tb_wakeup__DOT__dut__DOT__flag = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid)))) {
        vlSelfRef.tb_wakeup__DOT__dut__DOT__free_entry = 0U;
        vlSelfRef.tb_wakeup__DOT__dut__DOT__full = 0U;
        vlSelfRef.tb_wakeup__DOT__dut__DOT__flag = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid) 
                   >> 1U)) & (~ (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__flag))))) {
        vlSelfRef.tb_wakeup__DOT__dut__DOT__free_entry = 1U;
        vlSelfRef.tb_wakeup__DOT__dut__DOT__full = 0U;
        vlSelfRef.tb_wakeup__DOT__dut__DOT__flag = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid) 
                   >> 2U)) & (~ (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__flag))))) {
        vlSelfRef.tb_wakeup__DOT__dut__DOT__free_entry = 2U;
        vlSelfRef.tb_wakeup__DOT__dut__DOT__full = 0U;
        vlSelfRef.tb_wakeup__DOT__dut__DOT__flag = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__entry_valid) 
                   >> 3U)) & (~ (IData)(vlSelfRef.tb_wakeup__DOT__dut__DOT__flag))))) {
        vlSelfRef.tb_wakeup__DOT__dut__DOT__free_entry = 3U;
        vlSelfRef.tb_wakeup__DOT__dut__DOT__full = 0U;
        vlSelfRef.tb_wakeup__DOT__dut__DOT__flag = 1U;
    }
    vlSelfRef.tb_wakeup__DOT__free_entry_out = vlSelfRef.tb_wakeup__DOT__dut__DOT__free_entry;
    vlSelfRef.tb_wakeup__DOT__full_out = vlSelfRef.tb_wakeup__DOT__dut__DOT__full;
}

VL_ATTR_COLD void Vtb_wakeup___024root____Vm_traceActivitySetAll(Vtb_wakeup___024root* vlSelf);

VL_ATTR_COLD void Vtb_wakeup___024root___eval_stl(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___eval_stl\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_wakeup___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_wakeup___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_wakeup___024root___eval_phase__stl(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___eval_phase__stl\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_wakeup___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_wakeup___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_wakeup___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_wakeup___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_wakeup___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_wakeup___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_wakeup___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_wakeup.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge tb_wakeup.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_wakeup___024root____Vm_traceActivitySetAll(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root____Vm_traceActivitySetAll\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtb_wakeup___024root___ctor_var_reset(Vtb_wakeup___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wakeup___024root___ctor_var_reset\n"); );
    Vtb_wakeup__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_wakeup__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 652299909393838054ull);
    vlSelf->tb_wakeup__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11429140527257910884ull);
    vlSelf->tb_wakeup__DOT__disp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4352471672946869710ull);
    vlSelf->tb_wakeup__DOT__dependency_mask = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11818065211344376768ull);
    vlSelf->tb_wakeup__DOT__free_entry_out = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14827665324905523697ull);
    vlSelf->tb_wakeup__DOT__full_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7677117294034020235ull);
    vlSelf->tb_wakeup__DOT__reqs = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3924106690636559253ull);
    vlSelf->tb_wakeup__DOT__grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3739315178190618435ull);
    vlSelf->tb_wakeup__DOT__grant_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17471638555287199819ull);
    vlSelf->tb_wakeup__DOT__ready_mask = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3444975655687252825ull);
    vlSelf->tb_wakeup__DOT__retire_entry = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7735945821129580332ull);
    vlSelf->tb_wakeup__DOT__retire_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16201111581781794085ull);
    vlSelf->tb_wakeup__DOT__dut__DOT__entry_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 664504663045869613ull);
    vlSelf->tb_wakeup__DOT__dut__DOT__entry_granted = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3462124735720826331ull);
    vlSelf->tb_wakeup__DOT__dut__DOT__free_entry = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17690708400949971073ull);
    vlSelf->tb_wakeup__DOT__dut__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15461830978011475894ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_wakeup__DOT__dut__DOT__dependency_matrix_row[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7795288761033602715ull);
    }
    vlSelf->tb_wakeup__DOT__dut__DOT__granted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8200146124604572592ull);
    vlSelf->tb_wakeup__DOT__dut__DOT__flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17930240168079663882ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_wakeup__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
