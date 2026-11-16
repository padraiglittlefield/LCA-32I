// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_scheduler.h for the primary calling header

#include "Vtb_scheduler__pch.h"

VL_ATTR_COLD void Vtb_scheduler___024root___eval_initial__TOP(Vtb_scheduler___024root* vlSelf);
VlCoroutine Vtb_scheduler___024root___eval_initial__TOP__Vtiming__0(Vtb_scheduler___024root* vlSelf);
VlCoroutine Vtb_scheduler___024root___eval_initial__TOP__Vtiming__1(Vtb_scheduler___024root* vlSelf);

void Vtb_scheduler___024root___eval_initial(Vtb_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___eval_initial\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_scheduler___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vtb_scheduler___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_scheduler___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_scheduler___024root___eval_initial__TOP__Vtiming__0(Vtb_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "sim/tb_scheduler.sv", 
                                             49);
        vlSelfRef.tb_scheduler__DOT__clk = 1U;
        vlSelfRef.tb_scheduler__DOT__cycle_count = 
            ((IData)(1U) + vlSelfRef.tb_scheduler__DOT__cycle_count);
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "sim/tb_scheduler.sv", 
                                             51);
        vlSelfRef.tb_scheduler__DOT__clk = 0U;
    }
    co_return;
}

void Vtb_scheduler___024root____VbeforeTrig_h289396db__0(Vtb_scheduler___024root* vlSelf, const char* __VeventDescription);
void Vtb_scheduler___024root____VbeforeTrig_h28939637__0(Vtb_scheduler___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_scheduler___024root___eval_initial__TOP__Vtiming__1(Vtb_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_scheduler__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_scheduler__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    SData/*15:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__3__dep_mask;
    __Vtask_tb_scheduler__DOT__dispatch_entry__3__dep_mask = 0;
    CData/*5:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__3__dst_preg;
    __Vtask_tb_scheduler__DOT__dispatch_entry__3__dst_preg = 0;
    CData/*5:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__3__src1_preg;
    __Vtask_tb_scheduler__DOT__dispatch_entry__3__src1_preg = 0;
    CData/*5:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__3__src2_preg;
    __Vtask_tb_scheduler__DOT__dispatch_entry__3__src2_preg = 0;
    IData/*31:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__3__pc_val;
    __Vtask_tb_scheduler__DOT__dispatch_entry__3__pc_val = 0;
    IData/*31:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__3__imm;
    __Vtask_tb_scheduler__DOT__dispatch_entry__3__imm = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__4__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__4__condition = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__5__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__5__condition = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__6__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__6__condition = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__8__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__8__condition = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__9__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__9__condition = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__10__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__10__condition = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__12__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__12__condition = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__13__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__13__condition = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__14__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__14__condition = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__15__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__15__condition = 0;
    SData/*15:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__17__dep_mask;
    __Vtask_tb_scheduler__DOT__dispatch_entry__17__dep_mask = 0;
    CData/*5:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__17__dst_preg;
    __Vtask_tb_scheduler__DOT__dispatch_entry__17__dst_preg = 0;
    CData/*5:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__17__src1_preg;
    __Vtask_tb_scheduler__DOT__dispatch_entry__17__src1_preg = 0;
    CData/*5:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__17__src2_preg;
    __Vtask_tb_scheduler__DOT__dispatch_entry__17__src2_preg = 0;
    IData/*31:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__17__pc_val;
    __Vtask_tb_scheduler__DOT__dispatch_entry__17__pc_val = 0;
    IData/*31:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__17__imm;
    __Vtask_tb_scheduler__DOT__dispatch_entry__17__imm = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__18__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__18__condition = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__19__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__19__condition = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__20__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__20__condition = 0;
    SData/*15:0*/ __Vtask_tb_scheduler__DOT__set_global_ready__22__mask;
    __Vtask_tb_scheduler__DOT__set_global_ready__22__mask = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__23__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__23__condition = 0;
    SData/*15:0*/ __Vtask_tb_scheduler__DOT__set_global_ready__24__mask;
    __Vtask_tb_scheduler__DOT__set_global_ready__24__mask = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__25__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__25__condition = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__26__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__26__condition = 0;
    SData/*15:0*/ __Vtask_tb_scheduler__DOT__set_global_ready__27__mask;
    __Vtask_tb_scheduler__DOT__set_global_ready__27__mask = 0;
    SData/*15:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__30__dep_mask;
    __Vtask_tb_scheduler__DOT__dispatch_entry__30__dep_mask = 0;
    CData/*5:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__30__dst_preg;
    __Vtask_tb_scheduler__DOT__dispatch_entry__30__dst_preg = 0;
    CData/*5:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__30__src1_preg;
    __Vtask_tb_scheduler__DOT__dispatch_entry__30__src1_preg = 0;
    CData/*5:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__30__src2_preg;
    __Vtask_tb_scheduler__DOT__dispatch_entry__30__src2_preg = 0;
    IData/*31:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__30__pc_val;
    __Vtask_tb_scheduler__DOT__dispatch_entry__30__pc_val = 0;
    IData/*31:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__30__imm;
    __Vtask_tb_scheduler__DOT__dispatch_entry__30__imm = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__31__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__31__condition = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__32__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__32__condition = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__34__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__34__condition = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__35__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__35__condition = 0;
    SData/*15:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__38__dep_mask;
    __Vtask_tb_scheduler__DOT__dispatch_entry__38__dep_mask = 0;
    CData/*5:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__38__dst_preg;
    __Vtask_tb_scheduler__DOT__dispatch_entry__38__dst_preg = 0;
    CData/*5:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__38__src1_preg;
    __Vtask_tb_scheduler__DOT__dispatch_entry__38__src1_preg = 0;
    CData/*5:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__38__src2_preg;
    __Vtask_tb_scheduler__DOT__dispatch_entry__38__src2_preg = 0;
    IData/*31:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__38__pc_val;
    __Vtask_tb_scheduler__DOT__dispatch_entry__38__pc_val = 0;
    IData/*31:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__38__imm;
    __Vtask_tb_scheduler__DOT__dispatch_entry__38__imm = 0;
    SData/*15:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__39__dep_mask;
    __Vtask_tb_scheduler__DOT__dispatch_entry__39__dep_mask = 0;
    CData/*5:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__39__dst_preg;
    __Vtask_tb_scheduler__DOT__dispatch_entry__39__dst_preg = 0;
    CData/*5:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__39__src1_preg;
    __Vtask_tb_scheduler__DOT__dispatch_entry__39__src1_preg = 0;
    CData/*5:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__39__src2_preg;
    __Vtask_tb_scheduler__DOT__dispatch_entry__39__src2_preg = 0;
    IData/*31:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__39__pc_val;
    __Vtask_tb_scheduler__DOT__dispatch_entry__39__pc_val = 0;
    IData/*31:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__39__imm;
    __Vtask_tb_scheduler__DOT__dispatch_entry__39__imm = 0;
    SData/*15:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__40__dep_mask;
    __Vtask_tb_scheduler__DOT__dispatch_entry__40__dep_mask = 0;
    CData/*5:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__40__dst_preg;
    __Vtask_tb_scheduler__DOT__dispatch_entry__40__dst_preg = 0;
    CData/*5:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__40__src1_preg;
    __Vtask_tb_scheduler__DOT__dispatch_entry__40__src1_preg = 0;
    CData/*5:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__40__src2_preg;
    __Vtask_tb_scheduler__DOT__dispatch_entry__40__src2_preg = 0;
    IData/*31:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__40__pc_val;
    __Vtask_tb_scheduler__DOT__dispatch_entry__40__pc_val = 0;
    IData/*31:0*/ __Vtask_tb_scheduler__DOT__dispatch_entry__40__imm;
    __Vtask_tb_scheduler__DOT__dispatch_entry__40__imm = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__41__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__41__condition = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__42__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__42__condition = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__43__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__43__condition = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__44__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__44__condition = 0;
    CData/*0:0*/ __Vtask_tb_scheduler__DOT__check_assertion__45__condition;
    __Vtask_tb_scheduler__DOT__check_assertion__45__condition = 0;
    // Body
    vlSelfRef.tb_scheduler__DOT__clk = 0U;
    vlSelfRef.tb_scheduler__DOT__rst = 1U;
    vlSelfRef.tb_scheduler__DOT__disp_valid = 0U;
    vlSelfRef.tb_scheduler__DOT__disp_pkt[0U] = 0U;
    vlSelfRef.tb_scheduler__DOT__disp_pkt[1U] = 0U;
    vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] = 0U;
    vlSelfRef.tb_scheduler__DOT__disp_pkt[3U] = 0U;
    vlSelfRef.tb_scheduler__DOT__dependency_mask = 0U;
    vlSelfRef.tb_scheduler__DOT__global_ready_mask = 0U;
    VL_WRITEF_NX("=== Scheduler Testbench ===\n",0);
    VL_WRITEF_NX("\n[RESET] Resetting DUT\n",0);
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         90);
    vlSelfRef.tb_scheduler__DOT__rst = 1U;
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         92);
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         93);
    vlSelfRef.tb_scheduler__DOT__rst = 0U;
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         95);
    VL_WRITEF_NX("[RESET] Reset complete\n\n",0);
    VL_WRITEF_NX("\n[Test 1] Dispatch entry with no dependencies\n",0);
    __Vtask_tb_scheduler__DOT__dispatch_entry__3__imm = 0U;
    __Vtask_tb_scheduler__DOT__dispatch_entry__3__pc_val = 0x00001000U;
    __Vtask_tb_scheduler__DOT__dispatch_entry__3__src2_preg = 0x1eU;
    __Vtask_tb_scheduler__DOT__dispatch_entry__3__src1_preg = 0x14U;
    __Vtask_tb_scheduler__DOT__dispatch_entry__3__dst_preg = 0x0aU;
    __Vtask_tb_scheduler__DOT__dispatch_entry__3__dep_mask = 0U;
    vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] = ((0xf8007fffU 
                                                  & vlSelfRef.tb_scheduler__DOT__disp_pkt[2U]) 
                                                 | (0xffff8000U 
                                                    & (((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__3__dst_preg) 
                                                        << 0x00000015U) 
                                                       | ((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__3__src1_preg) 
                                                          << 0x0000000fU))));
    vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] = ((0xffffc0ffU 
                                                  & vlSelfRef.tb_scheduler__DOT__disp_pkt[2U]) 
                                                 | ((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__3__src2_preg) 
                                                    << 8U));
    vlSelfRef.tb_scheduler__DOT__disp_pkt[0U] = ((3U 
                                                  & vlSelfRef.tb_scheduler__DOT__disp_pkt[0U]) 
                                                 | ((IData)(
                                                            (0x0000000100000000ULL 
                                                             | (QData)((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__3__pc_val)))) 
                                                    << 2U));
    vlSelfRef.tb_scheduler__DOT__disp_pkt[1U] = (((IData)(
                                                          (0x0000000100000000ULL 
                                                           | (QData)((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__3__pc_val)))) 
                                                  >> 0x0000001eU) 
                                                 | ((__Vtask_tb_scheduler__DOT__dispatch_entry__3__imm 
                                                     << 3U) 
                                                    | ((IData)(
                                                               ((0x0000000100000000ULL 
                                                                 | (QData)((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__3__pc_val))) 
                                                                >> 0x00000020U)) 
                                                       << 2U)));
    vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] = ((0xfffffff8U 
                                                  & vlSelfRef.tb_scheduler__DOT__disp_pkt[2U]) 
                                                 | (((3U 
                                                      & (__Vtask_tb_scheduler__DOT__dispatch_entry__3__imm 
                                                         >> 0x0000001dU)) 
                                                     | ((IData)(
                                                                ((0x0000000100000000ULL 
                                                                  | (QData)((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__3__pc_val))) 
                                                                 >> 0x00000020U)) 
                                                        >> 0x0000001eU)) 
                                                    | (4U 
                                                       & (__Vtask_tb_scheduler__DOT__dispatch_entry__3__imm 
                                                          >> 0x0000001dU))));
    vlSelfRef.tb_scheduler__DOT__disp_valid = 1U;
    vlSelfRef.tb_scheduler__DOT__dependency_mask = __Vtask_tb_scheduler__DOT__dispatch_entry__3__dep_mask;
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         119);
    VL_WRITEF_NX("  Dispatched to entry: %0#, Full: %0b, Cycle: %0d\n",0,
                 2,vlSelfRef.tb_scheduler__DOT__rs_entry_idx,
                 1,(IData)(vlSelfRef.tb_scheduler__DOT__rs_full),
                 32,vlSelfRef.tb_scheduler__DOT__cycle_count);
    vlSelfRef.tb_scheduler__DOT__disp_valid = 0U;
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         122);
    Vtb_scheduler___024root____VbeforeTrig_h28939637__0(vlSelf, 
                                                        "@(posedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h28939637__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         140);
    VL_WRITEF_NX("Current Clock Cycle: %0d\n",0,32,
                 vlSelfRef.tb_scheduler__DOT__cycle_count);
    __Vtask_tb_scheduler__DOT__check_assertion__4__condition 
        = (1U & (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid));
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__4__test_name = "Entry should be valid after dispatch"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__4__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__4__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__4__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    __Vtask_tb_scheduler__DOT__check_assertion__5__condition 
        = (1U & (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__reqs_in));
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__5__test_name = "Should have request after dispatch with no deps"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__5__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__5__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__5__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    __Vtask_tb_scheduler__DOT__check_assertion__6__condition 
        = (0x0aU == (0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][2U] 
                                    >> 0x00000015U)));
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__6__test_name = "Payload RAM should store dispatch packet"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__6__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__6__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__6__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 2] Select should grant ready entry\nCurrent Clock Cycle: %0d\n",0,
                 32,vlSelfRef.tb_scheduler__DOT__cycle_count);
    __Vtask_tb_scheduler__DOT__check_assertion__8__condition 
        = vlSelfRef.tb_scheduler__DOT__dut__DOT__grant_valid;
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__8__test_name = "Grant should be valid"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__8__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__8__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__8__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    __Vtask_tb_scheduler__DOT__check_assertion__9__condition 
        = (1U & (~ ((IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__reqs_out) 
                    >> (IData)(vlSelfRef.tb_scheduler__DOT__test_select_grant__Vstatic__granted_entry))));
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__9__test_name = "Granted entry should not request anymore"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__9__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__9__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__9__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    Vtb_scheduler___024root____VbeforeTrig_h28939637__0(vlSelf, 
                                                        "@(posedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h28939637__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         156);
    __Vtask_tb_scheduler__DOT__check_assertion__10__condition 
        = vlSelfRef.tb_scheduler__DOT__rr_fire_valid;
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__10__test_name = "Fire valid should be asserted to reg read"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__10__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__10__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__10__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 3] Register read receives correct payload\nCurrent Clock Cycle: %0d\n",0,
                 32,vlSelfRef.tb_scheduler__DOT__cycle_count);
    __Vtask_tb_scheduler__DOT__check_assertion__12__condition 
        = (0x0aU == (0x0000003fU & (vlSelfRef.tb_scheduler__DOT__rr_pkt[2U] 
                                    >> 0x00000015U)));
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__12__test_name = "Payload dst_preg should match"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__12__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__12__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__12__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    __Vtask_tb_scheduler__DOT__check_assertion__13__condition 
        = (0x14U == (0x0000003fU & (vlSelfRef.tb_scheduler__DOT__rr_pkt[2U] 
                                    >> 0x0000000fU)));
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__13__test_name = "Payload src1_preg should match"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__13__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__13__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__13__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    __Vtask_tb_scheduler__DOT__check_assertion__14__condition 
        = (0x1eU == (0x0000003fU & (vlSelfRef.tb_scheduler__DOT__rr_pkt[2U] 
                                    >> 8U)));
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__14__test_name = "Payload src2_preg should match"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__14__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__14__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__14__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    __Vtask_tb_scheduler__DOT__check_assertion__15__condition 
        = (0x00001000U == ((vlSelfRef.tb_scheduler__DOT__rr_pkt[1U] 
                            << 0x0000001eU) | (vlSelfRef.tb_scheduler__DOT__rr_pkt[0U] 
                                               >> 2U)));
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__15__test_name = "Payload PC should match"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__15__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__15__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__15__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 4] Dispatch entry with dependencies\nCurrent Clock Cycle: %0d\n",0,
                 32,vlSelfRef.tb_scheduler__DOT__cycle_count);
    vlSelfRef.tb_scheduler__DOT__test5_dispatched_entry 
        = vlSelfRef.tb_scheduler__DOT__rs_entry_idx;
    __Vtask_tb_scheduler__DOT__dispatch_entry__17__imm = 0x00000100U;
    __Vtask_tb_scheduler__DOT__dispatch_entry__17__pc_val = 0x00002000U;
    __Vtask_tb_scheduler__DOT__dispatch_entry__17__src2_preg = 0x23U;
    __Vtask_tb_scheduler__DOT__dispatch_entry__17__src1_preg = 0x19U;
    __Vtask_tb_scheduler__DOT__dispatch_entry__17__dst_preg = 0x0fU;
    __Vtask_tb_scheduler__DOT__dispatch_entry__17__dep_mask = 3U;
    vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] = ((0xf8007fffU 
                                                  & vlSelfRef.tb_scheduler__DOT__disp_pkt[2U]) 
                                                 | (0xffff8000U 
                                                    & (((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__17__dst_preg) 
                                                        << 0x00000015U) 
                                                       | ((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__17__src1_preg) 
                                                          << 0x0000000fU))));
    vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] = ((0xffffc0ffU 
                                                  & vlSelfRef.tb_scheduler__DOT__disp_pkt[2U]) 
                                                 | ((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__17__src2_preg) 
                                                    << 8U));
    vlSelfRef.tb_scheduler__DOT__disp_pkt[0U] = ((3U 
                                                  & vlSelfRef.tb_scheduler__DOT__disp_pkt[0U]) 
                                                 | ((IData)(
                                                            (0x0000000100000000ULL 
                                                             | (QData)((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__17__pc_val)))) 
                                                    << 2U));
    vlSelfRef.tb_scheduler__DOT__disp_pkt[1U] = (((IData)(
                                                          (0x0000000100000000ULL 
                                                           | (QData)((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__17__pc_val)))) 
                                                  >> 0x0000001eU) 
                                                 | ((__Vtask_tb_scheduler__DOT__dispatch_entry__17__imm 
                                                     << 3U) 
                                                    | ((IData)(
                                                               ((0x0000000100000000ULL 
                                                                 | (QData)((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__17__pc_val))) 
                                                                >> 0x00000020U)) 
                                                       << 2U)));
    vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] = ((0xfffffff8U 
                                                  & vlSelfRef.tb_scheduler__DOT__disp_pkt[2U]) 
                                                 | (((3U 
                                                      & (__Vtask_tb_scheduler__DOT__dispatch_entry__17__imm 
                                                         >> 0x0000001dU)) 
                                                     | ((IData)(
                                                                ((0x0000000100000000ULL 
                                                                  | (QData)((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__17__pc_val))) 
                                                                 >> 0x00000020U)) 
                                                        >> 0x0000001eU)) 
                                                    | (4U 
                                                       & (__Vtask_tb_scheduler__DOT__dispatch_entry__17__imm 
                                                          >> 0x0000001dU))));
    vlSelfRef.tb_scheduler__DOT__disp_valid = 1U;
    vlSelfRef.tb_scheduler__DOT__dependency_mask = __Vtask_tb_scheduler__DOT__dispatch_entry__17__dep_mask;
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         119);
    VL_WRITEF_NX("  Dispatched to entry: %0#, Full: %0b, Cycle: %0d\n",0,
                 2,vlSelfRef.tb_scheduler__DOT__rs_entry_idx,
                 1,(IData)(vlSelfRef.tb_scheduler__DOT__rs_full),
                 32,vlSelfRef.tb_scheduler__DOT__cycle_count);
    vlSelfRef.tb_scheduler__DOT__disp_valid = 0U;
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         122);
    VL_WRITEF_NX("  Reqs (should be blocked by deps): %b\n",0,
                 4,vlSelfRef.tb_scheduler__DOT__dut__DOT__reqs_in);
    __Vtask_tb_scheduler__DOT__check_assertion__18__condition 
        = (1U & (~ ((IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__reqs_in) 
                    >> (IData)(vlSelfRef.tb_scheduler__DOT__test5_dispatched_entry))));
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__18__test_name = "Entry with dependencies should not request"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__18__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__18__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__18__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    __Vtask_tb_scheduler__DOT__check_assertion__19__condition 
        = (1U & ((IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid) 
                 >> (IData)(vlSelfRef.tb_scheduler__DOT__test5_dispatched_entry)));
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__19__test_name = "Entry should be valid"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__19__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__19__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__19__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    __Vtask_tb_scheduler__DOT__check_assertion__20__condition 
        = (0x0fU == (0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
                                    [vlSelfRef.tb_scheduler__DOT__test5_dispatched_entry][2U] 
                                    >> 0x00000015U)));
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__20__test_name = "Payload should be stored"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__20__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__20__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__20__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 5] Clear one dependency with global ready mask\n",0);
    __Vtask_tb_scheduler__DOT__set_global_ready__22__mask = 1U;
    vlSelfRef.tb_scheduler__DOT__global_ready_mask 
        = __Vtask_tb_scheduler__DOT__set_global_ready__22__mask;
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         130);
    VL_WRITEF_NX("  Global ready mask updated: %b, Reqs: %b\n",0,
                 16,vlSelfRef.tb_scheduler__DOT__global_ready_mask,
                 4,(IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__reqs_in));
    __Vtask_tb_scheduler__DOT__check_assertion__23__condition 
        = (3U != vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
           [vlSelfRef.tb_scheduler__DOT__test5_dispatched_entry]);
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__23__test_name = "Dependencies should be half cleared"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__23__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__23__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__23__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    VL_WRITEF_NX("Dependency Mask: %0b\n\n[Test 6] Clear remaining dependency\n",0,
                 16,vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
                 [vlSelfRef.tb_scheduler__DOT__test5_dispatched_entry]);
    __Vtask_tb_scheduler__DOT__set_global_ready__24__mask = 3U;
    vlSelfRef.tb_scheduler__DOT__global_ready_mask 
        = __Vtask_tb_scheduler__DOT__set_global_ready__24__mask;
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         130);
    VL_WRITEF_NX("  Global ready mask updated: %b, Reqs: %b\n",0,
                 16,vlSelfRef.tb_scheduler__DOT__global_ready_mask,
                 4,(IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__reqs_in));
    __Vtask_tb_scheduler__DOT__check_assertion__25__condition 
        = (0U == vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row
           [vlSelfRef.tb_scheduler__DOT__test5_dispatched_entry]);
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__25__test_name = "All dependencies should be cleared"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__25__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__25__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__25__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    __Vtask_tb_scheduler__DOT__check_assertion__26__condition 
        = (1U & ((IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__reqs_out) 
                 >> (IData)(vlSelfRef.tb_scheduler__DOT__test5_dispatched_entry)));
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__26__test_name = "Entry should now request"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__26__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__26__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__26__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    __Vtask_tb_scheduler__DOT__set_global_ready__27__mask = 0U;
    vlSelfRef.tb_scheduler__DOT__global_ready_mask 
        = __Vtask_tb_scheduler__DOT__set_global_ready__27__mask;
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         130);
    VL_WRITEF_NX("  Global ready mask updated: %b, Reqs: %b\n",0,
                 16,vlSelfRef.tb_scheduler__DOT__global_ready_mask,
                 4,(IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__reqs_in));
    VL_WRITEF_NX("\n[Test 7] Fill reservation station to capacity\n",0);
    VL_WRITEF_NX("\n[RESET] Resetting DUT\n",0);
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         90);
    vlSelfRef.tb_scheduler__DOT__rst = 1U;
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         92);
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         93);
    vlSelfRef.tb_scheduler__DOT__rst = 0U;
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         95);
    VL_WRITEF_NX("[RESET] Reset complete\n\n",0);
    vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__i = 0U;
    {
        while (VL_GTS_III(32, 4U, vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__i)) {
            if (vlSelfRef.tb_scheduler__DOT__rs_full) {
                VL_WRITEF_NX("  RS Full at entry %0d\n",0,
                             32,vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__i);
                goto __Vlabel0;
            } else {
                vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__dst_val 
                    = (0x0000003fU & vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__i);
                vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__src1_val 
                    = (0x0000003fU & ((IData)(1U) + vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__i));
                vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__src2_val 
                    = (0x0000003fU & ((IData)(2U) + vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__i));
                vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__pc_val 
                    = ((IData)(0x00004000U) + VL_SHIFTL_III(32,32,32, vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__i, 4U));
                __Vtask_tb_scheduler__DOT__dispatch_entry__30__imm = 0U;
                __Vtask_tb_scheduler__DOT__dispatch_entry__30__pc_val 
                    = vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__pc_val;
                __Vtask_tb_scheduler__DOT__dispatch_entry__30__src2_preg 
                    = vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__src2_val;
                __Vtask_tb_scheduler__DOT__dispatch_entry__30__src1_preg 
                    = vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__src1_val;
                __Vtask_tb_scheduler__DOT__dispatch_entry__30__dst_preg 
                    = vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__dst_val;
                __Vtask_tb_scheduler__DOT__dispatch_entry__30__dep_mask = 0U;
                vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] 
                    = ((0xf8007fffU & vlSelfRef.tb_scheduler__DOT__disp_pkt[2U]) 
                       | (0xffff8000U & (((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__30__dst_preg) 
                                          << 0x00000015U) 
                                         | ((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__30__src1_preg) 
                                            << 0x0000000fU))));
                vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] 
                    = ((0xffffc0ffU & vlSelfRef.tb_scheduler__DOT__disp_pkt[2U]) 
                       | ((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__30__src2_preg) 
                          << 8U));
                vlSelfRef.tb_scheduler__DOT__disp_pkt[0U] 
                    = ((3U & vlSelfRef.tb_scheduler__DOT__disp_pkt[0U]) 
                       | ((IData)((0x0000000100000000ULL 
                                   | (QData)((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__30__pc_val)))) 
                          << 2U));
                vlSelfRef.tb_scheduler__DOT__disp_pkt[1U] 
                    = (((IData)((0x0000000100000000ULL 
                                 | (QData)((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__30__pc_val)))) 
                        >> 0x0000001eU) | ((__Vtask_tb_scheduler__DOT__dispatch_entry__30__imm 
                                            << 3U) 
                                           | ((IData)(
                                                      ((0x0000000100000000ULL 
                                                        | (QData)((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__30__pc_val))) 
                                                       >> 0x00000020U)) 
                                              << 2U)));
                vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] 
                    = ((0xfffffff8U & vlSelfRef.tb_scheduler__DOT__disp_pkt[2U]) 
                       | (((3U & (__Vtask_tb_scheduler__DOT__dispatch_entry__30__imm 
                                  >> 0x0000001dU)) 
                           | ((IData)(((0x0000000100000000ULL 
                                        | (QData)((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__30__pc_val))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001eU)) | (4U 
                                                  & (__Vtask_tb_scheduler__DOT__dispatch_entry__30__imm 
                                                     >> 0x0000001dU))));
                vlSelfRef.tb_scheduler__DOT__disp_valid = 1U;
                vlSelfRef.tb_scheduler__DOT__dependency_mask 
                    = __Vtask_tb_scheduler__DOT__dispatch_entry__30__dep_mask;
                Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                                    "@(negedge tb_scheduler.clk)");
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
                co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_scheduler.clk)", 
                                                                     "sim/tb_scheduler.sv", 
                                                                     119);
                VL_WRITEF_NX("  Dispatched to entry: %0#, Full: %0b, Cycle: %0d\n",0,
                             2,vlSelfRef.tb_scheduler__DOT__rs_entry_idx,
                             1,(IData)(vlSelfRef.tb_scheduler__DOT__rs_full),
                             32,vlSelfRef.tb_scheduler__DOT__cycle_count);
                vlSelfRef.tb_scheduler__DOT__disp_valid = 0U;
                Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                                    "@(negedge tb_scheduler.clk)");
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
                co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_scheduler.clk)", 
                                                                     "sim/tb_scheduler.sv", 
                                                                     122);
            }
            vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__i);
        }
        __Vlabel0: ;
    }
    vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__valid_count = 0U;
    vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__i = 0U;
    vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__i = 1U;
    vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__i = 2U;
    if ((1U & (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid))) {
        vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__valid_count 
            = ((IData)(1U) + vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__valid_count);
    }
    vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__i = 3U;
    if ((2U & (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid))) {
        vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__valid_count 
            = ((IData)(1U) + vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__valid_count);
    }
    vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__i = 4U;
    if ((4U & (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid))) {
        vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__valid_count 
            = ((IData)(1U) + vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__valid_count);
    }
    if ((8U & (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid))) {
        vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__valid_count 
            = ((IData)(1U) + vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__valid_count);
    }
    VL_WRITEF_NX("  Valid entries: %0d, RS Full: %0b\n",0,
                 32,vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__valid_count,
                 1,(IData)(vlSelfRef.tb_scheduler__DOT__rs_full));
    __Vtask_tb_scheduler__DOT__check_assertion__31__condition 
        = (4U == vlSelfRef.tb_scheduler__DOT__test_fill_rs__Vstatic__valid_count);
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__31__test_name = "All RS entries should be valid"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__31__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__31__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__31__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    __Vtask_tb_scheduler__DOT__check_assertion__32__condition 
        = vlSelfRef.tb_scheduler__DOT__rs_full;
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__32__test_name = "RS should report full"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__32__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__32__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__32__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 8] Attempt dispatch when RS is full\n",0);
    vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_before = 0U;
    if ((1U & (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid))) {
        vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_before 
            = ((IData)(1U) + vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_before);
    }
    if ((2U & (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid))) {
        vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_before 
            = ((IData)(1U) + vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_before);
    }
    if ((4U & (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid))) {
        vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_before 
            = ((IData)(1U) + vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_before);
    }
    vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__i = 0U;
    vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__i = 1U;
    vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__i = 2U;
    vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__i = 3U;
    vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__i = 4U;
    vlSelfRef.tb_scheduler__DOT__disp_valid = 1U;
    vlSelfRef.tb_scheduler__DOT__dependency_mask = 0U;
    vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] = (0x04600000U 
                                                 | (0xf81fffffU 
                                                    & vlSelfRef.tb_scheduler__DOT__disp_pkt[2U]));
    vlSelfRef.tb_scheduler__DOT__disp_pkt[1U] = (4U 
                                                 | vlSelfRef.tb_scheduler__DOT__disp_pkt[1U]);
    if ((8U & (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid))) {
        vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_before 
            = ((IData)(1U) + vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_before);
    }
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         253);
    VL_WRITEF_NX("  Full: %0b (should reject dispatch)\n",0,
                 1,vlSelfRef.tb_scheduler__DOT__rs_full);
    vlSelfRef.tb_scheduler__DOT__disp_valid = 0U;
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         256);
    vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_after = 0U;
    if ((1U & (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid))) {
        vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_after 
            = ((IData)(1U) + vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_after);
    }
    if ((2U & (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid))) {
        vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_after 
            = ((IData)(1U) + vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_after);
    }
    if ((4U & (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid))) {
        vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_after 
            = ((IData)(1U) + vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_after);
    }
    if ((8U & (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid))) {
        vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_after 
            = ((IData)(1U) + vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_after);
    }
    vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__i = 0U;
    vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__i = 1U;
    vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__i = 2U;
    vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__i = 3U;
    vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__i = 4U;
    __Vtask_tb_scheduler__DOT__check_assertion__34__condition 
        = (vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_before 
           == vlSelfRef.tb_scheduler__DOT__test_dispatch_when_full__Vstatic__valid_count_after);
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__34__test_name = "No new entry added when full"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__34__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__34__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__34__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    __Vtask_tb_scheduler__DOT__check_assertion__35__condition 
        = vlSelfRef.tb_scheduler__DOT__rs_full;
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__35__test_name = "RS should still be full"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__35__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__35__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__35__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 9] Verify payload RAM integrity\n",0);
    VL_WRITEF_NX("\n[RESET] Resetting DUT\n",0);
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         90);
    vlSelfRef.tb_scheduler__DOT__rst = 1U;
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         92);
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         93);
    vlSelfRef.tb_scheduler__DOT__rst = 0U;
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         95);
    VL_WRITEF_NX("[RESET] Reset complete\n\n",0);
    __Vtask_tb_scheduler__DOT__dispatch_entry__38__imm = 0x00000011U;
    __Vtask_tb_scheduler__DOT__dispatch_entry__38__pc_val = 0x0000a000U;
    __Vtask_tb_scheduler__DOT__dispatch_entry__38__src2_preg = 8U;
    __Vtask_tb_scheduler__DOT__dispatch_entry__38__src1_preg = 7U;
    __Vtask_tb_scheduler__DOT__dispatch_entry__38__dst_preg = 6U;
    __Vtask_tb_scheduler__DOT__dispatch_entry__38__dep_mask = 0U;
    vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] = ((0xf8007fffU 
                                                  & vlSelfRef.tb_scheduler__DOT__disp_pkt[2U]) 
                                                 | (0xffff8000U 
                                                    & (((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__38__dst_preg) 
                                                        << 0x00000015U) 
                                                       | ((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__38__src1_preg) 
                                                          << 0x0000000fU))));
    vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] = ((0xffffc0ffU 
                                                  & vlSelfRef.tb_scheduler__DOT__disp_pkt[2U]) 
                                                 | ((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__38__src2_preg) 
                                                    << 8U));
    vlSelfRef.tb_scheduler__DOT__disp_pkt[0U] = ((3U 
                                                  & vlSelfRef.tb_scheduler__DOT__disp_pkt[0U]) 
                                                 | ((IData)(
                                                            (0x0000000100000000ULL 
                                                             | (QData)((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__38__pc_val)))) 
                                                    << 2U));
    vlSelfRef.tb_scheduler__DOT__disp_pkt[1U] = (((IData)(
                                                          (0x0000000100000000ULL 
                                                           | (QData)((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__38__pc_val)))) 
                                                  >> 0x0000001eU) 
                                                 | ((__Vtask_tb_scheduler__DOT__dispatch_entry__38__imm 
                                                     << 3U) 
                                                    | ((IData)(
                                                               ((0x0000000100000000ULL 
                                                                 | (QData)((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__38__pc_val))) 
                                                                >> 0x00000020U)) 
                                                       << 2U)));
    vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] = ((0xfffffff8U 
                                                  & vlSelfRef.tb_scheduler__DOT__disp_pkt[2U]) 
                                                 | (((3U 
                                                      & (__Vtask_tb_scheduler__DOT__dispatch_entry__38__imm 
                                                         >> 0x0000001dU)) 
                                                     | ((IData)(
                                                                ((0x0000000100000000ULL 
                                                                  | (QData)((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__38__pc_val))) 
                                                                 >> 0x00000020U)) 
                                                        >> 0x0000001eU)) 
                                                    | (4U 
                                                       & (__Vtask_tb_scheduler__DOT__dispatch_entry__38__imm 
                                                          >> 0x0000001dU))));
    vlSelfRef.tb_scheduler__DOT__disp_valid = 1U;
    vlSelfRef.tb_scheduler__DOT__dependency_mask = __Vtask_tb_scheduler__DOT__dispatch_entry__38__dep_mask;
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         119);
    VL_WRITEF_NX("  Dispatched to entry: %0#, Full: %0b, Cycle: %0d\n",0,
                 2,vlSelfRef.tb_scheduler__DOT__rs_entry_idx,
                 1,(IData)(vlSelfRef.tb_scheduler__DOT__rs_full),
                 32,vlSelfRef.tb_scheduler__DOT__cycle_count);
    vlSelfRef.tb_scheduler__DOT__disp_valid = 0U;
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         122);
    __Vtask_tb_scheduler__DOT__dispatch_entry__39__imm = 0x00000022U;
    __Vtask_tb_scheduler__DOT__dispatch_entry__39__pc_val = 0x0000b000U;
    __Vtask_tb_scheduler__DOT__dispatch_entry__39__src2_preg = 0x12U;
    __Vtask_tb_scheduler__DOT__dispatch_entry__39__src1_preg = 0x11U;
    __Vtask_tb_scheduler__DOT__dispatch_entry__39__dst_preg = 0x10U;
    __Vtask_tb_scheduler__DOT__dispatch_entry__39__dep_mask = 0U;
    vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] = ((0xf8007fffU 
                                                  & vlSelfRef.tb_scheduler__DOT__disp_pkt[2U]) 
                                                 | (0xffff8000U 
                                                    & (((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__39__dst_preg) 
                                                        << 0x00000015U) 
                                                       | ((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__39__src1_preg) 
                                                          << 0x0000000fU))));
    vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] = ((0xffffc0ffU 
                                                  & vlSelfRef.tb_scheduler__DOT__disp_pkt[2U]) 
                                                 | ((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__39__src2_preg) 
                                                    << 8U));
    vlSelfRef.tb_scheduler__DOT__disp_pkt[0U] = ((3U 
                                                  & vlSelfRef.tb_scheduler__DOT__disp_pkt[0U]) 
                                                 | ((IData)(
                                                            (0x0000000100000000ULL 
                                                             | (QData)((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__39__pc_val)))) 
                                                    << 2U));
    vlSelfRef.tb_scheduler__DOT__disp_pkt[1U] = (((IData)(
                                                          (0x0000000100000000ULL 
                                                           | (QData)((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__39__pc_val)))) 
                                                  >> 0x0000001eU) 
                                                 | ((__Vtask_tb_scheduler__DOT__dispatch_entry__39__imm 
                                                     << 3U) 
                                                    | ((IData)(
                                                               ((0x0000000100000000ULL 
                                                                 | (QData)((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__39__pc_val))) 
                                                                >> 0x00000020U)) 
                                                       << 2U)));
    vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] = ((0xfffffff8U 
                                                  & vlSelfRef.tb_scheduler__DOT__disp_pkt[2U]) 
                                                 | (((3U 
                                                      & (__Vtask_tb_scheduler__DOT__dispatch_entry__39__imm 
                                                         >> 0x0000001dU)) 
                                                     | ((IData)(
                                                                ((0x0000000100000000ULL 
                                                                  | (QData)((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__39__pc_val))) 
                                                                 >> 0x00000020U)) 
                                                        >> 0x0000001eU)) 
                                                    | (4U 
                                                       & (__Vtask_tb_scheduler__DOT__dispatch_entry__39__imm 
                                                          >> 0x0000001dU))));
    vlSelfRef.tb_scheduler__DOT__disp_valid = 1U;
    vlSelfRef.tb_scheduler__DOT__dependency_mask = __Vtask_tb_scheduler__DOT__dispatch_entry__39__dep_mask;
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         119);
    VL_WRITEF_NX("  Dispatched to entry: %0#, Full: %0b, Cycle: %0d\n",0,
                 2,vlSelfRef.tb_scheduler__DOT__rs_entry_idx,
                 1,(IData)(vlSelfRef.tb_scheduler__DOT__rs_full),
                 32,vlSelfRef.tb_scheduler__DOT__cycle_count);
    vlSelfRef.tb_scheduler__DOT__disp_valid = 0U;
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         122);
    __Vtask_tb_scheduler__DOT__dispatch_entry__40__imm = 0x00000033U;
    __Vtask_tb_scheduler__DOT__dispatch_entry__40__pc_val = 0x0000c000U;
    __Vtask_tb_scheduler__DOT__dispatch_entry__40__src2_preg = 0x1cU;
    __Vtask_tb_scheduler__DOT__dispatch_entry__40__src1_preg = 0x1bU;
    __Vtask_tb_scheduler__DOT__dispatch_entry__40__dst_preg = 0x1aU;
    __Vtask_tb_scheduler__DOT__dispatch_entry__40__dep_mask = 0U;
    vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] = ((0xf8007fffU 
                                                  & vlSelfRef.tb_scheduler__DOT__disp_pkt[2U]) 
                                                 | (0xffff8000U 
                                                    & (((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__40__dst_preg) 
                                                        << 0x00000015U) 
                                                       | ((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__40__src1_preg) 
                                                          << 0x0000000fU))));
    vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] = ((0xffffc0ffU 
                                                  & vlSelfRef.tb_scheduler__DOT__disp_pkt[2U]) 
                                                 | ((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__40__src2_preg) 
                                                    << 8U));
    vlSelfRef.tb_scheduler__DOT__disp_pkt[0U] = ((3U 
                                                  & vlSelfRef.tb_scheduler__DOT__disp_pkt[0U]) 
                                                 | ((IData)(
                                                            (0x0000000100000000ULL 
                                                             | (QData)((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__40__pc_val)))) 
                                                    << 2U));
    vlSelfRef.tb_scheduler__DOT__disp_pkt[1U] = (((IData)(
                                                          (0x0000000100000000ULL 
                                                           | (QData)((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__40__pc_val)))) 
                                                  >> 0x0000001eU) 
                                                 | ((__Vtask_tb_scheduler__DOT__dispatch_entry__40__imm 
                                                     << 3U) 
                                                    | ((IData)(
                                                               ((0x0000000100000000ULL 
                                                                 | (QData)((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__40__pc_val))) 
                                                                >> 0x00000020U)) 
                                                       << 2U)));
    vlSelfRef.tb_scheduler__DOT__disp_pkt[2U] = ((0xfffffff8U 
                                                  & vlSelfRef.tb_scheduler__DOT__disp_pkt[2U]) 
                                                 | (((3U 
                                                      & (__Vtask_tb_scheduler__DOT__dispatch_entry__40__imm 
                                                         >> 0x0000001dU)) 
                                                     | ((IData)(
                                                                ((0x0000000100000000ULL 
                                                                  | (QData)((IData)(__Vtask_tb_scheduler__DOT__dispatch_entry__40__pc_val))) 
                                                                 >> 0x00000020U)) 
                                                        >> 0x0000001eU)) 
                                                    | (4U 
                                                       & (__Vtask_tb_scheduler__DOT__dispatch_entry__40__imm 
                                                          >> 0x0000001dU))));
    vlSelfRef.tb_scheduler__DOT__disp_valid = 1U;
    vlSelfRef.tb_scheduler__DOT__dependency_mask = __Vtask_tb_scheduler__DOT__dispatch_entry__40__dep_mask;
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         119);
    VL_WRITEF_NX("  Dispatched to entry: %0#, Full: %0b, Cycle: %0d\n",0,
                 2,vlSelfRef.tb_scheduler__DOT__rs_entry_idx,
                 1,(IData)(vlSelfRef.tb_scheduler__DOT__rs_full),
                 32,vlSelfRef.tb_scheduler__DOT__cycle_count);
    vlSelfRef.tb_scheduler__DOT__disp_valid = 0U;
    Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                        "@(negedge tb_scheduler.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scheduler.clk)", 
                                                         "sim/tb_scheduler.sv", 
                                                         122);
    __Vtask_tb_scheduler__DOT__check_assertion__41__condition 
        = (6U == (0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][2U] 
                                 >> 0x00000015U)));
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__41__test_name = "Entry 0 dst_preg correct"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__41__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__41__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__41__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    __Vtask_tb_scheduler__DOT__check_assertion__42__condition 
        = (0x10U == (0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][2U] 
                                    >> 0x00000015U)));
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__42__test_name = "Entry 1 dst_preg correct"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__42__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__42__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__42__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    __Vtask_tb_scheduler__DOT__check_assertion__43__condition 
        = (0x1aU == (0x0000003fU & (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][2U] 
                                    >> 0x00000015U)));
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__43__test_name = "Entry 2 dst_preg correct"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__43__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__43__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__43__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    __Vtask_tb_scheduler__DOT__check_assertion__44__condition 
        = (0x0000a000U == ((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][1U] 
                            << 0x0000001eU) | (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][0U] 
                                               >> 2U)));
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__44__test_name = "Entry 0 PC correct"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__44__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__44__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__44__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    __Vtask_tb_scheduler__DOT__check_assertion__45__condition 
        = (0x00000022U == ((vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][2U] 
                            << 0x0000001dU) | (vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][1U] 
                                               >> 3U)));
    vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__45__test_name = "Entry 1 imm correct"s;
    if (__Vtask_tb_scheduler__DOT__check_assertion__45__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__45__test_name));
        vlSelfRef.tb_scheduler__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_scheduler__DOT__check_assertion__45__test_name));
        vlSelfRef.tb_scheduler__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    tb_scheduler__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, tb_scheduler__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_scheduler___024root____VbeforeTrig_h289396db__0(vlSelf, 
                                                            "@(negedge tb_scheduler.clk)");
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        co_await vlSelfRef.__VtrigSched_h289396db__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_scheduler.clk)", 
                                                             "sim/tb_scheduler.sv", 
                                                             301);
        tb_scheduler__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_scheduler__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    VL_WRITEF_NX("\n=== Testbench Complete ===\nTotal Tests: %0d\n",0,
                 32,(vlSelfRef.tb_scheduler__DOT__pass_count 
                     + vlSelfRef.tb_scheduler__DOT__fail_count));
    if ((0U == vlSelfRef.tb_scheduler__DOT__fail_count)) {
        VL_WRITEF_NX("[\033[32mALL TESTS PASSED\033[0m] %0d/%0d passed\n",0,
                     32,vlSelfRef.tb_scheduler__DOT__pass_count,
                     32,(vlSelfRef.tb_scheduler__DOT__pass_count 
                         + vlSelfRef.tb_scheduler__DOT__fail_count));
    } else {
        VL_WRITEF_NX("[\033[31mSOME TESTS FAILED\033[0m] %0d passed, %0d failed\n",0,
                     32,vlSelfRef.tb_scheduler__DOT__pass_count,
                     32,vlSelfRef.tb_scheduler__DOT__fail_count);
    }
    VL_FINISH_MT("sim/tb_scheduler.sv", 310, "");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_return;
}

void Vtb_scheduler___024root___eval_triggers_vec__act(Vtb_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___eval_triggers_vec__act\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.tb_scheduler__DOT__clk)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_scheduler__DOT__clk__0)) 
                                                      << 2U) 
                                                     | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_scheduler__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_scheduler__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_scheduler__DOT__clk__0 
        = vlSelfRef.tb_scheduler__DOT__clk;
}

bool Vtb_scheduler___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___trigger_anySet__act\n"); );
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

void Vtb_scheduler___024root___nba_sequent__TOP__0(Vtb_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___nba_sequent__TOP__0\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __VdlyVal__tb_scheduler__DOT__dut__DOT__payload_ram__v0;
    VL_ZERO_W(128, __VdlyVal__tb_scheduler__DOT__dut__DOT__payload_ram__v0);
    CData/*1:0*/ __VdlyDim0__tb_scheduler__DOT__dut__DOT__payload_ram__v0;
    __VdlyDim0__tb_scheduler__DOT__dut__DOT__payload_ram__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_scheduler__DOT__dut__DOT__payload_ram__v0;
    __VdlySet__tb_scheduler__DOT__dut__DOT__payload_ram__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v0;
    __VdlyVal__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v0;
    __VdlySet__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v1;
    __VdlyVal__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v1 = 0;
    SData/*15:0*/ __VdlyVal__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v2;
    __VdlyVal__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v2 = 0;
    SData/*15:0*/ __VdlyVal__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v3;
    __VdlyVal__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v3 = 0;
    // Body
    __VdlySet__tb_scheduler__DOT__dut__DOT__payload_ram__v0 = 0U;
    __VdlySet__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v0 = 0U;
    if (vlSelfRef.tb_scheduler__DOT__rst) {
        vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][0U] = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][1U] = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][2U] = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[0U][3U] = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][0U] = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][1U] = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][2U] = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[1U][3U] = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][0U] = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][1U] = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][2U] = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[2U][3U] = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][0U] = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][1U] = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][2U] = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[3U][3U] = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_priority = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U] 
            = (0xfffeU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U] 
            = (0xfffdU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U] 
            = (0xfffbU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U] 
            = (0xfff7U & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U] 
            = (0xffefU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U] 
            = (0xffdfU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U] 
            = (0xffbfU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U] 
            = (0xff7fU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U] 
            = (0xfeffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U] 
            = (0xfdffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U] 
            = (0xfbffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U] 
            = (0xf7ffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U] 
            = (0xefffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U] 
            = (0xdfffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U] 
            = (0xbfffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U] 
            = (0x7fffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U] 
            = (0xfffeU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U] 
            = (0xfffdU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U] 
            = (0xfffbU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U] 
            = (0xfff7U & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U] 
            = (0xffefU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U] 
            = (0xffdfU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U] 
            = (0xffbfU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U] 
            = (0xff7fU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U] 
            = (0xfeffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U] 
            = (0xfdffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U] 
            = (0xfbffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U] 
            = (0xf7ffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U] 
            = (0xefffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U] 
            = (0xdfffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U] 
            = (0xbfffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U] 
            = (0x7fffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U] 
            = (0xfffeU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U] 
            = (0xfffdU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U] 
            = (0xfffbU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U] 
            = (0xfff7U & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U] 
            = (0xffefU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U] 
            = (0xffdfU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U] 
            = (0xffbfU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U] 
            = (0xff7fU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U] 
            = (0xfeffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U] 
            = (0xfdffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U] 
            = (0xfbffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U] 
            = (0xf7ffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U] 
            = (0xefffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U] 
            = (0xdfffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U] 
            = (0xbfffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U] 
            = (0x7fffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U] 
            = (0xfffeU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U] 
            = (0xfffdU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U] 
            = (0xfffbU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U] 
            = (0xfff7U & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U] 
            = (0xffefU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U] 
            = (0xffdfU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U] 
            = (0xffbfU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U] 
            = (0xff7fU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U] 
            = (0xfeffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U] 
            = (0xfdffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U] 
            = (0xfbffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U] 
            = (0xf7ffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U] 
            = (0xefffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U] 
            = (0xdfffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U] 
            = (0xbfffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U] 
            = (0x7fffU & vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U]);
        vlSelfRef.tb_scheduler__DOT__rr_pkt[0U] = 0U;
        vlSelfRef.tb_scheduler__DOT__rr_pkt[1U] = 0U;
        vlSelfRef.tb_scheduler__DOT__rr_pkt[2U] = 0U;
        vlSelfRef.tb_scheduler__DOT__rr_pkt[3U] = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid = 0U;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted = 0U;
    } else {
        if (vlSelfRef.tb_scheduler__DOT__dut__DOT__grant_valid) {
            vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_priority 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_priority)));
            vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted 
                = ((IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted) 
                   | (0x0fU & ((IData)(1U) << (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__grant))));
        } else {
            vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_priority 
                = (3U & (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_priority));
        }
        if ((((IData)(vlSelfRef.tb_scheduler__DOT__disp_valid) 
              & (~ (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__full))) 
             & (0U == (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry)))) {
            __VdlyVal__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v0 
                = ((IData)(vlSelfRef.tb_scheduler__DOT__dependency_mask) 
                   & (~ (IData)(vlSelfRef.tb_scheduler__DOT__global_ready_mask)));
            vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                = (1U | (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid));
        } else {
            __VdlyVal__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v0 
                = (vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U] 
                   & (~ (IData)(vlSelfRef.tb_scheduler__DOT__global_ready_mask)));
        }
        __VdlySet__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v0 = 1U;
        if ((((IData)(vlSelfRef.tb_scheduler__DOT__disp_valid) 
              & (~ (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__full))) 
             & (1U == (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry)))) {
            __VdlyVal__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v1 
                = ((IData)(vlSelfRef.tb_scheduler__DOT__dependency_mask) 
                   & (~ (IData)(vlSelfRef.tb_scheduler__DOT__global_ready_mask)));
            vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                = (2U | (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid));
        } else {
            __VdlyVal__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v1 
                = (vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U] 
                   & (~ (IData)(vlSelfRef.tb_scheduler__DOT__global_ready_mask)));
        }
        if ((((IData)(vlSelfRef.tb_scheduler__DOT__disp_valid) 
              & (~ (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__full))) 
             & (2U == (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry)))) {
            __VdlyVal__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v2 
                = ((IData)(vlSelfRef.tb_scheduler__DOT__dependency_mask) 
                   & (~ (IData)(vlSelfRef.tb_scheduler__DOT__global_ready_mask)));
            vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                = (4U | (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid));
        } else {
            __VdlyVal__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v2 
                = (vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U] 
                   & (~ (IData)(vlSelfRef.tb_scheduler__DOT__global_ready_mask)));
        }
        if ((((IData)(vlSelfRef.tb_scheduler__DOT__disp_valid) 
              & (~ (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__full))) 
             & (3U == (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry)))) {
            __VdlyVal__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v3 
                = ((IData)(vlSelfRef.tb_scheduler__DOT__dependency_mask) 
                   & (~ (IData)(vlSelfRef.tb_scheduler__DOT__global_ready_mask)));
            vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid 
                = (8U | (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid));
        } else {
            __VdlyVal__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v3 
                = (vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U] 
                   & (~ (IData)(vlSelfRef.tb_scheduler__DOT__global_ready_mask)));
        }
        vlSelfRef.tb_scheduler__DOT__rr_pkt[0U] = vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
            [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][0U];
        vlSelfRef.tb_scheduler__DOT__rr_pkt[1U] = vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
            [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][1U];
        vlSelfRef.tb_scheduler__DOT__rr_pkt[2U] = vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
            [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][2U];
        vlSelfRef.tb_scheduler__DOT__rr_pkt[3U] = vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram
            [vlSelfRef.tb_scheduler__DOT__dut__DOT__grant][3U];
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_scheduler__DOT__rst)))) {
        if (vlSelfRef.tb_scheduler__DOT__disp_valid) {
            __VdlyVal__tb_scheduler__DOT__dut__DOT__payload_ram__v0[0U] 
                = vlSelfRef.tb_scheduler__DOT__disp_pkt[0U];
            __VdlyVal__tb_scheduler__DOT__dut__DOT__payload_ram__v0[1U] 
                = vlSelfRef.tb_scheduler__DOT__disp_pkt[1U];
            __VdlyVal__tb_scheduler__DOT__dut__DOT__payload_ram__v0[2U] 
                = vlSelfRef.tb_scheduler__DOT__disp_pkt[2U];
            __VdlyVal__tb_scheduler__DOT__dut__DOT__payload_ram__v0[3U] 
                = vlSelfRef.tb_scheduler__DOT__disp_pkt[3U];
            __VdlyDim0__tb_scheduler__DOT__dut__DOT__payload_ram__v0 
                = vlSelfRef.tb_scheduler__DOT__rs_entry_idx;
            __VdlySet__tb_scheduler__DOT__dut__DOT__payload_ram__v0 = 1U;
        }
    }
    vlSelfRef.tb_scheduler__DOT__rr_fire_valid = ((1U 
                                                   & (~ (IData)(vlSelfRef.tb_scheduler__DOT__rst))) 
                                                  && (IData)(vlSelfRef.tb_scheduler__DOT__dut__DOT__grant_valid));
    vlSelfRef.tb_scheduler__DOT__dut__DOT__reqs_in 
        = vlSelfRef.tb_scheduler__DOT__dut__DOT__reqs_out;
    if (__VdlySet__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v0) {
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0U] 
            = __VdlyVal__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v0;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1U] 
            = __VdlyVal__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v1;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2U] 
            = __VdlyVal__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v2;
        vlSelfRef.tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3U] 
            = __VdlyVal__tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row__v3;
    }
    if (__VdlySet__tb_scheduler__DOT__dut__DOT__payload_ram__v0) {
        vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[__VdlyDim0__tb_scheduler__DOT__dut__DOT__payload_ram__v0][0U] 
            = __VdlyVal__tb_scheduler__DOT__dut__DOT__payload_ram__v0[0U];
        vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[__VdlyDim0__tb_scheduler__DOT__dut__DOT__payload_ram__v0][1U] 
            = __VdlyVal__tb_scheduler__DOT__dut__DOT__payload_ram__v0[1U];
        vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[__VdlyDim0__tb_scheduler__DOT__dut__DOT__payload_ram__v0][2U] 
            = __VdlyVal__tb_scheduler__DOT__dut__DOT__payload_ram__v0[2U];
        vlSelfRef.tb_scheduler__DOT__dut__DOT__payload_ram[__VdlyDim0__tb_scheduler__DOT__dut__DOT__payload_ram__v0][3U] 
            = __VdlyVal__tb_scheduler__DOT__dut__DOT__payload_ram__v0[3U];
    }
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

void Vtb_scheduler___024root___eval_nba(Vtb_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___eval_nba\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_scheduler___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

void Vtb_scheduler___024root___timing_ready(Vtb_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___timing_ready\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h289396db__0.ready("@(negedge tb_scheduler.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h28939637__0.ready("@(posedge tb_scheduler.clk)");
    }
}

void Vtb_scheduler___024root___timing_resume(Vtb_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___timing_resume\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h289396db__0.moveToResumeQueue(
                                                          "@(negedge tb_scheduler.clk)");
    vlSelfRef.__VtrigSched_h28939637__0.moveToResumeQueue(
                                                          "@(posedge tb_scheduler.clk)");
    vlSelfRef.__VtrigSched_h289396db__0.resume("@(negedge tb_scheduler.clk)");
    vlSelfRef.__VtrigSched_h28939637__0.resume("@(posedge tb_scheduler.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_scheduler___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_scheduler___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_scheduler___024root___eval_phase__act(Vtb_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___eval_phase__act\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_scheduler___024root___eval_triggers_vec__act(vlSelf);
    Vtb_scheduler___024root___timing_ready(vlSelf);
    Vtb_scheduler___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_scheduler___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_scheduler___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_scheduler___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_scheduler___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_scheduler___024root___eval_phase__inact(Vtb_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___eval_phase__inact\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("sim/tb_scheduler.sv", 4, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_scheduler___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_scheduler___024root___eval_phase__nba(Vtb_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___eval_phase__nba\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_scheduler___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_scheduler___024root___eval_nba(vlSelf);
        Vtb_scheduler___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_scheduler___024root___eval(Vtb_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___eval\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_scheduler___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("sim/tb_scheduler.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("sim/tb_scheduler.sv", 4, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_scheduler___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("sim/tb_scheduler.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_scheduler___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_scheduler___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_scheduler___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_scheduler___024root____VbeforeTrig_h289396db__0(Vtb_scheduler___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root____VbeforeTrig_h289396db__0\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_scheduler__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_scheduler__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.tb_scheduler__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_scheduler__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_scheduler__DOT__clk__0 
        = vlSelfRef.tb_scheduler__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h28939637__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h28939637__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_scheduler___024root____VbeforeTrig_h28939637__0(Vtb_scheduler___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root____VbeforeTrig_h28939637__0\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_scheduler__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_scheduler__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.tb_scheduler__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_scheduler__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_scheduler__DOT__clk__0 
        = vlSelfRef.tb_scheduler__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h28939637__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h28939637__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h289396db__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_scheduler___024root___eval_debug_assertions(Vtb_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root___eval_debug_assertions\n"); );
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
