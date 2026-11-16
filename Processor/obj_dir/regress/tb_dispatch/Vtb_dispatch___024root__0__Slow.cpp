// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dispatch.h for the primary calling header

#include "Vtb_dispatch__pch.h"

VL_ATTR_COLD void Vtb_dispatch___024root___eval_static__TOP(Vtb_dispatch___024root* vlSelf);
void Vtb_dispatch___024root___timing_ready(Vtb_dispatch___024root* vlSelf);

VL_ATTR_COLD void Vtb_dispatch___024root___eval_static(Vtb_dispatch___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_static\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_dispatch___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_dispatch__DOT__clk__0 
        = vlSelfRef.tb_dispatch__DOT__clk;
    Vtb_dispatch___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_dispatch___024root___eval_static__TOP(Vtb_dispatch___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_static__TOP\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_dispatch__DOT__cycle_count = 0U;
}

VL_ATTR_COLD void Vtb_dispatch___024root___eval_initial__TOP(Vtb_dispatch___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_initial__TOP\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_dispatch__DOT__disp_is_store = 0U;
    vlSelfRef.tb_dispatch__DOT__disp_sdq_marker = 0U;
    vlSymsp->_vm_contextp__->dumpfile("tb_EXAMPLE.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vtb_dispatch___024root___eval_final(Vtb_dispatch___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_final\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dispatch___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_dispatch___024root___eval_phase__stl(Vtb_dispatch___024root* vlSelf);

VL_ATTR_COLD void Vtb_dispatch___024root___eval_settle(Vtb_dispatch___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_settle\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_dispatch___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("sim/tb_dispatch.sv", 7, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_dispatch___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_dispatch___024root___eval_triggers_vec__stl(Vtb_dispatch___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_triggers_vec__stl\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_dispatch___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dispatch___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_dispatch___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_dispatch___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_dispatch___024root___stl_sequent__TOP__0(Vtb_dispatch___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___stl_sequent__TOP__0\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_vld_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__rename_vld[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_vld_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__rename_vld[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][0U] 
        = vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][1U] 
        = vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][2U] 
        = vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[0U][3U] 
        = vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][3U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][0U] 
        = vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][1U] 
        = vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][2U] 
        = vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rename_pkt_i[1U][3U] 
        = vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][3U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][0U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][1U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][2U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[0U][3U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[0U][3U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][0U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][1U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][2U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[1U][3U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[1U][3U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][0U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][1U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][2U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[2U][3U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[2U][3U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][0U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][1U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][2U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_pkt_o[3U][3U] 
        = vlSelfRef.tb_dispatch__DOT__disp_pkt[3U][3U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_valid_o[0U] 
        = vlSelfRef.tb_dispatch__DOT__disp_valid[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_valid_o[1U] 
        = vlSelfRef.tb_dispatch__DOT__disp_valid[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_valid_o[2U] 
        = vlSelfRef.tb_dispatch__DOT__disp_valid[2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__disp_valid_o[3U] 
        = vlSelfRef.tb_dispatch__DOT__disp_valid[3U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dependency_mask_o[0U] 
        = vlSelfRef.tb_dispatch__DOT__dependency_mask[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dependency_mask_o[1U] 
        = vlSelfRef.tb_dispatch__DOT__dependency_mask[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dependency_mask_o[2U] 
        = vlSelfRef.tb_dispatch__DOT__dependency_mask[2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dependency_mask_o[3U] 
        = vlSelfRef.tb_dispatch__DOT__dependency_mask[3U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rs_entry_idx_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__rs_entry_idx[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rs_entry_idx_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__rs_entry_idx[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rs_entry_idx_i[2U] 
        = vlSelfRef.tb_dispatch__DOT__rs_entry_idx[2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rs_entry_idx_i[3U] 
        = vlSelfRef.tb_dispatch__DOT__rs_entry_idx[3U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rs_full_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__rs_full[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rs_full_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__rs_full[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rs_full_i[2U] 
        = vlSelfRef.tb_dispatch__DOT__rs_full[2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rs_full_i[3U] 
        = vlSelfRef.tb_dispatch__DOT__rs_full[3U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_entry_idx_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__rob_entry_idx[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_entry_idx_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__rob_entry_idx[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_full_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__rob_full[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_full_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__rob_full[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_vld_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__rename_vld[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_vld_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__rename_vld[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][0U] 
        = vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][1U] 
        = vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][2U] 
        = vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[0U][3U] 
        = vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[0U][3U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][0U] 
        = vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][1U] 
        = vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][2U] 
        = vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[1U][3U] 
        = vlSelfRef.tb_dispatch__DOT__rename_disp_pkt[1U][3U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated = 0U;
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__tail_ptr;
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx[0U] 
        = (0x0000000fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[0U]);
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[0U] 
        = (((1U & ((IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr) 
                   >> 4U)) != (1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[0U] 
                                     >> 4U))) & ((0x0000000fU 
                                                  & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr)) 
                                                 == vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx[0U]));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en 
        = ((2U & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en)) 
           | (vlSelfRef.tb_dispatch__DOT__rename_vld[0U] 
              & (~ vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[0U])));
    if ((1U & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en))) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated)));
    }
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[1U] 
        = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__tail_ptr)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx[1U] 
        = (0x0000000fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[1U]);
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[1U] 
        = (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[0U] 
           | (((1U & ((IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr) 
                      >> 4U)) != (1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[1U] 
                                        >> 4U))) & 
              ((0x0000000fU & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr)) 
               == vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx[1U])));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en 
        = ((1U & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en)) 
           | ((vlSelfRef.tb_dispatch__DOT__rename_vld[1U] 
               & (~ vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[1U])) 
              << 1U));
    if ((2U & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en))) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated)));
    }
    vlSelfRef.tb_dispatch__DOT__instr_queue_full[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[0U];
    vlSelfRef.tb_dispatch__DOT__instr_queue_full[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[0U] 
        = (7U & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[1U] 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_queue_full_o[0U] 
        = vlSelfRef.tb_dispatch__DOT__instr_queue_full[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_queue_full_o[1U] 
        = vlSelfRef.tb_dispatch__DOT__instr_queue_full[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__full[0U] 
        = vlSelfRef.tb_dispatch__DOT__instr_queue_full[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__full[1U] 
        = vlSelfRef.tb_dispatch__DOT__instr_queue_full[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[0U] 
        = (1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                 [vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[0U]][1U] 
                 >> 3U));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[1U] 
        = (1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                 [vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[1U]][1U] 
                 >> 3U));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[0U]][0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[0U]][1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[0U]][2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][3U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[0U]][3U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[1U]][0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[1U]][1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[1U]][2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][3U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[1U]][3U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_vld_o[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_vld_o[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][2U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[0U][3U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][3U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][2U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[1U][3U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][3U];
    vlSelfRef.tb_dispatch__DOT__rob_dst_reg[0U] = (0x0000001fU 
                                                   & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                                                      >> 0x00000018U));
    vlSelfRef.tb_dispatch__DOT__rob_dst_reg[1U] = (0x0000001fU 
                                                   & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                                                      >> 0x00000018U));
    vlSelfRef.tb_dispatch__DOT__rob_wb_en[0U] = (1U 
                                                 & vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][0U]);
    vlSelfRef.tb_dispatch__DOT__rob_wb_en[1U] = (1U 
                                                 & vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][0U]);
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_dst_preg[0U] 
        = (0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                          >> 0x00000012U));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_dst_preg[1U] 
        = (0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                          >> 0x00000012U));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src1_preg[0U] 
        = (0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                          >> 0x0000000bU));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src1_preg[1U] 
        = (0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                          >> 0x0000000bU));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src2_preg[0U] 
        = (0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                          >> 4U));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src2_preg[1U] 
        = (0x0000003fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                          >> 4U));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src1_vld[0U] 
        = (1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                 >> 0x00000011U));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src1_vld[1U] 
        = (1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                 >> 0x00000011U));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src2_vld[0U] 
        = (1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                 >> 0x0000000aU));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src2_vld[1U] 
        = (1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                 >> 0x0000000aU));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[0U] = 0U;
    vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[0U] = 0U;
    vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0U] = 0U;
    vlSelfRef.tb_dispatch__DOT__dut__DOT__required_fu[0U] 
        = (3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                 >> 0x0000001dU));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free 
        = ((0x0eU & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free)) 
           | (1U & (~ vlSelfRef.tb_dispatch__DOT__rs_full[0U])));
    if (((((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[0U] 
            & (0U == vlSelfRef.tb_dispatch__DOT__dut__DOT__required_fu[0U])) 
           & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free)) 
          & (~ vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[0U])) 
         & (~ vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0U]))) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0U] = 1U;
    }
    if (((((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[0U] 
            & (0U == vlSelfRef.tb_dispatch__DOT__dut__DOT__required_fu[0U])) 
           & ((IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free) 
              >> 1U)) & (~ (vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[0U] 
                            >> 1U))) & (~ vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0U]))) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[0U] = 1U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0U] = 1U;
    }
    if (((((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[0U] 
            & (0U == vlSelfRef.tb_dispatch__DOT__dut__DOT__required_fu[0U])) 
           & ((IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free) 
              >> 2U)) & (~ (vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[0U] 
                            >> 2U))) & (~ vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0U]))) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[0U] = 2U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0U] = 1U;
    }
    if (((((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[0U] 
            & (1U == vlSelfRef.tb_dispatch__DOT__dut__DOT__required_fu[0U])) 
           & ((IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free) 
              >> 3U)) & (~ (vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[0U] 
                            >> 3U))) & (~ vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0U]))) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[0U] = 3U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0U] = 1U;
    }
    vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[1U] 
        = (0x0000000fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[0U] 
                          | (vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0U]
                              ? ((IData)(1U) << vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[0U])
                              : 0U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1U] = 0U;
    vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[1U] = 0U;
    vlSelfRef.tb_dispatch__DOT__dut__DOT__required_fu[1U] 
        = (3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                 >> 0x0000001dU));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free 
        = ((0x0dU & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free)) 
           | (2U & ((~ vlSelfRef.tb_dispatch__DOT__rs_full[1U]) 
                    << 1U)));
    if (vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0U]) {
        if (((((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[1U] 
                & (0U == vlSelfRef.tb_dispatch__DOT__dut__DOT__required_fu[1U])) 
               & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free)) 
              & (~ vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[1U])) 
             & (~ vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[1U]))) {
            vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1U] = 0U;
            vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[1U] = 1U;
        }
        if (((((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[1U] 
                & (0U == vlSelfRef.tb_dispatch__DOT__dut__DOT__required_fu[1U])) 
               & ((IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free) 
                  >> 1U)) & (~ (vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[1U] 
                                >> 1U))) & (~ vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[1U]))) {
            vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1U] = 1U;
            vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[1U] = 1U;
        }
        if (((((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[1U] 
                & (0U == vlSelfRef.tb_dispatch__DOT__dut__DOT__required_fu[1U])) 
               & ((IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free) 
                  >> 2U)) & (~ (vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[1U] 
                                >> 2U))) & (~ vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[1U]))) {
            vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1U] = 2U;
            vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[1U] = 1U;
        }
        if (((((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_vld[1U] 
                & (1U == vlSelfRef.tb_dispatch__DOT__dut__DOT__required_fu[1U])) 
               & ((IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_free) 
                  >> 3U)) & (~ (vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[1U] 
                                >> 3U))) & (~ vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[1U]))) {
            vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1U] = 3U;
            vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[1U] = 1U;
        }
    }
    vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[0U] 
        = (0x0000000fU & (vlSelfRef.tb_dispatch__DOT__dut__DOT__pipe_claimed[1U] 
                          | (vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[1U]
                              ? ((IData)(1U) << vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1U])
                              : 0U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_dst_reg_o[0U] 
        = vlSelfRef.tb_dispatch__DOT__rob_dst_reg[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_dst_reg_o[1U] 
        = vlSelfRef.tb_dispatch__DOT__rob_dst_reg[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_wb_en_o[0U] 
        = vlSelfRef.tb_dispatch__DOT__rob_wb_en[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_wb_en_o[1U] 
        = vlSelfRef.tb_dispatch__DOT__rob_wb_en[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_dst_preg[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_dst_preg[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src1_preg[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src1_preg[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src2_preg[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src2_preg[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src1_vld[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src1_vld[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src2_vld[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_src2_vld[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__fire_vld[0U] 
        = (vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[0U] 
           & (~ vlSelfRef.tb_dispatch__DOT__rob_full[0U]));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__fire_vld[1U] 
        = (vlSelfRef.tb_dispatch__DOT__dut__DOT__assignment_vld[1U] 
           & (~ vlSelfRef.tb_dispatch__DOT__rob_full[1U]));
    vlSelfRef.tb_dispatch__DOT__disp_vld = (1U == vlSymsp->TOP__CORE_PKG.FU_TYPE
                                            [vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1U]]);
    if ((1U == vlSymsp->TOP__CORE_PKG.FU_TYPE[vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[0U]])) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_sdq_idx_o[0U] 
            = vlSelfRef.tb_dispatch__DOT__disp_sdq_idx;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_ldq_idx_o[0U] 
            = vlSelfRef.tb_dispatch__DOT__disp_ldq_idx;
    } else {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_sdq_idx_o[0U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_ldq_idx_o[0U] = 0U;
    }
    if ((1U == vlSymsp->TOP__CORE_PKG.FU_TYPE[vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1U]])) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_sdq_idx_o[1U] 
            = vlSelfRef.tb_dispatch__DOT__disp_sdq_idx;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_ldq_idx_o[1U] 
            = vlSelfRef.tb_dispatch__DOT__disp_ldq_idx;
    } else {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_sdq_idx_o[1U] = 0U;
        vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_ldq_idx_o[1U] = 0U;
    }
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][3U] 
        = ((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][3U] 
            << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                      >> 0x0000001fU));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0x07ffffffU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U]) 
           | (0xf8000000U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                             << 3U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xf81fffffU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U]) 
           | (0x07e00000U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                             << 3U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xffe07fffU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U]) 
           | (0x001f8000U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                             << 4U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xffffbfffU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U]) 
           | (0x00004000U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                             >> 3U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xffffc0ffU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U]) 
           | (0x00003f00U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                             << 4U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xffffff7fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U]) 
           | (0x00000080U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                             >> 3U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U] 
        = ((7U & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U]) 
           | (0xfffffff8U & ((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                              << 0x0000001fU) | (0x7ffffff8U 
                                                 & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][1U] 
                                                    >> 1U)))));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xfffffff8U & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U]) 
           | (7U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
                    >> 1U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U] 
        = ((0xfffffffbU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U]) 
           | (4U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][1U] 
                    >> 1U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U] 
        = ((3U & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U]) 
           | (0xfffffffcU & ((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][1U] 
                              << 0x0000001fU) | (0x7ffffffcU 
                                                 & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][0U] 
                                                    >> 1U)))));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U] 
        = ((0xfffffffcU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U]) 
           | (3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][1U] 
                    >> 1U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U] 
        = ((0xfffffffdU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U]) 
           | (2U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][0U] 
                    >> 1U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U] 
        = ((0xfffffffeU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U]) 
           | (1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[0U][0U] 
                    >> 1U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xffffff87U & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U]) 
           | (vlSelfRef.tb_dispatch__DOT__rob_entry_idx
              [(1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[0U])] 
              << 3U));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][3U] 
        = ((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][3U] 
            << 1U) | (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                      >> 0x0000001fU));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0x07ffffffU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U]) 
           | (0xf8000000U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                             << 3U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xf81fffffU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U]) 
           | (0x07e00000U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                             << 3U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xffe07fffU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U]) 
           | (0x001f8000U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                             << 4U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xffffbfffU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U]) 
           | (0x00004000U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                             >> 3U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xffffc0ffU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U]) 
           | (0x00003f00U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                             << 4U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xffffff7fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U]) 
           | (0x00000080U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                             >> 3U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U] 
        = ((7U & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U]) 
           | (0xfffffff8U & ((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                              << 0x0000001fU) | (0x7ffffff8U 
                                                 & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][1U] 
                                                    >> 1U)))));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xfffffff8U & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U]) 
           | (7U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
                    >> 1U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U] 
        = ((0xfffffffbU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U]) 
           | (4U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][1U] 
                    >> 1U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U] 
        = ((3U & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U]) 
           | (0xfffffffcU & ((vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][1U] 
                              << 0x0000001fU) | (0x7ffffffcU 
                                                 & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][0U] 
                                                    >> 1U)))));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U] 
        = ((0xfffffffcU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U]) 
           | (3U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][1U] 
                    >> 1U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U] 
        = ((0xfffffffdU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U]) 
           | (2U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][0U] 
                    >> 1U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U] 
        = ((0xfffffffeU & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U]) 
           | (1U & (vlSelfRef.tb_dispatch__DOT__dut__DOT__instr_pkt[1U][0U] 
                    >> 1U)));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xffffff87U & vlSelfRef.tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U]) 
           | (vlSelfRef.tb_dispatch__DOT__rob_entry_idx
              [(1U & vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1U])] 
              << 3U));
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_fire_loc[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_fire_loc[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__assigned_pipe[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dst_preg_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dst_preg_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_preg_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_preg_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_preg_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_preg_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_vld_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_vld_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_vld_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_vld_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i[1U];
    vlSelfRef.tb_dispatch__DOT__rob_fire_valid[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__fire_vld[0U];
    vlSelfRef.tb_dispatch__DOT__rob_fire_valid[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__fire_vld[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__fire_vld[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__fire_vld[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__fire_vld[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__fire_vld[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_fire_loc[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_fire_loc[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_fire_valid_o[0U] 
        = vlSelfRef.tb_dispatch__DOT__rob_fire_valid[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__rob_fire_valid_o[1U] 
        = vlSelfRef.tb_dispatch__DOT__rob_fire_valid[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched = 0U;
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en 
        = ((2U & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en)) 
           | vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i[0U]);
    if ((1U & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en))) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched)));
    }
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en 
        = ((1U & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en)) 
           | ((vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i[0U] 
               & vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i[1U]) 
              << 1U));
    if ((2U & (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en))) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched)));
    }
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__fire_vld_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__fire_vld_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__fire_loc_i[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__fire_loc_i[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[0U] = 0U;
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[0U] = 0U;
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[0U] = 0U;
    if (vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i[0U]) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[0U] 
            = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
            [vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i[0U]];
        if ((0x00000010U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[0U])) {
            vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[0U] 
                = (vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[0U] 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[0U]))));
        }
    }
    if (vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i[0U]) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[0U] 
            = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
            [vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i[0U]];
        if ((0x00000010U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[0U])) {
            vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[0U] 
                = (vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[0U] 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[0U]))));
        }
    }
    vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] = 0U;
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[1U] = 0U;
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[1U] = 0U;
    if (vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i[1U]) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[1U] 
            = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
            [vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i[1U]];
        if ((0x00000010U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[1U])) {
            vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] 
                = (vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[1U]))));
        }
    }
    if (vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i[1U]) {
        vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[1U] 
            = vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
            [vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i[1U]];
        if ((0x00000010U & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[1U])) {
            vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] 
                = (vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[1U]))));
        }
    }
    if (vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i[0U]) {
        if ((vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i[1U] 
             == vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[0U])) {
            vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] 
                = (vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] 
                   | (0x0000ffffU & ((IData)(1U) << vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i[0U])));
        }
        if ((vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i[1U] 
             == vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[0U])) {
            vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] 
                = (vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] 
                   | (0x0000ffffU & ((IData)(1U) << vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i[0U])));
        }
    }
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dependency_mask_o[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dependency_mask_o[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_dependency_mask[0U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[0U];
    vlSelfRef.tb_dispatch__DOT__dut__DOT__dm_dependency_mask[1U] 
        = vlSelfRef.tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U];
}

VL_ATTR_COLD void Vtb_dispatch___024root____Vm_traceActivitySetAll(Vtb_dispatch___024root* vlSelf);

VL_ATTR_COLD void Vtb_dispatch___024root___eval_stl(Vtb_dispatch___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_stl\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_dispatch___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_dispatch___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_dispatch___024root___eval_phase__stl(Vtb_dispatch___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_phase__stl\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_dispatch___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_dispatch___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_dispatch___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_dispatch___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_dispatch___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dispatch___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_dispatch___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_dispatch.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge tb_dispatch.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_dispatch___024root____Vm_traceActivitySetAll(Vtb_dispatch___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root____Vm_traceActivitySetAll\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vtb_dispatch___024root___ctor_var_reset(Vtb_dispatch___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___ctor_var_reset\n"); );
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_dispatch__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1295975271212253107ull);
    vlSelf->tb_dispatch__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10807250583801008564ull);
    vlSelf->tb_dispatch__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3589762759481990766ull);
    vlSelf->tb_dispatch__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1191830382828003245ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__rename_vld[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12268999225203162287ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(127, vlSelf->tb_dispatch__DOT__rename_disp_pkt[__Vi0], __VscopeHash, 3498745184514220307ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__instr_queue_full[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16399541590308064842ull);
    }
    vlSelf->tb_dispatch__DOT__disp_ldq_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3479085406688496831ull);
    vlSelf->tb_dispatch__DOT__disp_sdq_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4206990990214433313ull);
    vlSelf->tb_dispatch__DOT__ldq_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2892992205934648473ull);
    vlSelf->tb_dispatch__DOT__sdq_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15153809873485500282ull);
    vlSelf->tb_dispatch__DOT__disp_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5033785870446592689ull);
    vlSelf->tb_dispatch__DOT__disp_is_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17883249465592062231ull);
    vlSelf->tb_dispatch__DOT__disp_sdq_marker = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6708445805130193023ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_dispatch__DOT__disp_pkt[__Vi0], __VscopeHash, 10347566080257039593ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__disp_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5298810942569967303ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dependency_mask[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6049427428687776501ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__rs_entry_idx[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6506791899800626730ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__rs_full[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8657682767491710330ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__rob_fire_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5427132246522149412ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__rob_dst_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16070514752002201362ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__rob_wb_en[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2274507969608252042ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__rob_entry_idx[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14107856546190775451ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__rob_full[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 253596081071221961ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__rename_vld_i[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11570991448038655085ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(127, vlSelf->tb_dispatch__DOT__dut__DOT__rename_pkt_i[__Vi0], __VscopeHash, 7180709091062056155ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__instr_queue_full_o[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10041740534316790189ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_dispatch__DOT__dut__DOT__disp_pkt_o[__Vi0], __VscopeHash, 17449140321788657035ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__disp_valid_o[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14670531135787653473ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__dependency_mask_o[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4266442725468561914ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__rs_entry_idx_i[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2883046128898547910ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__rs_full_i[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2998979004788325952ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__rob_fire_valid_o[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1935552013154302002ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__rob_dst_reg_o[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1263859598194969999ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__rob_wb_en_o[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8393070363081358580ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__rob_entry_idx_i[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8832709733859973813ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__rob_full_i[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1740231820439216966ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__rob_ldq_idx_o[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6588877337427198478ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__rob_sdq_idx_o[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8747206419517472236ull);
    }
    vlSelf->tb_dispatch__DOT__dut__DOT__dispatch_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16054055294160226673ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1048314101945851075ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(127, vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt[__Vi0], __VscopeHash, 9817588123095596011ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[__Vi0], __VscopeHash, 14655399024193498203ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__required_fu[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6832937272574247893ull);
    }
    vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9779838730901874145ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17080586695446336241ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2867105845101807157ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12857518491440871410ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__fire_vld[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17990589856641935193ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__dm_dst_preg[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6198375401807117752ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__dm_fire_loc[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16893616684076304100ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_preg[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15457317638983842109ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_preg[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10334328251090663941ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_vld[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18294452374210883633ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_vld[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18267528802962773926ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__dm_dependency_mask[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5729445365409099634ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__dm_exec_vld[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9440978757978211533ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__dm_exec_dst_preg[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5911098879120964341ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_vld_i[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4060537954283750632ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(127, vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__rename_pkt_i[__Vi0], __VscopeHash, 11896437709983185461ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__full[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14175815151702257846ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en_i[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6187126868393349637ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_vld_o[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3844503859671849854ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(127, vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_pkt_o[__Vi0], __VscopeHash, 7329037488434033559ull);
    }
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__tail_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 347448590165577632ull);
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14457923409794578355ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(127, vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[__Vi0], __VscopeHash, 3033292273483725595ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11441141070899797744ull);
    }
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1420984213370187769ull);
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14501937537933318794ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9153076596036520353ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16426863174919955385ull);
    }
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1189987963983251804ull);
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13783703795471260621ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11443388626128006634ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__fire_vld_i[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1558212640269662217ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dst_preg_i[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 518369780131512635ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__fire_loc_i[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18311073680469981191ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_preg_i[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10250687038844958622ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_vld_i[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9406070767217158427ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_preg_i[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11698674466101658742ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_vld_i[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15964922707957787482ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dependency_mask_o[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 778517234365160152ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_vld_i[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10412666812369667761ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_dst_preg_i[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4359228562939321846ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17340652833588344955ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11206121301648554158ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3051983836080065301ull);
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
    vlSelf->__Vtrigprevexpr___TOP__tb_dispatch__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
