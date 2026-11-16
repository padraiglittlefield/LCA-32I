// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_scheduler.h for the primary calling header

#include "Vtb_scheduler__pch.h"

VL_ATTR_COLD void Vtb_scheduler___024root___eval_static__TOP(Vtb_scheduler___024root* vlSelf);
void Vtb_scheduler___024root___timing_ready(Vtb_scheduler___024root* vlSelf);

VL_ATTR_COLD void Vtb_scheduler___024root___eval_static(Vtb_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___eval_static\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_scheduler___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_scheduler__DOT__clk__0 
        = vlSelfRef.tb_scheduler__DOT__clk;
    Vtb_scheduler___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_scheduler___024root___eval_static__TOP(Vtb_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___eval_static__TOP\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_scheduler__DOT__cycle_count = 0U;
    vlSelfRef.tb_scheduler__DOT__pass_count = 0U;
    vlSelfRef.tb_scheduler__DOT__fail_count = 0U;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_scheduler__DOT__test_select_grant__Vstatic__granted_entry = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2562979617227993609ull);
    vlSelf->tb_scheduler__DOT__test_fill_rs__Vstatic__valid_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8244563134155785150ull);
    vlSelf->tb_scheduler__DOT__test_fill_rs__Vstatic__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4006245506996507733ull);
    vlSelf->tb_scheduler__DOT__test_fill_rs__Vstatic__dst_val = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12353856373305294775ull);
    vlSelf->tb_scheduler__DOT__test_fill_rs__Vstatic__src1_val = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17161193219704004357ull);
    vlSelf->tb_scheduler__DOT__test_fill_rs__Vstatic__src2_val = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17951800321154466271ull);
    vlSelf->tb_scheduler__DOT__test_fill_rs__Vstatic__pc_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16711447718910197177ull);
    vlSelf->tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_before = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4763840676155638712ull);
    vlSelf->tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_after = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17990481729073018636ull);
    vlSelf->tb_scheduler__DOT__test_dispatch_when_full__Vstatic__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14388942329299715604ull);
}

VL_ATTR_COLD void Vtb_scheduler___024root___eval_initial__TOP(Vtb_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___eval_initial__TOP\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("tb_scheduler.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vtb_scheduler___024root___eval_final(Vtb_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___eval_final\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scheduler___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_scheduler___024root___eval_phase__stl(Vtb_scheduler___024root* vlSelf);

VL_ATTR_COLD void Vtb_scheduler___024root___eval_settle(Vtb_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___eval_settle\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_scheduler___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("sim/tb_scheduler.sv", 4, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_scheduler___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_scheduler___024root___eval_triggers_vec__stl(Vtb_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___eval_triggers_vec__stl\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_scheduler___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scheduler___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_scheduler___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_scheduler___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_scheduler___024root___stl_sequent__TOP__0(Vtb_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___stl_sequent__TOP__0\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0U;
    vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 1U;
    vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid)))) {
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid) 
                   >> 1U)) & (~ (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 1U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid) 
                   >> 2U)) & (~ (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 2U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid) 
                   >> 3U)) & (~ (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag))))) {
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = 3U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = 1U;
    }
    vlSelfRef.tb_scheduler__DOT__rs_entry_idx = vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry;
    vlSelfRef.tb_scheduler__DOT__rs_full = vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__full;
    vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 0U;
    vlSelfRef.tb_scheduler__DOT__dut__DOT__grant = 0U;
    vlSelfRef.tb_scheduler__DOT__dut__DOT__grant_valid = 0U;
    vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__masked_req 
        = ((IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__reqs_in) 
           & (0x0fU >> (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_priority)));
    vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req 
        = ((0U == (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__masked_req))
            ? (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__reqs_in)
            : (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__masked_req));
    if ((8U & (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req))) {
        vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__grant = 3U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req) 
                >> 2U) & (~ (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag))))) {
        vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__grant = 2U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req) 
                >> 1U) & (~ (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag))))) {
        vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__grant = 1U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    if ((1U & ((IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req) 
               & (~ (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag))))) {
        vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = 1U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__grant = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__grant_valid = 1U;
    }
    vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__granted 
        = (1U & ((IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted) 
                 | ((IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__grant_valid) 
                    & (0U == (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__grant)))));
    vlSelfRef.tb_scheduler__DOT__dut__DOT__reqs_out 
        = ((0x0eU & (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__reqs_out)) 
           | (((0U == vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U]) 
               & (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid)) 
              & (~ (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__granted))));
    vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__granted 
        = (1U & (((IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted) 
                  >> 1U) | ((IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__grant_valid) 
                            & (1U == (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__grant)))));
    vlSelfRef.tb_scheduler__DOT__dut__DOT__reqs_out 
        = ((0x0dU & (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__reqs_out)) 
           | ((((0U == vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U]) 
                & ((IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid) 
                   >> 1U)) & (~ (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__granted))) 
              << 1U));
    vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__granted 
        = (1U & (((IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted) 
                  >> 2U) | ((IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__grant_valid) 
                            & (2U == (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__grant)))));
    vlSelfRef.tb_scheduler__DOT__dut__DOT__reqs_out 
        = ((0x0bU & (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__reqs_out)) 
           | ((((0U == vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U]) 
                & ((IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid) 
                   >> 2U)) & (~ (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__granted))) 
              << 2U));
    vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__granted 
        = (1U & (((IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted) 
                  >> 3U) | ((IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__grant_valid) 
                            & (3U == (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__grant)))));
    vlSelfRef.tb_scheduler__DOT__dut__DOT__reqs_out 
        = ((7U & (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__reqs_out)) 
           | ((((0U == vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U]) 
                & ((IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid) 
                   >> 3U)) & (~ (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__granted))) 
              << 3U));
}

VL_ATTR_COLD void Vtb_scheduler___024root____Vm_traceActivitySetAll(Vtb_scheduler___024root* vlSelf);

VL_ATTR_COLD void Vtb_scheduler___024root___eval_stl(Vtb_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___eval_stl\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_scheduler___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_scheduler___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_scheduler___024root___eval_phase__stl(Vtb_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___eval_phase__stl\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_scheduler___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_scheduler___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_scheduler___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_scheduler___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_scheduler___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scheduler___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_scheduler___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_scheduler.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge tb_scheduler.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_scheduler___024root____Vm_traceActivitySetAll(Vtb_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root____Vm_traceActivitySetAll\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtb_scheduler___024root___ctor_var_reset(Vtb_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___ctor_var_reset\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_scheduler__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7187948308946548446ull);
    vlSelf->tb_scheduler__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11100867075286764350ull);
    vlSelf->tb_scheduler__DOT__global_ready_mask = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13692285368488593438ull);
    vlSelf->tb_scheduler__DOT__disp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17066736690789947017ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_scheduler__DOT__disp_pkt, __VscopeHash, 3758184754145770376ull);
    vlSelf->tb_scheduler__DOT__dependency_mask = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17953371649969448708ull);
    vlSelf->tb_scheduler__DOT__rs_entry_idx = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8683756407814096866ull);
    vlSelf->tb_scheduler__DOT__rs_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5208042546671268789ull);
    vlSelf->tb_scheduler__DOT__rr_fire_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16915429145761458593ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_scheduler__DOT__rr_pkt, __VscopeHash, 7348382469940666314ull);
    vlSelf->tb_scheduler__DOT__test5_dispatched_entry = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15820143258956760706ull);
    vlSelf->tb_scheduler__DOT__dut__DOT__grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6892496384868607771ull);
    vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6150681059210826734ull);
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7190093523070512828ull);
    vlSelf->tb_scheduler__DOT__dut__DOT__reqs_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15557269814845999617ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram[__Vi0], __VscopeHash, 14024908515675912147ull);
    }
    vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15700815822107108369ull);
    vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7206258526908051596ull);
    vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9715105321769914744ull);
    vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3006999885746604683ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2678694096698174287ull);
    }
    vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__granted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15059961702463505001ull);
    vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16870744513478162154ull);
    vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_priority = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16511813159480647554ull);
    vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__masked_req = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13910212997342355751ull);
    vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18257009925450716540ull);
    vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17619835259939463352ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_scheduler__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
