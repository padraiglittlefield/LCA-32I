// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_register_read.h for the primary calling header

#include "Vtb_register_read__pch.h"

VL_ATTR_COLD void Vtb_register_read___024root___eval_initial__TOP(Vtb_register_read___024root* vlSelf);
VlCoroutine Vtb_register_read___024root___eval_initial__TOP__Vtiming__0(Vtb_register_read___024root* vlSelf);
VlCoroutine Vtb_register_read___024root___eval_initial__TOP__Vtiming__1(Vtb_register_read___024root* vlSelf);

void Vtb_register_read___024root___eval_initial(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___eval_initial\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_register_read___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_register_read___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_register_read___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_register_read___024root___eval_initial__TOP__Vtiming__0(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "sim/tb_register_read.sv", 
                                             20);
        vlSelfRef.tb_register_read__DOT__clk = 1U;
        vlSelfRef.tb_register_read__DOT__cycle_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__cycle_count);
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "sim/tb_register_read.sv", 
                                             22);
        vlSelfRef.tb_register_read__DOT__clk = 0U;
    }
    co_return;
}

void Vtb_register_read___024root____VbeforeTrig_ha6c2d866__0(Vtb_register_read___024root* vlSelf, const char* __VeventDescription);
void Vtb_register_read___024root____VbeforeTrig_ha6c2dba4__0(Vtb_register_read___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_register_read___024root___eval_initial__TOP__Vtiming__1(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__3__condition;
    __Vtask_tb_register_read__DOT__check_assertion__3__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__4__condition;
    __Vtask_tb_register_read__DOT__check_assertion__4__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__set_forwarding__6__src1_hit;
    __Vtask_tb_register_read__DOT__set_forwarding__6__src1_hit = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__set_forwarding__6__src2_hit;
    __Vtask_tb_register_read__DOT__set_forwarding__6__src2_hit = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_forwarding__6__src1_fwd_val;
    __Vtask_tb_register_read__DOT__set_forwarding__6__src1_fwd_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_forwarding__6__src2_fwd_val;
    __Vtask_tb_register_read__DOT__set_forwarding__6__src2_fwd_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_reg_file_values__7__src1_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__7__src1_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_reg_file_values__7__src2_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__7__src2_val = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__send_instruction__8__fire_valid_in;
    __Vtask_tb_register_read__DOT__send_instruction__8__fire_valid_in = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__send_instruction__8__pc;
    __Vtask_tb_register_read__DOT__send_instruction__8__pc = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__8__src1_preg;
    __Vtask_tb_register_read__DOT__send_instruction__8__src1_preg = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__8__src2_preg;
    __Vtask_tb_register_read__DOT__send_instruction__8__src2_preg = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__8__dst_preg;
    __Vtask_tb_register_read__DOT__send_instruction__8__dst_preg = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__send_instruction__8__imm_val;
    __Vtask_tb_register_read__DOT__send_instruction__8__imm_val = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__send_instruction__8__instr_valid;
    __Vtask_tb_register_read__DOT__send_instruction__8__instr_valid = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__9__condition;
    __Vtask_tb_register_read__DOT__check_assertion__9__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__10__condition;
    __Vtask_tb_register_read__DOT__check_assertion__10__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__11__condition;
    __Vtask_tb_register_read__DOT__check_assertion__11__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__12__condition;
    __Vtask_tb_register_read__DOT__check_assertion__12__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__13__condition;
    __Vtask_tb_register_read__DOT__check_assertion__13__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__14__condition;
    __Vtask_tb_register_read__DOT__check_assertion__14__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__15__condition;
    __Vtask_tb_register_read__DOT__check_assertion__15__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__16__condition;
    __Vtask_tb_register_read__DOT__check_assertion__16__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__set_forwarding__18__src1_hit;
    __Vtask_tb_register_read__DOT__set_forwarding__18__src1_hit = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__set_forwarding__18__src2_hit;
    __Vtask_tb_register_read__DOT__set_forwarding__18__src2_hit = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_forwarding__18__src1_fwd_val;
    __Vtask_tb_register_read__DOT__set_forwarding__18__src1_fwd_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_forwarding__18__src2_fwd_val;
    __Vtask_tb_register_read__DOT__set_forwarding__18__src2_fwd_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_reg_file_values__19__src1_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__19__src1_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_reg_file_values__19__src2_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__19__src2_val = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__send_instruction__20__fire_valid_in;
    __Vtask_tb_register_read__DOT__send_instruction__20__fire_valid_in = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__send_instruction__20__pc;
    __Vtask_tb_register_read__DOT__send_instruction__20__pc = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__20__src1_preg;
    __Vtask_tb_register_read__DOT__send_instruction__20__src1_preg = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__20__src2_preg;
    __Vtask_tb_register_read__DOT__send_instruction__20__src2_preg = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__20__dst_preg;
    __Vtask_tb_register_read__DOT__send_instruction__20__dst_preg = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__send_instruction__20__imm_val;
    __Vtask_tb_register_read__DOT__send_instruction__20__imm_val = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__send_instruction__20__instr_valid;
    __Vtask_tb_register_read__DOT__send_instruction__20__instr_valid = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__21__condition;
    __Vtask_tb_register_read__DOT__check_assertion__21__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__22__condition;
    __Vtask_tb_register_read__DOT__check_assertion__22__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__23__condition;
    __Vtask_tb_register_read__DOT__check_assertion__23__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__24__condition;
    __Vtask_tb_register_read__DOT__check_assertion__24__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__set_forwarding__26__src1_hit;
    __Vtask_tb_register_read__DOT__set_forwarding__26__src1_hit = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__set_forwarding__26__src2_hit;
    __Vtask_tb_register_read__DOT__set_forwarding__26__src2_hit = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_forwarding__26__src1_fwd_val;
    __Vtask_tb_register_read__DOT__set_forwarding__26__src1_fwd_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_forwarding__26__src2_fwd_val;
    __Vtask_tb_register_read__DOT__set_forwarding__26__src2_fwd_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_reg_file_values__27__src1_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__27__src1_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_reg_file_values__27__src2_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__27__src2_val = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__send_instruction__28__fire_valid_in;
    __Vtask_tb_register_read__DOT__send_instruction__28__fire_valid_in = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__send_instruction__28__pc;
    __Vtask_tb_register_read__DOT__send_instruction__28__pc = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__28__src1_preg;
    __Vtask_tb_register_read__DOT__send_instruction__28__src1_preg = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__28__src2_preg;
    __Vtask_tb_register_read__DOT__send_instruction__28__src2_preg = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__28__dst_preg;
    __Vtask_tb_register_read__DOT__send_instruction__28__dst_preg = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__send_instruction__28__imm_val;
    __Vtask_tb_register_read__DOT__send_instruction__28__imm_val = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__send_instruction__28__instr_valid;
    __Vtask_tb_register_read__DOT__send_instruction__28__instr_valid = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__29__condition;
    __Vtask_tb_register_read__DOT__check_assertion__29__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__30__condition;
    __Vtask_tb_register_read__DOT__check_assertion__30__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__set_forwarding__32__src1_hit;
    __Vtask_tb_register_read__DOT__set_forwarding__32__src1_hit = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__set_forwarding__32__src2_hit;
    __Vtask_tb_register_read__DOT__set_forwarding__32__src2_hit = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_forwarding__32__src1_fwd_val;
    __Vtask_tb_register_read__DOT__set_forwarding__32__src1_fwd_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_forwarding__32__src2_fwd_val;
    __Vtask_tb_register_read__DOT__set_forwarding__32__src2_fwd_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_reg_file_values__33__src1_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__33__src1_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_reg_file_values__33__src2_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__33__src2_val = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__send_instruction__34__fire_valid_in;
    __Vtask_tb_register_read__DOT__send_instruction__34__fire_valid_in = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__send_instruction__34__pc;
    __Vtask_tb_register_read__DOT__send_instruction__34__pc = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__34__src1_preg;
    __Vtask_tb_register_read__DOT__send_instruction__34__src1_preg = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__34__src2_preg;
    __Vtask_tb_register_read__DOT__send_instruction__34__src2_preg = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__34__dst_preg;
    __Vtask_tb_register_read__DOT__send_instruction__34__dst_preg = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__send_instruction__34__imm_val;
    __Vtask_tb_register_read__DOT__send_instruction__34__imm_val = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__send_instruction__34__instr_valid;
    __Vtask_tb_register_read__DOT__send_instruction__34__instr_valid = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__35__condition;
    __Vtask_tb_register_read__DOT__check_assertion__35__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__36__condition;
    __Vtask_tb_register_read__DOT__check_assertion__36__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__set_forwarding__38__src1_hit;
    __Vtask_tb_register_read__DOT__set_forwarding__38__src1_hit = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__set_forwarding__38__src2_hit;
    __Vtask_tb_register_read__DOT__set_forwarding__38__src2_hit = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_forwarding__38__src1_fwd_val;
    __Vtask_tb_register_read__DOT__set_forwarding__38__src1_fwd_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_forwarding__38__src2_fwd_val;
    __Vtask_tb_register_read__DOT__set_forwarding__38__src2_fwd_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_reg_file_values__39__src1_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__39__src1_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_reg_file_values__39__src2_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__39__src2_val = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__send_instruction__40__fire_valid_in;
    __Vtask_tb_register_read__DOT__send_instruction__40__fire_valid_in = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__send_instruction__40__pc;
    __Vtask_tb_register_read__DOT__send_instruction__40__pc = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__40__src1_preg;
    __Vtask_tb_register_read__DOT__send_instruction__40__src1_preg = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__40__src2_preg;
    __Vtask_tb_register_read__DOT__send_instruction__40__src2_preg = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__40__dst_preg;
    __Vtask_tb_register_read__DOT__send_instruction__40__dst_preg = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__send_instruction__40__imm_val;
    __Vtask_tb_register_read__DOT__send_instruction__40__imm_val = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__send_instruction__40__instr_valid;
    __Vtask_tb_register_read__DOT__send_instruction__40__instr_valid = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__41__condition;
    __Vtask_tb_register_read__DOT__check_assertion__41__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__set_forwarding__43__src1_hit;
    __Vtask_tb_register_read__DOT__set_forwarding__43__src1_hit = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__set_forwarding__43__src2_hit;
    __Vtask_tb_register_read__DOT__set_forwarding__43__src2_hit = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_forwarding__43__src1_fwd_val;
    __Vtask_tb_register_read__DOT__set_forwarding__43__src1_fwd_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_forwarding__43__src2_fwd_val;
    __Vtask_tb_register_read__DOT__set_forwarding__43__src2_fwd_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_reg_file_values__44__src1_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__44__src1_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_reg_file_values__44__src2_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__44__src2_val = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__send_instruction__45__fire_valid_in;
    __Vtask_tb_register_read__DOT__send_instruction__45__fire_valid_in = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__send_instruction__45__pc;
    __Vtask_tb_register_read__DOT__send_instruction__45__pc = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__45__src1_preg;
    __Vtask_tb_register_read__DOT__send_instruction__45__src1_preg = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__45__src2_preg;
    __Vtask_tb_register_read__DOT__send_instruction__45__src2_preg = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__45__dst_preg;
    __Vtask_tb_register_read__DOT__send_instruction__45__dst_preg = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__send_instruction__45__imm_val;
    __Vtask_tb_register_read__DOT__send_instruction__45__imm_val = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__send_instruction__45__instr_valid;
    __Vtask_tb_register_read__DOT__send_instruction__45__instr_valid = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__46__condition;
    __Vtask_tb_register_read__DOT__check_assertion__46__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__47__condition;
    __Vtask_tb_register_read__DOT__check_assertion__47__condition = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_reg_file_values__48__src1_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__48__src1_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_reg_file_values__48__src2_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__48__src2_val = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__send_instruction__49__fire_valid_in;
    __Vtask_tb_register_read__DOT__send_instruction__49__fire_valid_in = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__send_instruction__49__pc;
    __Vtask_tb_register_read__DOT__send_instruction__49__pc = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__49__src1_preg;
    __Vtask_tb_register_read__DOT__send_instruction__49__src1_preg = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__49__src2_preg;
    __Vtask_tb_register_read__DOT__send_instruction__49__src2_preg = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__49__dst_preg;
    __Vtask_tb_register_read__DOT__send_instruction__49__dst_preg = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__send_instruction__49__imm_val;
    __Vtask_tb_register_read__DOT__send_instruction__49__imm_val = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__send_instruction__49__instr_valid;
    __Vtask_tb_register_read__DOT__send_instruction__49__instr_valid = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__50__condition;
    __Vtask_tb_register_read__DOT__check_assertion__50__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__51__condition;
    __Vtask_tb_register_read__DOT__check_assertion__51__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__set_forwarding__53__src1_hit;
    __Vtask_tb_register_read__DOT__set_forwarding__53__src1_hit = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__set_forwarding__53__src2_hit;
    __Vtask_tb_register_read__DOT__set_forwarding__53__src2_hit = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_forwarding__53__src1_fwd_val;
    __Vtask_tb_register_read__DOT__set_forwarding__53__src1_fwd_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_forwarding__53__src2_fwd_val;
    __Vtask_tb_register_read__DOT__set_forwarding__53__src2_fwd_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_reg_file_values__54__src1_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__54__src1_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_reg_file_values__54__src2_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__54__src2_val = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__send_instruction__55__fire_valid_in;
    __Vtask_tb_register_read__DOT__send_instruction__55__fire_valid_in = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__send_instruction__55__pc;
    __Vtask_tb_register_read__DOT__send_instruction__55__pc = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__55__src1_preg;
    __Vtask_tb_register_read__DOT__send_instruction__55__src1_preg = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__55__src2_preg;
    __Vtask_tb_register_read__DOT__send_instruction__55__src2_preg = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__55__dst_preg;
    __Vtask_tb_register_read__DOT__send_instruction__55__dst_preg = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__send_instruction__55__imm_val;
    __Vtask_tb_register_read__DOT__send_instruction__55__imm_val = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__send_instruction__55__instr_valid;
    __Vtask_tb_register_read__DOT__send_instruction__55__instr_valid = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__56__condition;
    __Vtask_tb_register_read__DOT__check_assertion__56__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__57__condition;
    __Vtask_tb_register_read__DOT__check_assertion__57__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__58__condition;
    __Vtask_tb_register_read__DOT__check_assertion__58__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__59__condition;
    __Vtask_tb_register_read__DOT__check_assertion__59__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__60__condition;
    __Vtask_tb_register_read__DOT__check_assertion__60__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__61__condition;
    __Vtask_tb_register_read__DOT__check_assertion__61__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__set_forwarding__63__src1_hit;
    __Vtask_tb_register_read__DOT__set_forwarding__63__src1_hit = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__set_forwarding__63__src2_hit;
    __Vtask_tb_register_read__DOT__set_forwarding__63__src2_hit = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_forwarding__63__src1_fwd_val;
    __Vtask_tb_register_read__DOT__set_forwarding__63__src1_fwd_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_forwarding__63__src2_fwd_val;
    __Vtask_tb_register_read__DOT__set_forwarding__63__src2_fwd_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_reg_file_values__64__src1_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__64__src1_val = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__set_reg_file_values__64__src2_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__64__src2_val = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__send_instruction__65__fire_valid_in;
    __Vtask_tb_register_read__DOT__send_instruction__65__fire_valid_in = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__send_instruction__65__pc;
    __Vtask_tb_register_read__DOT__send_instruction__65__pc = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__65__src1_preg;
    __Vtask_tb_register_read__DOT__send_instruction__65__src1_preg = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__65__src2_preg;
    __Vtask_tb_register_read__DOT__send_instruction__65__src2_preg = 0;
    CData/*5:0*/ __Vtask_tb_register_read__DOT__send_instruction__65__dst_preg;
    __Vtask_tb_register_read__DOT__send_instruction__65__dst_preg = 0;
    IData/*31:0*/ __Vtask_tb_register_read__DOT__send_instruction__65__imm_val;
    __Vtask_tb_register_read__DOT__send_instruction__65__imm_val = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__send_instruction__65__instr_valid;
    __Vtask_tb_register_read__DOT__send_instruction__65__instr_valid = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__66__condition;
    __Vtask_tb_register_read__DOT__check_assertion__66__condition = 0;
    CData/*0:0*/ __Vtask_tb_register_read__DOT__check_assertion__67__condition;
    __Vtask_tb_register_read__DOT__check_assertion__67__condition = 0;
    // Body
    vlSelfRef.tb_register_read__DOT__clk = 0U;
    vlSelfRef.tb_register_read__DOT__rst = 0U;
    vlSelfRef.tb_register_read__DOT__sched_fire_valid = 0U;
    vlSelfRef.tb_register_read__DOT__sched_pkt[0U] = 0U;
    vlSelfRef.tb_register_read__DOT__sched_pkt[1U] = 0U;
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] = 0U;
    vlSelfRef.tb_register_read__DOT__sched_pkt[3U] = 0U;
    vlSelfRef.tb_register_read__DOT__rf_src1_val = 0U;
    vlSelfRef.tb_register_read__DOT__rf_src2_val = 0U;
    vlSelfRef.tb_register_read__DOT__fwrd_src1_hit = 0U;
    vlSelfRef.tb_register_read__DOT__fwrd_src2_hit = 0U;
    vlSelfRef.tb_register_read__DOT__fwrd_src1_val = 0U;
    vlSelfRef.tb_register_read__DOT__fwrd_src2_val = 0U;
    VL_WRITEF_NX("=== Register Read Testbench ===\n",0);
    VL_WRITEF_NX("\n[RESET] Resetting DUT\n",0);
    Vtb_register_read___024root____VbeforeTrig_ha6c2d866__0(vlSelf, 
                                                            "@(negedge tb_register_read.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha6c2d866__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_register_read.clk)", 
                                                         "sim/tb_register_read.sv", 
                                                         111);
    vlSelfRef.tb_register_read__DOT__rst = 1U;
    Vtb_register_read___024root____VbeforeTrig_ha6c2d866__0(vlSelf, 
                                                            "@(negedge tb_register_read.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha6c2d866__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_register_read.clk)", 
                                                         "sim/tb_register_read.sv", 
                                                         113);
    Vtb_register_read___024root____VbeforeTrig_ha6c2d866__0(vlSelf, 
                                                            "@(negedge tb_register_read.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha6c2d866__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_register_read.clk)", 
                                                         "sim/tb_register_read.sv", 
                                                         114);
    vlSelfRef.tb_register_read__DOT__rst = 0U;
    Vtb_register_read___024root____VbeforeTrig_ha6c2d866__0(vlSelf, 
                                                            "@(negedge tb_register_read.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha6c2d866__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_register_read.clk)", 
                                                         "sim/tb_register_read.sv", 
                                                         116);
    VL_WRITEF_NX("[RESET] Reset complete\n\n",0);
    VL_WRITEF_NX("\n[Test 1] Verify Reset State\n",0);
    __Vtask_tb_register_read__DOT__check_assertion__3__condition 
        = (1U & (~ (IData)(vlSelfRef.tb_register_read__DOT__exec_fire_valid)));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__3__test_name = "fire_valid is low after reset"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__3__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__3__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__3__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    __Vtask_tb_register_read__DOT__check_assertion__4__condition 
        = (0U == (((((vlSelfRef.tb_register_read__DOT__exec_pkt[0U] 
                      | vlSelfRef.tb_register_read__DOT__exec_pkt[1U]) 
                     | vlSelfRef.tb_register_read__DOT__exec_pkt[2U]) 
                    | vlSelfRef.tb_register_read__DOT__exec_pkt[3U]) 
                   | vlSelfRef.tb_register_read__DOT__exec_pkt[4U]) 
                  | vlSelfRef.tb_register_read__DOT__exec_pkt[5U]));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__4__test_name = "exec_pkt cleared after reset"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__4__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__4__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__4__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 2] Basic Register File Read (No Forwarding)\n",0);
    __Vtask_tb_register_read__DOT__set_forwarding__6__src2_fwd_val = 0U;
    __Vtask_tb_register_read__DOT__set_forwarding__6__src1_fwd_val = 0U;
    __Vtask_tb_register_read__DOT__set_forwarding__6__src2_hit = 0U;
    __Vtask_tb_register_read__DOT__set_forwarding__6__src1_hit = 0U;
    vlSelfRef.tb_register_read__DOT__fwrd_src1_hit 
        = __Vtask_tb_register_read__DOT__set_forwarding__6__src1_hit;
    vlSelfRef.tb_register_read__DOT__fwrd_src2_hit 
        = __Vtask_tb_register_read__DOT__set_forwarding__6__src2_hit;
    vlSelfRef.tb_register_read__DOT__fwrd_src1_val 
        = __Vtask_tb_register_read__DOT__set_forwarding__6__src1_fwd_val;
    vlSelfRef.tb_register_read__DOT__fwrd_src2_val 
        = __Vtask_tb_register_read__DOT__set_forwarding__6__src2_fwd_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__7__src2_val = 0xbbbbbbbbU;
    __Vtask_tb_register_read__DOT__set_reg_file_values__7__src1_val = 0xaaaaaaaaU;
    vlSelfRef.tb_register_read__DOT__rf_src1_val = __Vtask_tb_register_read__DOT__set_reg_file_values__7__src1_val;
    vlSelfRef.tb_register_read__DOT__rf_src2_val = __Vtask_tb_register_read__DOT__set_reg_file_values__7__src2_val;
    __Vtask_tb_register_read__DOT__send_instruction__8__instr_valid = 1U;
    __Vtask_tb_register_read__DOT__send_instruction__8__imm_val = 0x00000042U;
    __Vtask_tb_register_read__DOT__send_instruction__8__dst_preg = 0x0fU;
    __Vtask_tb_register_read__DOT__send_instruction__8__src2_preg = 0x0aU;
    __Vtask_tb_register_read__DOT__send_instruction__8__src1_preg = 5U;
    __Vtask_tb_register_read__DOT__send_instruction__8__pc = 0x00001000U;
    __Vtask_tb_register_read__DOT__send_instruction__8__fire_valid_in = 1U;
    vlSelfRef.tb_register_read__DOT__sched_fire_valid 
        = __Vtask_tb_register_read__DOT__send_instruction__8__fire_valid_in;
    vlSelfRef.tb_register_read__DOT__sched_pkt[0U] 
        = ((3U & vlSelfRef.tb_register_read__DOT__sched_pkt[0U]) 
           | (__Vtask_tb_register_read__DOT__send_instruction__8__pc 
              << 2U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[1U] 
        = ((0xfffffffcU & vlSelfRef.tb_register_read__DOT__sched_pkt[1U]) 
           | (__Vtask_tb_register_read__DOT__send_instruction__8__pc 
              >> 0x0000001eU));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xffe07fffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__8__src1_preg) 
              << 0x0000000fU));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xffffc0ffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__8__src2_preg) 
              << 8U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xf81fffffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__8__dst_preg) 
              << 0x00000015U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[1U] 
        = ((3U & vlSelfRef.tb_register_read__DOT__sched_pkt[1U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__8__imm_val)) 
                        << 1U) | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__8__instr_valid)))) 
              << 2U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xfffffff8U & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | (((IData)((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__8__imm_val)) 
                         << 1U) | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__8__instr_valid)))) 
               >> 0x0000001eU) | ((IData)(((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__8__imm_val)) 
                                             << 1U) 
                                            | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__8__instr_valid))) 
                                           >> 0x00000020U)) 
                                  << 2U)));
    VL_WRITEF_NX("Sent instruction: PC=0x%x, src1=%0#, src2=%0#, dst=%0# at Cycle %0d\n",0,
                 32,__Vtask_tb_register_read__DOT__send_instruction__8__pc,
                 6,(IData)(__Vtask_tb_register_read__DOT__send_instruction__8__src1_preg),
                 6,__Vtask_tb_register_read__DOT__send_instruction__8__src2_preg,
                 6,(IData)(__Vtask_tb_register_read__DOT__send_instruction__8__dst_preg),
                 32,vlSelfRef.tb_register_read__DOT__cycle_count);
    Vtb_register_read___024root____VbeforeTrig_ha6c2d866__0(vlSelf, 
                                                            "@(negedge tb_register_read.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha6c2d866__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_register_read.clk)", 
                                                         "sim/tb_register_read.sv", 
                                                         182);
    Vtb_register_read___024root____VbeforeTrig_ha6c2dba4__0(vlSelf, 
                                                            "@(posedge tb_register_read.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha6c2dba4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_register_read.clk)", 
                                                         "sim/tb_register_read.sv", 
                                                         183);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "sim/tb_register_read.sv", 
                                         184);
    __Vtask_tb_register_read__DOT__check_assertion__9__condition 
        = (5U == (IData)(vlSelfRef.tb_register_read__DOT__rf_src1_preg));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__9__test_name = "rf_src1_preg == 5"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__9__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__9__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__9__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    __Vtask_tb_register_read__DOT__check_assertion__10__condition 
        = (0x0aU == (IData)(vlSelfRef.tb_register_read__DOT__rf_src2_preg));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__10__test_name = "rf_src2_preg == 10"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__10__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__10__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__10__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    __Vtask_tb_register_read__DOT__check_assertion__11__condition 
        = vlSelfRef.tb_register_read__DOT__exec_fire_valid;
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__11__test_name = "exec_fire_valid == 1"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__11__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__11__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__11__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    __Vtask_tb_register_read__DOT__check_assertion__12__condition 
        = (0xaaaaaaaaU == ((vlSelfRef.tb_register_read__DOT__exec_pkt[2U] 
                            << 0x0000001eU) | (vlSelfRef.tb_register_read__DOT__exec_pkt[1U] 
                                               >> 2U)));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__12__test_name = "exec_pkt.src1_val from reg file"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__12__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__12__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__12__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    __Vtask_tb_register_read__DOT__check_assertion__13__condition 
        = (0xbbbbbbbbU == ((vlSelfRef.tb_register_read__DOT__exec_pkt[1U] 
                            << 0x0000001eU) | (vlSelfRef.tb_register_read__DOT__exec_pkt[0U] 
                                               >> 2U)));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__13__test_name = "exec_pkt.src2_val from reg file"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__13__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__13__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__13__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    __Vtask_tb_register_read__DOT__check_assertion__14__condition 
        = (0x0fU == (0x0000003fU & (vlSelfRef.tb_register_read__DOT__exec_pkt[4U] 
                                    >> 0x00000013U)));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__14__test_name = "exec_pkt.dst_preg == 15"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__14__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__14__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__14__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    __Vtask_tb_register_read__DOT__check_assertion__15__condition 
        = (0x00000042U == ((vlSelfRef.tb_register_read__DOT__exec_pkt[4U] 
                            << 0x0000001dU) | (vlSelfRef.tb_register_read__DOT__exec_pkt[3U] 
                                               >> 3U)));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__15__test_name = "exec_pkt.imm_val == 0x42"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__15__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__15__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__15__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    __Vtask_tb_register_read__DOT__check_assertion__16__condition 
        = (0x00001000U == ((vlSelfRef.tb_register_read__DOT__exec_pkt[3U] 
                            << 0x0000001eU) | (vlSelfRef.tb_register_read__DOT__exec_pkt[2U] 
                                               >> 2U)));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__16__test_name = "exec_pkt.pc == 0x1000"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__16__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__16__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__16__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 3] Forwarding on src1 Only\n",0);
    __Vtask_tb_register_read__DOT__set_forwarding__18__src2_fwd_val = 0U;
    __Vtask_tb_register_read__DOT__set_forwarding__18__src1_fwd_val = 0xdeadbeefU;
    __Vtask_tb_register_read__DOT__set_forwarding__18__src2_hit = 0U;
    __Vtask_tb_register_read__DOT__set_forwarding__18__src1_hit = 1U;
    vlSelfRef.tb_register_read__DOT__fwrd_src1_hit 
        = __Vtask_tb_register_read__DOT__set_forwarding__18__src1_hit;
    vlSelfRef.tb_register_read__DOT__fwrd_src2_hit 
        = __Vtask_tb_register_read__DOT__set_forwarding__18__src2_hit;
    vlSelfRef.tb_register_read__DOT__fwrd_src1_val 
        = __Vtask_tb_register_read__DOT__set_forwarding__18__src1_fwd_val;
    vlSelfRef.tb_register_read__DOT__fwrd_src2_val 
        = __Vtask_tb_register_read__DOT__set_forwarding__18__src2_fwd_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__19__src2_val = 0x22222222U;
    __Vtask_tb_register_read__DOT__set_reg_file_values__19__src1_val = 0x11111111U;
    vlSelfRef.tb_register_read__DOT__rf_src1_val = __Vtask_tb_register_read__DOT__set_reg_file_values__19__src1_val;
    vlSelfRef.tb_register_read__DOT__rf_src2_val = __Vtask_tb_register_read__DOT__set_reg_file_values__19__src2_val;
    __Vtask_tb_register_read__DOT__send_instruction__20__instr_valid = 1U;
    __Vtask_tb_register_read__DOT__send_instruction__20__imm_val = 0x00000100U;
    __Vtask_tb_register_read__DOT__send_instruction__20__dst_preg = 9U;
    __Vtask_tb_register_read__DOT__send_instruction__20__src2_preg = 8U;
    __Vtask_tb_register_read__DOT__send_instruction__20__src1_preg = 7U;
    __Vtask_tb_register_read__DOT__send_instruction__20__pc = 0x00001004U;
    __Vtask_tb_register_read__DOT__send_instruction__20__fire_valid_in = 1U;
    vlSelfRef.tb_register_read__DOT__sched_fire_valid 
        = __Vtask_tb_register_read__DOT__send_instruction__20__fire_valid_in;
    vlSelfRef.tb_register_read__DOT__sched_pkt[0U] 
        = ((3U & vlSelfRef.tb_register_read__DOT__sched_pkt[0U]) 
           | (__Vtask_tb_register_read__DOT__send_instruction__20__pc 
              << 2U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[1U] 
        = ((0xfffffffcU & vlSelfRef.tb_register_read__DOT__sched_pkt[1U]) 
           | (__Vtask_tb_register_read__DOT__send_instruction__20__pc 
              >> 0x0000001eU));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xffe07fffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__20__src1_preg) 
              << 0x0000000fU));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xffffc0ffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__20__src2_preg) 
              << 8U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xf81fffffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__20__dst_preg) 
              << 0x00000015U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[1U] 
        = ((3U & vlSelfRef.tb_register_read__DOT__sched_pkt[1U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__20__imm_val)) 
                        << 1U) | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__20__instr_valid)))) 
              << 2U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xfffffff8U & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | (((IData)((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__20__imm_val)) 
                         << 1U) | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__20__instr_valid)))) 
               >> 0x0000001eU) | ((IData)(((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__20__imm_val)) 
                                             << 1U) 
                                            | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__20__instr_valid))) 
                                           >> 0x00000020U)) 
                                  << 2U)));
    VL_WRITEF_NX("Sent instruction: PC=0x%x, src1=%0#, src2=%0#, dst=%0# at Cycle %0d\n",0,
                 32,__Vtask_tb_register_read__DOT__send_instruction__20__pc,
                 6,(IData)(__Vtask_tb_register_read__DOT__send_instruction__20__src1_preg),
                 6,__Vtask_tb_register_read__DOT__send_instruction__20__src2_preg,
                 6,(IData)(__Vtask_tb_register_read__DOT__send_instruction__20__dst_preg),
                 32,vlSelfRef.tb_register_read__DOT__cycle_count);
    Vtb_register_read___024root____VbeforeTrig_ha6c2d866__0(vlSelf, 
                                                            "@(negedge tb_register_read.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha6c2d866__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_register_read.clk)", 
                                                         "sim/tb_register_read.sv", 
                                                         202);
    Vtb_register_read___024root____VbeforeTrig_ha6c2dba4__0(vlSelf, 
                                                            "@(posedge tb_register_read.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha6c2dba4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_register_read.clk)", 
                                                         "sim/tb_register_read.sv", 
                                                         203);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "sim/tb_register_read.sv", 
                                         204);
    __Vtask_tb_register_read__DOT__check_assertion__21__condition 
        = (7U == (IData)(vlSelfRef.tb_register_read__DOT__rf_src1_preg));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__21__test_name = "fwrd_src1_preg == 7"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__21__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__21__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__21__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    __Vtask_tb_register_read__DOT__check_assertion__22__condition 
        = (8U == (IData)(vlSelfRef.tb_register_read__DOT__rf_src2_preg));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__22__test_name = "fwrd_src2_preg == 8"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__22__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__22__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__22__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    __Vtask_tb_register_read__DOT__check_assertion__23__condition 
        = (0xdeadbeefU == ((vlSelfRef.tb_register_read__DOT__exec_pkt[2U] 
                            << 0x0000001eU) | (vlSelfRef.tb_register_read__DOT__exec_pkt[1U] 
                                               >> 2U)));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__23__test_name = "exec_pkt.src1_val forwarded"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__23__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__23__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__23__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    __Vtask_tb_register_read__DOT__check_assertion__24__condition 
        = (0x22222222U == ((vlSelfRef.tb_register_read__DOT__exec_pkt[1U] 
                            << 0x0000001eU) | (vlSelfRef.tb_register_read__DOT__exec_pkt[0U] 
                                               >> 2U)));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__24__test_name = "exec_pkt.src2_val from reg file"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__24__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__24__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__24__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 4] Forwarding on src2 Only\n",0);
    __Vtask_tb_register_read__DOT__set_forwarding__26__src2_fwd_val = 0xcafebabeU;
    __Vtask_tb_register_read__DOT__set_forwarding__26__src1_fwd_val = 0U;
    __Vtask_tb_register_read__DOT__set_forwarding__26__src2_hit = 1U;
    __Vtask_tb_register_read__DOT__set_forwarding__26__src1_hit = 0U;
    vlSelfRef.tb_register_read__DOT__fwrd_src1_hit 
        = __Vtask_tb_register_read__DOT__set_forwarding__26__src1_hit;
    vlSelfRef.tb_register_read__DOT__fwrd_src2_hit 
        = __Vtask_tb_register_read__DOT__set_forwarding__26__src2_hit;
    vlSelfRef.tb_register_read__DOT__fwrd_src1_val 
        = __Vtask_tb_register_read__DOT__set_forwarding__26__src1_fwd_val;
    vlSelfRef.tb_register_read__DOT__fwrd_src2_val 
        = __Vtask_tb_register_read__DOT__set_forwarding__26__src2_fwd_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__27__src2_val = 0x44444444U;
    __Vtask_tb_register_read__DOT__set_reg_file_values__27__src1_val = 0x33333333U;
    vlSelfRef.tb_register_read__DOT__rf_src1_val = __Vtask_tb_register_read__DOT__set_reg_file_values__27__src1_val;
    vlSelfRef.tb_register_read__DOT__rf_src2_val = __Vtask_tb_register_read__DOT__set_reg_file_values__27__src2_val;
    __Vtask_tb_register_read__DOT__send_instruction__28__instr_valid = 1U;
    __Vtask_tb_register_read__DOT__send_instruction__28__imm_val = 0x00000200U;
    __Vtask_tb_register_read__DOT__send_instruction__28__dst_preg = 0x0dU;
    __Vtask_tb_register_read__DOT__send_instruction__28__src2_preg = 0x0cU;
    __Vtask_tb_register_read__DOT__send_instruction__28__src1_preg = 0x0bU;
    __Vtask_tb_register_read__DOT__send_instruction__28__pc = 0x00001008U;
    __Vtask_tb_register_read__DOT__send_instruction__28__fire_valid_in = 1U;
    vlSelfRef.tb_register_read__DOT__sched_fire_valid 
        = __Vtask_tb_register_read__DOT__send_instruction__28__fire_valid_in;
    vlSelfRef.tb_register_read__DOT__sched_pkt[0U] 
        = ((3U & vlSelfRef.tb_register_read__DOT__sched_pkt[0U]) 
           | (__Vtask_tb_register_read__DOT__send_instruction__28__pc 
              << 2U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[1U] 
        = ((0xfffffffcU & vlSelfRef.tb_register_read__DOT__sched_pkt[1U]) 
           | (__Vtask_tb_register_read__DOT__send_instruction__28__pc 
              >> 0x0000001eU));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xffe07fffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__28__src1_preg) 
              << 0x0000000fU));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xffffc0ffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__28__src2_preg) 
              << 8U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xf81fffffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__28__dst_preg) 
              << 0x00000015U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[1U] 
        = ((3U & vlSelfRef.tb_register_read__DOT__sched_pkt[1U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__28__imm_val)) 
                        << 1U) | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__28__instr_valid)))) 
              << 2U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xfffffff8U & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | (((IData)((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__28__imm_val)) 
                         << 1U) | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__28__instr_valid)))) 
               >> 0x0000001eU) | ((IData)(((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__28__imm_val)) 
                                             << 1U) 
                                            | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__28__instr_valid))) 
                                           >> 0x00000020U)) 
                                  << 2U)));
    VL_WRITEF_NX("Sent instruction: PC=0x%x, src1=%0#, src2=%0#, dst=%0# at Cycle %0d\n",0,
                 32,__Vtask_tb_register_read__DOT__send_instruction__28__pc,
                 6,(IData)(__Vtask_tb_register_read__DOT__send_instruction__28__src1_preg),
                 6,__Vtask_tb_register_read__DOT__send_instruction__28__src2_preg,
                 6,(IData)(__Vtask_tb_register_read__DOT__send_instruction__28__dst_preg),
                 32,vlSelfRef.tb_register_read__DOT__cycle_count);
    Vtb_register_read___024root____VbeforeTrig_ha6c2d866__0(vlSelf, 
                                                            "@(negedge tb_register_read.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha6c2d866__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_register_read.clk)", 
                                                         "sim/tb_register_read.sv", 
                                                         218);
    Vtb_register_read___024root____VbeforeTrig_ha6c2dba4__0(vlSelf, 
                                                            "@(posedge tb_register_read.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha6c2dba4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_register_read.clk)", 
                                                         "sim/tb_register_read.sv", 
                                                         219);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "sim/tb_register_read.sv", 
                                         220);
    __Vtask_tb_register_read__DOT__check_assertion__29__condition 
        = (0x33333333U == ((vlSelfRef.tb_register_read__DOT__exec_pkt[2U] 
                            << 0x0000001eU) | (vlSelfRef.tb_register_read__DOT__exec_pkt[1U] 
                                               >> 2U)));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__29__test_name = "exec_pkt.src1_val from reg file"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__29__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__29__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__29__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    __Vtask_tb_register_read__DOT__check_assertion__30__condition 
        = (0xcafebabeU == ((vlSelfRef.tb_register_read__DOT__exec_pkt[1U] 
                            << 0x0000001eU) | (vlSelfRef.tb_register_read__DOT__exec_pkt[0U] 
                                               >> 2U)));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__30__test_name = "exec_pkt.src2_val forwarded"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__30__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__30__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__30__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 5] Forwarding on Both Sources\n",0);
    __Vtask_tb_register_read__DOT__set_forwarding__32__src2_fwd_val = 0x9abcdef0U;
    __Vtask_tb_register_read__DOT__set_forwarding__32__src1_fwd_val = 0x12345678U;
    __Vtask_tb_register_read__DOT__set_forwarding__32__src2_hit = 1U;
    __Vtask_tb_register_read__DOT__set_forwarding__32__src1_hit = 1U;
    vlSelfRef.tb_register_read__DOT__fwrd_src1_hit 
        = __Vtask_tb_register_read__DOT__set_forwarding__32__src1_hit;
    vlSelfRef.tb_register_read__DOT__fwrd_src2_hit 
        = __Vtask_tb_register_read__DOT__set_forwarding__32__src2_hit;
    vlSelfRef.tb_register_read__DOT__fwrd_src1_val 
        = __Vtask_tb_register_read__DOT__set_forwarding__32__src1_fwd_val;
    vlSelfRef.tb_register_read__DOT__fwrd_src2_val 
        = __Vtask_tb_register_read__DOT__set_forwarding__32__src2_fwd_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__33__src2_val = 0x66666666U;
    __Vtask_tb_register_read__DOT__set_reg_file_values__33__src1_val = 0x55555555U;
    vlSelfRef.tb_register_read__DOT__rf_src1_val = __Vtask_tb_register_read__DOT__set_reg_file_values__33__src1_val;
    vlSelfRef.tb_register_read__DOT__rf_src2_val = __Vtask_tb_register_read__DOT__set_reg_file_values__33__src2_val;
    __Vtask_tb_register_read__DOT__send_instruction__34__instr_valid = 1U;
    __Vtask_tb_register_read__DOT__send_instruction__34__imm_val = 0x00000300U;
    __Vtask_tb_register_read__DOT__send_instruction__34__dst_preg = 0x16U;
    __Vtask_tb_register_read__DOT__send_instruction__34__src2_preg = 0x15U;
    __Vtask_tb_register_read__DOT__send_instruction__34__src1_preg = 0x14U;
    __Vtask_tb_register_read__DOT__send_instruction__34__pc = 0x0000100cU;
    __Vtask_tb_register_read__DOT__send_instruction__34__fire_valid_in = 1U;
    vlSelfRef.tb_register_read__DOT__sched_fire_valid 
        = __Vtask_tb_register_read__DOT__send_instruction__34__fire_valid_in;
    vlSelfRef.tb_register_read__DOT__sched_pkt[0U] 
        = ((3U & vlSelfRef.tb_register_read__DOT__sched_pkt[0U]) 
           | (__Vtask_tb_register_read__DOT__send_instruction__34__pc 
              << 2U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[1U] 
        = ((0xfffffffcU & vlSelfRef.tb_register_read__DOT__sched_pkt[1U]) 
           | (__Vtask_tb_register_read__DOT__send_instruction__34__pc 
              >> 0x0000001eU));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xffe07fffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__34__src1_preg) 
              << 0x0000000fU));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xffffc0ffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__34__src2_preg) 
              << 8U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xf81fffffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__34__dst_preg) 
              << 0x00000015U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[1U] 
        = ((3U & vlSelfRef.tb_register_read__DOT__sched_pkt[1U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__34__imm_val)) 
                        << 1U) | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__34__instr_valid)))) 
              << 2U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xfffffff8U & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | (((IData)((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__34__imm_val)) 
                         << 1U) | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__34__instr_valid)))) 
               >> 0x0000001eU) | ((IData)(((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__34__imm_val)) 
                                             << 1U) 
                                            | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__34__instr_valid))) 
                                           >> 0x00000020U)) 
                                  << 2U)));
    VL_WRITEF_NX("Sent instruction: PC=0x%x, src1=%0#, src2=%0#, dst=%0# at Cycle %0d\n",0,
                 32,__Vtask_tb_register_read__DOT__send_instruction__34__pc,
                 6,(IData)(__Vtask_tb_register_read__DOT__send_instruction__34__src1_preg),
                 6,__Vtask_tb_register_read__DOT__send_instruction__34__src2_preg,
                 6,(IData)(__Vtask_tb_register_read__DOT__send_instruction__34__dst_preg),
                 32,vlSelfRef.tb_register_read__DOT__cycle_count);
    Vtb_register_read___024root____VbeforeTrig_ha6c2d866__0(vlSelf, 
                                                            "@(negedge tb_register_read.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha6c2d866__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_register_read.clk)", 
                                                         "sim/tb_register_read.sv", 
                                                         232);
    Vtb_register_read___024root____VbeforeTrig_ha6c2dba4__0(vlSelf, 
                                                            "@(posedge tb_register_read.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha6c2dba4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_register_read.clk)", 
                                                         "sim/tb_register_read.sv", 
                                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "sim/tb_register_read.sv", 
                                         234);
    __Vtask_tb_register_read__DOT__check_assertion__35__condition 
        = (0x12345678U == ((vlSelfRef.tb_register_read__DOT__exec_pkt[2U] 
                            << 0x0000001eU) | (vlSelfRef.tb_register_read__DOT__exec_pkt[1U] 
                                               >> 2U)));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__35__test_name = "exec_pkt.src1_val forwarded"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__35__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__35__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__35__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    __Vtask_tb_register_read__DOT__check_assertion__36__condition 
        = (0x9abcdef0U == ((vlSelfRef.tb_register_read__DOT__exec_pkt[1U] 
                            << 0x0000001eU) | (vlSelfRef.tb_register_read__DOT__exec_pkt[0U] 
                                               >> 2U)));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__36__test_name = "exec_pkt.src2_val forwarded"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__36__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__36__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__36__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 6] fire_valid Low Propagation\n",0);
    __Vtask_tb_register_read__DOT__set_forwarding__38__src2_fwd_val = 0U;
    __Vtask_tb_register_read__DOT__set_forwarding__38__src1_fwd_val = 0U;
    __Vtask_tb_register_read__DOT__set_forwarding__38__src2_hit = 0U;
    __Vtask_tb_register_read__DOT__set_forwarding__38__src1_hit = 0U;
    vlSelfRef.tb_register_read__DOT__fwrd_src1_hit 
        = __Vtask_tb_register_read__DOT__set_forwarding__38__src1_hit;
    vlSelfRef.tb_register_read__DOT__fwrd_src2_hit 
        = __Vtask_tb_register_read__DOT__set_forwarding__38__src2_hit;
    vlSelfRef.tb_register_read__DOT__fwrd_src1_val 
        = __Vtask_tb_register_read__DOT__set_forwarding__38__src1_fwd_val;
    vlSelfRef.tb_register_read__DOT__fwrd_src2_val 
        = __Vtask_tb_register_read__DOT__set_forwarding__38__src2_fwd_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__39__src2_val = 0x88888888U;
    __Vtask_tb_register_read__DOT__set_reg_file_values__39__src1_val = 0x77777777U;
    vlSelfRef.tb_register_read__DOT__rf_src1_val = __Vtask_tb_register_read__DOT__set_reg_file_values__39__src1_val;
    vlSelfRef.tb_register_read__DOT__rf_src2_val = __Vtask_tb_register_read__DOT__set_reg_file_values__39__src2_val;
    __Vtask_tb_register_read__DOT__send_instruction__40__instr_valid = 0U;
    __Vtask_tb_register_read__DOT__send_instruction__40__imm_val = 0U;
    __Vtask_tb_register_read__DOT__send_instruction__40__dst_preg = 3U;
    __Vtask_tb_register_read__DOT__send_instruction__40__src2_preg = 2U;
    __Vtask_tb_register_read__DOT__send_instruction__40__src1_preg = 1U;
    __Vtask_tb_register_read__DOT__send_instruction__40__pc = 0x00001010U;
    __Vtask_tb_register_read__DOT__send_instruction__40__fire_valid_in = 0U;
    vlSelfRef.tb_register_read__DOT__sched_fire_valid 
        = __Vtask_tb_register_read__DOT__send_instruction__40__fire_valid_in;
    vlSelfRef.tb_register_read__DOT__sched_pkt[0U] 
        = ((3U & vlSelfRef.tb_register_read__DOT__sched_pkt[0U]) 
           | (__Vtask_tb_register_read__DOT__send_instruction__40__pc 
              << 2U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[1U] 
        = ((0xfffffffcU & vlSelfRef.tb_register_read__DOT__sched_pkt[1U]) 
           | (__Vtask_tb_register_read__DOT__send_instruction__40__pc 
              >> 0x0000001eU));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xffe07fffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__40__src1_preg) 
              << 0x0000000fU));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xffffc0ffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__40__src2_preg) 
              << 8U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xf81fffffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__40__dst_preg) 
              << 0x00000015U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[1U] 
        = ((3U & vlSelfRef.tb_register_read__DOT__sched_pkt[1U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__40__imm_val)) 
                        << 1U) | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__40__instr_valid)))) 
              << 2U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xfffffff8U & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | (((IData)((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__40__imm_val)) 
                         << 1U) | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__40__instr_valid)))) 
               >> 0x0000001eU) | ((IData)(((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__40__imm_val)) 
                                             << 1U) 
                                            | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__40__instr_valid))) 
                                           >> 0x00000020U)) 
                                  << 2U)));
    VL_WRITEF_NX("Sent instruction: PC=0x%x, src1=%0#, src2=%0#, dst=%0# at Cycle %0d\n",0,
                 32,__Vtask_tb_register_read__DOT__send_instruction__40__pc,
                 6,(IData)(__Vtask_tb_register_read__DOT__send_instruction__40__src1_preg),
                 6,__Vtask_tb_register_read__DOT__send_instruction__40__src2_preg,
                 6,(IData)(__Vtask_tb_register_read__DOT__send_instruction__40__dst_preg),
                 32,vlSelfRef.tb_register_read__DOT__cycle_count);
    Vtb_register_read___024root____VbeforeTrig_ha6c2d866__0(vlSelf, 
                                                            "@(negedge tb_register_read.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha6c2d866__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_register_read.clk)", 
                                                         "sim/tb_register_read.sv", 
                                                         246);
    Vtb_register_read___024root____VbeforeTrig_ha6c2dba4__0(vlSelf, 
                                                            "@(posedge tb_register_read.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha6c2dba4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_register_read.clk)", 
                                                         "sim/tb_register_read.sv", 
                                                         247);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "sim/tb_register_read.sv", 
                                         248);
    __Vtask_tb_register_read__DOT__check_assertion__41__condition 
        = (1U & (~ (IData)(vlSelfRef.tb_register_read__DOT__exec_fire_valid)));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__41__test_name = "exec_fire_valid == 0"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__41__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__41__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__41__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 7] Multiple Consecutive Instructions\n",0);
    __Vtask_tb_register_read__DOT__set_forwarding__43__src2_fwd_val = 0U;
    __Vtask_tb_register_read__DOT__set_forwarding__43__src1_fwd_val = 0U;
    __Vtask_tb_register_read__DOT__set_forwarding__43__src2_hit = 0U;
    __Vtask_tb_register_read__DOT__set_forwarding__43__src1_hit = 0U;
    vlSelfRef.tb_register_read__DOT__fwrd_src1_hit 
        = __Vtask_tb_register_read__DOT__set_forwarding__43__src1_hit;
    vlSelfRef.tb_register_read__DOT__fwrd_src2_hit 
        = __Vtask_tb_register_read__DOT__set_forwarding__43__src2_hit;
    vlSelfRef.tb_register_read__DOT__fwrd_src1_val 
        = __Vtask_tb_register_read__DOT__set_forwarding__43__src1_fwd_val;
    vlSelfRef.tb_register_read__DOT__fwrd_src2_val 
        = __Vtask_tb_register_read__DOT__set_forwarding__43__src2_fwd_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__44__src2_val = 0xbbbb0000U;
    __Vtask_tb_register_read__DOT__set_reg_file_values__44__src1_val = 0xaaaa0000U;
    vlSelfRef.tb_register_read__DOT__rf_src1_val = __Vtask_tb_register_read__DOT__set_reg_file_values__44__src1_val;
    vlSelfRef.tb_register_read__DOT__rf_src2_val = __Vtask_tb_register_read__DOT__set_reg_file_values__44__src2_val;
    __Vtask_tb_register_read__DOT__send_instruction__45__instr_valid = 1U;
    __Vtask_tb_register_read__DOT__send_instruction__45__imm_val = 0x000000a0U;
    __Vtask_tb_register_read__DOT__send_instruction__45__dst_preg = 6U;
    __Vtask_tb_register_read__DOT__send_instruction__45__src2_preg = 5U;
    __Vtask_tb_register_read__DOT__send_instruction__45__src1_preg = 4U;
    __Vtask_tb_register_read__DOT__send_instruction__45__pc = 0x00002000U;
    __Vtask_tb_register_read__DOT__send_instruction__45__fire_valid_in = 1U;
    vlSelfRef.tb_register_read__DOT__sched_fire_valid 
        = __Vtask_tb_register_read__DOT__send_instruction__45__fire_valid_in;
    vlSelfRef.tb_register_read__DOT__sched_pkt[0U] 
        = ((3U & vlSelfRef.tb_register_read__DOT__sched_pkt[0U]) 
           | (__Vtask_tb_register_read__DOT__send_instruction__45__pc 
              << 2U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[1U] 
        = ((0xfffffffcU & vlSelfRef.tb_register_read__DOT__sched_pkt[1U]) 
           | (__Vtask_tb_register_read__DOT__send_instruction__45__pc 
              >> 0x0000001eU));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xffe07fffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__45__src1_preg) 
              << 0x0000000fU));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xffffc0ffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__45__src2_preg) 
              << 8U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xf81fffffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__45__dst_preg) 
              << 0x00000015U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[1U] 
        = ((3U & vlSelfRef.tb_register_read__DOT__sched_pkt[1U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__45__imm_val)) 
                        << 1U) | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__45__instr_valid)))) 
              << 2U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xfffffff8U & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | (((IData)((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__45__imm_val)) 
                         << 1U) | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__45__instr_valid)))) 
               >> 0x0000001eU) | ((IData)(((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__45__imm_val)) 
                                             << 1U) 
                                            | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__45__instr_valid))) 
                                           >> 0x00000020U)) 
                                  << 2U)));
    VL_WRITEF_NX("Sent instruction: PC=0x%x, src1=%0#, src2=%0#, dst=%0# at Cycle %0d\n",0,
                 32,__Vtask_tb_register_read__DOT__send_instruction__45__pc,
                 6,(IData)(__Vtask_tb_register_read__DOT__send_instruction__45__src1_preg),
                 6,__Vtask_tb_register_read__DOT__send_instruction__45__src2_preg,
                 6,(IData)(__Vtask_tb_register_read__DOT__send_instruction__45__dst_preg),
                 32,vlSelfRef.tb_register_read__DOT__cycle_count);
    Vtb_register_read___024root____VbeforeTrig_ha6c2d866__0(vlSelf, 
                                                            "@(negedge tb_register_read.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha6c2d866__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_register_read.clk)", 
                                                         "sim/tb_register_read.sv", 
                                                         260);
    Vtb_register_read___024root____VbeforeTrig_ha6c2dba4__0(vlSelf, 
                                                            "@(posedge tb_register_read.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha6c2dba4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_register_read.clk)", 
                                                         "sim/tb_register_read.sv", 
                                                         261);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "sim/tb_register_read.sv", 
                                         262);
    __Vtask_tb_register_read__DOT__check_assertion__46__condition 
        = (0xaaaa0000U == ((vlSelfRef.tb_register_read__DOT__exec_pkt[2U] 
                            << 0x0000001eU) | (vlSelfRef.tb_register_read__DOT__exec_pkt[1U] 
                                               >> 2U)));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__46__test_name = "Instruction 1 src1_val"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__46__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__46__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__46__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    __Vtask_tb_register_read__DOT__check_assertion__47__condition 
        = (0x00002000U == ((vlSelfRef.tb_register_read__DOT__exec_pkt[3U] 
                            << 0x0000001eU) | (vlSelfRef.tb_register_read__DOT__exec_pkt[2U] 
                                               >> 2U)));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__47__test_name = "Instruction 1 PC"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__47__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__47__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__47__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    __Vtask_tb_register_read__DOT__set_reg_file_values__48__src2_val = 0xdddd0000U;
    __Vtask_tb_register_read__DOT__set_reg_file_values__48__src1_val = 0xcccc0000U;
    vlSelfRef.tb_register_read__DOT__rf_src1_val = __Vtask_tb_register_read__DOT__set_reg_file_values__48__src1_val;
    vlSelfRef.tb_register_read__DOT__rf_src2_val = __Vtask_tb_register_read__DOT__set_reg_file_values__48__src2_val;
    __Vtask_tb_register_read__DOT__send_instruction__49__instr_valid = 1U;
    __Vtask_tb_register_read__DOT__send_instruction__49__imm_val = 0x000000b0U;
    __Vtask_tb_register_read__DOT__send_instruction__49__dst_preg = 9U;
    __Vtask_tb_register_read__DOT__send_instruction__49__src2_preg = 8U;
    __Vtask_tb_register_read__DOT__send_instruction__49__src1_preg = 7U;
    __Vtask_tb_register_read__DOT__send_instruction__49__pc = 0x00002004U;
    __Vtask_tb_register_read__DOT__send_instruction__49__fire_valid_in = 1U;
    vlSelfRef.tb_register_read__DOT__sched_fire_valid 
        = __Vtask_tb_register_read__DOT__send_instruction__49__fire_valid_in;
    vlSelfRef.tb_register_read__DOT__sched_pkt[0U] 
        = ((3U & vlSelfRef.tb_register_read__DOT__sched_pkt[0U]) 
           | (__Vtask_tb_register_read__DOT__send_instruction__49__pc 
              << 2U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[1U] 
        = ((0xfffffffcU & vlSelfRef.tb_register_read__DOT__sched_pkt[1U]) 
           | (__Vtask_tb_register_read__DOT__send_instruction__49__pc 
              >> 0x0000001eU));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xffe07fffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__49__src1_preg) 
              << 0x0000000fU));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xffffc0ffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__49__src2_preg) 
              << 8U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xf81fffffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__49__dst_preg) 
              << 0x00000015U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[1U] 
        = ((3U & vlSelfRef.tb_register_read__DOT__sched_pkt[1U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__49__imm_val)) 
                        << 1U) | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__49__instr_valid)))) 
              << 2U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xfffffff8U & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | (((IData)((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__49__imm_val)) 
                         << 1U) | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__49__instr_valid)))) 
               >> 0x0000001eU) | ((IData)(((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__49__imm_val)) 
                                             << 1U) 
                                            | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__49__instr_valid))) 
                                           >> 0x00000020U)) 
                                  << 2U)));
    VL_WRITEF_NX("Sent instruction: PC=0x%x, src1=%0#, src2=%0#, dst=%0# at Cycle %0d\n",0,
                 32,__Vtask_tb_register_read__DOT__send_instruction__49__pc,
                 6,(IData)(__Vtask_tb_register_read__DOT__send_instruction__49__src1_preg),
                 6,__Vtask_tb_register_read__DOT__send_instruction__49__src2_preg,
                 6,(IData)(__Vtask_tb_register_read__DOT__send_instruction__49__dst_preg),
                 32,vlSelfRef.tb_register_read__DOT__cycle_count);
    Vtb_register_read___024root____VbeforeTrig_ha6c2d866__0(vlSelf, 
                                                            "@(negedge tb_register_read.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha6c2d866__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_register_read.clk)", 
                                                         "sim/tb_register_read.sv", 
                                                         268);
    Vtb_register_read___024root____VbeforeTrig_ha6c2dba4__0(vlSelf, 
                                                            "@(posedge tb_register_read.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha6c2dba4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_register_read.clk)", 
                                                         "sim/tb_register_read.sv", 
                                                         269);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "sim/tb_register_read.sv", 
                                         270);
    __Vtask_tb_register_read__DOT__check_assertion__50__condition 
        = (0xcccc0000U == ((vlSelfRef.tb_register_read__DOT__exec_pkt[2U] 
                            << 0x0000001eU) | (vlSelfRef.tb_register_read__DOT__exec_pkt[1U] 
                                               >> 2U)));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__50__test_name = "Instruction 2 src1_val"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__50__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__50__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__50__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    __Vtask_tb_register_read__DOT__check_assertion__51__condition 
        = (0x00002004U == ((vlSelfRef.tb_register_read__DOT__exec_pkt[3U] 
                            << 0x0000001eU) | (vlSelfRef.tb_register_read__DOT__exec_pkt[2U] 
                                               >> 2U)));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__51__test_name = "Instruction 2 PC"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__51__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__51__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__51__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 8] Pass-Through Signal Integrity\n",0);
    __Vtask_tb_register_read__DOT__set_forwarding__53__src2_fwd_val = 0U;
    __Vtask_tb_register_read__DOT__set_forwarding__53__src1_fwd_val = 0U;
    __Vtask_tb_register_read__DOT__set_forwarding__53__src2_hit = 0U;
    __Vtask_tb_register_read__DOT__set_forwarding__53__src1_hit = 0U;
    vlSelfRef.tb_register_read__DOT__fwrd_src1_hit 
        = __Vtask_tb_register_read__DOT__set_forwarding__53__src1_hit;
    vlSelfRef.tb_register_read__DOT__fwrd_src2_hit 
        = __Vtask_tb_register_read__DOT__set_forwarding__53__src2_hit;
    vlSelfRef.tb_register_read__DOT__fwrd_src1_val 
        = __Vtask_tb_register_read__DOT__set_forwarding__53__src1_fwd_val;
    vlSelfRef.tb_register_read__DOT__fwrd_src2_val 
        = __Vtask_tb_register_read__DOT__set_forwarding__53__src2_fwd_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__54__src2_val = 0U;
    __Vtask_tb_register_read__DOT__set_reg_file_values__54__src1_val = 0U;
    vlSelfRef.tb_register_read__DOT__rf_src1_val = __Vtask_tb_register_read__DOT__set_reg_file_values__54__src1_val;
    vlSelfRef.tb_register_read__DOT__rf_src2_val = __Vtask_tb_register_read__DOT__set_reg_file_values__54__src2_val;
    __Vtask_tb_register_read__DOT__send_instruction__55__instr_valid = 1U;
    __Vtask_tb_register_read__DOT__send_instruction__55__imm_val = 0xdeadbeefU;
    __Vtask_tb_register_read__DOT__send_instruction__55__dst_preg = 0x1bU;
    __Vtask_tb_register_read__DOT__send_instruction__55__src2_preg = 0x1aU;
    __Vtask_tb_register_read__DOT__send_instruction__55__src1_preg = 0x19U;
    __Vtask_tb_register_read__DOT__send_instruction__55__pc = 0xfeedfaceU;
    __Vtask_tb_register_read__DOT__send_instruction__55__fire_valid_in = 1U;
    vlSelfRef.tb_register_read__DOT__sched_fire_valid 
        = __Vtask_tb_register_read__DOT__send_instruction__55__fire_valid_in;
    vlSelfRef.tb_register_read__DOT__sched_pkt[0U] 
        = ((3U & vlSelfRef.tb_register_read__DOT__sched_pkt[0U]) 
           | (__Vtask_tb_register_read__DOT__send_instruction__55__pc 
              << 2U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[1U] 
        = ((0xfffffffcU & vlSelfRef.tb_register_read__DOT__sched_pkt[1U]) 
           | (__Vtask_tb_register_read__DOT__send_instruction__55__pc 
              >> 0x0000001eU));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xffe07fffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__55__src1_preg) 
              << 0x0000000fU));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xffffc0ffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__55__src2_preg) 
              << 8U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xf81fffffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__55__dst_preg) 
              << 0x00000015U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[1U] 
        = ((3U & vlSelfRef.tb_register_read__DOT__sched_pkt[1U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__55__imm_val)) 
                        << 1U) | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__55__instr_valid)))) 
              << 2U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xfffffff8U & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | (((IData)((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__55__imm_val)) 
                         << 1U) | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__55__instr_valid)))) 
               >> 0x0000001eU) | ((IData)(((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__55__imm_val)) 
                                             << 1U) 
                                            | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__55__instr_valid))) 
                                           >> 0x00000020U)) 
                                  << 2U)));
    VL_WRITEF_NX("Sent instruction: PC=0x%x, src1=%0#, src2=%0#, dst=%0# at Cycle %0d\n",0,
                 32,__Vtask_tb_register_read__DOT__send_instruction__55__pc,
                 6,(IData)(__Vtask_tb_register_read__DOT__send_instruction__55__src1_preg),
                 6,__Vtask_tb_register_read__DOT__send_instruction__55__src2_preg,
                 6,(IData)(__Vtask_tb_register_read__DOT__send_instruction__55__dst_preg),
                 32,vlSelfRef.tb_register_read__DOT__cycle_count);
    Vtb_register_read___024root____VbeforeTrig_ha6c2d866__0(vlSelf, 
                                                            "@(negedge tb_register_read.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha6c2d866__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_register_read.clk)", 
                                                         "sim/tb_register_read.sv", 
                                                         282);
    Vtb_register_read___024root____VbeforeTrig_ha6c2dba4__0(vlSelf, 
                                                            "@(posedge tb_register_read.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha6c2dba4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_register_read.clk)", 
                                                         "sim/tb_register_read.sv", 
                                                         283);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "sim/tb_register_read.sv", 
                                         284);
    __Vtask_tb_register_read__DOT__check_assertion__56__condition 
        = (0x1bU == (0x0000003fU & (vlSelfRef.tb_register_read__DOT__exec_pkt[4U] 
                                    >> 0x00000013U)));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__56__test_name = "dst_preg passed through"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__56__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__56__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__56__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    __Vtask_tb_register_read__DOT__check_assertion__57__condition 
        = (0x19U == (0x0000003fU & (vlSelfRef.tb_register_read__DOT__exec_pkt[4U] 
                                    >> 0x0000000dU)));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__57__test_name = "src1_preg passed through"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__57__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__57__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__57__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    __Vtask_tb_register_read__DOT__check_assertion__58__condition 
        = (0x1aU == (0x0000003fU & (vlSelfRef.tb_register_read__DOT__exec_pkt[4U] 
                                    >> 7U)));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__58__test_name = "src2_preg passed through"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__58__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__58__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__58__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    __Vtask_tb_register_read__DOT__check_assertion__59__condition 
        = (0xdeadbeefU == ((vlSelfRef.tb_register_read__DOT__exec_pkt[4U] 
                            << 0x0000001dU) | (vlSelfRef.tb_register_read__DOT__exec_pkt[3U] 
                                               >> 3U)));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__59__test_name = "imm_val passed through"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__59__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__59__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__59__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    __Vtask_tb_register_read__DOT__check_assertion__60__condition 
        = (1U & (vlSelfRef.tb_register_read__DOT__exec_pkt[3U] 
                 >> 2U));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__60__test_name = "instr_valid passed through"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__60__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__60__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__60__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    __Vtask_tb_register_read__DOT__check_assertion__61__condition 
        = (0xfeedfaceU == ((vlSelfRef.tb_register_read__DOT__exec_pkt[3U] 
                            << 0x0000001eU) | (vlSelfRef.tb_register_read__DOT__exec_pkt[2U] 
                                               >> 2U)));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__61__test_name = "PC passed through"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__61__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__61__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__61__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 9] Register 0 Access\n",0);
    __Vtask_tb_register_read__DOT__set_forwarding__63__src2_fwd_val = 0U;
    __Vtask_tb_register_read__DOT__set_forwarding__63__src1_fwd_val = 0U;
    __Vtask_tb_register_read__DOT__set_forwarding__63__src2_hit = 0U;
    __Vtask_tb_register_read__DOT__set_forwarding__63__src1_hit = 0U;
    vlSelfRef.tb_register_read__DOT__fwrd_src1_hit 
        = __Vtask_tb_register_read__DOT__set_forwarding__63__src1_hit;
    vlSelfRef.tb_register_read__DOT__fwrd_src2_hit 
        = __Vtask_tb_register_read__DOT__set_forwarding__63__src2_hit;
    vlSelfRef.tb_register_read__DOT__fwrd_src1_val 
        = __Vtask_tb_register_read__DOT__set_forwarding__63__src1_fwd_val;
    vlSelfRef.tb_register_read__DOT__fwrd_src2_val 
        = __Vtask_tb_register_read__DOT__set_forwarding__63__src2_fwd_val;
    __Vtask_tb_register_read__DOT__set_reg_file_values__64__src2_val = 0U;
    __Vtask_tb_register_read__DOT__set_reg_file_values__64__src1_val = 0U;
    vlSelfRef.tb_register_read__DOT__rf_src1_val = __Vtask_tb_register_read__DOT__set_reg_file_values__64__src1_val;
    vlSelfRef.tb_register_read__DOT__rf_src2_val = __Vtask_tb_register_read__DOT__set_reg_file_values__64__src2_val;
    __Vtask_tb_register_read__DOT__send_instruction__65__instr_valid = 1U;
    __Vtask_tb_register_read__DOT__send_instruction__65__imm_val = 0U;
    __Vtask_tb_register_read__DOT__send_instruction__65__dst_preg = 0U;
    __Vtask_tb_register_read__DOT__send_instruction__65__src2_preg = 0U;
    __Vtask_tb_register_read__DOT__send_instruction__65__src1_preg = 0U;
    __Vtask_tb_register_read__DOT__send_instruction__65__pc = 0x00003000U;
    __Vtask_tb_register_read__DOT__send_instruction__65__fire_valid_in = 1U;
    vlSelfRef.tb_register_read__DOT__sched_fire_valid 
        = __Vtask_tb_register_read__DOT__send_instruction__65__fire_valid_in;
    vlSelfRef.tb_register_read__DOT__sched_pkt[0U] 
        = ((3U & vlSelfRef.tb_register_read__DOT__sched_pkt[0U]) 
           | (__Vtask_tb_register_read__DOT__send_instruction__65__pc 
              << 2U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[1U] 
        = ((0xfffffffcU & vlSelfRef.tb_register_read__DOT__sched_pkt[1U]) 
           | (__Vtask_tb_register_read__DOT__send_instruction__65__pc 
              >> 0x0000001eU));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xffe07fffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__65__src1_preg) 
              << 0x0000000fU));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xffffc0ffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__65__src2_preg) 
              << 8U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xf81fffffU & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | ((IData)(__Vtask_tb_register_read__DOT__send_instruction__65__dst_preg) 
              << 0x00000015U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[1U] 
        = ((3U & vlSelfRef.tb_register_read__DOT__sched_pkt[1U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__65__imm_val)) 
                        << 1U) | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__65__instr_valid)))) 
              << 2U));
    vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
        = ((0xfffffff8U & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | (((IData)((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__65__imm_val)) 
                         << 1U) | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__65__instr_valid)))) 
               >> 0x0000001eU) | ((IData)(((((QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__65__imm_val)) 
                                             << 1U) 
                                            | (QData)((IData)(__Vtask_tb_register_read__DOT__send_instruction__65__instr_valid))) 
                                           >> 0x00000020U)) 
                                  << 2U)));
    VL_WRITEF_NX("Sent instruction: PC=0x%x, src1=%0#, src2=%0#, dst=%0# at Cycle %0d\n",0,
                 32,__Vtask_tb_register_read__DOT__send_instruction__65__pc,
                 6,(IData)(__Vtask_tb_register_read__DOT__send_instruction__65__src1_preg),
                 6,__Vtask_tb_register_read__DOT__send_instruction__65__src2_preg,
                 6,(IData)(__Vtask_tb_register_read__DOT__send_instruction__65__dst_preg),
                 32,vlSelfRef.tb_register_read__DOT__cycle_count);
    Vtb_register_read___024root____VbeforeTrig_ha6c2d866__0(vlSelf, 
                                                            "@(negedge tb_register_read.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha6c2d866__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_register_read.clk)", 
                                                         "sim/tb_register_read.sv", 
                                                         300);
    Vtb_register_read___024root____VbeforeTrig_ha6c2dba4__0(vlSelf, 
                                                            "@(posedge tb_register_read.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha6c2dba4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_register_read.clk)", 
                                                         "sim/tb_register_read.sv", 
                                                         301);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "sim/tb_register_read.sv", 
                                         302);
    __Vtask_tb_register_read__DOT__check_assertion__66__condition 
        = (0U == (IData)(vlSelfRef.tb_register_read__DOT__rf_src1_preg));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__66__test_name = "rf_src1_preg == 0"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__66__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__66__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__66__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    __Vtask_tb_register_read__DOT__check_assertion__67__condition 
        = (0U == (IData)(vlSelfRef.tb_register_read__DOT__rf_src2_preg));
    vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__67__test_name = "rf_src2_preg == 0"s;
    if (__Vtask_tb_register_read__DOT__check_assertion__67__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__67__test_name));
        vlSelfRef.tb_register_read__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_register_read__DOT__check_assertion__67__test_name));
        vlSelfRef.tb_register_read__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_register_read__DOT__fail_count);
    }
    VL_WRITEF_NX("\n=== Testbench Complete ===\nTotal Tests: %0d\n",0,
                 32,(vlSelfRef.tb_register_read__DOT__pass_count 
                     + vlSelfRef.tb_register_read__DOT__fail_count));
    if ((0U == vlSelfRef.tb_register_read__DOT__fail_count)) {
        VL_WRITEF_NX("[\033[32mALL TESTS PASSED\033[0m] %0d/%0d passed\n",0,
                     32,vlSelfRef.tb_register_read__DOT__pass_count,
                     32,(vlSelfRef.tb_register_read__DOT__pass_count 
                         + vlSelfRef.tb_register_read__DOT__fail_count));
    } else {
        VL_WRITEF_NX("[\033[31mSOME TESTS FAILED\033[0m] %0d passed, %0d failed\n",0,
                     32,vlSelfRef.tb_register_read__DOT__pass_count,
                     32,vlSelfRef.tb_register_read__DOT__fail_count);
    }
    VL_FINISH_MT("sim/tb_register_read.sv", 333, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

void Vtb_register_read___024root___eval_triggers_vec__act(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___eval_triggers_vec__act\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.tb_register_read__DOT__clk)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_register_read__DOT__clk__0)) 
                                                      << 2U) 
                                                     | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_register_read__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_register_read__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_register_read__DOT__clk__0 
        = vlSelfRef.tb_register_read__DOT__clk;
}

bool Vtb_register_read___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___trigger_anySet__act\n"); );
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

void Vtb_register_read___024root___act_comb__TOP__0(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___act_comb__TOP__0\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_register_read__DOT__rf_src1_preg = 
        (0x0000003fU & (vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                        >> 0x0000000fU));
    vlSelfRef.tb_register_read__DOT__rf_src2_preg = 
        (0x0000003fU & (vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                        >> 8U));
    vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[2U] 
        = ((3U & vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[2U]) 
           | (0xfffffffcU & vlSelfRef.tb_register_read__DOT__sched_pkt[0U]));
    vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[3U] 
        = ((3U & vlSelfRef.tb_register_read__DOT__sched_pkt[1U]) 
           | (0xfffffffcU & vlSelfRef.tb_register_read__DOT__sched_pkt[1U]));
    vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[4U] 
        = ((3U & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | (((IData)((0x0001ffffffffffffULL & (((QData)((IData)(vlSelfRef.tb_register_read__DOT__sched_pkt[3U])) 
                                                  << 0x00000011U) 
                                                 | ((QData)((IData)(vlSelfRef.tb_register_read__DOT__sched_pkt[2U])) 
                                                    >> 0x0000000fU)))) 
               << 0x0000000dU) | (((0x000007e0U & (vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                                                   >> 3U)) 
                                   | (0x0000001fU & 
                                      (vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                                       >> 2U))) << 2U)));
    vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[5U] 
        = (0x3fffffffU & (((3U & ((IData)((0x0001ffffffffffffULL 
                                           & (((QData)((IData)(vlSelfRef.tb_register_read__DOT__sched_pkt[3U])) 
                                               << 0x00000011U) 
                                              | ((QData)((IData)(vlSelfRef.tb_register_read__DOT__sched_pkt[2U])) 
                                                 >> 0x0000000fU)))) 
                                  >> 0x00000013U)) 
                           | (((0x000007e0U & (vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                                               >> 3U)) 
                               | (0x0000001fU & (vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                                                 >> 2U))) 
                              >> 0x0000001eU)) | ((0x00001ffcU 
                                                   & ((IData)(
                                                              (0x0001ffffffffffffULL 
                                                               & (((QData)((IData)(vlSelfRef.tb_register_read__DOT__sched_pkt[3U])) 
                                                                   << 0x00000011U) 
                                                                  | ((QData)((IData)(vlSelfRef.tb_register_read__DOT__sched_pkt[2U])) 
                                                                     >> 0x0000000fU)))) 
                                                      >> 0x00000013U)) 
                                                  | ((IData)(
                                                             ((0x0001ffffffffffffULL 
                                                               & (((QData)((IData)(vlSelfRef.tb_register_read__DOT__sched_pkt[3U])) 
                                                                   << 0x00000011U) 
                                                                  | ((QData)((IData)(vlSelfRef.tb_register_read__DOT__sched_pkt[2U])) 
                                                                     >> 0x0000000fU))) 
                                                              >> 0x00000020U)) 
                                                     << 0x0000000dU))));
    vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[0U] 
        = ((0xfffffffcU & vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[0U]) 
           | (3U & vlSelfRef.tb_register_read__DOT__sched_pkt[0U]));
    if ((0U == ((IData)(vlSelfRef.tb_register_read__DOT__fwrd_src1_hit)
                 ? 1U : 0U))) {
        vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[1U] 
            = ((3U & vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[1U]) 
               | (vlSelfRef.tb_register_read__DOT__rf_src1_val 
                  << 2U));
        vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[2U] 
            = ((0xfffffffcU & vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[2U]) 
               | (vlSelfRef.tb_register_read__DOT__rf_src1_val 
                  >> 0x0000001eU));
    } else if ((1U == ((IData)(vlSelfRef.tb_register_read__DOT__fwrd_src1_hit)
                        ? 1U : 0U))) {
        vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[1U] 
            = ((3U & vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[1U]) 
               | (vlSelfRef.tb_register_read__DOT__fwrd_src1_val 
                  << 2U));
        vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[2U] 
            = ((0xfffffffcU & vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[2U]) 
               | (vlSelfRef.tb_register_read__DOT__fwrd_src1_val 
                  >> 0x0000001eU));
    }
    if ((0U == ((IData)(vlSelfRef.tb_register_read__DOT__fwrd_src2_hit)
                 ? 1U : 0U))) {
        vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[0U] 
            = ((3U & vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[0U]) 
               | (vlSelfRef.tb_register_read__DOT__rf_src2_val 
                  << 2U));
        vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[1U] 
            = ((0xfffffffcU & vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[1U]) 
               | (vlSelfRef.tb_register_read__DOT__rf_src2_val 
                  >> 0x0000001eU));
    } else if ((1U == ((IData)(vlSelfRef.tb_register_read__DOT__fwrd_src2_hit)
                        ? 1U : 0U))) {
        vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[0U] 
            = ((3U & vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[0U]) 
               | (vlSelfRef.tb_register_read__DOT__fwrd_src2_val 
                  << 2U));
        vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[1U] 
            = ((0xfffffffcU & vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[1U]) 
               | (vlSelfRef.tb_register_read__DOT__fwrd_src2_val 
                  >> 0x0000001eU));
    }
}

void Vtb_register_read___024root___eval_act(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___eval_act\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((7ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_register_read___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

void Vtb_register_read___024root___nba_comb__TOP__0(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___nba_comb__TOP__0\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_register_read__DOT__rf_src1_preg = 
        (0x0000003fU & (vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                        >> 0x0000000fU));
    vlSelfRef.tb_register_read__DOT__rf_src2_preg = 
        (0x0000003fU & (vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                        >> 8U));
}

void Vtb_register_read___024root___nba_sequent__TOP__0(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___nba_sequent__TOP__0\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_register_read__DOT__exec_fire_valid 
        = ((1U & (~ (IData)(vlSelfRef.tb_register_read__DOT__rst))) 
           && (IData)(vlSelfRef.tb_register_read__DOT__sched_fire_valid));
    if (vlSelfRef.tb_register_read__DOT__rst) {
        vlSelfRef.tb_register_read__DOT__exec_pkt[0U] = 0U;
        vlSelfRef.tb_register_read__DOT__exec_pkt[1U] = 0U;
        vlSelfRef.tb_register_read__DOT__exec_pkt[2U] = 0U;
        vlSelfRef.tb_register_read__DOT__exec_pkt[3U] = 0U;
        vlSelfRef.tb_register_read__DOT__exec_pkt[4U] = 0U;
        vlSelfRef.tb_register_read__DOT__exec_pkt[5U] = 0U;
    } else {
        vlSelfRef.tb_register_read__DOT__exec_pkt[0U] 
            = vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[0U];
        vlSelfRef.tb_register_read__DOT__exec_pkt[1U] 
            = vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[1U];
        vlSelfRef.tb_register_read__DOT__exec_pkt[2U] 
            = vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[2U];
        vlSelfRef.tb_register_read__DOT__exec_pkt[3U] 
            = vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[3U];
        vlSelfRef.tb_register_read__DOT__exec_pkt[4U] 
            = vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[4U];
        vlSelfRef.tb_register_read__DOT__exec_pkt[5U] 
            = vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[5U];
    }
}

void Vtb_register_read___024root___nba_comb__TOP__1(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___nba_comb__TOP__1\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[2U] 
        = ((3U & vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[2U]) 
           | (0xfffffffcU & vlSelfRef.tb_register_read__DOT__sched_pkt[0U]));
    vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[3U] 
        = ((3U & vlSelfRef.tb_register_read__DOT__sched_pkt[1U]) 
           | (0xfffffffcU & vlSelfRef.tb_register_read__DOT__sched_pkt[1U]));
    vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[4U] 
        = ((3U & vlSelfRef.tb_register_read__DOT__sched_pkt[2U]) 
           | (((IData)((0x0001ffffffffffffULL & (((QData)((IData)(vlSelfRef.tb_register_read__DOT__sched_pkt[3U])) 
                                                  << 0x00000011U) 
                                                 | ((QData)((IData)(vlSelfRef.tb_register_read__DOT__sched_pkt[2U])) 
                                                    >> 0x0000000fU)))) 
               << 0x0000000dU) | (((0x000007e0U & (vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                                                   >> 3U)) 
                                   | (0x0000001fU & 
                                      (vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                                       >> 2U))) << 2U)));
    vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[5U] 
        = (0x3fffffffU & (((3U & ((IData)((0x0001ffffffffffffULL 
                                           & (((QData)((IData)(vlSelfRef.tb_register_read__DOT__sched_pkt[3U])) 
                                               << 0x00000011U) 
                                              | ((QData)((IData)(vlSelfRef.tb_register_read__DOT__sched_pkt[2U])) 
                                                 >> 0x0000000fU)))) 
                                  >> 0x00000013U)) 
                           | (((0x000007e0U & (vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                                               >> 3U)) 
                               | (0x0000001fU & (vlSelfRef.tb_register_read__DOT__sched_pkt[2U] 
                                                 >> 2U))) 
                              >> 0x0000001eU)) | ((0x00001ffcU 
                                                   & ((IData)(
                                                              (0x0001ffffffffffffULL 
                                                               & (((QData)((IData)(vlSelfRef.tb_register_read__DOT__sched_pkt[3U])) 
                                                                   << 0x00000011U) 
                                                                  | ((QData)((IData)(vlSelfRef.tb_register_read__DOT__sched_pkt[2U])) 
                                                                     >> 0x0000000fU)))) 
                                                      >> 0x00000013U)) 
                                                  | ((IData)(
                                                             ((0x0001ffffffffffffULL 
                                                               & (((QData)((IData)(vlSelfRef.tb_register_read__DOT__sched_pkt[3U])) 
                                                                   << 0x00000011U) 
                                                                  | ((QData)((IData)(vlSelfRef.tb_register_read__DOT__sched_pkt[2U])) 
                                                                     >> 0x0000000fU))) 
                                                              >> 0x00000020U)) 
                                                     << 0x0000000dU))));
    vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[0U] 
        = ((0xfffffffcU & vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[0U]) 
           | (3U & vlSelfRef.tb_register_read__DOT__sched_pkt[0U]));
    if ((0U == ((IData)(vlSelfRef.tb_register_read__DOT__fwrd_src1_hit)
                 ? 1U : 0U))) {
        vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[1U] 
            = ((3U & vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[1U]) 
               | (vlSelfRef.tb_register_read__DOT__rf_src1_val 
                  << 2U));
        vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[2U] 
            = ((0xfffffffcU & vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[2U]) 
               | (vlSelfRef.tb_register_read__DOT__rf_src1_val 
                  >> 0x0000001eU));
    } else if ((1U == ((IData)(vlSelfRef.tb_register_read__DOT__fwrd_src1_hit)
                        ? 1U : 0U))) {
        vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[1U] 
            = ((3U & vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[1U]) 
               | (vlSelfRef.tb_register_read__DOT__fwrd_src1_val 
                  << 2U));
        vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[2U] 
            = ((0xfffffffcU & vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[2U]) 
               | (vlSelfRef.tb_register_read__DOT__fwrd_src1_val 
                  >> 0x0000001eU));
    }
    if ((0U == ((IData)(vlSelfRef.tb_register_read__DOT__fwrd_src2_hit)
                 ? 1U : 0U))) {
        vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[0U] 
            = ((3U & vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[0U]) 
               | (vlSelfRef.tb_register_read__DOT__rf_src2_val 
                  << 2U));
        vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[1U] 
            = ((0xfffffffcU & vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[1U]) 
               | (vlSelfRef.tb_register_read__DOT__rf_src2_val 
                  >> 0x0000001eU));
    } else if ((1U == ((IData)(vlSelfRef.tb_register_read__DOT__fwrd_src2_hit)
                        ? 1U : 0U))) {
        vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[0U] 
            = ((3U & vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[0U]) 
               | (vlSelfRef.tb_register_read__DOT__fwrd_src2_val 
                  << 2U));
        vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[1U] 
            = ((0xfffffffcU & vlSelfRef.tb_register_read__DOT__dut__DOT__exec_pkt[1U]) 
               | (vlSelfRef.tb_register_read__DOT__fwrd_src2_val 
                  >> 0x0000001eU));
    }
}

void Vtb_register_read___024root___eval_nba(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___eval_nba\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_register_read___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_register_read___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_register_read___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

void Vtb_register_read___024root___timing_ready(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___timing_ready\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready("@(negedge tb_register_read.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_ha6c2dba4__0.ready("@(posedge tb_register_read.clk)");
    }
}

void Vtb_register_read___024root___timing_resume(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___timing_resume\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_ha6c2d866__0.moveToResumeQueue(
                                                          "@(negedge tb_register_read.clk)");
    vlSelfRef.__VtrigSched_ha6c2dba4__0.moveToResumeQueue(
                                                          "@(posedge tb_register_read.clk)");
    vlSelfRef.__VtrigSched_ha6c2d866__0.resume("@(negedge tb_register_read.clk)");
    vlSelfRef.__VtrigSched_ha6c2dba4__0.resume("@(posedge tb_register_read.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_register_read___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_register_read___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_register_read___024root___eval_phase__act(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___eval_phase__act\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_register_read___024root___eval_triggers_vec__act(vlSelf);
    Vtb_register_read___024root___timing_ready(vlSelf);
    Vtb_register_read___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_register_read___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_register_read___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_register_read___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_register_read___024root___timing_resume(vlSelf);
        Vtb_register_read___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_register_read___024root___eval_phase__inact(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___eval_phase__inact\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("sim/tb_register_read.sv", 5, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_register_read___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_register_read___024root___eval_phase__nba(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___eval_phase__nba\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_register_read___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_register_read___024root___eval_nba(vlSelf);
        Vtb_register_read___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_register_read___024root___eval(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___eval\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_register_read___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("sim/tb_register_read.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("sim/tb_register_read.sv", 5, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_register_read___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("sim/tb_register_read.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_register_read___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_register_read___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_register_read___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_register_read___024root____VbeforeTrig_ha6c2d866__0(Vtb_register_read___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root____VbeforeTrig_ha6c2d866__0\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_register_read__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_register_read__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.tb_register_read__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_register_read__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_register_read__DOT__clk__0 
        = vlSelfRef.tb_register_read__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_ha6c2dba4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2dba4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2dba4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2dba4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2dba4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2dba4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2dba4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2dba4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2dba4__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_register_read___024root____VbeforeTrig_ha6c2dba4__0(Vtb_register_read___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root____VbeforeTrig_ha6c2dba4__0\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_register_read__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_register_read__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.tb_register_read__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_register_read__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_register_read__DOT__clk__0 
        = vlSelfRef.tb_register_read__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_ha6c2dba4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2dba4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2dba4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2dba4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2dba4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2dba4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2dba4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2dba4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2dba4__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha6c2d866__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_register_read___024root___eval_debug_assertions(Vtb_register_read___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_read___024root___eval_debug_assertions\n"); );
    Vtb_register_read__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
