// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_phys_reg_file.h for the primary calling header

#include "Vtb_phys_reg_file__pch.h"

VL_ATTR_COLD void Vtb_phys_reg_file___024root___eval_initial__TOP(Vtb_phys_reg_file___024root* vlSelf);
VlCoroutine Vtb_phys_reg_file___024root___eval_initial__TOP__Vtiming__0(Vtb_phys_reg_file___024root* vlSelf);
VlCoroutine Vtb_phys_reg_file___024root___eval_initial__TOP__Vtiming__1(Vtb_phys_reg_file___024root* vlSelf);

void Vtb_phys_reg_file___024root___eval_initial(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___eval_initial\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_phys_reg_file___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_phys_reg_file___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_phys_reg_file___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_phys_reg_file___024root___eval_initial__TOP__Vtiming__0(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "sim/tb_phys_reg_file.sv", 
                                             20);
        vlSelfRef.tb_phys_reg_file__DOT__clk = 1U;
        vlSelfRef.tb_phys_reg_file__DOT__cycle_count 
            = ((IData)(1U) + vlSelfRef.tb_phys_reg_file__DOT__cycle_count);
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "sim/tb_phys_reg_file.sv", 
                                             22);
        vlSelfRef.tb_phys_reg_file__DOT__clk = 0U;
    }
    co_return;
}

void Vtb_phys_reg_file___024root____VbeforeTrig_ha54dc797__0(Vtb_phys_reg_file___024root* vlSelf, const char* __VeventDescription);
void Vtb_phys_reg_file___024root____VbeforeTrig_ha54dc6bb__0(Vtb_phys_reg_file___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_phys_reg_file___024root___eval_initial__TOP__Vtiming__1(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_tb_phys_reg_file__DOT__write_reg__3__value;
    __Vtask_tb_phys_reg_file__DOT__write_reg__3__value = 0;
    CData/*5:0*/ __Vtask_tb_phys_reg_file__DOT__write_reg__3__dst_reg;
    __Vtask_tb_phys_reg_file__DOT__write_reg__3__dst_reg = 0;
    IData/*31:0*/ __Vtask_tb_phys_reg_file__DOT__write_reg__4__value;
    __Vtask_tb_phys_reg_file__DOT__write_reg__4__value = 0;
    CData/*5:0*/ __Vtask_tb_phys_reg_file__DOT__write_reg__4__dst_reg;
    __Vtask_tb_phys_reg_file__DOT__write_reg__4__dst_reg = 0;
    CData/*0:0*/ __Vtask_tb_phys_reg_file__DOT__check_assertion__5__condition;
    __Vtask_tb_phys_reg_file__DOT__check_assertion__5__condition = 0;
    CData/*0:0*/ __Vtask_tb_phys_reg_file__DOT__check_assertion__6__condition;
    __Vtask_tb_phys_reg_file__DOT__check_assertion__6__condition = 0;
    CData/*0:0*/ __Vtask_tb_phys_reg_file__DOT__check_assertion__8__condition;
    __Vtask_tb_phys_reg_file__DOT__check_assertion__8__condition = 0;
    CData/*0:0*/ __Vtask_tb_phys_reg_file__DOT__check_assertion__9__condition;
    __Vtask_tb_phys_reg_file__DOT__check_assertion__9__condition = 0;
    // Body
    vlSelfRef.tb_phys_reg_file__DOT__clk = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__rst = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[0U] = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[0U] = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[1U] = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[1U] = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[2U] = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[2U] = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[3U] = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[3U] = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[0U] = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[0U] = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[0U] = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[1U] = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[1U] = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[1U] = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[2U] = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[2U] = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[2U] = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__rob_wr_en[0U] = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__rob_wr_areg[0U] = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__rob_wr_val[0U] = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__rob_wr_en[1U] = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__rob_wr_areg[1U] = 0U;
    vlSelfRef.tb_phys_reg_file__DOT__rob_wr_val[1U] = 0U;
    VL_WRITEF_NX("=== Physical Register File Testbench ===\n",0);
    VL_WRITEF_NX("\n[RESET] Resetting DUT\n",0);
    Vtb_phys_reg_file___024root____VbeforeTrig_ha54dc797__0(vlSelf, 
                                                            "@(negedge tb_phys_reg_file.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha54dc797__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_phys_reg_file.clk)", 
                                                         "sim/tb_phys_reg_file.sv", 
                                                         106);
    vlSelfRef.tb_phys_reg_file__DOT__rst = 1U;
    Vtb_phys_reg_file___024root____VbeforeTrig_ha54dc797__0(vlSelf, 
                                                            "@(negedge tb_phys_reg_file.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha54dc797__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_phys_reg_file.clk)", 
                                                         "sim/tb_phys_reg_file.sv", 
                                                         108);
    Vtb_phys_reg_file___024root____VbeforeTrig_ha54dc797__0(vlSelf, 
                                                            "@(negedge tb_phys_reg_file.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha54dc797__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_phys_reg_file.clk)", 
                                                         "sim/tb_phys_reg_file.sv", 
                                                         109);
    vlSelfRef.tb_phys_reg_file__DOT__rst = 0U;
    Vtb_phys_reg_file___024root____VbeforeTrig_ha54dc797__0(vlSelf, 
                                                            "@(negedge tb_phys_reg_file.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha54dc797__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_phys_reg_file.clk)", 
                                                         "sim/tb_phys_reg_file.sv", 
                                                         111);
    VL_WRITEF_NX("[RESET] Reset complete\n\n",0);
    VL_WRITEF_NX("\n[Test 1] Verify Register Writes\n",0);
    __Vtask_tb_phys_reg_file__DOT__write_reg__3__dst_reg = 7U;
    __Vtask_tb_phys_reg_file__DOT__write_reg__3__value = 0x0000000cU;
    vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[0U] = 1U;
    vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[0U] 
        = __Vtask_tb_phys_reg_file__DOT__write_reg__3__value;
    vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[0U] 
        = __Vtask_tb_phys_reg_file__DOT__write_reg__3__dst_reg;
    Vtb_phys_reg_file___024root____VbeforeTrig_ha54dc797__0(vlSelf, 
                                                            "@(negedge tb_phys_reg_file.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha54dc797__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_phys_reg_file.clk)", 
                                                         "sim/tb_phys_reg_file.sv", 
                                                         122);
    VL_WRITEF_NX("Wrote %0# to Register %0# at Cycle %0d\n",0,
                 32,__Vtask_tb_phys_reg_file__DOT__write_reg__3__value,
                 6,(IData)(__Vtask_tb_phys_reg_file__DOT__write_reg__3__dst_reg),
                 32,vlSelfRef.tb_phys_reg_file__DOT__cycle_count);
    vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[0U] = 0U;
    Vtb_phys_reg_file___024root____VbeforeTrig_ha54dc6bb__0(vlSelf, 
                                                            "@(posedge tb_phys_reg_file.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha54dc6bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_phys_reg_file.clk)", 
                                                         "sim/tb_phys_reg_file.sv", 
                                                         135);
    __Vtask_tb_phys_reg_file__DOT__write_reg__4__dst_reg = 8U;
    __Vtask_tb_phys_reg_file__DOT__write_reg__4__value = 0x0000000dU;
    vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[0U] = 1U;
    vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[0U] 
        = __Vtask_tb_phys_reg_file__DOT__write_reg__4__value;
    vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[0U] 
        = __Vtask_tb_phys_reg_file__DOT__write_reg__4__dst_reg;
    Vtb_phys_reg_file___024root____VbeforeTrig_ha54dc797__0(vlSelf, 
                                                            "@(negedge tb_phys_reg_file.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha54dc797__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_phys_reg_file.clk)", 
                                                         "sim/tb_phys_reg_file.sv", 
                                                         122);
    VL_WRITEF_NX("Wrote %0# to Register %0# at Cycle %0d\n",0,
                 32,__Vtask_tb_phys_reg_file__DOT__write_reg__4__value,
                 6,(IData)(__Vtask_tb_phys_reg_file__DOT__write_reg__4__dst_reg),
                 32,vlSelfRef.tb_phys_reg_file__DOT__cycle_count);
    vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[0U] = 0U;
    Vtb_phys_reg_file___024root____VbeforeTrig_ha54dc6bb__0(vlSelf, 
                                                            "@(posedge tb_phys_reg_file.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha54dc6bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_phys_reg_file.clk)", 
                                                         "sim/tb_phys_reg_file.sv", 
                                                         137);
    __Vtask_tb_phys_reg_file__DOT__check_assertion__5__condition 
        = (0x0000000cU == vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__registers[7U]);
    vlSelfRef.__Vtask_tb_phys_reg_file__DOT__check_assertion__5__test_name = "Value should have been written to register"s;
    if (__Vtask_tb_phys_reg_file__DOT__check_assertion__5__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_phys_reg_file__DOT__check_assertion__5__test_name));
        vlSelfRef.tb_phys_reg_file__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_phys_reg_file__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_phys_reg_file__DOT__check_assertion__5__test_name));
        vlSelfRef.tb_phys_reg_file__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_phys_reg_file__DOT__fail_count);
    }
    __Vtask_tb_phys_reg_file__DOT__check_assertion__6__condition 
        = (0x0000000dU == vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__registers[8U]);
    vlSelfRef.__Vtask_tb_phys_reg_file__DOT__check_assertion__6__test_name = "Value should have been written to register"s;
    if (__Vtask_tb_phys_reg_file__DOT__check_assertion__6__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_phys_reg_file__DOT__check_assertion__6__test_name));
        vlSelfRef.tb_phys_reg_file__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_phys_reg_file__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_phys_reg_file__DOT__check_assertion__6__test_name));
        vlSelfRef.tb_phys_reg_file__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_phys_reg_file__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 2] Verify Register Reads\n",0);
    vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[0U] = 7U;
    vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[0U] = 8U;
    Vtb_phys_reg_file___024root____VbeforeTrig_ha54dc797__0(vlSelf, 
                                                            "@(negedge tb_phys_reg_file.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha54dc797__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_phys_reg_file.clk)", 
                                                         "sim/tb_phys_reg_file.sv", 
                                                         149);
    __Vtask_tb_phys_reg_file__DOT__check_assertion__8__condition 
        = (0x0000000cU == vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[0U]);
    vlSelfRef.__Vtask_tb_phys_reg_file__DOT__check_assertion__8__test_name = "Should read src1 from register"s;
    if (__Vtask_tb_phys_reg_file__DOT__check_assertion__8__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_phys_reg_file__DOT__check_assertion__8__test_name));
        vlSelfRef.tb_phys_reg_file__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_phys_reg_file__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_phys_reg_file__DOT__check_assertion__8__test_name));
        vlSelfRef.tb_phys_reg_file__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_phys_reg_file__DOT__fail_count);
    }
    __Vtask_tb_phys_reg_file__DOT__check_assertion__9__condition 
        = (0x0000000dU == vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[0U]);
    vlSelfRef.__Vtask_tb_phys_reg_file__DOT__check_assertion__9__test_name = "Should read src2 from register"s;
    if (__Vtask_tb_phys_reg_file__DOT__check_assertion__9__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_phys_reg_file__DOT__check_assertion__9__test_name));
        vlSelfRef.tb_phys_reg_file__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_phys_reg_file__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_phys_reg_file__DOT__check_assertion__9__test_name));
        vlSelfRef.tb_phys_reg_file__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_phys_reg_file__DOT__fail_count);
    }
    VL_WRITEF_NX("\n=== Testbench Complete ===\nTotal Tests: %0d\n",0,
                 32,(vlSelfRef.tb_phys_reg_file__DOT__pass_count 
                     + vlSelfRef.tb_phys_reg_file__DOT__fail_count));
    if ((0U == vlSelfRef.tb_phys_reg_file__DOT__fail_count)) {
        VL_WRITEF_NX("[\033[32mALL TESTS PASSED\033[0m] %0d/%0d passed\n",0,
                     32,vlSelfRef.tb_phys_reg_file__DOT__pass_count,
                     32,(vlSelfRef.tb_phys_reg_file__DOT__pass_count 
                         + vlSelfRef.tb_phys_reg_file__DOT__fail_count));
    } else {
        VL_WRITEF_NX("[\033[31mSOME TESTS FAILED\033[0m] %0d passed, %0d failed\n",0,
                     32,vlSelfRef.tb_phys_reg_file__DOT__pass_count,
                     32,vlSelfRef.tb_phys_reg_file__DOT__fail_count);
    }
    VL_FINISH_MT("sim/tb_phys_reg_file.sv", 172, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

void Vtb_phys_reg_file___024root___eval_triggers_vec__act(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___eval_triggers_vec__act\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.tb_phys_reg_file__DOT__clk)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_phys_reg_file__DOT__clk__0)) 
                                                      << 2U) 
                                                     | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_phys_reg_file__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_phys_reg_file__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_phys_reg_file__DOT__clk__0 
        = vlSelfRef.tb_phys_reg_file__DOT__clk;
}

bool Vtb_phys_reg_file___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___trigger_anySet__act\n"); );
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

void Vtb_phys_reg_file___024root___act_comb__TOP__0(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___act_comb__TOP__0\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src1_preg_i[0U] 
        = vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[0U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src1_preg_i[1U] 
        = vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[1U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src1_preg_i[2U] 
        = vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[2U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src1_preg_i[3U] 
        = vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[3U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src2_preg_i[0U] 
        = vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[0U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src2_preg_i[1U] 
        = vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[1U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src2_preg_i[2U] 
        = vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[2U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src2_preg_i[3U] 
        = vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[3U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_en_i[0U] 
        = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[0U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_en_i[1U] 
        = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[1U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_en_i[2U] 
        = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[2U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_preg_i[0U] 
        = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[0U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_preg_i[1U] 
        = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[1U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_preg_i[2U] 
        = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[2U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_val_i[0U] 
        = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[0U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_val_i[1U] 
        = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[1U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__ex_wr_val_i[2U] 
        = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[2U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rob_wr_en_i[0U] 
        = vlSelfRef.tb_phys_reg_file__DOT__rob_wr_en[0U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rob_wr_en_i[1U] 
        = vlSelfRef.tb_phys_reg_file__DOT__rob_wr_en[1U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rob_wr_areg_i[0U] 
        = vlSelfRef.tb_phys_reg_file__DOT__rob_wr_areg[0U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rob_wr_areg_i[1U] 
        = vlSelfRef.tb_phys_reg_file__DOT__rob_wr_areg[1U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rob_wr_val_i[0U] 
        = vlSelfRef.tb_phys_reg_file__DOT__rob_wr_val[0U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rob_wr_val_i[1U] 
        = vlSelfRef.tb_phys_reg_file__DOT__rob_wr_val[1U];
    vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[0U] 
        = vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__registers
        [vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[0U]];
    if ((vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[0U] 
         & (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[0U] 
            == vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[0U]))) {
        vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[0U] 
            = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[0U];
    }
    if ((vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[1U] 
         & (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[1U] 
            == vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[0U]))) {
        vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[0U] 
            = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[1U];
    }
    if ((vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[2U] 
         & (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[2U] 
            == vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[0U]))) {
        vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[0U] 
            = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[2U];
    }
    vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[1U] 
        = vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__registers
        [vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[1U]];
    if ((vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[0U] 
         & (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[0U] 
            == vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[1U]))) {
        vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[1U] 
            = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[0U];
    }
    if ((vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[1U] 
         & (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[1U] 
            == vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[1U]))) {
        vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[1U] 
            = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[1U];
    }
    if ((vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[2U] 
         & (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[2U] 
            == vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[1U]))) {
        vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[1U] 
            = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[2U];
    }
    vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[2U] 
        = vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__registers
        [vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[2U]];
    if ((vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[0U] 
         & (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[0U] 
            == vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[2U]))) {
        vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[2U] 
            = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[0U];
    }
    if ((vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[1U] 
         & (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[1U] 
            == vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[2U]))) {
        vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[2U] 
            = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[1U];
    }
    if ((vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[2U] 
         & (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[2U] 
            == vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[2U]))) {
        vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[2U] 
            = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[2U];
    }
    vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[3U] 
        = vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__registers
        [vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[3U]];
    if ((vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[0U] 
         & (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[0U] 
            == vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[3U]))) {
        vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[3U] 
            = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[0U];
    }
    if ((vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[1U] 
         & (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[1U] 
            == vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[3U]))) {
        vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[3U] 
            = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[1U];
    }
    if ((vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[2U] 
         & (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[2U] 
            == vlSelfRef.tb_phys_reg_file__DOT__rd_src2_preg[3U]))) {
        vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[3U] 
            = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[2U];
    }
    vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[0U] 
        = vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__registers
        [vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[0U]];
    if ((vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[0U] 
         & (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[0U] 
            == vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[0U]))) {
        vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[0U] 
            = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[0U];
    }
    if ((vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[1U] 
         & (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[1U] 
            == vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[0U]))) {
        vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[0U] 
            = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[1U];
    }
    if ((vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[2U] 
         & (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[2U] 
            == vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[0U]))) {
        vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[0U] 
            = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[2U];
    }
    vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[1U] 
        = vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__registers
        [vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[1U]];
    if ((vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[0U] 
         & (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[0U] 
            == vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[1U]))) {
        vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[1U] 
            = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[0U];
    }
    if ((vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[1U] 
         & (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[1U] 
            == vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[1U]))) {
        vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[1U] 
            = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[1U];
    }
    if ((vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[2U] 
         & (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[2U] 
            == vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[1U]))) {
        vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[1U] 
            = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[2U];
    }
    vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[2U] 
        = vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__registers
        [vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[2U]];
    if ((vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[0U] 
         & (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[0U] 
            == vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[2U]))) {
        vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[2U] 
            = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[0U];
    }
    if ((vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[1U] 
         & (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[1U] 
            == vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[2U]))) {
        vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[2U] 
            = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[1U];
    }
    if ((vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[2U] 
         & (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[2U] 
            == vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[2U]))) {
        vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[2U] 
            = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[2U];
    }
    vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[3U] 
        = vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__registers
        [vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[3U]];
    if ((vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[0U] 
         & (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[0U] 
            == vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[3U]))) {
        vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[3U] 
            = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[0U];
    }
    if ((vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[1U] 
         & (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[1U] 
            == vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[3U]))) {
        vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[3U] 
            = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[1U];
    }
    if ((vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[2U] 
         & (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[2U] 
            == vlSelfRef.tb_phys_reg_file__DOT__rd_src1_preg[3U]))) {
        vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[3U] 
            = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[2U];
    }
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src2_val_o[0U] 
        = vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[0U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src2_val_o[1U] 
        = vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[1U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src2_val_o[2U] 
        = vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[2U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src2_val_o[3U] 
        = vlSelfRef.tb_phys_reg_file__DOT__rd_src2_val[3U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src1_val_o[0U] 
        = vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[0U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src1_val_o[1U] 
        = vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[1U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src1_val_o[2U] 
        = vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[2U];
    vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__rd_src1_val_o[3U] 
        = vlSelfRef.tb_phys_reg_file__DOT__rd_src1_val[3U];
}

void Vtb_phys_reg_file___024root___eval_act(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___eval_act\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_phys_reg_file___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

void Vtb_phys_reg_file___024root___nba_sequent__TOP__0(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___nba_sequent__TOP__0\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v0;
    __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_phys_reg_file__DOT__dut__DOT__registers__v64;
    __VdlyVal__tb_phys_reg_file__DOT__dut__DOT__registers__v64 = 0;
    CData/*5:0*/ __VdlyDim0__tb_phys_reg_file__DOT__dut__DOT__registers__v64;
    __VdlyDim0__tb_phys_reg_file__DOT__dut__DOT__registers__v64 = 0;
    CData/*0:0*/ __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v64;
    __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v64 = 0;
    IData/*31:0*/ __VdlyVal__tb_phys_reg_file__DOT__dut__DOT__registers__v65;
    __VdlyVal__tb_phys_reg_file__DOT__dut__DOT__registers__v65 = 0;
    CData/*5:0*/ __VdlyDim0__tb_phys_reg_file__DOT__dut__DOT__registers__v65;
    __VdlyDim0__tb_phys_reg_file__DOT__dut__DOT__registers__v65 = 0;
    CData/*0:0*/ __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v65;
    __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v65 = 0;
    IData/*31:0*/ __VdlyVal__tb_phys_reg_file__DOT__dut__DOT__registers__v66;
    __VdlyVal__tb_phys_reg_file__DOT__dut__DOT__registers__v66 = 0;
    CData/*5:0*/ __VdlyDim0__tb_phys_reg_file__DOT__dut__DOT__registers__v66;
    __VdlyDim0__tb_phys_reg_file__DOT__dut__DOT__registers__v66 = 0;
    CData/*0:0*/ __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v66;
    __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v66 = 0;
    IData/*31:0*/ __VdlyVal__tb_phys_reg_file__DOT__dut__DOT__registers__v67;
    __VdlyVal__tb_phys_reg_file__DOT__dut__DOT__registers__v67 = 0;
    CData/*5:0*/ __VdlyDim0__tb_phys_reg_file__DOT__dut__DOT__registers__v67;
    __VdlyDim0__tb_phys_reg_file__DOT__dut__DOT__registers__v67 = 0;
    CData/*0:0*/ __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v67;
    __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v67 = 0;
    IData/*31:0*/ __VdlyVal__tb_phys_reg_file__DOT__dut__DOT__registers__v68;
    __VdlyVal__tb_phys_reg_file__DOT__dut__DOT__registers__v68 = 0;
    CData/*5:0*/ __VdlyDim0__tb_phys_reg_file__DOT__dut__DOT__registers__v68;
    __VdlyDim0__tb_phys_reg_file__DOT__dut__DOT__registers__v68 = 0;
    CData/*0:0*/ __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v68;
    __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v68 = 0;
    CData/*0:0*/ __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v69;
    __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v69 = 0;
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    // Body
    __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v69 = 0U;
    __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v0 = 0U;
    __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v64 = 0U;
    __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v65 = 0U;
    __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v66 = 0U;
    __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v67 = 0U;
    __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v68 = 0U;
    if (vlSelfRef.tb_phys_reg_file__DOT__rst) {
        __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v69 = 1U;
        __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v0 = 1U;
    } else {
        if (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[0U]) {
            __VdlyVal__tb_phys_reg_file__DOT__dut__DOT__registers__v64 
                = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[0U];
            __VdlyDim0__tb_phys_reg_file__DOT__dut__DOT__registers__v64 
                = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[0U];
            __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v64 = 1U;
        }
        if (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[1U]) {
            __VdlyVal__tb_phys_reg_file__DOT__dut__DOT__registers__v65 
                = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[1U];
            __VdlyDim0__tb_phys_reg_file__DOT__dut__DOT__registers__v65 
                = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[1U];
            __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v65 = 1U;
        }
        if (vlSelfRef.tb_phys_reg_file__DOT__ex_wr_en[2U]) {
            __VdlyVal__tb_phys_reg_file__DOT__dut__DOT__registers__v66 
                = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_val[2U];
            __VdlyDim0__tb_phys_reg_file__DOT__dut__DOT__registers__v66 
                = vlSelfRef.tb_phys_reg_file__DOT__ex_wr_preg[2U];
            __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v66 = 1U;
        }
        if (vlSelfRef.tb_phys_reg_file__DOT__rob_wr_en[0U]) {
            __VdlyVal__tb_phys_reg_file__DOT__dut__DOT__registers__v67 
                = vlSelfRef.tb_phys_reg_file__DOT__rob_wr_val[0U];
            __VdlyDim0__tb_phys_reg_file__DOT__dut__DOT__registers__v67 
                = vlSelfRef.tb_phys_reg_file__DOT__rob_wr_areg[0U];
            __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v67 = 1U;
        }
        if (vlSelfRef.tb_phys_reg_file__DOT__rob_wr_en[1U]) {
            __VdlyVal__tb_phys_reg_file__DOT__dut__DOT__registers__v68 
                = vlSelfRef.tb_phys_reg_file__DOT__rob_wr_val[1U];
            __VdlyDim0__tb_phys_reg_file__DOT__dut__DOT__registers__v68 
                = vlSelfRef.tb_phys_reg_file__DOT__rob_wr_areg[1U];
            __VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v68 = 1U;
        }
    }
    if (__VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v0) {
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x0000003fU)) {
            vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__registers[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
    if (__VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v64) {
        vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__registers[__VdlyDim0__tb_phys_reg_file__DOT__dut__DOT__registers__v64] 
            = __VdlyVal__tb_phys_reg_file__DOT__dut__DOT__registers__v64;
    }
    if (__VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v65) {
        vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__registers[__VdlyDim0__tb_phys_reg_file__DOT__dut__DOT__registers__v65] 
            = __VdlyVal__tb_phys_reg_file__DOT__dut__DOT__registers__v65;
    }
    if (__VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v66) {
        vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__registers[__VdlyDim0__tb_phys_reg_file__DOT__dut__DOT__registers__v66] 
            = __VdlyVal__tb_phys_reg_file__DOT__dut__DOT__registers__v66;
    }
    if (__VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v67) {
        vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__registers[__VdlyDim0__tb_phys_reg_file__DOT__dut__DOT__registers__v67] 
            = __VdlyVal__tb_phys_reg_file__DOT__dut__DOT__registers__v67;
    }
    if (__VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v68) {
        vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__registers[__VdlyDim0__tb_phys_reg_file__DOT__dut__DOT__registers__v68] 
            = __VdlyVal__tb_phys_reg_file__DOT__dut__DOT__registers__v68;
    }
    if (__VdlySet__tb_phys_reg_file__DOT__dut__DOT__registers__v69) {
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x0000003fU)) {
            vlSelfRef.tb_phys_reg_file__DOT__dut__DOT__registers[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
    }
}

void Vtb_phys_reg_file___024root___eval_nba(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___eval_nba\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_phys_reg_file___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_phys_reg_file___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

void Vtb_phys_reg_file___024root___timing_ready(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___timing_ready\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_ha54dc797__0.ready("@(negedge tb_phys_reg_file.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_ha54dc6bb__0.ready("@(posedge tb_phys_reg_file.clk)");
    }
}

void Vtb_phys_reg_file___024root___timing_resume(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___timing_resume\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_ha54dc797__0.moveToResumeQueue(
                                                          "@(negedge tb_phys_reg_file.clk)");
    vlSelfRef.__VtrigSched_ha54dc6bb__0.moveToResumeQueue(
                                                          "@(posedge tb_phys_reg_file.clk)");
    vlSelfRef.__VtrigSched_ha54dc797__0.resume("@(negedge tb_phys_reg_file.clk)");
    vlSelfRef.__VtrigSched_ha54dc6bb__0.resume("@(posedge tb_phys_reg_file.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_phys_reg_file___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_phys_reg_file___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_phys_reg_file___024root___eval_phase__act(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___eval_phase__act\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_phys_reg_file___024root___eval_triggers_vec__act(vlSelf);
    Vtb_phys_reg_file___024root___timing_ready(vlSelf);
    Vtb_phys_reg_file___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_phys_reg_file___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_phys_reg_file___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_phys_reg_file___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_phys_reg_file___024root___timing_resume(vlSelf);
        Vtb_phys_reg_file___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_phys_reg_file___024root___eval_phase__inact(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___eval_phase__inact\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("sim/tb_phys_reg_file.sv", 5, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_phys_reg_file___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_phys_reg_file___024root___eval_phase__nba(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___eval_phase__nba\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_phys_reg_file___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_phys_reg_file___024root___eval_nba(vlSelf);
        Vtb_phys_reg_file___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_phys_reg_file___024root___eval(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___eval\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_phys_reg_file___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("sim/tb_phys_reg_file.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("sim/tb_phys_reg_file.sv", 5, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_phys_reg_file___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("sim/tb_phys_reg_file.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_phys_reg_file___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_phys_reg_file___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_phys_reg_file___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_phys_reg_file___024root____VbeforeTrig_ha54dc797__0(Vtb_phys_reg_file___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root____VbeforeTrig_ha54dc797__0\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_phys_reg_file__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_phys_reg_file__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.tb_phys_reg_file__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_phys_reg_file__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_phys_reg_file__DOT__clk__0 
        = vlSelfRef.tb_phys_reg_file__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_ha54dc6bb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha54dc6bb__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_ha54dc797__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha54dc797__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha54dc797__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha54dc797__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha54dc797__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha54dc797__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha54dc797__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_phys_reg_file___024root____VbeforeTrig_ha54dc6bb__0(Vtb_phys_reg_file___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root____VbeforeTrig_ha54dc6bb__0\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_phys_reg_file__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_phys_reg_file__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.tb_phys_reg_file__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_phys_reg_file__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_phys_reg_file__DOT__clk__0 
        = vlSelfRef.tb_phys_reg_file__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_ha54dc6bb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha54dc6bb__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_ha54dc797__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha54dc797__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha54dc797__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha54dc797__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha54dc797__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha54dc797__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha54dc797__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_phys_reg_file___024root___eval_debug_assertions(Vtb_phys_reg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_phys_reg_file___024root___eval_debug_assertions\n"); );
    Vtb_phys_reg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
