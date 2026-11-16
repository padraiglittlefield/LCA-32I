// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_reorder_buffer.h for the primary calling header

#include "Vtb_reorder_buffer__pch.h"

VL_ATTR_COLD void Vtb_reorder_buffer___024root___eval_initial__TOP(Vtb_reorder_buffer___024root* vlSelf);
VlCoroutine Vtb_reorder_buffer___024root___eval_initial__TOP__Vtiming__0(Vtb_reorder_buffer___024root* vlSelf);
VlCoroutine Vtb_reorder_buffer___024root___eval_initial__TOP__Vtiming__1(Vtb_reorder_buffer___024root* vlSelf);

void Vtb_reorder_buffer___024root___eval_initial(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_initial\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_reorder_buffer___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_reorder_buffer___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_reorder_buffer___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_reorder_buffer___024root___eval_initial__TOP__Vtiming__0(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "sim/tb_reorder_buffer.sv", 
                                             20);
        vlSelfRef.tb_reorder_buffer__DOT__clk = 1U;
        vlSelfRef.tb_reorder_buffer__DOT__cycle_count 
            = ((IData)(1U) + vlSelfRef.tb_reorder_buffer__DOT__cycle_count);
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "sim/tb_reorder_buffer.sv", 
                                             22);
        vlSelfRef.tb_reorder_buffer__DOT__clk = 0U;
    }
    co_return;
}

void Vtb_reorder_buffer___024root____VbeforeTrig_h9fa7b992__0(Vtb_reorder_buffer___024root* vlSelf, const char* __VeventDescription);
void Vtb_reorder_buffer___024root____VbeforeTrig_h9fa7b8d8__0(Vtb_reorder_buffer___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_reorder_buffer___024root___eval_initial__TOP__Vtiming__1(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_reorder_buffer__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_reorder_buffer__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.tb_reorder_buffer__DOT__clk = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__rst = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__disp_fire_valid[0U] = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__disp_dst_areg[0U] = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__disp_wb_en[0U] = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__disp_fire_valid[1U] = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__disp_dst_areg[1U] = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__disp_wb_en[1U] = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__ex_valid[0U] = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__ex_rob_idx[0U] = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__ex_val[0U] = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__ex_br_mispred[0U] = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__ex_exception[0U] = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__ex_valid[1U] = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__ex_rob_idx[1U] = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__ex_val[1U] = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__ex_br_mispred[1U] = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__ex_exception[1U] = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__ex_valid[2U] = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__ex_rob_idx[2U] = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__ex_val[2U] = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__ex_br_mispred[2U] = 0U;
    vlSelfRef.tb_reorder_buffer__DOT__ex_exception[2U] = 0U;
    VL_WRITEF_NX("=== Reorder Buffer Testbench ===\n",0);
    VL_WRITEF_NX("\n[RESET] Resetting DUT\n",0);
    Vtb_reorder_buffer___024root____VbeforeTrig_h9fa7b992__0(vlSelf, 
                                                             "@(negedge tb_reorder_buffer.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9fa7b992__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_reorder_buffer.clk)", 
                                                         "sim/tb_reorder_buffer.sv", 
                                                         120);
    vlSelfRef.tb_reorder_buffer__DOT__rst = 1U;
    Vtb_reorder_buffer___024root____VbeforeTrig_h9fa7b992__0(vlSelf, 
                                                             "@(negedge tb_reorder_buffer.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9fa7b992__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_reorder_buffer.clk)", 
                                                         "sim/tb_reorder_buffer.sv", 
                                                         122);
    Vtb_reorder_buffer___024root____VbeforeTrig_h9fa7b992__0(vlSelf, 
                                                             "@(negedge tb_reorder_buffer.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9fa7b992__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_reorder_buffer.clk)", 
                                                         "sim/tb_reorder_buffer.sv", 
                                                         123);
    vlSelfRef.tb_reorder_buffer__DOT__rst = 0U;
    Vtb_reorder_buffer___024root____VbeforeTrig_h9fa7b992__0(vlSelf, 
                                                             "@(negedge tb_reorder_buffer.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9fa7b992__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_reorder_buffer.clk)", 
                                                         "sim/tb_reorder_buffer.sv", 
                                                         125);
    VL_WRITEF_NX("[RESET] Reset complete\n\n",0);
    tb_reorder_buffer__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, tb_reorder_buffer__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_reorder_buffer___024root____VbeforeTrig_h9fa7b8d8__0(vlSelf, 
                                                                 "@(posedge tb_reorder_buffer.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h9fa7b8d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_reorder_buffer.clk)", 
                                                             "sim/tb_reorder_buffer.sv", 
                                                             143);
        tb_reorder_buffer__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_reorder_buffer__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    VL_WRITEF_NX("\n=== Testbench Complete ===\nTotal Tests: 0\n[\033[32mALL TESTS PASSED\033[0m] 0/0 passed\n",0);
    VL_FINISH_MT("sim/tb_reorder_buffer.sv", 152, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

void Vtb_reorder_buffer___024root___eval_triggers_vec__act(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_triggers_vec__act\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.tb_reorder_buffer__DOT__clk)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_reorder_buffer__DOT__clk__0)) 
                                                      << 2U) 
                                                     | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_reorder_buffer__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_reorder_buffer__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_reorder_buffer__DOT__clk__0 
        = vlSelfRef.tb_reorder_buffer__DOT__clk;
}

bool Vtb_reorder_buffer___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___trigger_anySet__act\n"); );
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

void Vtb_reorder_buffer___024root___act_comb__TOP__0(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___act_comb__TOP__0\n"); );
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
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_rob_full_o[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__disp_rob_full[0U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_rob_full_o[1U] 
        = vlSelfRef.tb_reorder_buffer__DOT__disp_rob_full[1U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_rob_idx_o[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__disp_rob_idx[0U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_rob_idx_o[1U] 
        = vlSelfRef.tb_reorder_buffer__DOT__disp_rob_idx[1U];
}

void Vtb_reorder_buffer___024root___eval_act(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_act\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_reorder_buffer___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

void Vtb_reorder_buffer___024root___nba_sequent__TOP__0(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___nba_sequent__TOP__0\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v0;
    __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v16;
    __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v16;
    __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v16 = 0;
    CData/*3:0*/ __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v17;
    __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v17 = 0;
    CData/*3:0*/ __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v18;
    __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v18 = 0;
    CData/*3:0*/ __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v19;
    __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v19 = 0;
    CData/*0:0*/ __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v19;
    __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v19 = 0;
    CData/*3:0*/ __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v20;
    __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v20 = 0;
    CData/*3:0*/ __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v21;
    __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v21 = 0;
    CData/*3:0*/ __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v22;
    __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v22 = 0;
    CData/*0:0*/ __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v22;
    __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v22 = 0;
    IData/*31:0*/ __VdlyVal__tb_reorder_buffer__DOT__dut__DOT__rob_status__v23;
    __VdlyVal__tb_reorder_buffer__DOT__dut__DOT__rob_status__v23 = 0;
    CData/*3:0*/ __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v23;
    __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v23 = 0;
    CData/*3:0*/ __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v24;
    __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v24 = 0;
    CData/*0:0*/ __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v24;
    __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v24 = 0;
    IData/*31:0*/ __VdlyVal__tb_reorder_buffer__DOT__dut__DOT__rob_status__v25;
    __VdlyVal__tb_reorder_buffer__DOT__dut__DOT__rob_status__v25 = 0;
    CData/*3:0*/ __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v25;
    __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v25 = 0;
    CData/*3:0*/ __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v26;
    __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v26 = 0;
    CData/*0:0*/ __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v26;
    __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v26 = 0;
    IData/*31:0*/ __VdlyVal__tb_reorder_buffer__DOT__dut__DOT__rob_status__v27;
    __VdlyVal__tb_reorder_buffer__DOT__dut__DOT__rob_status__v27 = 0;
    CData/*3:0*/ __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v27;
    __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v27 = 0;
    CData/*3:0*/ __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v28;
    __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v28 = 0;
    CData/*0:0*/ __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v28;
    __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v28 = 0;
    CData/*3:0*/ __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v29;
    __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v29 = 0;
    CData/*3:0*/ __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v30;
    __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v30 = 0;
    CData/*0:0*/ __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v30;
    __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v30 = 0;
    CData/*3:0*/ __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v31;
    __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v31 = 0;
    CData/*0:0*/ __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v0;
    __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v0 = 0;
    QData/*39:0*/ __VdlyVal__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16;
    __VdlyVal__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16 = 0;
    CData/*3:0*/ __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16;
    __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16;
    __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16 = 0;
    QData/*39:0*/ __VdlyVal__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17;
    __VdlyVal__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17 = 0;
    CData/*3:0*/ __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17;
    __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17 = 0;
    CData/*0:0*/ __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17;
    __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17 = 0;
    // Body
    __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v0 = 0U;
    __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16 = 0U;
    __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17 = 0U;
    __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v0 = 0U;
    __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v16 = 0U;
    __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v19 = 0U;
    __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v22 = 0U;
    __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v24 = 0U;
    __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v26 = 0U;
    __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v28 = 0U;
    __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v30 = 0U;
    if (vlSelfRef.tb_reorder_buffer__DOT__rst) {
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__tail_ptr = 0U;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__head_ptr = 0U;
        __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v0 = 1U;
        __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v0 = 1U;
        vlSelfRef.tb_reorder_buffer__DOT__flush_pc = 0U;
    } else {
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__tail_ptr 
            = (0x0000001fU & ((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__tail_ptr) 
                              + (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__num_allocations)));
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__head_ptr 
            = (0x0000001fU & ((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__head_ptr) 
                              + (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__num_retirements)));
        if ((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_enable))) {
            __VdlyVal__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16 
                = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[0U];
            __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16 
                = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_idx[0U];
            __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16 = 1U;
            __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v16 
                = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_idx[0U];
            __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v16 = 1U;
            __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v17 
                = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_idx[0U];
            __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v18 
                = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_idx[0U];
        }
        if ((2U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_enable))) {
            __VdlyVal__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17 
                = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_entry[1U];
            __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17 
                = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_idx[1U];
            __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17 = 1U;
            __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v19 
                = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_idx[1U];
            __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v19 = 1U;
            __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v20 
                = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_idx[1U];
            __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v21 
                = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_idx[1U];
        }
        if ((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_valid))) {
            __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v22 
                = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_idx[0U];
            __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v22 = 1U;
            __VdlyVal__tb_reorder_buffer__DOT__dut__DOT__rob_status__v23 
                = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_data[0U];
            __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v23 
                = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_idx[0U];
        }
        if ((2U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_valid))) {
            __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v24 
                = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_idx[1U];
            __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v24 = 1U;
            __VdlyVal__tb_reorder_buffer__DOT__dut__DOT__rob_status__v25 
                = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_data[1U];
            __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v25 
                = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_idx[1U];
        }
        if ((4U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_valid))) {
            __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v26 
                = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_idx[2U];
            __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v26 = 1U;
            __VdlyVal__tb_reorder_buffer__DOT__dut__DOT__rob_status__v27 
                = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_data[2U];
            __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v27 
                = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_idx[2U];
        }
        if ((1U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_enable))) {
            __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v28 
                = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_idx[0U];
            __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v28 = 1U;
            __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v29 
                = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_idx[0U];
        }
        if ((2U & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_enable))) {
            __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v30 
                = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_idx[1U];
            __VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v30 = 1U;
            __VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v31 
                = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_idx[1U];
        }
        vlSelfRef.tb_reorder_buffer__DOT__flush_pc 
            = vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__restore_pc;
    }
    vlSelfRef.tb_reorder_buffer__DOT__flush = ((1U 
                                                & (~ (IData)(vlSelfRef.tb_reorder_buffer__DOT__rst))) 
                                               && (0U 
                                                   != 
                                                   ((IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_enable) 
                                                    & (IData)(vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__retire_flush))));
    if (__VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v0) {
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[0U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[1U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[2U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[3U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[4U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[5U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[6U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[7U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[8U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[9U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[10U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[11U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[12U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[13U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[14U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[15U] = 0ULL;
    }
    if (__VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16) {
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16] 
            = __VdlyVal__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v16;
    }
    if (__VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17) {
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_entries[__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17] 
            = __VdlyVal__tb_reorder_buffer__DOT__dut__DOT__rob_entries__v17;
    }
    if (__VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v0) {
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[0U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[1U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[2U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[3U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[4U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[5U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[6U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[7U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[8U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[9U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[10U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[11U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[12U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[13U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[14U] = 0ULL;
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[15U] = 0ULL;
    }
    if (__VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v16) {
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v16] 
            = (0x0000000200000000ULL | vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v16]);
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v17] 
            = (0x00000002ffffffffULL & vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v17]);
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v18] 
            = (0x0000000300000000ULL & vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v18]);
    }
    if (__VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v19) {
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v19] 
            = (0x0000000200000000ULL | vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v19]);
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v20] 
            = (0x00000002ffffffffULL & vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v20]);
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v21] 
            = (0x0000000300000000ULL & vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v21]);
    }
    if (__VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v22) {
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v22] 
            = (0x0000000100000000ULL | vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v22]);
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v23] 
            = ((0x0000000300000000ULL & vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status
                [__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v23]) 
               | (IData)((IData)(__VdlyVal__tb_reorder_buffer__DOT__dut__DOT__rob_status__v23)));
    }
    if (__VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v24) {
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v24] 
            = (0x0000000100000000ULL | vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v24]);
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v25] 
            = ((0x0000000300000000ULL & vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status
                [__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v25]) 
               | (IData)((IData)(__VdlyVal__tb_reorder_buffer__DOT__dut__DOT__rob_status__v25)));
    }
    if (__VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v26) {
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v26] 
            = (0x0000000100000000ULL | vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v26]);
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v27] 
            = ((0x0000000300000000ULL & vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status
                [__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v27]) 
               | (IData)((IData)(__VdlyVal__tb_reorder_buffer__DOT__dut__DOT__rob_status__v27)));
    }
    if (__VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v28) {
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v28] 
            = (0x00000001ffffffffULL & vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v28]);
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v29] 
            = (0x00000002ffffffffULL & vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v29]);
    }
    if (__VdlySet__tb_reorder_buffer__DOT__dut__DOT__rob_status__v30) {
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v30] 
            = (0x00000001ffffffffULL & vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v30]);
        vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status[__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v31] 
            = (0x00000002ffffffffULL & vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__rob_status
               [__VdlyDim0__tb_reorder_buffer__DOT__dut__DOT__rob_status__v31]);
    }
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
}

void Vtb_reorder_buffer___024root___nba_comb__TOP__0(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___nba_comb__TOP__0\n"); );
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
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__alloc_valid 
        = ((vlSelfRef.tb_reorder_buffer__DOT__disp_fire_valid[1U] 
            << 1U) | vlSelfRef.tb_reorder_buffer__DOT__disp_fire_valid[0U]);
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
        = ((vlSelfRef.tb_reorder_buffer__DOT__ex_valid[2U] 
            << 2U) | ((vlSelfRef.tb_reorder_buffer__DOT__ex_valid[1U] 
                       << 1U) | vlSelfRef.tb_reorder_buffer__DOT__ex_valid[0U]));
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_idx[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_rob_idx[0U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_idx[1U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_rob_idx[1U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_idx[2U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_rob_idx[2U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_data[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_val[0U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_data[1U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_val[1U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__result_data[2U] 
        = vlSelfRef.tb_reorder_buffer__DOT__ex_val[2U];
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
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_rob_full_o[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__disp_rob_full[0U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_rob_full_o[1U] 
        = vlSelfRef.tb_reorder_buffer__DOT__disp_rob_full[1U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_rob_idx_o[0U] 
        = vlSelfRef.tb_reorder_buffer__DOT__disp_rob_idx[0U];
    vlSelfRef.tb_reorder_buffer__DOT__dut__DOT__disp_rob_idx_o[1U] 
        = vlSelfRef.tb_reorder_buffer__DOT__disp_rob_idx[1U];
}

void Vtb_reorder_buffer___024root___eval_nba(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_nba\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_reorder_buffer___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_reorder_buffer___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

void Vtb_reorder_buffer___024root___timing_ready(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___timing_ready\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h9fa7b992__0.ready("@(negedge tb_reorder_buffer.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h9fa7b8d8__0.ready("@(posedge tb_reorder_buffer.clk)");
    }
}

void Vtb_reorder_buffer___024root___timing_resume(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___timing_resume\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h9fa7b992__0.moveToResumeQueue(
                                                          "@(negedge tb_reorder_buffer.clk)");
    vlSelfRef.__VtrigSched_h9fa7b8d8__0.moveToResumeQueue(
                                                          "@(posedge tb_reorder_buffer.clk)");
    vlSelfRef.__VtrigSched_h9fa7b992__0.resume("@(negedge tb_reorder_buffer.clk)");
    vlSelfRef.__VtrigSched_h9fa7b8d8__0.resume("@(posedge tb_reorder_buffer.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_reorder_buffer___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_reorder_buffer___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_reorder_buffer___024root___eval_phase__act(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_phase__act\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_reorder_buffer___024root___eval_triggers_vec__act(vlSelf);
    Vtb_reorder_buffer___024root___timing_ready(vlSelf);
    Vtb_reorder_buffer___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_reorder_buffer___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_reorder_buffer___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_reorder_buffer___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_reorder_buffer___024root___timing_resume(vlSelf);
        Vtb_reorder_buffer___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_reorder_buffer___024root___eval_phase__inact(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_phase__inact\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("sim/tb_reorder_buffer.sv", 5, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_reorder_buffer___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_reorder_buffer___024root___eval_phase__nba(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_phase__nba\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_reorder_buffer___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_reorder_buffer___024root___eval_nba(vlSelf);
        Vtb_reorder_buffer___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_reorder_buffer___024root___eval(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_reorder_buffer___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("sim/tb_reorder_buffer.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("sim/tb_reorder_buffer.sv", 5, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_reorder_buffer___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("sim/tb_reorder_buffer.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_reorder_buffer___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_reorder_buffer___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_reorder_buffer___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_reorder_buffer___024root____VbeforeTrig_h9fa7b992__0(Vtb_reorder_buffer___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root____VbeforeTrig_h9fa7b992__0\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_reorder_buffer__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_reorder_buffer__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.tb_reorder_buffer__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_reorder_buffer__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_reorder_buffer__DOT__clk__0 
        = vlSelfRef.tb_reorder_buffer__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h9fa7b8d8__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h9fa7b992__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9fa7b992__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9fa7b992__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9fa7b992__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_reorder_buffer___024root____VbeforeTrig_h9fa7b8d8__0(Vtb_reorder_buffer___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root____VbeforeTrig_h9fa7b8d8__0\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_reorder_buffer__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_reorder_buffer__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.tb_reorder_buffer__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_reorder_buffer__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_reorder_buffer__DOT__clk__0 
        = vlSelfRef.tb_reorder_buffer__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h9fa7b8d8__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h9fa7b992__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9fa7b992__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9fa7b992__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9fa7b992__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_reorder_buffer___024root___eval_debug_assertions(Vtb_reorder_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_reorder_buffer___024root___eval_debug_assertions\n"); );
    Vtb_reorder_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
