// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_phys_reg_file.h for the primary calling header

#include "Vtb_phys_reg_file__pch.h"

VL_ATTR_COLD void Vtb_phys_reg_file___024root___eval_static__TOP(Vtb_phys_reg_file___024root* vlSelf);
void Vtb_phys_reg_file___024root___timing_ready(Vtb_phys_reg_file___024root* vlSelf);

VL_ATTR_COLD void Vtb_phys_reg_file___024root___eval_static(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___eval_static\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_phys_reg_file___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_phys_reg_file__DOT__clk__0 
        = vlSelfRef.tb_phys_reg_file__DOT__clk;
    Vtb_phys_reg_file___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_phys_reg_file___024root___eval_static__TOP(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___eval_static__TOP\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_phys_reg_file__DOT__cycle_count = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__pass_count = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__fail_count = 0U;
}

VL_ATTR_COLD void Vtb_phys_reg_file___024root___eval_initial__TOP(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___eval_initial__TOP\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("tb_phys_reg_file.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vtb_phys_reg_file___024root___eval_final(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___eval_final\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_phys_reg_file___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_phys_reg_file___024root___eval_phase__stl(Vtb_phys_reg_file___024root* vlSelf);

VL_ATTR_COLD void Vtb_phys_reg_file___024root___eval_settle(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___eval_settle\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_phys_reg_file___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("sim/tb_phys_reg_file.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_phys_reg_file___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_phys_reg_file___024root___eval_triggers_vec__stl(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___eval_triggers_vec__stl\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_phys_reg_file___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_phys_reg_file___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_phys_reg_file___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_phys_reg_file___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___trigger_anySet__stl\n"); );
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

void Vtb_phys_reg_file___024root___act_comb__TOP__0(Vtb_phys_reg_file___024root* vlSelf);
VL_ATTR_COLD void Vtb_phys_reg_file___024root____Vm_traceActivitySetAll(Vtb_phys_reg_file___024root* vlSelf);

VL_ATTR_COLD void Vtb_phys_reg_file___024root___eval_stl(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___eval_stl\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_phys_reg_file___024root___act_comb__TOP__0(vlSelf);
        Vtb_phys_reg_file___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_phys_reg_file___024root___eval_phase__stl(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___eval_phase__stl\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_phys_reg_file___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_phys_reg_file___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_phys_reg_file___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_phys_reg_file___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_phys_reg_file___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_phys_reg_file___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_phys_reg_file___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_phys_reg_file.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge tb_phys_reg_file.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_phys_reg_file___024root____Vm_traceActivitySetAll(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root____Vm_traceActivitySetAll\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtb_phys_reg_file___024root___ctor_var_reset(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___ctor_var_reset\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_phys_reg_file__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2692636344962235776ull);
    vlSelf->tb_phys_reg_file__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10475894202445197415ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_phys_reg_file__DOT__rd_src1_preg[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7646513995647404483ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_phys_reg_file__DOT__rd_src2_preg[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12671737622394089958ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_phys_reg_file__DOT__rd_src1_val[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14167699148860852759ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_phys_reg_file__DOT__rd_src2_val[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12682268109153277574ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_phys_reg_file__DOT__ex_wr_en[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11279327060343601231ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_phys_reg_file__DOT__ex_wr_preg[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1304421291434579859ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_phys_reg_file__DOT__ex_wr_val[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9076989905009239631ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_phys_reg_file__DOT__rob_wr_en[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8575907356064781701ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_phys_reg_file__DOT__rob_wr_areg[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4304038656608120395ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_phys_reg_file__DOT__rob_wr_val[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15149518474680402866ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_phys_reg_file__DOT__dut__DOT__rd_src1_preg_i[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6570980555260361571ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_phys_reg_file__DOT__dut__DOT__rd_src2_preg_i[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4165834121044864740ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_phys_reg_file__DOT__dut__DOT__rd_src1_val_o[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12206603775671990242ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_phys_reg_file__DOT__dut__DOT__rd_src2_val_o[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15244781192731787808ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_phys_reg_file__DOT__dut__DOT__ex_wr_en_i[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4120545757917744190ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_phys_reg_file__DOT__dut__DOT__ex_wr_preg_i[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7502297713317012513ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_phys_reg_file__DOT__dut__DOT__ex_wr_val_i[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3953000875688678101ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_phys_reg_file__DOT__dut__DOT__rob_wr_en_i[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6230570918317912993ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_phys_reg_file__DOT__dut__DOT__rob_wr_areg_i[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11578533902574916904ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_phys_reg_file__DOT__dut__DOT__rob_wr_val_i[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6090074773643214656ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_phys_reg_file__DOT__dut__DOT__registers[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11528954055006337485ull);
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
    vlSelf->__Vtrigprevexpr___TOP__tb_phys_reg_file__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
