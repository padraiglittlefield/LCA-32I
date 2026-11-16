// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cache_controller.h for the primary calling header

#include "Vtb_cache_controller__pch.h"

VL_ATTR_COLD void Vtb_cache_controller___024root___eval_initial__TOP(Vtb_cache_controller___024root* vlSelf);
VlCoroutine Vtb_cache_controller___024root___eval_initial__TOP__Vtiming__0(Vtb_cache_controller___024root* vlSelf);
VlCoroutine Vtb_cache_controller___024root___eval_initial__TOP__Vtiming__1(Vtb_cache_controller___024root* vlSelf);

void Vtb_cache_controller___024root___eval_initial(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___eval_initial\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_cache_controller___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_cache_controller___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_cache_controller___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_cache_controller___024root___eval_initial__TOP__Vtiming__0(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "sim/tb_cache_controller.sv", 
                                             19);
        vlSelfRef.tb_cache_controller__DOT__clk = 1U;
        vlSelfRef.tb_cache_controller__DOT__cycle_count 
            = ((IData)(1U) + vlSelfRef.tb_cache_controller__DOT__cycle_count);
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "sim/tb_cache_controller.sv", 
                                             21);
        vlSelfRef.tb_cache_controller__DOT__clk = 0U;
    }
    co_return;
}

void Vtb_cache_controller___024root____VbeforeTrig_h8138e795__0(Vtb_cache_controller___024root* vlSelf, const char* __VeventDescription);
void Vtb_cache_controller___024root____VbeforeTrig_h8138e465__0(Vtb_cache_controller___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_cache_controller___024root___eval_initial__TOP__Vtiming__1(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_cache_controller__DOT__unnamedblk1_4__DOT____Vrepeat3;
    tb_cache_controller__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ __Vtask_tb_cache_controller__DOT__test_read_miss_repair__1__tb_cache_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_cache_controller__DOT__test_read_miss_repair__1__tb_cache_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.tb_cache_controller__DOT__clk = 0U;
    vlSelfRef.tb_cache_controller__DOT__rst = 0U;
    vlSelfRef.tb_cache_controller__DOT__flush = 0U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_vld_i = 0U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_wr_rd_i = 0U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_addr_i = 0U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_data_i = 0U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_rob_idx_i = 0U;
    vlSelfRef.tb_cache_controller__DOT__mem_resp_vld_i = 0U;
    vlSelfRef.tb_cache_controller__DOT__mem_resp_data_i[0U] = 0U;
    vlSelfRef.tb_cache_controller__DOT__mem_resp_data_i[1U] = 0U;
    vlSelfRef.tb_cache_controller__DOT__mem_resp_data_i[2U] = 0U;
    vlSelfRef.tb_cache_controller__DOT__mem_resp_data_i[3U] = 0U;
    VL_WRITEF_NX("Beginning Cache Controller Testbench\n",0);
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    Vtb_cache_controller___024root____VbeforeTrig_h8138e795__0(vlSelf, 
                                                               "@(posedge tb_cache_controller.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8138e795__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cache_controller.clk)", 
                                                         "sim/tb_cache_controller.sv", 
                                                         198);
    __Vtask_tb_cache_controller__DOT__test_read_miss_repair__1__tb_cache_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    Vtb_cache_controller___024root____VbeforeTrig_h8138e465__0(vlSelf, 
                                                               "@(negedge tb_cache_controller.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8138e465__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cache_controller.clk)", 
                                                         "sim/tb_cache_controller.sv", 
                                                         104);
    vlSelfRef.tb_cache_controller__DOT__lsu_req_vld_i = 1U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_wr_rd_i = 0U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_addr_i = 0xffff0000U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_data_i = 0U;
    Vtb_cache_controller___024root____VbeforeTrig_h8138e465__0(vlSelf, 
                                                               "@(negedge tb_cache_controller.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8138e465__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cache_controller.clk)", 
                                                         "sim/tb_cache_controller.sv", 
                                                         109);
    vlSelfRef.tb_cache_controller__DOT__lsu_req_vld_i = 0U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_wr_rd_i = 0U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_addr_i = 0U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_data_i = 0U;
    __Vtask_tb_cache_controller__DOT__test_read_miss_repair__1__tb_cache_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, __Vtask_tb_cache_controller__DOT__test_read_miss_repair__1__tb_cache_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_cache_controller___024root____VbeforeTrig_h8138e795__0(vlSelf, 
                                                                   "@(posedge tb_cache_controller.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h8138e795__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cache_controller.clk)", 
                                                             "sim/tb_cache_controller.sv", 
                                                             115);
        __Vtask_tb_cache_controller__DOT__test_read_miss_repair__1__tb_cache_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_cache_controller__DOT__test_read_miss_repair__1__tb_cache_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    Vtb_cache_controller___024root____VbeforeTrig_h8138e465__0(vlSelf, 
                                                               "@(negedge tb_cache_controller.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8138e465__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cache_controller.clk)", 
                                                         "sim/tb_cache_controller.sv", 
                                                         116);
    vlSelfRef.tb_cache_controller__DOT__mem_resp_vld_i = 1U;
    vlSelfRef.tb_cache_controller__DOT__mem_resp_data_i[0U] = 5U;
    vlSelfRef.tb_cache_controller__DOT__mem_resp_data_i[1U] = 0U;
    vlSelfRef.tb_cache_controller__DOT__mem_resp_data_i[2U] = 0U;
    vlSelfRef.tb_cache_controller__DOT__mem_resp_data_i[3U] = 0U;
    Vtb_cache_controller___024root____VbeforeTrig_h8138e465__0(vlSelf, 
                                                               "@(negedge tb_cache_controller.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8138e465__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cache_controller.clk)", 
                                                         "sim/tb_cache_controller.sv", 
                                                         119);
    vlSelfRef.tb_cache_controller__DOT__mem_resp_vld_i = 0U;
    vlSelfRef.tb_cache_controller__DOT__mem_resp_data_i[0U] = 0U;
    vlSelfRef.tb_cache_controller__DOT__mem_resp_data_i[1U] = 0U;
    vlSelfRef.tb_cache_controller__DOT__mem_resp_data_i[2U] = 0U;
    vlSelfRef.tb_cache_controller__DOT__mem_resp_data_i[3U] = 0U;
    Vtb_cache_controller___024root____VbeforeTrig_h8138e795__0(vlSelf, 
                                                               "@(posedge tb_cache_controller.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8138e795__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cache_controller.clk)", 
                                                         "sim/tb_cache_controller.sv", 
                                                         201);
    Vtb_cache_controller___024root____VbeforeTrig_h8138e795__0(vlSelf, 
                                                               "@(posedge tb_cache_controller.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8138e795__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cache_controller.clk)", 
                                                         "sim/tb_cache_controller.sv", 
                                                         125);
    vlSelfRef.tb_cache_controller__DOT__lsu_req_vld_i = 1U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_wr_rd_i = 0U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_addr_i = 0xffff0000U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_data_i = 0U;
    Vtb_cache_controller___024root____VbeforeTrig_h8138e795__0(vlSelf, 
                                                               "@(posedge tb_cache_controller.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8138e795__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cache_controller.clk)", 
                                                         "sim/tb_cache_controller.sv", 
                                                         130);
    vlSelfRef.tb_cache_controller__DOT__lsu_req_vld_i = 0U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_wr_rd_i = 0U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_addr_i = 0U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_data_i = 0U;
    Vtb_cache_controller___024root____VbeforeTrig_h8138e795__0(vlSelf, 
                                                               "@(posedge tb_cache_controller.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8138e795__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cache_controller.clk)", 
                                                         "sim/tb_cache_controller.sv", 
                                                         138);
    vlSelfRef.tb_cache_controller__DOT__lsu_req_vld_i = 1U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_wr_rd_i = 1U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_addr_i = 0xffff0000U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_data_i = 0x00000017U;
    Vtb_cache_controller___024root____VbeforeTrig_h8138e795__0(vlSelf, 
                                                               "@(posedge tb_cache_controller.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8138e795__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cache_controller.clk)", 
                                                         "sim/tb_cache_controller.sv", 
                                                         143);
    vlSelfRef.tb_cache_controller__DOT__lsu_req_vld_i = 0U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_wr_rd_i = 0U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_addr_i = 0U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_data_i = 0U;
    Vtb_cache_controller___024root____VbeforeTrig_h8138e795__0(vlSelf, 
                                                               "@(posedge tb_cache_controller.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8138e795__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cache_controller.clk)", 
                                                         "sim/tb_cache_controller.sv", 
                                                         125);
    vlSelfRef.tb_cache_controller__DOT__lsu_req_vld_i = 1U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_wr_rd_i = 0U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_addr_i = 0xffff0000U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_data_i = 0U;
    Vtb_cache_controller___024root____VbeforeTrig_h8138e795__0(vlSelf, 
                                                               "@(posedge tb_cache_controller.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h8138e795__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cache_controller.clk)", 
                                                         "sim/tb_cache_controller.sv", 
                                                         130);
    vlSelfRef.tb_cache_controller__DOT__lsu_req_vld_i = 0U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_wr_rd_i = 0U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_addr_i = 0U;
    vlSelfRef.tb_cache_controller__DOT__lsu_req_data_i = 0U;
    tb_cache_controller__DOT__unnamedblk1_4__DOT____Vrepeat3 = 5U;
    while (VL_LTS_III(32, 0U, tb_cache_controller__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb_cache_controller___024root____VbeforeTrig_h8138e795__0(vlSelf, 
                                                                   "@(posedge tb_cache_controller.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h8138e795__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cache_controller.clk)", 
                                                             "sim/tb_cache_controller.sv", 
                                                             209);
        tb_cache_controller__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (tb_cache_controller__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    VL_WRITEF_NX("\n=== Testbench Complete ===\nTotal Tests: 0\n[\033[32mALL TESTS PASSED\033[0m] 0/0 passed\n",0);
    VL_FINISH_MT("sim/tb_cache_controller.sv", 218, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

void Vtb_cache_controller___024root___eval_triggers_vec__act(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___eval_triggers_vec__act\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((((~ (IData)(vlSelfRef.tb_cache_controller__DOT__clk)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__clk__0)) 
                                                         << 3U) 
                                                        | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.tb_cache_controller__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__clk__0))) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.tb_cache_controller__DOT__rst) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__rst__0)))) 
                                                      << 8U) 
                                                     | (((((((IData)(vlSelfRef.tb_cache_controller__DOT__mem_wb_vld_o) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__mem_wb_vld_o__0)) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.tb_cache_controller__DOT__mem_req_vld_o) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__mem_req_vld_o__0)) 
                                                              << 2U)) 
                                                          | (((vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_addr_reg 
                                                               != vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__dut__DOT__ctrl_repair_addr_reg__0) 
                                                              << 1U) 
                                                             | (0U 
                                                                != 
                                                                ((((vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[0U] 
                                                                    ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block__0[0U]) 
                                                                   | (vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[1U] 
                                                                      ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block__0[1U])) 
                                                                  | (vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[2U] 
                                                                     ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block__0[2U])) 
                                                                 | (vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[3U] 
                                                                    ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block__0[3U]))))) 
                                                         << 4U) 
                                                        | ((((vlSelfRef.tb_cache_controller__DOT__cycle_count 
                                                              != vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__cycle_count__0) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.tb_cache_controller__DOT__cmt_rob_idx_o) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__cmt_rob_idx_o__0)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.tb_cache_controller__DOT__cmt_ld_vld_o) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__cmt_ld_vld_o__0)) 
                                                               << 1U) 
                                                              | (vlSelfRef.tb_cache_controller__DOT__cmt_ld_data_o 
                                                                 != vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__cmt_ld_data_o__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__cmt_ld_data_o__0 
        = vlSelfRef.tb_cache_controller__DOT__cmt_ld_data_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__cmt_ld_vld_o__0 
        = vlSelfRef.tb_cache_controller__DOT__cmt_ld_vld_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__cmt_rob_idx_o__0 
        = vlSelfRef.tb_cache_controller__DOT__cmt_rob_idx_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__cycle_count__0 
        = vlSelfRef.tb_cache_controller__DOT__cycle_count;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block__0[0U] 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block__0[1U] 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block__0[2U] 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block__0[3U] 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[3U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__dut__DOT__ctrl_repair_addr_reg__0 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_addr_reg;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__mem_req_vld_o__0 
        = vlSelfRef.tb_cache_controller__DOT__mem_req_vld_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__mem_wb_vld_o__0 
        = vlSelfRef.tb_cache_controller__DOT__mem_wb_vld_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__rst__0 
        = vlSelfRef.tb_cache_controller__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__clk__0 
        = vlSelfRef.tb_cache_controller__DOT__clk;
}

bool Vtb_cache_controller___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___trigger_anySet__act\n"); );
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

extern const VlUnpacked<CData/*1:0*/, 16> Vtb_cache_controller__ConstPool__TABLE_h72be0ac8_0;

void Vtb_cache_controller___024root___act_comb__TOP__0(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___act_comb__TOP__0\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.tb_cache_controller__DOT__mem_resp_vld_i) 
                     << 3U) | (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr_repair_req) 
                                << 2U) | (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state_next 
        = Vtb_cache_controller__ConstPool__TABLE_h72be0ac8_0
        [__Vtableidx1];
}

void Vtb_cache_controller___024root___eval_act(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___eval_act\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000a00ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_cache_controller___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_cache_controller___024root___nba_sequent__TOP__0(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___nba_sequent__TOP__0\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_vld_reg;
    __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_vld_reg = 0;
    CData/*0:0*/ __Vdly__tb_cache_controller__DOT__dut__DOT__req_vld_reg;
    __Vdly__tb_cache_controller__DOT__dut__DOT__req_vld_reg = 0;
    CData/*0:0*/ __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_wr_rd_reg;
    __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_wr_rd_reg = 0;
    CData/*0:0*/ __Vdly__tb_cache_controller__DOT__dut__DOT__req_rd_wr_reg;
    __Vdly__tb_cache_controller__DOT__dut__DOT__req_rd_wr_reg = 0;
    IData/*31:0*/ __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg;
    __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg = 0;
    IData/*31:0*/ __Vdly__tb_cache_controller__DOT__dut__DOT__req_addr_reg;
    __Vdly__tb_cache_controller__DOT__dut__DOT__req_addr_reg = 0;
    IData/*31:0*/ __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_data_reg;
    __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_data_reg = 0;
    IData/*31:0*/ __Vdly__tb_cache_controller__DOT__dut__DOT__req_st_data_reg;
    __Vdly__tb_cache_controller__DOT__dut__DOT__req_st_data_reg = 0;
    CData/*3:0*/ __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_rob_idx_reg;
    __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_rob_idx_reg = 0;
    CData/*3:0*/ __Vdly__tb_cache_controller__DOT__dut__DOT__req_rob_idx_reg;
    __Vdly__tb_cache_controller__DOT__dut__DOT__req_rob_idx_reg = 0;
    CData/*0:0*/ __VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v0;
    __VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v0 = 0;
    VlWide<4>/*127:0*/ __VdlyVal__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v64;
    VL_ZERO_W(128, __VdlyVal__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v64);
    CData/*5:0*/ __VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v64;
    __VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v64 = 0;
    CData/*0:0*/ __VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v64;
    __VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v64 = 0;
    CData/*0:0*/ __VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v0;
    __VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v0 = 0;
    CData/*5:0*/ __VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v64;
    __VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v64 = 0;
    CData/*0:0*/ __VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v64;
    __VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v64 = 0;
    IData/*21:0*/ __VdlyVal__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v65;
    __VdlyVal__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v65 = 0;
    CData/*5:0*/ __VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v65;
    __VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v65 = 0;
    CData/*0:0*/ __VdlyVal__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v66;
    __VdlyVal__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v66 = 0;
    CData/*5:0*/ __VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v66;
    __VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v66 = 0;
    CData/*5:0*/ __VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v67;
    __VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v67 = 0;
    CData/*0:0*/ __VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v67;
    __VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v67 = 0;
    IData/*31:0*/ __Vilp1;
    // Body
    __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_rob_idx_reg 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_rob_idx_reg;
    __Vdly__tb_cache_controller__DOT__dut__DOT__req_rob_idx_reg 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_rob_idx_reg;
    __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_data_reg 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_data_reg;
    __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_wr_rd_reg 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_wr_rd_reg;
    __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_vld_reg 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_vld_reg;
    __Vdly__tb_cache_controller__DOT__dut__DOT__req_st_data_reg 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_st_data_reg;
    __Vdly__tb_cache_controller__DOT__dut__DOT__req_rd_wr_reg 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_rd_wr_reg;
    __VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v0 = 0U;
    __VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v64 = 0U;
    __Vdly__tb_cache_controller__DOT__dut__DOT__req_vld_reg 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_vld_reg;
    __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg;
    __Vdly__tb_cache_controller__DOT__dut__DOT__req_addr_reg 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_addr_reg;
    __VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v0 = 0U;
    __VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v64 = 0U;
    __VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v67 = 0U;
    vlSelfRef.__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v0 = 0U;
    vlSelfRef.__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v8 = 0U;
    vlSelfRef.__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v11 = 0U;
    vlSelfRef.__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v0 = 0U;
    vlSelfRef.__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v8 = 0U;
    vlSelfRef.__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v16 = 0U;
    vlSelfRef.__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v20 = 0U;
    if (vlSelfRef.tb_cache_controller__DOT__rst) {
        __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_rob_idx_reg = 0U;
        __Vdly__tb_cache_controller__DOT__dut__DOT__req_rob_idx_reg = 0U;
        __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_data_reg = 0U;
        __Vdly__tb_cache_controller__DOT__dut__DOT__req_st_data_reg = 0U;
        __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_wr_rd_reg = 0U;
        __Vdly__tb_cache_controller__DOT__dut__DOT__req_rd_wr_reg = 0U;
        __VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v0 = 1U;
        __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_vld_reg = 0U;
        __Vdly__tb_cache_controller__DOT__dut__DOT__req_vld_reg = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_tag_reg = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[3U] = 0U;
        __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg = 0U;
        __Vdly__tb_cache_controller__DOT__dut__DOT__req_addr_reg = 0U;
        __VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v0 = 1U;
        vlSelfRef.__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v0 = 1U;
        vlSelfRef.__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v0 = 1U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repairing_st = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr_reg = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repairing_ld = 0U;
    } else {
        if (vlSelfRef.tb_cache_controller__DOT__stall_controller_o) {
            __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_rob_idx_reg 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_rob_idx_reg;
            __Vdly__tb_cache_controller__DOT__dut__DOT__req_rob_idx_reg 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_rob_idx_reg;
            __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_data_reg 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_data_reg;
            __Vdly__tb_cache_controller__DOT__dut__DOT__req_st_data_reg 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_st_data_reg;
            __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_wr_rd_reg 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_wr_rd_reg;
            __Vdly__tb_cache_controller__DOT__dut__DOT__req_rd_wr_reg 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_rd_wr_reg;
            __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_vld_reg 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_vld_reg;
            __Vdly__tb_cache_controller__DOT__dut__DOT__req_vld_reg 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_vld_reg;
            vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_tag_reg 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_tag_reg;
            vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[0U] 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[0U];
            vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[1U] 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[1U];
            vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[2U] 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[2U];
            vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[3U] 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[3U];
            __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg;
            __Vdly__tb_cache_controller__DOT__dut__DOT__req_addr_reg 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_addr_reg;
        } else {
            __Vdly__tb_cache_controller__DOT__dut__DOT__req_rob_idx_reg 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_rob_idx_reg;
            __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_rob_idx_reg 
                = vlSelfRef.tb_cache_controller__DOT__lsu_req_rob_idx_i;
            __Vdly__tb_cache_controller__DOT__dut__DOT__req_st_data_reg 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_data_reg;
            __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_data_reg 
                = vlSelfRef.tb_cache_controller__DOT__lsu_req_data_i;
            __Vdly__tb_cache_controller__DOT__dut__DOT__req_rd_wr_reg 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_wr_rd_reg;
            __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_wr_rd_reg 
                = vlSelfRef.tb_cache_controller__DOT__lsu_req_wr_rd_i;
            if (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_vld_reg) {
                __Vdly__tb_cache_controller__DOT__dut__DOT__req_vld_reg = 1U;
                __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_vld_reg 
                    = vlSelfRef.tb_cache_controller__DOT__lsu_req_vld_i;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_tag_reg 
                    = vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array
                    [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                                     >> 4U))];
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[0U] 
                    = vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array
                    [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                                     >> 4U))][0U];
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[1U] 
                    = vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array
                    [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                                     >> 4U))][1U];
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[2U] 
                    = vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array
                    [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                                     >> 4U))][2U];
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[3U] 
                    = vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array
                    [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                                     >> 4U))][3U];
            } else {
                __Vdly__tb_cache_controller__DOT__dut__DOT__req_vld_reg = 0U;
                __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_vld_reg 
                    = vlSelfRef.tb_cache_controller__DOT__lsu_req_vld_i;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_tag_reg = 0U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[0U] = 0U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[1U] = 0U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[2U] = 0U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[3U] = 0U;
            }
            __Vdly__tb_cache_controller__DOT__dut__DOT__req_addr_reg 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg;
            __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
                = vlSelfRef.tb_cache_controller__DOT__lsu_req_addr_i;
        }
        if (vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_en) {
            __VdlyVal__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v64[0U] 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_data_wire[0U];
            __VdlyVal__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v64[1U] 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_data_wire[1U];
            __VdlyVal__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v64[2U] 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_data_wire[2U];
            __VdlyVal__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v64[3U] 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_data_wire[3U];
            __VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v64 
                = (0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
                                  >> 4U));
            __VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v64 = 1U;
            if (vlSelfRef.tb_cache_controller__DOT__dut__DOT__is_repair) {
                __VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v64 
                    = (0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
                                      >> 4U));
                __VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v64 = 1U;
                __VdlyVal__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v65 
                    = (vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
                       >> 0x0000000aU);
                __VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v65 
                    = (0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
                                      >> 4U));
                __VdlyVal__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v66 
                    = vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_is_store;
                __VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v66 
                    = (0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
                                      >> 4U));
            } else {
                __VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v67 
                    = (0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
                                      >> 4U));
                __VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v67 = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__flush)))) {
            if ((((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT____VdfgRegularize_h0e291f09_0_0) 
                  & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_rd_wr_reg)) 
                 & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__st_mshr_full)))) {
                vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v8 
                    = vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx;
                vlSelfRef.__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v8 = 1U;
                vlSelfRef.__VdlyVal__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v9 
                    = vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_addr_reg;
                vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v9 
                    = vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx;
                vlSelfRef.__VdlyVal__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v10 
                    = vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_st_data_reg;
                vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v10 
                    = vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx;
            }
            if ((2U == (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state))) {
                if (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repairing_st) {
                    vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v11 
                        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr_reg;
                    vlSelfRef.__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v11 = 1U;
                }
            }
        }
        if (vlSelfRef.tb_cache_controller__DOT__flush) {
            vlSelfRef.__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v8 = 1U;
        } else {
            if ((((~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_rd_wr_reg)) 
                  & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT____VdfgRegularize_h0e291f09_0_0)) 
                 & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__ld_mshr_full)))) {
                vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v16 
                    = vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx;
                vlSelfRef.__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v16 = 1U;
                vlSelfRef.__VdlyVal__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v17 
                    = vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_addr_reg;
                vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v17 
                    = vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx;
                vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v18 
                    = vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx;
                vlSelfRef.__VdlyVal__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v19 
                    = vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_rob_idx_reg;
                vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v19 
                    = vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx;
            }
            if ((2U == (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state))) {
                if (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repairing_ld) {
                    vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v20 
                        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr_reg;
                    vlSelfRef.__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v20 = 1U;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld) 
                      & (IData)(vlSelfRef.tb_cache_controller__DOT__mem_req_vld_o))))) {
            if (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st) 
                 & (IData)(vlSelfRef.tb_cache_controller__DOT__mem_req_vld_o))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repairing_st = 1U;
            } else if ((2U == (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repairing_st = 0U;
            }
        }
        if (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld) 
             & (IData)(vlSelfRef.tb_cache_controller__DOT__mem_req_vld_o))) {
            vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr_reg 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr;
            vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repairing_ld = 1U;
        } else {
            if (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st) 
                 & (IData)(vlSelfRef.tb_cache_controller__DOT__mem_req_vld_o))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr_reg 
                    = vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr;
            } else if ((2U == (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr_reg = 0U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st) 
                          & (IData)(vlSelfRef.tb_cache_controller__DOT__mem_req_vld_o))))) {
                if ((2U == (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state))) {
                    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repairing_ld = 0U;
                }
            }
        }
    }
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_rob_idx_reg 
        = __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_rob_idx_reg;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_data_reg 
        = __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_data_reg;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_wr_rd_reg 
        = __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_wr_rd_reg;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_vld_reg 
        = __Vdly__tb_cache_controller__DOT__dut__DOT__req_vld_reg;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_vld_reg 
        = __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_vld_reg;
    if (__VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v0) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[0U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[0U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[0U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[0U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[1U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[1U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[1U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[1U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[2U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[2U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[2U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[2U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[3U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[3U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[3U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[3U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[4U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[4U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[4U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[4U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[5U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[5U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[5U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[5U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[6U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[6U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[6U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[6U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[7U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[7U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[7U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[7U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[8U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[8U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[8U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[8U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[9U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[9U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[9U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[9U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[10U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[10U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[10U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[10U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[11U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[11U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[11U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[11U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[12U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[12U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[12U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[12U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[13U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[13U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[13U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[13U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[14U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[14U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[14U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[14U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[15U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[15U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[15U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[15U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[16U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[16U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[16U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[16U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[17U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[17U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[17U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[17U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[18U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[18U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[18U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[18U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[19U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[19U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[19U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[19U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[20U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[20U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[20U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[20U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[21U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[21U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[21U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[21U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[22U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[22U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[22U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[22U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[23U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[23U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[23U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[23U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[24U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[24U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[24U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[24U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[25U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[25U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[25U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[25U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[26U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[26U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[26U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[26U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[27U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[27U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[27U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[27U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[28U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[28U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[28U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[28U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[29U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[29U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[29U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[29U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[30U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[30U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[30U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[30U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[31U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[31U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[31U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[31U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[32U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[32U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[32U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[32U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[33U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[33U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[33U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[33U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[34U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[34U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[34U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[34U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[35U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[35U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[35U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[35U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[36U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[36U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[36U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[36U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[37U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[37U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[37U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[37U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[38U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[38U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[38U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[38U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[39U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[39U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[39U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[39U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[40U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[40U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[40U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[40U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[41U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[41U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[41U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[41U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[42U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[42U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[42U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[42U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[43U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[43U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[43U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[43U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[44U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[44U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[44U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[44U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[45U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[45U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[45U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[45U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[46U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[46U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[46U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[46U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[47U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[47U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[47U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[47U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[48U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[48U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[48U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[48U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[49U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[49U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[49U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[49U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[50U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[50U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[50U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[50U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[51U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[51U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[51U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[51U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[52U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[52U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[52U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[52U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[53U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[53U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[53U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[53U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[54U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[54U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[54U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[54U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[55U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[55U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[55U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[55U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[56U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[56U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[56U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[56U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[57U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[57U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[57U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[57U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[58U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[58U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[58U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[58U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[59U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[59U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[59U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[59U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[60U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[60U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[60U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[60U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[61U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[61U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[61U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[61U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[62U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[62U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[62U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[62U][3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[63U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[63U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[63U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[63U][3U] = 0U;
    }
    if (__VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v64) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[__VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v64][0U] 
            = __VdlyVal__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v64[0U];
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[__VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v64][1U] 
            = __VdlyVal__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v64[1U];
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[__VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v64][2U] 
            = __VdlyVal__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v64[2U];
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array[__VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v64][3U] 
            = __VdlyVal__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array__v64[3U];
    }
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg 
        = __Vdly__tb_cache_controller__DOT__dut__DOT__lsu_req_addr_reg;
    if (__VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v0) {
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x0000003fU)) {
            vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
    if (__VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v64) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array[__VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v64] 
            = (2U | vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array
               [__VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v64]);
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array[__VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v65] 
            = ((3U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array
                [__VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v65]) 
               | (__VdlyVal__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v65 
                  << 2U));
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array[__VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v66] 
            = ((0x00fffffeU & vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array
                [__VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v66]) 
               | (IData)(__VdlyVal__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v66));
    }
    if (__VdlySet__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v67) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array[__VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v67] 
            = (1U | vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array
               [__VdlyDim0__tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array__v67]);
    }
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_st_data_reg 
        = __Vdly__tb_cache_controller__DOT__dut__DOT__req_st_data_reg;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_rob_idx_reg 
        = __Vdly__tb_cache_controller__DOT__dut__DOT__req_rob_idx_reg;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_rd_wr_reg 
        = __Vdly__tb_cache_controller__DOT__dut__DOT__req_rd_wr_reg;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_addr_reg 
        = __Vdly__tb_cache_controller__DOT__dut__DOT__req_addr_reg;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_hit 
        = ((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_vld_reg) 
           & ((vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_tag_reg 
               >> 1U) & ((vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_addr_reg 
                          >> 0x0000000aU) == (0x003fffffU 
                                              & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_tag_reg 
                                                 >> 2U)))));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT____VdfgRegularize_h0e291f09_0_0 
        = ((~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_hit)) 
           & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_vld_reg));
}

void Vtb_cache_controller___024root___nba_sequent__TOP__1(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___nba_sequent__TOP__1\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("Clk-Cycle: [%11d] | rst %b | Repair Request %b | Repair Address %10# | Memory Writeback %b | Writeback Data %39# | Load Valid %b | Load Data %10# | Load RoB Entry %2#\n",0,
                     32,vlSelfRef.tb_cache_controller__DOT__cycle_count,
                     1,(IData)(vlSelfRef.tb_cache_controller__DOT__rst),
                     1,vlSelfRef.tb_cache_controller__DOT__mem_req_vld_o,
                     32,vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_addr_reg,
                     1,(IData)(vlSelfRef.tb_cache_controller__DOT__mem_wb_vld_o),
                     128,vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block.data(),
                     1,(IData)(vlSelfRef.tb_cache_controller__DOT__cmt_ld_vld_o),
                     32,vlSelfRef.tb_cache_controller__DOT__cmt_ld_data_o,
                     4,(IData)(vlSelfRef.tb_cache_controller__DOT__cmt_rob_idx_o));
    }
}

void Vtb_cache_controller___024root___nba_sequent__TOP__2(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___nba_sequent__TOP__2\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_cache_controller__DOT__rst) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_addr_reg = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_data_reg = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_rob_idx_reg = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_is_store = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mem_resp_block_reg[0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mem_resp_block_reg[1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mem_resp_block_reg[2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mem_resp_block_reg[3U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state = 0U;
    } else {
        if (((0U == (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state)) 
             & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr_repair_req))) {
            if (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_addr_reg 
                    = ((vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld
                        [vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr][2U] 
                        << 0x0000001cU) | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld
                                           [vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr][1U] 
                                           >> 4U));
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_rob_idx_reg 
                    = (0x0000000fU & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld
                       [vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr][0U]);
            } else {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_addr_reg 
                    = ((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st)
                        ? vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st
                       [vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr][1U]
                        : 0U);
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_rob_idx_reg = 0U;
            }
            if (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_data_reg 
                    = vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st
                    [vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr][0U];
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_is_store = 1U;
            } else {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_data_reg = 0U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_is_store = 0U;
            }
        }
        if (((1U == (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state)) 
             & (IData)(vlSelfRef.tb_cache_controller__DOT__mem_resp_vld_i))) {
            vlSelfRef.tb_cache_controller__DOT__dut__DOT__mem_resp_block_reg[0U] 
                = vlSelfRef.tb_cache_controller__DOT__mem_resp_data_i[0U];
            vlSelfRef.tb_cache_controller__DOT__dut__DOT__mem_resp_block_reg[1U] 
                = vlSelfRef.tb_cache_controller__DOT__mem_resp_data_i[1U];
            vlSelfRef.tb_cache_controller__DOT__dut__DOT__mem_resp_block_reg[2U] 
                = vlSelfRef.tb_cache_controller__DOT__mem_resp_data_i[2U];
            vlSelfRef.tb_cache_controller__DOT__dut__DOT__mem_resp_block_reg[3U] 
                = vlSelfRef.tb_cache_controller__DOT__mem_resp_data_i[3U];
        }
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state 
            = vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state_next;
    }
    if (vlSelfRef.__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v0) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[0U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[0U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[0U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[1U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[1U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[1U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[2U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[2U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[2U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[3U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[3U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[3U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[4U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[4U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[4U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[5U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[5U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[5U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[6U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[6U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[6U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[7U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[7U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[7U][2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v8) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v8][2U] 
            = (1U | vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st
               [vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v8][2U]);
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v9][1U] 
            = vlSelfRef.__VdlyVal__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v9;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v10][0U] 
            = vlSelfRef.__VdlyVal__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v10;
    }
    if (vlSelfRef.__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v11) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st__v11][2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v0) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[0U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[0U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[0U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[1U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[1U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[1U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[2U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[2U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[2U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[3U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[3U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[3U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[4U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[4U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[4U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[5U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[5U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[5U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[6U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[6U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[6U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[7U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[7U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[7U][2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v8) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[0U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[0U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[0U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[1U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[1U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[1U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[2U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[2U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[2U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[3U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[3U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[3U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[4U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[4U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[4U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[5U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[5U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[5U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[6U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[6U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[6U][2U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[7U][0U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[7U][1U] = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[7U][2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v16) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v16][2U] 
            = (0x00000010U | vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld
               [vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v16][2U]);
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v17][1U] 
            = ((0x0000000fU & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld
                [vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v17][1U]) 
               | (vlSelfRef.__VdlyVal__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v17 
                  << 4U));
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v17][2U] 
            = ((0x00000010U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld
                [vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v17][2U]) 
               | (0x0000001fU & (vlSelfRef.__VdlyVal__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v17 
                                 >> 0x0000001cU)));
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v18][0U] 
            = (0x0000000fU & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld
               [vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v18][0U]);
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v18][1U] 
            = (0xfffffff0U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld
               [vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v18][1U]);
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v19][0U] 
            = ((0xfffffff0U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld
                [vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v19][0U]) 
               | (IData)(vlSelfRef.__VdlyVal__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v19));
    }
    if (vlSelfRef.__VdlySet__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v20) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v20][2U] 
            = (0x0000000fU & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld
               [vlSelfRef.__VdlyDim0__tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld__v20][2U]);
    }
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx = 0U;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found = 0U;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free 
        = ((0xfeU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free)) 
           | (1U & (~ vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[0U][2U])));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free 
        = ((0xfdU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free)) 
           | (2U & ((~ vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[1U][2U]) 
                    << 1U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free 
        = ((0xfbU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free)) 
           | (4U & ((~ vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[2U][2U]) 
                    << 2U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free 
        = ((0xf7U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free)) 
           | (8U & ((~ vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[3U][2U]) 
                    << 3U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free 
        = ((0xefU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free)) 
           | (0x00000010U & ((~ vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[4U][2U]) 
                             << 4U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free 
        = ((0xdfU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free)) 
           | (0x00000020U & ((~ vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[5U][2U]) 
                             << 5U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free 
        = ((0xbfU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free)) 
           | (0x00000040U & ((~ vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[6U][2U]) 
                             << 6U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free 
        = ((0x7fU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free)) 
           | (0x00000080U & ((~ vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[7U][2U]) 
                             << 7U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__st_mshr_full 
        = (1U & (~ (0U != (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free))));
    if ((1U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free) 
                >> 1U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx = 1U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free) 
                >> 2U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx = 2U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free) 
                >> 3U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx = 3U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free) 
                >> 4U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx = 4U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free) 
                >> 5U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx = 5U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free) 
                >> 6U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx = 6U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found = 1U;
    }
    if ((IData)((((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st_free) 
                  >> 7U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx = 7U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_alloc_idx_found = 1U;
    }
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx = 0U;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found = 0U;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free 
        = ((0xfeU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free)) 
           | (1U & (~ (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[0U][2U] 
                       >> 4U))));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free 
        = ((0xfdU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free)) 
           | (2U & ((~ (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[1U][2U] 
                        >> 4U)) << 1U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free 
        = ((0xfbU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free)) 
           | (4U & ((~ (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[2U][2U] 
                        >> 4U)) << 2U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free 
        = ((0xf7U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free)) 
           | (8U & ((~ (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[3U][2U] 
                        >> 4U)) << 3U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free 
        = ((0xefU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free)) 
           | (0x00000010U & ((~ (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[4U][2U] 
                                 >> 4U)) << 4U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free 
        = ((0xdfU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free)) 
           | (0x00000020U & ((~ (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[5U][2U] 
                                 >> 4U)) << 5U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free 
        = ((0xbfU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free)) 
           | (0x00000040U & ((~ (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[6U][2U] 
                                 >> 4U)) << 6U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free 
        = ((0x7fU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free)) 
           | (0x00000080U & ((~ (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[7U][2U] 
                                 >> 4U)) << 7U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__ld_mshr_full 
        = (1U & (~ (0U != (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free))));
    if ((1U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free) 
                >> 1U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx = 1U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free) 
                >> 2U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx = 2U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free) 
                >> 3U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx = 3U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free) 
                >> 4U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx = 4U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free) 
                >> 5U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx = 5U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free) 
                >> 6U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx = 6U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found = 1U;
    }
    if ((IData)((((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld_free) 
                  >> 7U) & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx = 7U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_alloc_idx_found = 1U;
    }
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req = 0U;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req = 0U;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req 
        = ((0xfeU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req)) 
           | (1U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[0U][2U] 
                    >> 4U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req 
        = ((0xfeU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req)) 
           | (1U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[0U][2U]));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req 
        = ((0xfdU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req)) 
           | (2U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[1U][2U] 
                    >> 3U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req 
        = ((0xfdU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req)) 
           | (2U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[1U][2U] 
                    << 1U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req 
        = ((0xfbU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req)) 
           | (4U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[2U][2U] 
                    >> 2U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req 
        = ((0xfbU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req)) 
           | (4U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[2U][2U] 
                    << 2U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req 
        = ((0xf7U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req)) 
           | (8U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[3U][2U] 
                    >> 1U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req 
        = ((0xf7U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req)) 
           | (8U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[3U][2U] 
                    << 3U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req 
        = ((0xefU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req)) 
           | (0x00000010U & vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[4U][2U]));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req 
        = ((0xefU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req)) 
           | (0x00000010U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[4U][2U] 
                             << 4U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req 
        = ((0xdfU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req)) 
           | (0x00000020U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[5U][2U] 
                             << 1U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req 
        = ((0xdfU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req)) 
           | (0x00000020U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[5U][2U] 
                             << 5U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req 
        = ((0xbfU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req)) 
           | (0x00000040U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[6U][2U] 
                             << 2U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req 
        = ((0xbfU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req)) 
           | (0x00000040U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[6U][2U] 
                             << 6U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req 
        = ((0x7fU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req)) 
           | (0x00000080U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_ld[7U][2U] 
                             << 3U)));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req 
        = ((0x7fU & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req)) 
           | (0x00000080U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__mshr_st[7U][2U] 
                             << 7U)));
    if ((1U & ((~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repairing_ld)) 
               & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repairing_st))))) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 0U;
        if ((0U != (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req))) {
            if ((0x00000080U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 7U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld = 1U;
            }
            if ((0x00000040U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 6U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld = 1U;
            }
            if ((0x00000020U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 5U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld = 1U;
            }
            if ((0x00000010U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 4U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld = 1U;
            }
            if ((8U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 3U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld = 1U;
            }
            if ((4U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 2U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld = 1U;
            }
            if ((2U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 1U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld = 1U;
            }
            if ((1U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__ld_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 0U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld = 1U;
            }
        } else if ((0U != (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req))) {
            if ((0x00000080U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 7U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st = 1U;
            }
            if ((0x00000040U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 6U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st = 1U;
            }
            if ((0x00000020U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 5U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st = 1U;
            }
            if ((0x00000010U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 4U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st = 1U;
            }
            if ((8U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 3U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st = 1U;
            }
            if ((4U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 2U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st = 1U;
            }
            if ((2U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 1U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st = 1U;
            }
            if ((1U & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__st_repair_req))) {
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 0U;
                vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st = 1U;
            }
        } else {
            vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 0U;
            vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld = 0U;
            vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st = 0U;
        }
    } else {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__repair_ptr = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld = 0U;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st = 0U;
    }
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr_repair_req 
        = ((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_ld) 
           | (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr__DOT__start_repair_st));
    vlSelfRef.tb_cache_controller__DOT__mem_req_vld_o 
        = ((0U == (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state)) 
           & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__mshr_repair_req));
    vlSelfRef.tb_cache_controller__DOT__stall_controller_o 
        = ((2U == (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state)) 
           | ((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__ld_mshr_full) 
              | (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__st_mshr_full)));
    vlSelfRef.tb_cache_controller__DOT__cmt_ld_vld_o = 0U;
    vlSelfRef.tb_cache_controller__DOT__cmt_rob_idx_o = 0U;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset = 0U;
    vlSelfRef.tb_cache_controller__DOT__cmt_ld_data_o = 0U;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_wr_data[0U] 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__mem_resp_block_reg[0U];
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_wr_data[1U] 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__mem_resp_block_reg[1U];
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_wr_data[2U] 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__mem_resp_block_reg[2U];
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_wr_data[3U] 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__mem_resp_block_reg[3U];
    if ((2U == (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_is_store)))) {
            vlSelfRef.tb_cache_controller__DOT__cmt_ld_vld_o = 1U;
            vlSelfRef.tb_cache_controller__DOT__cmt_rob_idx_o 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_rob_idx_reg;
        }
        if (vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_is_store) {
            VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & 
                                      VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset), 5U)), vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_wr_data, vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_data_reg);
        } else {
            vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset 
                = (3U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_addr_reg 
                         >> 2U));
            vlSelfRef.tb_cache_controller__DOT__cmt_ld_data_o 
                = (((0U == (0x0000001fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset), 5U)))
                     ? 0U : (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mem_resp_block_reg
                             [(((IData)(0x0000001fU) 
                                + (0x0000007fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset), 5U))) 
                               >> 5U)] << ((IData)(0x00000020U) 
                                           - (0x0000001fU 
                                              & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset), 5U))))) 
                   | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__mem_resp_block_reg
                      [(3U & (VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset), 5U) 
                              >> 5U))] >> (0x0000001fU 
                                           & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset), 5U))));
        }
    } else {
        vlSelfRef.tb_cache_controller__DOT__cmt_ld_vld_o 
            = ((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_hit) 
               & (~ (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_rd_wr_reg)));
        vlSelfRef.tb_cache_controller__DOT__cmt_rob_idx_o 
            = vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_rob_idx_reg;
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset 
            = (3U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_addr_reg 
                     >> 2U));
        vlSelfRef.tb_cache_controller__DOT__cmt_ld_data_o 
            = (((0U == (0x0000001fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset), 5U)))
                 ? 0U : (vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg
                         [(((IData)(0x0000001fU) + 
                            (0x0000007fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset), 5U))) 
                           >> 5U)] << ((IData)(0x00000020U) 
                                       - (0x0000001fU 
                                          & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset), 5U))))) 
               | (vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg
                  [(3U & (VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset), 5U) 
                          >> 5U))] >> (0x0000001fU 
                                       & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__cmt_block_offset), 5U))));
    }
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__store_wr_en 
        = ((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_rd_wr_reg) 
           & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_hit));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block_offset 
        = (3U & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_addr_reg 
                 >> 2U));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block[0U] 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[0U];
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block[1U] 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[1U];
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block[2U] 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[2U];
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block[3U] 
        = vlSelfRef.tb_cache_controller__DOT__dut__DOT__rd_data_reg[3U];
    VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block_offset), 5U)), vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block, vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_st_data_reg);
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__is_repair 
        = (2U == (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_state));
    vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_en 
        = ((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__is_repair) 
           | (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__store_wr_en));
    if (vlSelfRef.tb_cache_controller__DOT__dut__DOT__is_repair) {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_data_wire[0U] 
            = vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_wr_data[0U];
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_data_wire[1U] 
            = vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_wr_data[1U];
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_data_wire[2U] 
            = vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_wr_data[2U];
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_data_wire[3U] 
            = vlSelfRef.tb_cache_controller__DOT__dut__DOT__repair_wr_data[3U];
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
            = vlSelfRef.tb_cache_controller__DOT__dut__DOT__ctrl_repair_addr_reg;
    } else {
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_data_wire[0U] 
            = vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block[0U];
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_data_wire[1U] 
            = vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block[1U];
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_data_wire[2U] 
            = vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block[2U];
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_data_wire[3U] 
            = vlSelfRef.tb_cache_controller__DOT__dut__DOT__write_block[3U];
        vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
            = vlSelfRef.tb_cache_controller__DOT__dut__DOT__req_addr_reg;
    }
    vlSelfRef.tb_cache_controller__DOT__mem_wb_vld_o = 0U;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[0U] = 0U;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[1U] = 0U;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[2U] = 0U;
    vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[3U] = 0U;
    if (((IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_en) 
         & (IData)(vlSelfRef.tb_cache_controller__DOT__dut__DOT__is_repair))) {
        if ((1U & ((vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array
                    [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
                                     >> 4U))] >> 1U) 
                   & vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__tag_array
                   [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
                                    >> 4U))]))) {
            vlSelfRef.tb_cache_controller__DOT__mem_wb_vld_o = 1U;
            vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[0U] 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array
                [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
                                 >> 4U))][0U];
            vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[1U] 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array
                [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
                                 >> 4U))][1U];
            vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[2U] 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array
                [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
                                 >> 4U))][2U];
            vlSelfRef.tb_cache_controller__DOT__dut__DOT____Vcellout__u_data_cache__wb_evicted_block[3U] 
                = vlSelfRef.tb_cache_controller__DOT__dut__DOT__u_data_cache__DOT__data_array
                [(0x0000003fU & (vlSelfRef.tb_cache_controller__DOT__dut__DOT__wr_addr_wire 
                                 >> 4U))][3U];
        }
    }
}

void Vtb_cache_controller___024root___eval_nba(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___eval_nba\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_cache_controller___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0x00000000000001ffULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_cache_controller___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_cache_controller___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x0000000000000a00ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_cache_controller___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_cache_controller___024root___timing_ready(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___timing_ready\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000200ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h8138e795__0.ready("@(posedge tb_cache_controller.clk)");
    }
    if ((0x0000000000000800ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h8138e465__0.ready("@(negedge tb_cache_controller.clk)");
    }
}

void Vtb_cache_controller___024root___timing_resume(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___timing_resume\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h8138e795__0.moveToResumeQueue(
                                                          "@(posedge tb_cache_controller.clk)");
    vlSelfRef.__VtrigSched_h8138e465__0.moveToResumeQueue(
                                                          "@(negedge tb_cache_controller.clk)");
    vlSelfRef.__VtrigSched_h8138e795__0.resume("@(posedge tb_cache_controller.clk)");
    vlSelfRef.__VtrigSched_h8138e465__0.resume("@(negedge tb_cache_controller.clk)");
    if ((0x0000000000000400ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_cache_controller___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_cache_controller___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_cache_controller___024root___eval_phase__act(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___eval_phase__act\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_cache_controller___024root___eval_triggers_vec__act(vlSelf);
    Vtb_cache_controller___024root___timing_ready(vlSelf);
    Vtb_cache_controller___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cache_controller___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_cache_controller___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_cache_controller___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_cache_controller___024root___timing_resume(vlSelf);
        Vtb_cache_controller___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_cache_controller___024root___eval_phase__inact(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___eval_phase__inact\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("sim/tb_cache_controller.sv", 4, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_cache_controller___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_cache_controller___024root___eval_phase__nba(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___eval_phase__nba\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_cache_controller___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_cache_controller___024root___eval_nba(vlSelf);
        Vtb_cache_controller___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_cache_controller___024root___eval(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___eval\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cache_controller___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("sim/tb_cache_controller.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("sim/tb_cache_controller.sv", 4, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_cache_controller___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("sim/tb_cache_controller.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_cache_controller___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_cache_controller___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_cache_controller___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_cache_controller___024root____VbeforeTrig_h8138e795__0(Vtb_cache_controller___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root____VbeforeTrig_h8138e795__0\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_cache_controller__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__clk__0)) 
                                   << 0x0000000bU) 
                                  | (((IData)(vlSelfRef.tb_cache_controller__DOT__clk) 
                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__clk__0))) 
                                     << 9U))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__clk__0 
        = vlSelfRef.tb_cache_controller__DOT__clk;
    if ((0x0000000000000200ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h8138e795__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8138e795__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8138e795__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8138e795__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8138e795__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8138e795__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8138e795__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8138e795__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8138e795__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8138e795__0.ready(__VeventDescription);
    }
    if ((0x0000000000000800ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h8138e465__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8138e465__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8138e465__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8138e465__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_cache_controller___024root____VbeforeTrig_h8138e465__0(Vtb_cache_controller___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root____VbeforeTrig_h8138e465__0\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_cache_controller__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__clk__0)) 
                                   << 0x0000000bU) 
                                  | (((IData)(vlSelfRef.tb_cache_controller__DOT__clk) 
                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__clk__0))) 
                                     << 9U))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache_controller__DOT__clk__0 
        = vlSelfRef.tb_cache_controller__DOT__clk;
    if ((0x0000000000000200ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h8138e795__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8138e795__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8138e795__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8138e795__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8138e795__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8138e795__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8138e795__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8138e795__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8138e795__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8138e795__0.ready(__VeventDescription);
    }
    if ((0x0000000000000800ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h8138e465__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8138e465__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8138e465__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8138e465__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_cache_controller___024root___eval_debug_assertions(Vtb_cache_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache_controller___024root___eval_debug_assertions\n"); );
    Vtb_cache_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
