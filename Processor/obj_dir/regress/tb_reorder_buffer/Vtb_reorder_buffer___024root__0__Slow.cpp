// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_reorder_buffer.h for the primary calling header

#include "Vtb_reorder_buffer__pch.h"

VL_ATTR_COLD void Vtb_reorder_buffer___024root___eval_static__TOP(Vtb_reorder_buffer___024root* vlSelf);
void Vtb_reorder_buffer___024root___timing_ready(Vtb_reorder_buffer___024root* vlSelf);

VL_ATTR_COLD void Vtb_reorder_buffer___024root___eval_static(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_static\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_reorder_buffer___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_reorder_buffer__DOT__clk__0 
        = vlSelfRef.tb_reorder_buffer__DOT__clk;
    Vtb_reorder_buffer___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root___eval_static__TOP(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_static__TOP\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_reorder_buffer__DOT__cycle_count = 0U;
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root___eval_initial__TOP(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_initial__TOP\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("tb_reorder_buffer.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root___eval_final(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_final\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_reorder_buffer___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_reorder_buffer___024root___eval_phase__stl(Vtb_reorder_buffer___024root* vlSelf);

VL_ATTR_COLD void Vtb_reorder_buffer___024root___eval_settle(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_settle\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_reorder_buffer___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("sim/tb_reorder_buffer.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_reorder_buffer___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root___eval_triggers_vec__stl(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_triggers_vec__stl\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_reorder_buffer___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_reorder_buffer___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_reorder_buffer___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_reorder_buffer___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_reorder_buffer___024root___stl_sequent__TOP__0(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___stl_sequent__TOP__0\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_fire_valid_i[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__disp_fire_valid[0U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_fire_valid_i[1U] 
        = vlSelfRef.tb_reorder_buffer__DOT__disp_fire_valid[1U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_dst_areg_i[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__disp_dst_areg[0U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_dst_areg_i[1U] 
        = vlSelfRef.tb_reorder_buffer__DOT__disp_dst_areg[1U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_wb_en_i[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__disp_wb_en[0U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_wb_en_i[1U] 
        = vlSelfRef.tb_reorder_buffer__DOT__disp_wb_en[1U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_valid_i[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_valid[0U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_valid_i[1U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_valid[1U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_valid_i[2U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_valid[2U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_rob_idx_i[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_rob_idx[0U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_rob_idx_i[1U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_rob_idx[1U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_rob_idx_i[2U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_rob_idx[2U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_val_i[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_val[0U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_val_i[1U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_val[1U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_val_i[2U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_val[2U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_br_mispred_i[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_br_mispred[0U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_br_mispred_i[1U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_br_mispred[1U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_br_mispred_i[2U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_br_mispred[2U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_exception_i[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_exception[0U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_exception_i[1U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_exception[1U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ex_exception_i[2U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_exception[2U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[0U] 
        = ((0x00000007ffffffffULL & vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[0U]) 
           | ((QData)((IData)(vlSelfRef.tb_reorder_buffer__DOT__disp_dst_areg[0U])) 
              << 0x00000023U));
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[0U] 
        = ((0x000000fbffffffffULL & vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[0U]) 
           | ((QData)((IData)(vlSelfRef.tb_reorder_buffer__DOT__disp_wb_en[0U])) 
              << 0x00000022U));
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[0U] 
        = (0x000000fffffffffdULL & vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[0U]);
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[0U] 
        = (0x000000fffffffffeULL & vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[0U]);
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[1U] 
        = ((0x00000007ffffffffULL & vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[1U]) 
           | ((QData)((IData)(vlSelfRef.tb_reorder_buffer__DOT__disp_dst_areg[1U])) 
              << 0x00000023U));
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[1U] 
        = ((0x000000fbffffffffULL & vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[1U]) 
           | ((QData)((IData)(vlSelfRef.tb_reorder_buffer__DOT__disp_wb_en[1U])) 
              << 0x00000022U));
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[1U] 
        = (0x000000fffffffffdULL & vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[1U]);
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[1U] 
        = (0x000000fffffffffeULL & vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[1U]);
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_valid 
        = ((6U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_valid)) 
           | vlSelfRef.tb_reorder_buffer__DOT__ex_valid[0U]);
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_idx[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_rob_idx[0U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_data[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_val[0U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_valid 
        = ((5U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_valid)) 
           | (vlSelfRef.tb_reorder_buffer__DOT__ex_valid[1U] 
              << 1U));
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_idx[1U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_rob_idx[1U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_data[1U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_val[1U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_valid 
        = ((3U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_valid)) 
           | (vlSelfRef.tb_reorder_buffer__DOT__ex_valid[2U] 
              << 2U));
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_idx[2U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_rob_idx[2U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_data[2U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_val[2U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_valid 
        = ((vlSelfRef.tb_reorder_buffer__DOT__disp_fire_valid[1U] 
            << 1U) | vlSelfRef.tb_reorder_buffer__DOT__disp_fire_valid[0U]);
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__num_retirements = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__restore_pc = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_ptr[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__head_ptr;
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_idx[0U] 
        = (0x0000000fU & vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_ptr[0U]);
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries
        [vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_idx[0U]];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_status[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status
        [vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_idx[0U]];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_valid 
        = ((2U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_valid)) 
           | (1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_status[0U] 
                            >> 0x00000021U))));
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_ready 
        = ((2U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_ready)) 
           | (1U & ((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_status[0U] 
                             >> 0x00000020U)) & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_valid))));
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_flush 
        = ((2U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_flush)) 
           | (1U & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[0U] 
                            >> 1U))));
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_exception 
        = ((2U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_exception)) 
           | (1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[0U])));
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_enable 
        = ((2U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_enable)) 
           | (1U & ((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_valid) 
                    & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_ready))));
    if ((1U & ((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_enable) 
               & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_flush)))) {
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__restore_pc 
            = (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[0U] 
                       >> 2U));
    }
    if ((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_enable))) {
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__num_retirements 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__num_retirements)));
    }
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_ptr[1U] 
        = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__head_ptr)));
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_idx[1U] 
        = (0x0000000fU & vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_ptr[1U]);
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[1U] 
        = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries
        [vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_idx[1U]];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_status[1U] 
        = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status
        [vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_idx[1U]];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_valid 
        = ((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_valid)) 
           | (2U & ((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_status[1U] 
                             >> 0x00000021U)) << 1U)));
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_ready 
        = ((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_ready)) 
           | ((IData)((((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_valid) 
                        >> 1U) & (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_status[1U] 
                                  >> 0x00000020U))) 
              << 1U));
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_flush 
        = ((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_flush)) 
           | (2U & ((IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[1U] 
                             >> 1U)) << 1U)));
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_exception 
        = ((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_exception)) 
           | (2U & ((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[1U]) 
                    << 1U)));
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_enable 
        = ((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_enable)) 
           | (2U & ((((((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_valid) 
                        & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_ready)) 
                       >> 1U) & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_enable)) 
                     & ((~ (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_flush)) 
                        & (~ (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_exception)))) 
                    << 1U)));
    if ((2U & ((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_enable) 
               & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_flush)))) {
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__restore_pc 
            = (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[1U] 
                       >> 2U));
    }
    if ((2U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_enable))) {
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__num_retirements 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__num_retirements)));
    }
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__num_allocations = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_ptr[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__tail_ptr;
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_idx[0U] 
        = (0x0000000fU & vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_ptr[0U]);
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_full 
        = ((2U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_full)) 
           | (((1U & ((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__head_ptr) 
                      >> 4U)) != (1U & (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_ptr[0U] 
                                        >> 4U))) & 
              ((0x0000000fU & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__head_ptr)) 
               == vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_idx[0U])));
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_enable 
        = ((2U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_enable)) 
           | (1U & ((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_valid) 
                    & (~ (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_full)))));
    if ((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_enable))) {
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__num_allocations 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__num_allocations)));
    }
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_ptr[1U] 
        = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__tail_ptr)));
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_idx[1U] 
        = (0x0000000fU & vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_ptr[1U]);
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_full 
        = ((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_full)) 
           | (2U & (((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_full) 
                     | (((1U & ((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__head_ptr) 
                                >> 4U)) != (1U & (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_ptr[1U] 
                                                  >> 4U))) 
                        & ((0x0000000fU & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__head_ptr)) 
                           == vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_idx[1U]))) 
                    << 1U)));
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_enable 
        = ((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_enable)) 
           | ((IData)(((((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_valid) 
                         >> 1U) & (~ ((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_full) 
                                      >> 1U))) & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_enable))) 
              << 1U));
    if ((2U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_enable))) {
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__num_allocations 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__num_allocations)));
    }
    vlSelfRef.tb_reorder_buffer__DOT__ret_wr_val[0U] 
        = (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_status[0U]);
    vlSelfRef.tb_reorder_buffer__DOT__ret_wr_val[1U] 
        = (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_status[1U]);
    vlSelfRef.tb_reorder_buffer__DOT__ret_wr_areg[0U] 
        = (0x0000001fU & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[0U] 
                                  >> 0x00000023U)));
    vlSelfRef.tb_reorder_buffer__DOT__ret_wr_areg[1U] 
        = (0x0000001fU & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[1U] 
                                  >> 0x00000023U)));
    vlSelfRef.tb_reorder_buffer__DOT__ret_wr_en[0U] 
        = (1U & ((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_enable) 
                 & (IData)((vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[0U] 
                            >> 0x00000022U))));
    vlSelfRef.tb_reorder_buffer__DOT__ret_wr_en[1U] 
        = (IData)((((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_enable) 
                    >> 1U) & (vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_entry[1U] 
                              >> 0x00000022U)));
    vlSelfRef.tb_reorder_buffer__DOT__disp_rob_full[0U] 
        = (1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_full));
    vlSelfRef.tb_reorder_buffer__DOT__disp_rob_full[1U] 
        = (1U & ((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_full) 
                 >> 1U));
    vlSelfRef.tb_reorder_buffer__DOT__disp_rob_idx[0U] 
        = ((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_full))
            ? 0U : vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_idx[0U]);
    vlSelfRef.tb_reorder_buffer__DOT__disp_rob_idx[1U] 
        = ((2U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_full))
            ? 0U : vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_idx[1U]);
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ret_wr_val_o[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ret_wr_val[0U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ret_wr_val_o[1U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ret_wr_val[1U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ret_wr_areg_o[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ret_wr_areg[0U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ret_wr_areg_o[1U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ret_wr_areg[1U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ret_wr_en_o[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ret_wr_en[0U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__ret_wr_en_o[1U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ret_wr_en[1U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_rob_full_o[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__disp_rob_full[0U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_rob_full_o[1U] 
        = vlSelfRef.tb_reorder_buffer__DOT__disp_rob_full[1U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_rob_idx_o[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__disp_rob_idx[0U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_rob_idx_o[1U] 
        = vlSelfRef.tb_reorder_buffer__DOT__disp_rob_idx[1U];
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root____Vm_traceActivitySetAll(Vtb_reorder_buffer___024root* vlSelf);

VL_ATTR_COLD void Vtb_reorder_buffer___024root___eval_stl(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_stl\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_reorder_buffer___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_reorder_buffer___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_reorder_buffer___024root___eval_phase__stl(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_phase__stl\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_reorder_buffer___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_reorder_buffer___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_reorder_buffer___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_reorder_buffer___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_reorder_buffer___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_reorder_buffer___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_reorder_buffer___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_reorder_buffer.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge tb_reorder_buffer.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_reorder_buffer___024root____Vm_traceActivitySetAll(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root____Vm_traceActivitySetAll\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void Vtb_reorder_buffer___024root___ctor_var_reset(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___ctor_var_reset\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_reorder_buffer__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9841569618086744297ull);
    vlSelf->tb_reorder_buffer__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7464572667365236989ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__disp_fire_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10785439248298932206ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__disp_dst_areg[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3061011209417237939ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__disp_wb_en[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9410933911319208990ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__disp_rob_idx[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8293841618116677076ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__disp_rob_full[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 989965748042191138ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__ex_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14545746958572142997ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__ex_rob_idx[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2718505883407465298ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__ex_val[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4847704921742202590ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__ex_br_mispred[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8030687830286112431ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__ex_exception[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8619897225123128215ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__ret_wr_en[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9123339281997270972ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__ret_wr_areg[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 476513433675780408ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__ret_wr_val[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6873797862543600361ull);
    }
    vlSelf->tb_reorder_buffer__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12768713225627553208ull);
    vlSelf->tb_reorder_buffer__DOT__flush_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14422138670205540631ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__disp_fire_valid_i[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9472827035995155508ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__disp_dst_areg_i[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13276010031799946664ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__disp_wb_en_i[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6256557289856757190ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__disp_rob_idx_o[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18421652941266262516ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__disp_rob_full_o[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3454050541427874465ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__ex_valid_i[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5130947963789982116ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__ex_rob_idx_i[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 923640229615418358ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__ex_val_i[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6374153028696088379ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__ex_br_mispred_i[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13091273901363481161ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__ex_exception_i[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17587357630225715726ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__ret_wr_en_o[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2792277803345698929ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__ret_wr_areg_o[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18268279924069364232ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__ret_wr_val_o[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12041627110176680084ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_entries[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 2699939630987549754ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__rob_status[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 8958711843848786646ull);
    }
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__head_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 777688276945768738ull);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__tail_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11887938578326586892ull);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12397553824781101990ull);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_full = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6767479159754197922ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_idx[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9137070303537891538ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_ptr[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9243736441074296884ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_entry[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 265899926442213051ull);
    }
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__alloc_enable = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2818585837505540443ull);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__num_allocations = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13126989529065468387ull);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16334776182377142415ull);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_ready = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12289466180049862157ull);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_enable = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8082692966071620273ull);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_flush = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8943100166406653512ull);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_exception = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16553895612319814701ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_idx[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8546592424996420664ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_ptr[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9954301126839317673ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_entry[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 12421696570522307610ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__retire_status[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 783464474910392048ull);
    }
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__num_retirements = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18285625837017771985ull);
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_valid = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 48036510378959729ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_idx[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3136218044225909706ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_reorder_buffer__DOT__dut__DOT__result_data[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3215713385698876068ull);
    }
    vlSelf->tb_reorder_buffer__DOT__dut__DOT__restore_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 578861447451348303ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_reorder_buffer__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
