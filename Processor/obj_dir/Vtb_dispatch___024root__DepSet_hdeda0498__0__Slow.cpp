// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dispatch.h for the primary calling header

#include "Vtb_dispatch__pch.h"
#include "Vtb_dispatch___024root.h"

VL_ATTR_COLD void Vtb_dispatch___024root___eval_static__TOP(Vtb_dispatch___024root* vlSelf);

VL_ATTR_COLD void Vtb_dispatch___024root___eval_static(Vtb_dispatch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_static\n"); );
    // Body
    Vtb_dispatch___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_dispatch___024root___eval_static__TOP(Vtb_dispatch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_dispatch__DOT__cycle_count = 0U;
}

VL_ATTR_COLD void Vtb_dispatch___024root___eval_final(Vtb_dispatch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dispatch___024root___dump_triggers__stl(Vtb_dispatch___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_dispatch___024root___eval_phase__stl(Vtb_dispatch___024root* vlSelf);

VL_ATTR_COLD void Vtb_dispatch___024root___eval_settle(Vtb_dispatch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_dispatch___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/tb_dispatch.sv", 7, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_dispatch___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dispatch___024root___dump_triggers__stl(Vtb_dispatch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_dispatch___024root___stl_sequent__TOP__0(Vtb_dispatch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated = 0U;
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__tail_ptr;
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx[0U] 
        = (0xfU & vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr
           [0U]);
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[0U] 
        = (((1U & ((IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr) 
                   >> 4U)) != (1U & (vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr
                                     [0U] >> 4U))) 
           & ((0xfU & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr)) 
              == vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx
              [0U]));
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en 
        = ((2U & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en)) 
           | (vlSelf->tb_dispatch__DOT__rename_vld[0U] 
              & (~ vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full
                 [0U])));
    if ((1U & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en))) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated)));
    }
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[1U] 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__tail_ptr)));
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx[1U] 
        = (0xfU & vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr
           [1U]);
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[1U] 
        = (vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full
           [0U] | (((1U & ((IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr) 
                           >> 4U)) != (1U & (vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr
                                             [1U] >> 4U))) 
                   & ((0xfU & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr)) 
                      == vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx
                      [1U])));
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en 
        = ((1U & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en)) 
           | ((vlSelf->tb_dispatch__DOT__rename_vld
               [1U] & (~ vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full
                       [1U])) << 1U));
    if ((2U & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en))) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated)));
    }
    vlSelf->tb_dispatch__DOT__instr_queue_full[0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full
        [0U];
    vlSelf->tb_dispatch__DOT__instr_queue_full[1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full
        [1U];
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[0U] 
        = (7U & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr));
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[1U] 
        = (7U & ((IData)(1U) + (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr)));
    vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld[0U] 
        = (1U & (vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                 [vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx
                 [0U]][1U] >> 3U));
    vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld[1U] 
        = (1U & (vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
                 [vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx
                 [1U]][1U] >> 3U));
    vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt[0U][0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx
        [0U]][0U];
    vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt[0U][1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx
        [0U]][1U];
    vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt[0U][2U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx
        [0U]][2U];
    vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt[0U][3U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx
        [0U]][3U];
    vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt[1U][0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx
        [1U]][0U];
    vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt[1U][1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx
        [1U]][1U];
    vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt[1U][2U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx
        [1U]][2U];
    vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt[1U][3U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue
        [vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx
        [1U]][3U];
    vlSelf->tb_dispatch__DOT__rob_dst_reg[0U] = (0x1fU 
                                                 & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                                    [0U][2U] 
                                                    >> 0x18U));
    vlSelf->tb_dispatch__DOT__rob_dst_reg[1U] = (0x1fU 
                                                 & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                                    [1U][2U] 
                                                    >> 0x18U));
    vlSelf->tb_dispatch__DOT__rob_wb_en[0U] = (1U & 
                                               vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                               [0U][0U]);
    vlSelf->tb_dispatch__DOT__rob_wb_en[1U] = (1U & 
                                               vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                               [1U][0U]);
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_dst_preg[0U] 
        = (0x3fU & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                    [0U][2U] >> 0x12U));
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_dst_preg[1U] 
        = (0x3fU & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                    [1U][2U] >> 0x12U));
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_preg[0U] 
        = (0x3fU & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                    [0U][2U] >> 0xbU));
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_preg[1U] 
        = (0x3fU & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                    [1U][2U] >> 0xbU));
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_preg[0U] 
        = (0x3fU & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                    [0U][2U] >> 4U));
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_preg[1U] 
        = (0x3fU & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                    [1U][2U] >> 4U));
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_vld[0U] 
        = (1U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                 [0U][2U] >> 0x11U));
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_vld[1U] 
        = (1U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                 [1U][2U] >> 0x11U));
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_vld[0U] 
        = (1U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                 [0U][2U] >> 0xaU));
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_vld[1U] 
        = (1U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                 [1U][2U] >> 0xaU));
    vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed[0U] = 0U;
    vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[0U] = 0U;
    vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[0U] = 0U;
    vlSelf->tb_dispatch__DOT__dut__DOT__required_fu[0U] 
        = (3U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                 [0U][2U] >> 0x1dU));
    vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free = 
        ((0xeU & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free)) 
         | (1U & (~ vlSelf->tb_dispatch__DOT__rs_full
                  [0U])));
    if (((((vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld
            [0U] & (0U == vlSelf->tb_dispatch__DOT__dut__DOT__required_fu
                    [0U])) & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free)) 
          & (~ vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed
             [0U])) & (~ vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
                       [0U]))) {
        vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[0U] = 0U;
        vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[0U] = 1U;
    }
    if (((((vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld
            [0U] & (0U == vlSelf->tb_dispatch__DOT__dut__DOT__required_fu
                    [0U])) & ((IData)(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free) 
                              >> 1U)) & (~ (vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed
                                            [0U] >> 1U))) 
         & (~ vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
            [0U]))) {
        vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[0U] = 1U;
        vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[0U] = 1U;
    }
    if (((((vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld
            [0U] & (0U == vlSelf->tb_dispatch__DOT__dut__DOT__required_fu
                    [0U])) & ((IData)(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free) 
                              >> 2U)) & (~ (vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed
                                            [0U] >> 2U))) 
         & (~ vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
            [0U]))) {
        vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[0U] = 2U;
        vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[0U] = 1U;
    }
    if (((((vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld
            [0U] & (1U == vlSelf->tb_dispatch__DOT__dut__DOT__required_fu
                    [0U])) & ((IData)(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free) 
                              >> 3U)) & (~ (vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed
                                            [0U] >> 3U))) 
         & (~ vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
            [0U]))) {
        vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[0U] = 3U;
        vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[0U] = 1U;
    }
    vlSelf->tb_dispatch__DOT__dut__DOT__pipe_steering__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed[1U] 
        = (0xfU & (vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed
                   [0U] | (vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
                           [0U] ? ((IData)(1U) << vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe
                                   [0U]) : 0U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[1U] = 0U;
    vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[1U] = 0U;
    vlSelf->tb_dispatch__DOT__dut__DOT__required_fu[1U] 
        = (3U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                 [1U][2U] >> 0x1dU));
    vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free = 
        ((0xdU & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free)) 
         | (2U & ((~ vlSelf->tb_dispatch__DOT__rs_full
                   [1U]) << 1U)));
    if (vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
        [0U]) {
        if (((((vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld
                [1U] & (0U == vlSelf->tb_dispatch__DOT__dut__DOT__required_fu
                        [1U])) & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free)) 
              & (~ vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed
                 [1U])) & (~ vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
                           [1U]))) {
            vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[1U] = 0U;
            vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[1U] = 1U;
        }
        vlSelf->tb_dispatch__DOT__dut__DOT__pipe_steering__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
        if (((((vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld
                [1U] & (0U == vlSelf->tb_dispatch__DOT__dut__DOT__required_fu
                        [1U])) & ((IData)(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free) 
                                  >> 1U)) & (~ (vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed
                                                [1U] 
                                                >> 1U))) 
             & (~ vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
                [1U]))) {
            vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[1U] = 1U;
            vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[1U] = 1U;
        }
        if (((((vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld
                [1U] & (0U == vlSelf->tb_dispatch__DOT__dut__DOT__required_fu
                        [1U])) & ((IData)(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free) 
                                  >> 2U)) & (~ (vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed
                                                [1U] 
                                                >> 2U))) 
             & (~ vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
                [1U]))) {
            vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[1U] = 2U;
            vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[1U] = 1U;
        }
        if (((((vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld
                [1U] & (1U == vlSelf->tb_dispatch__DOT__dut__DOT__required_fu
                        [1U])) & ((IData)(vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free) 
                                  >> 3U)) & (~ (vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed
                                                [1U] 
                                                >> 3U))) 
             & (~ vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
                [1U]))) {
            vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[1U] = 3U;
            vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[1U] = 1U;
        }
    }
    vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed[0U] 
        = (0xfU & (vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed
                   [1U] | (vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
                           [1U] ? ((IData)(1U) << vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe
                                   [1U]) : 0U)));
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__dm_dst_preg
        [0U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__dm_dst_preg
        [1U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i[0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_preg
        [0U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i[1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_preg
        [1U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i[0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_preg
        [0U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i[1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_preg
        [1U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i[0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_vld
        [0U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i[1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_vld
        [1U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i[0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_vld
        [0U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i[1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_vld
        [1U];
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][3U] 
        = ((vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
            [0U][3U] << 1U) | (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                               [0U][2U] >> 0x1fU));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0x7ffffffU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][2U]) | (0xf8000000U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                        [0U][2U] << 3U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xf81fffffU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][2U]) | (0x7e00000U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                       [0U][2U] << 3U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xffe07fffU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][2U]) | (0x1f8000U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                      [0U][2U] << 4U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xffffbfffU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][2U]) | (0x4000U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                    [0U][2U] >> 3U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xffffc0ffU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][2U]) | (0x3f00U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                    [0U][2U] << 4U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xffffff7fU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][2U]) | (0x80U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                  [0U][2U] >> 3U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U] 
        = ((7U & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][1U]) | (0xfffffff8U & ((vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                         [0U][2U] << 0x1fU) 
                                        | (0x7ffffff8U 
                                           & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                              [0U][1U] 
                                              >> 1U)))));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xfffffff8U & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][2U]) | (7U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                               [0U][2U] >> 1U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U] 
        = ((0xfffffffbU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][1U]) | (4U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                               [0U][1U] >> 1U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U] 
        = ((3U & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][0U]) | (0xfffffffcU & ((vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                         [0U][1U] << 0x1fU) 
                                        | (0x7ffffffcU 
                                           & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                              [0U][0U] 
                                              >> 1U)))));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][1U] 
        = ((0xfffffffcU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][1U]) | (3U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                               [0U][1U] >> 1U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U] 
        = ((0xfffffffdU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][0U]) | (2U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                               [0U][0U] >> 1U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][0U] 
        = ((0xfffffffeU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][0U]) | (1U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                               [0U][0U] >> 1U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[0U][2U] 
        = ((0xffffff87U & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [0U][2U]) | (vlSelf->tb_dispatch__DOT__rob_entry_idx
                         [(1U & vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe
                           [0U])] << 3U));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][3U] 
        = ((vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
            [1U][3U] << 1U) | (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                               [1U][2U] >> 0x1fU));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0x7ffffffU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][2U]) | (0xf8000000U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                        [1U][2U] << 3U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xf81fffffU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][2U]) | (0x7e00000U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                       [1U][2U] << 3U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xffe07fffU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][2U]) | (0x1f8000U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                      [1U][2U] << 4U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xffffbfffU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][2U]) | (0x4000U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                    [1U][2U] >> 3U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xffffc0ffU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][2U]) | (0x3f00U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                    [1U][2U] << 4U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xffffff7fU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][2U]) | (0x80U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                  [1U][2U] >> 3U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U] 
        = ((7U & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][1U]) | (0xfffffff8U & ((vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                         [1U][2U] << 0x1fU) 
                                        | (0x7ffffff8U 
                                           & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                              [1U][1U] 
                                              >> 1U)))));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xfffffff8U & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][2U]) | (7U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                               [1U][2U] >> 1U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U] 
        = ((0xfffffffbU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][1U]) | (4U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                               [1U][1U] >> 1U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U] 
        = ((3U & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][0U]) | (0xfffffffcU & ((vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                         [1U][1U] << 0x1fU) 
                                        | (0x7ffffffcU 
                                           & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                                              [1U][0U] 
                                              >> 1U)))));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][1U] 
        = ((0xfffffffcU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][1U]) | (3U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                               [1U][1U] >> 1U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U] 
        = ((0xfffffffdU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][0U]) | (2U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                               [1U][0U] >> 1U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][0U] 
        = ((0xfffffffeU & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][0U]) | (1U & (vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt
                               [1U][0U] >> 1U)));
    vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[1U][2U] 
        = ((0xffffff87U & vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt
            [1U][2U]) | (vlSelf->tb_dispatch__DOT__rob_entry_idx
                         [(1U & vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe
                           [1U])] << 3U));
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_fire_loc[0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe
        [0U];
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_fire_loc[1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe
        [1U];
    vlSelf->tb_dispatch__DOT__dut__DOT__fire_vld[0U] 
        = (vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
           [0U] & (~ vlSelf->tb_dispatch__DOT__rob_full
                   [0U]));
    vlSelf->tb_dispatch__DOT__dut__DOT__fire_vld[1U] 
        = (vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld
           [1U] & (~ vlSelf->tb_dispatch__DOT__rob_full
                   [1U]));
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i[0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__dm_fire_loc
        [0U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i[1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__dm_fire_loc
        [1U];
    vlSelf->tb_dispatch__DOT__rob_fire_valid[0U] = 
        vlSelf->tb_dispatch__DOT__dut__DOT__fire_vld
        [0U];
    vlSelf->tb_dispatch__DOT__rob_fire_valid[1U] = 
        vlSelf->tb_dispatch__DOT__dut__DOT__fire_vld
        [1U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i[0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__fire_vld
        [0U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i[1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__fire_vld
        [1U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i[0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__fire_vld
        [0U];
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i[1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT__fire_vld
        [1U];
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched = 0U;
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en 
        = ((2U & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en)) 
           | vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i
           [0U]);
    if ((1U & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en))) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched)));
    }
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en 
        = ((1U & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en)) 
           | ((vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i
               [0U] & vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i
               [1U]) << 1U));
    if ((2U & (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en))) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched)));
    }
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[0U] = 0U;
    vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[0U] = 0U;
    vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[0U] = 0U;
    if (vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i
        [0U]) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[0U] 
            = vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
            [vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i
            [0U]];
        if ((0x10U & vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry
             [0U])) {
            vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[0U] 
                = (vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o
                   [0U] | (0xffffU & ((IData)(1U) << 
                                      (0xfU & vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry
                                       [0U]))));
        }
    }
    if (vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i
        [0U]) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[0U] 
            = vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
            [vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i
            [0U]];
        if ((0x10U & vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry
             [0U])) {
            vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[0U] 
                = (vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o
                   [0U] | (0xffffU & ((IData)(1U) << 
                                      (0xfU & vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry
                                       [0U]))));
        }
    }
    vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] = 0U;
    vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[1U] = 0U;
    vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[1U] = 0U;
    if (vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i
        [1U]) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[1U] 
            = vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
            [vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i
            [1U]];
        if ((0x10U & vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry
             [1U])) {
            vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] 
                = (vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o
                   [1U] | (0xffffU & ((IData)(1U) << 
                                      (0xfU & vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry
                                       [1U]))));
        }
    }
    if (vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i
        [1U]) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[1U] 
            = vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt
            [vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i
            [1U]];
        if ((0x10U & vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry
             [1U])) {
            vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] 
                = (vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o
                   [1U] | (0xffffU & ((IData)(1U) << 
                                      (0xfU & vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry
                                       [1U]))));
        }
    }
    if (vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i
        [0U]) {
        if ((vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i
             [1U] == vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i
             [0U])) {
            vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] 
                = (vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o
                   [1U] | (0xffffU & ((IData)(1U) << 
                                      vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i
                                      [0U])));
        }
        if ((vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i
             [1U] == vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i
             [0U])) {
            vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[1U] 
                = (vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o
                   [1U] | (0xffffU & ((IData)(1U) << 
                                      vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i
                                      [0U])));
        }
    }
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_dependency_mask[0U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o
        [0U];
    vlSelf->tb_dispatch__DOT__dut__DOT__dm_dependency_mask[1U] 
        = vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o
        [1U];
}

VL_ATTR_COLD void Vtb_dispatch___024root___eval_stl(Vtb_dispatch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_dispatch___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_dispatch___024root___eval_triggers__stl(Vtb_dispatch___024root* vlSelf);

VL_ATTR_COLD bool Vtb_dispatch___024root___eval_phase__stl(Vtb_dispatch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_dispatch___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_dispatch___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dispatch___024root___dump_triggers__act(Vtb_dispatch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_dispatch.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_dispatch.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dispatch___024root___dump_triggers__nba(Vtb_dispatch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_dispatch.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_dispatch.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_dispatch___024root___ctor_var_reset(Vtb_dispatch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dispatch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dispatch___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_dispatch__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_dispatch__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tb_dispatch__DOT__cycle_count = VL_RAND_RESET_I(32);
    vlSelf->tb_dispatch__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->tb_dispatch__DOT__flush = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__rename_vld[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(127, vlSelf->tb_dispatch__DOT__rename_disp_pkt[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__instr_queue_full[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb_dispatch__DOT__disp_ldq_idx = VL_RAND_RESET_I(4);
    vlSelf->tb_dispatch__DOT__disp_sdq_idx = VL_RAND_RESET_I(4);
    vlSelf->tb_dispatch__DOT__ldq_full = VL_RAND_RESET_I(1);
    vlSelf->tb_dispatch__DOT__sdq_full = VL_RAND_RESET_I(1);
    vlSelf->tb_dispatch__DOT__disp_vld = VL_RAND_RESET_I(1);
    vlSelf->tb_dispatch__DOT__disp_is_store = VL_RAND_RESET_I(1);
    vlSelf->tb_dispatch__DOT__disp_store_data = VL_RAND_RESET_I(32);
    vlSelf->tb_dispatch__DOT__disp_sdq_marker = VL_RAND_RESET_I(5);
    vlSelf->tb_dispatch__DOT__disp_rob_idx = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->tb_dispatch__DOT__disp_pkt[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__disp_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dependency_mask[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__rs_entry_idx[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__rs_full[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__rob_fire_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__rob_dst_reg[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__rob_wb_en[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__rob_entry_idx[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__rob_full[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb_dispatch__DOT__dut__DOT__dispatch_stall = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__instr_vld[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(127, vlSelf->tb_dispatch__DOT__dut__DOT__instr_pkt[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->tb_dispatch__DOT__dut__DOT__new_disp_pkt[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_instr_queue__dispatch_en_i[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__required_fu[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->tb_dispatch__DOT__dut__DOT__pipe_free = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__assigned_pipe[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__assignment_vld[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__pipe_claimed[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__fire_vld[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__dm_dst_preg[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__dm_fire_loc[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_preg[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_preg[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__dm_src1_vld[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__dm_src2_vld[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__dm_dependency_mask[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__dm_exec_vld[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__dm_exec_dst_preg[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT____Vcellout__u_dmt__dependency_mask_o[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_vld_i[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src2_preg_i[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_vld_i[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__src1_preg_i[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_loc_i[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__dst_preg_i[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT____Vcellinp__u_dmt__fire_vld_i[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb_dispatch__DOT__dut__DOT__pipe_steering__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->tb_dispatch__DOT__dut__DOT__pipeline_register__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->tb_dispatch__DOT__dut__DOT__pipeline_register__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__tail_ptr = VL_RAND_RESET_I(5);
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__head_ptr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(127, vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__queue[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__instr_queue_full[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_allocated = VL_RAND_RESET_I(2);
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_en = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_ptr[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__alloc_idx[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__num_dispatched = VL_RAND_RESET_I(2);
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_en = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__dispatch_idx[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->tb_dispatch__DOT__dut__DOT__u_instr_queue__DOT__unnamedblk5__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_vld_i[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__exec_dst_preg_i[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__dmt[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src1_dmt_entry[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__src2_dmt_entry[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__write_dependency__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__write_dependency__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->tb_dispatch__DOT__dut__DOT__u_dmt__DOT__write_dependency__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_dispatch__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
