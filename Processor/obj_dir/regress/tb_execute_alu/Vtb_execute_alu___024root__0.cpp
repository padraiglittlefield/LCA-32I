// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_execute_alu.h for the primary calling header

#include "Vtb_execute_alu__pch.h"

VL_ATTR_COLD void Vtb_execute_alu___024root___eval_initial__TOP(Vtb_execute_alu___024root* vlSelf);
VlCoroutine Vtb_execute_alu___024root___eval_initial__TOP__Vtiming__0(Vtb_execute_alu___024root* vlSelf);
VlCoroutine Vtb_execute_alu___024root___eval_initial__TOP__Vtiming__1(Vtb_execute_alu___024root* vlSelf);

void Vtb_execute_alu___024root___eval_initial(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___eval_initial\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_execute_alu___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vtb_execute_alu___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_execute_alu___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_execute_alu___024root___eval_initial__TOP__Vtiming__0(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "sim/tb_execute_alu.sv", 
                                             20);
        vlSelfRef.tb_execute_alu__DOT__clk = 1U;
        vlSelfRef.tb_execute_alu__DOT__cycle_count 
            = ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__cycle_count);
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "sim/tb_execute_alu.sv", 
                                             22);
        vlSelfRef.tb_execute_alu__DOT__clk = 0U;
    }
    co_return;
}

void Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(Vtb_execute_alu___024root* vlSelf, const char* __VeventDescription);
void Vtb_execute_alu___024root____VbeforeTrig_h31008eaa__0(Vtb_execute_alu___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_execute_alu___024root___eval_initial__TOP__Vtiming__1(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_execute_alu__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_execute_alu__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__3__opcode;
    __Vtask_tb_execute_alu__DOT__send_instruction__3__opcode = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__3__pc;
    __Vtask_tb_execute_alu__DOT__send_instruction__3__pc = 0;
    CData/*3:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__3__rob_entry_idx;
    __Vtask_tb_execute_alu__DOT__send_instruction__3__rob_entry_idx = 0;
    CData/*4:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__3__dst_areg;
    __Vtask_tb_execute_alu__DOT__send_instruction__3__dst_areg = 0;
    CData/*5:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__3__dst_preg;
    __Vtask_tb_execute_alu__DOT__send_instruction__3__dst_preg = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__3__imm_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__3__imm_val = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__3__instr_valid;
    __Vtask_tb_execute_alu__DOT__send_instruction__3__instr_valid = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__3__src1_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__3__src1_val = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__3__src2_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__3__src2_val = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__3__alu_en;
    __Vtask_tb_execute_alu__DOT__send_instruction__3__alu_en = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__3__br_taken;
    __Vtask_tb_execute_alu__DOT__send_instruction__3__br_taken = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__check_assertion__4__condition;
    __Vtask_tb_execute_alu__DOT__check_assertion__4__condition = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__check_assertion__5__condition;
    __Vtask_tb_execute_alu__DOT__check_assertion__5__condition = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__7__opcode;
    __Vtask_tb_execute_alu__DOT__send_instruction__7__opcode = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__7__pc;
    __Vtask_tb_execute_alu__DOT__send_instruction__7__pc = 0;
    CData/*3:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__7__rob_entry_idx;
    __Vtask_tb_execute_alu__DOT__send_instruction__7__rob_entry_idx = 0;
    CData/*4:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__7__dst_areg;
    __Vtask_tb_execute_alu__DOT__send_instruction__7__dst_areg = 0;
    CData/*5:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__7__dst_preg;
    __Vtask_tb_execute_alu__DOT__send_instruction__7__dst_preg = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__7__imm_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__7__imm_val = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__7__instr_valid;
    __Vtask_tb_execute_alu__DOT__send_instruction__7__instr_valid = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__7__src1_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__7__src1_val = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__7__src2_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__7__src2_val = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__7__alu_en;
    __Vtask_tb_execute_alu__DOT__send_instruction__7__alu_en = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__7__br_taken;
    __Vtask_tb_execute_alu__DOT__send_instruction__7__br_taken = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__check_assertion__8__condition;
    __Vtask_tb_execute_alu__DOT__check_assertion__8__condition = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__check_assertion__9__condition;
    __Vtask_tb_execute_alu__DOT__check_assertion__9__condition = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__11__opcode;
    __Vtask_tb_execute_alu__DOT__send_instruction__11__opcode = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__11__pc;
    __Vtask_tb_execute_alu__DOT__send_instruction__11__pc = 0;
    CData/*3:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__11__rob_entry_idx;
    __Vtask_tb_execute_alu__DOT__send_instruction__11__rob_entry_idx = 0;
    CData/*4:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__11__dst_areg;
    __Vtask_tb_execute_alu__DOT__send_instruction__11__dst_areg = 0;
    CData/*5:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__11__dst_preg;
    __Vtask_tb_execute_alu__DOT__send_instruction__11__dst_preg = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__11__imm_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__11__imm_val = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__11__instr_valid;
    __Vtask_tb_execute_alu__DOT__send_instruction__11__instr_valid = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__11__src1_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__11__src1_val = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__11__src2_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__11__src2_val = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__11__alu_en;
    __Vtask_tb_execute_alu__DOT__send_instruction__11__alu_en = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__11__br_taken;
    __Vtask_tb_execute_alu__DOT__send_instruction__11__br_taken = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__check_assertion__12__condition;
    __Vtask_tb_execute_alu__DOT__check_assertion__12__condition = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__14__opcode;
    __Vtask_tb_execute_alu__DOT__send_instruction__14__opcode = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__14__pc;
    __Vtask_tb_execute_alu__DOT__send_instruction__14__pc = 0;
    CData/*3:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__14__rob_entry_idx;
    __Vtask_tb_execute_alu__DOT__send_instruction__14__rob_entry_idx = 0;
    CData/*4:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__14__dst_areg;
    __Vtask_tb_execute_alu__DOT__send_instruction__14__dst_areg = 0;
    CData/*5:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__14__dst_preg;
    __Vtask_tb_execute_alu__DOT__send_instruction__14__dst_preg = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__14__imm_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__14__imm_val = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__14__instr_valid;
    __Vtask_tb_execute_alu__DOT__send_instruction__14__instr_valid = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__14__src1_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__14__src1_val = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__14__src2_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__14__src2_val = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__14__alu_en;
    __Vtask_tb_execute_alu__DOT__send_instruction__14__alu_en = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__14__br_taken;
    __Vtask_tb_execute_alu__DOT__send_instruction__14__br_taken = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__check_assertion__15__condition;
    __Vtask_tb_execute_alu__DOT__check_assertion__15__condition = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__check_assertion__16__condition;
    __Vtask_tb_execute_alu__DOT__check_assertion__16__condition = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__check_assertion__17__condition;
    __Vtask_tb_execute_alu__DOT__check_assertion__17__condition = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__19__opcode;
    __Vtask_tb_execute_alu__DOT__send_instruction__19__opcode = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__19__pc;
    __Vtask_tb_execute_alu__DOT__send_instruction__19__pc = 0;
    CData/*3:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__19__rob_entry_idx;
    __Vtask_tb_execute_alu__DOT__send_instruction__19__rob_entry_idx = 0;
    CData/*4:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__19__dst_areg;
    __Vtask_tb_execute_alu__DOT__send_instruction__19__dst_areg = 0;
    CData/*5:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__19__dst_preg;
    __Vtask_tb_execute_alu__DOT__send_instruction__19__dst_preg = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__19__imm_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__19__imm_val = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__19__instr_valid;
    __Vtask_tb_execute_alu__DOT__send_instruction__19__instr_valid = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__19__src1_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__19__src1_val = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__19__src2_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__19__src2_val = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__19__alu_en;
    __Vtask_tb_execute_alu__DOT__send_instruction__19__alu_en = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__19__br_taken;
    __Vtask_tb_execute_alu__DOT__send_instruction__19__br_taken = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__check_assertion__21__condition;
    __Vtask_tb_execute_alu__DOT__check_assertion__21__condition = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__check_assertion__22__condition;
    __Vtask_tb_execute_alu__DOT__check_assertion__22__condition = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__check_assertion__23__condition;
    __Vtask_tb_execute_alu__DOT__check_assertion__23__condition = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__check_assertion__24__condition;
    __Vtask_tb_execute_alu__DOT__check_assertion__24__condition = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__check_assertion__25__condition;
    __Vtask_tb_execute_alu__DOT__check_assertion__25__condition = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__27__opcode;
    __Vtask_tb_execute_alu__DOT__send_instruction__27__opcode = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__27__pc;
    __Vtask_tb_execute_alu__DOT__send_instruction__27__pc = 0;
    CData/*3:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__27__rob_entry_idx;
    __Vtask_tb_execute_alu__DOT__send_instruction__27__rob_entry_idx = 0;
    CData/*4:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__27__dst_areg;
    __Vtask_tb_execute_alu__DOT__send_instruction__27__dst_areg = 0;
    CData/*5:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__27__dst_preg;
    __Vtask_tb_execute_alu__DOT__send_instruction__27__dst_preg = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__27__imm_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__27__imm_val = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__27__instr_valid;
    __Vtask_tb_execute_alu__DOT__send_instruction__27__instr_valid = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__27__src1_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__27__src1_val = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__27__src2_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__27__src2_val = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__27__alu_en;
    __Vtask_tb_execute_alu__DOT__send_instruction__27__alu_en = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__27__br_taken;
    __Vtask_tb_execute_alu__DOT__send_instruction__27__br_taken = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__check_assertion__28__condition;
    __Vtask_tb_execute_alu__DOT__check_assertion__28__condition = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__check_assertion__29__condition;
    __Vtask_tb_execute_alu__DOT__check_assertion__29__condition = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__check_assertion__30__condition;
    __Vtask_tb_execute_alu__DOT__check_assertion__30__condition = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__32__opcode;
    __Vtask_tb_execute_alu__DOT__send_instruction__32__opcode = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__32__pc;
    __Vtask_tb_execute_alu__DOT__send_instruction__32__pc = 0;
    CData/*3:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__32__rob_entry_idx;
    __Vtask_tb_execute_alu__DOT__send_instruction__32__rob_entry_idx = 0;
    CData/*4:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__32__dst_areg;
    __Vtask_tb_execute_alu__DOT__send_instruction__32__dst_areg = 0;
    CData/*5:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__32__dst_preg;
    __Vtask_tb_execute_alu__DOT__send_instruction__32__dst_preg = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__32__imm_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__32__imm_val = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__32__instr_valid;
    __Vtask_tb_execute_alu__DOT__send_instruction__32__instr_valid = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__32__src1_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__32__src1_val = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__32__src2_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__32__src2_val = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__32__alu_en;
    __Vtask_tb_execute_alu__DOT__send_instruction__32__alu_en = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__32__br_taken;
    __Vtask_tb_execute_alu__DOT__send_instruction__32__br_taken = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__check_assertion__33__condition;
    __Vtask_tb_execute_alu__DOT__check_assertion__33__condition = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__check_assertion__34__condition;
    __Vtask_tb_execute_alu__DOT__check_assertion__34__condition = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__36__opcode;
    __Vtask_tb_execute_alu__DOT__send_instruction__36__opcode = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__36__pc;
    __Vtask_tb_execute_alu__DOT__send_instruction__36__pc = 0;
    CData/*3:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__36__rob_entry_idx;
    __Vtask_tb_execute_alu__DOT__send_instruction__36__rob_entry_idx = 0;
    CData/*4:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__36__dst_areg;
    __Vtask_tb_execute_alu__DOT__send_instruction__36__dst_areg = 0;
    CData/*5:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__36__dst_preg;
    __Vtask_tb_execute_alu__DOT__send_instruction__36__dst_preg = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__36__imm_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__36__imm_val = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__36__instr_valid;
    __Vtask_tb_execute_alu__DOT__send_instruction__36__instr_valid = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__36__src1_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__36__src1_val = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__36__src2_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__36__src2_val = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__36__alu_en;
    __Vtask_tb_execute_alu__DOT__send_instruction__36__alu_en = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__36__br_taken;
    __Vtask_tb_execute_alu__DOT__send_instruction__36__br_taken = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__check_assertion__37__condition;
    __Vtask_tb_execute_alu__DOT__check_assertion__37__condition = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__check_assertion__38__condition;
    __Vtask_tb_execute_alu__DOT__check_assertion__38__condition = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__40__opcode;
    __Vtask_tb_execute_alu__DOT__send_instruction__40__opcode = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__40__pc;
    __Vtask_tb_execute_alu__DOT__send_instruction__40__pc = 0;
    CData/*3:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__40__rob_entry_idx;
    __Vtask_tb_execute_alu__DOT__send_instruction__40__rob_entry_idx = 0;
    CData/*4:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__40__dst_areg;
    __Vtask_tb_execute_alu__DOT__send_instruction__40__dst_areg = 0;
    CData/*5:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__40__dst_preg;
    __Vtask_tb_execute_alu__DOT__send_instruction__40__dst_preg = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__40__imm_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__40__imm_val = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__40__instr_valid;
    __Vtask_tb_execute_alu__DOT__send_instruction__40__instr_valid = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__40__src1_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__40__src1_val = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__40__src2_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__40__src2_val = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__40__alu_en;
    __Vtask_tb_execute_alu__DOT__send_instruction__40__alu_en = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__40__br_taken;
    __Vtask_tb_execute_alu__DOT__send_instruction__40__br_taken = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__check_assertion__41__condition;
    __Vtask_tb_execute_alu__DOT__check_assertion__41__condition = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__check_assertion__42__condition;
    __Vtask_tb_execute_alu__DOT__check_assertion__42__condition = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__44__opcode;
    __Vtask_tb_execute_alu__DOT__send_instruction__44__opcode = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__44__pc;
    __Vtask_tb_execute_alu__DOT__send_instruction__44__pc = 0;
    CData/*3:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__44__rob_entry_idx;
    __Vtask_tb_execute_alu__DOT__send_instruction__44__rob_entry_idx = 0;
    CData/*4:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__44__dst_areg;
    __Vtask_tb_execute_alu__DOT__send_instruction__44__dst_areg = 0;
    CData/*5:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__44__dst_preg;
    __Vtask_tb_execute_alu__DOT__send_instruction__44__dst_preg = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__44__imm_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__44__imm_val = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__44__instr_valid;
    __Vtask_tb_execute_alu__DOT__send_instruction__44__instr_valid = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__44__src1_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__44__src1_val = 0;
    IData/*31:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__44__src2_val;
    __Vtask_tb_execute_alu__DOT__send_instruction__44__src2_val = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__44__alu_en;
    __Vtask_tb_execute_alu__DOT__send_instruction__44__alu_en = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__send_instruction__44__br_taken;
    __Vtask_tb_execute_alu__DOT__send_instruction__44__br_taken = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__check_assertion__45__condition;
    __Vtask_tb_execute_alu__DOT__check_assertion__45__condition = 0;
    CData/*0:0*/ __Vtask_tb_execute_alu__DOT__check_assertion__46__condition;
    __Vtask_tb_execute_alu__DOT__check_assertion__46__condition = 0;
    std::string __Vtemp_3;
    std::string __Vtemp_6;
    std::string __Vtemp_9;
    std::string __Vtemp_12;
    std::string __Vtemp_15;
    std::string __Vtemp_16;
    std::string __Vtemp_19;
    std::string __Vtemp_22;
    std::string __Vtemp_25;
    std::string __Vtemp_28;
    std::string __Vtemp_31;
    // Body
    vlSelfRef.tb_execute_alu__DOT__clk = 0U;
    vlSelfRef.tb_execute_alu__DOT__rst = 0U;
    vlSelfRef.tb_execute_alu__DOT__rr_fire_valid = 0U;
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] = 0U;
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] = 0U;
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] = 0U;
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] = 0U;
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] = 0U;
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] = 0U;
    VL_WRITEF_NX("=== Execute (ALU) Testbench ===\n",0);
    VL_WRITEF_NX("\n[RESET] Resetting DUT\n",0);
    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(vlSelf, 
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008f00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         99);
    vlSelfRef.tb_execute_alu__DOT__rst = 1U;
    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(vlSelf, 
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008f00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         101);
    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(vlSelf, 
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008f00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         102);
    vlSelfRef.tb_execute_alu__DOT__rst = 0U;
    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(vlSelf, 
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008f00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         104);
    VL_WRITEF_NX("[RESET] Reset complete\n\n",0);
    VL_WRITEF_NX("\n[Test 1] Verify Execute executes with alu\n",0);
    __Vtask_tb_execute_alu__DOT__send_instruction__3__br_taken = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__3__alu_en = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__3__src2_val = 5U;
    __Vtask_tb_execute_alu__DOT__send_instruction__3__src1_val = 5U;
    __Vtask_tb_execute_alu__DOT__send_instruction__3__instr_valid = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__3__imm_val = 7U;
    __Vtask_tb_execute_alu__DOT__send_instruction__3__dst_preg = 0x21U;
    __Vtask_tb_execute_alu__DOT__send_instruction__3__dst_areg = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__3__rob_entry_idx = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__3__pc = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__3__opcode = 0U;
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0x3fffffffU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__3__opcode 
              << 0x0000001eU));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[5U] 
        = (__Vtask_tb_execute_alu__DOT__send_instruction__3__opcode 
           >> 2U);
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U] 
        = ((3U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__3__pc 
              << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
        = ((0xfffffffcU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__3__pc 
              >> 0x0000001eU));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xffffff87U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__3__rob_entry_idx) 
              << 3U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xc007ffffU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (0xfff80000U & (((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__3__dst_areg) 
                              << 0x00000019U) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__3__dst_preg) 
                                                 << 0x00000013U))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U] 
        = ((3U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__3__pc)) 
                        << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__3__src1_val)))) 
              << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U] 
        = (((IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__3__pc)) 
                      << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__3__src1_val)))) 
            >> 0x0000001eU) | ((IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__3__pc)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__3__src1_val))) 
                                        >> 0x00000020U)) 
                               << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
        = (((IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__3__pc)) 
                       << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__3__src1_val))) 
                     >> 0x00000020U)) >> 0x0000001eU) 
           | ((__Vtask_tb_execute_alu__DOT__send_instruction__3__imm_val 
               << 3U) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__3__instr_valid) 
                         << 2U)));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xfffffff8U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (((3U & (__Vtask_tb_execute_alu__DOT__send_instruction__3__imm_val 
                      >> 0x0000001dU)) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__3__instr_valid) 
                                          >> 0x0000001eU)) 
              | (4U & (__Vtask_tb_execute_alu__DOT__send_instruction__3__imm_val 
                       >> 0x0000001dU))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U] 
        = (IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__3__src2_val)) 
                    << 2U) | (QData)((IData)((((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__3__alu_en) 
                                               << 1U) 
                                              | (IData)(__Vtask_tb_execute_alu__DOT__send_instruction__3__br_taken))))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U] 
        = ((0xfffffffcU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U]) 
           | (IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__3__src2_val)) 
                        << 2U) | (QData)((IData)((((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__3__alu_en) 
                                                   << 1U) 
                                                  | (IData)(__Vtask_tb_execute_alu__DOT__send_instruction__3__br_taken))))) 
                      >> 0x00000020U)));
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[5U];
    vlSelfRef.tb_execute_alu__DOT__rr_fire_valid = 1U;
    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(vlSelf, 
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008f00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         140);
    __Vtemp_3 = Vtb_execute_alu___024unit::__Venumtab_enum_name15
        .at(__Vtask_tb_execute_alu__DOT__send_instruction__3__opcode);
    VL_WRITEF_NX("Sent instruction: OPCODE= %@, rob_entry= %0#, PC= 0x%x, alu_en= %0#, ,val1= %0#, val2= %0#, imm_val= %0#, dst-areg= %0#, dst-preg= %0#, br_taken= %0# at Cycle %0d\n",0,
                 -1,&(__Vtemp_3),4,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__3__rob_entry_idx),
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__3__pc,
                 1,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__3__alu_en),
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__3__src1_val,
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__3__src2_val,
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__3__imm_val,
                 5,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__3__dst_areg),
                 6,__Vtask_tb_execute_alu__DOT__send_instruction__3__dst_preg,
                 1,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__3__br_taken),
                 32,vlSelfRef.tb_execute_alu__DOT__cycle_count);
    vlSelfRef.tb_execute_alu__DOT__rr_fire_valid = 0U;
    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(vlSelf, 
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008f00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         144);
    Vtb_execute_alu___024root____VbeforeTrig_h31008eaa__0(vlSelf, 
                                                          "@(posedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008eaa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         171);
    __Vtask_tb_execute_alu__DOT__check_assertion__4__condition 
        = (0x0000000aU == vlSelfRef.tb_execute_alu__DOT__fwrd_val);
    vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__4__test_name = "ADD should result in 10"s;
    if (__Vtask_tb_execute_alu__DOT__check_assertion__4__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__4__test_name));
        vlSelfRef.tb_execute_alu__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__4__test_name));
        vlSelfRef.tb_execute_alu__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    __Vtask_tb_execute_alu__DOT__check_assertion__5__condition 
        = vlSelfRef.tb_execute_alu__DOT__fwrd_valid;
    vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__5__test_name = "ALU should have valid result"s;
    if (__Vtask_tb_execute_alu__DOT__check_assertion__5__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__5__test_name));
        vlSelfRef.tb_execute_alu__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__5__test_name));
        vlSelfRef.tb_execute_alu__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 2] Verify Execute with immediate\n",0);
    __Vtask_tb_execute_alu__DOT__send_instruction__7__br_taken = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__7__alu_en = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__7__src2_val = 5U;
    __Vtask_tb_execute_alu__DOT__send_instruction__7__src1_val = 5U;
    __Vtask_tb_execute_alu__DOT__send_instruction__7__instr_valid = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__7__imm_val = 7U;
    __Vtask_tb_execute_alu__DOT__send_instruction__7__dst_preg = 0x21U;
    __Vtask_tb_execute_alu__DOT__send_instruction__7__dst_areg = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__7__rob_entry_idx = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__7__pc = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__7__opcode = 0x0000000bU;
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0x3fffffffU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__7__opcode 
              << 0x0000001eU));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[5U] 
        = (__Vtask_tb_execute_alu__DOT__send_instruction__7__opcode 
           >> 2U);
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U] 
        = ((3U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__7__pc 
              << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
        = ((0xfffffffcU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__7__pc 
              >> 0x0000001eU));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xffffff87U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__7__rob_entry_idx) 
              << 3U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xc007ffffU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (0xfff80000U & (((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__7__dst_areg) 
                              << 0x00000019U) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__7__dst_preg) 
                                                 << 0x00000013U))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U] 
        = ((3U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__7__pc)) 
                        << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__7__src1_val)))) 
              << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U] 
        = (((IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__7__pc)) 
                      << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__7__src1_val)))) 
            >> 0x0000001eU) | ((IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__7__pc)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__7__src1_val))) 
                                        >> 0x00000020U)) 
                               << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
        = (((IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__7__pc)) 
                       << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__7__src1_val))) 
                     >> 0x00000020U)) >> 0x0000001eU) 
           | ((__Vtask_tb_execute_alu__DOT__send_instruction__7__imm_val 
               << 3U) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__7__instr_valid) 
                         << 2U)));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xfffffff8U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (((3U & (__Vtask_tb_execute_alu__DOT__send_instruction__7__imm_val 
                      >> 0x0000001dU)) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__7__instr_valid) 
                                          >> 0x0000001eU)) 
              | (4U & (__Vtask_tb_execute_alu__DOT__send_instruction__7__imm_val 
                       >> 0x0000001dU))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U] 
        = (IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__7__src2_val)) 
                    << 2U) | (QData)((IData)((((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__7__alu_en) 
                                               << 1U) 
                                              | (IData)(__Vtask_tb_execute_alu__DOT__send_instruction__7__br_taken))))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U] 
        = ((0xfffffffcU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U]) 
           | (IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__7__src2_val)) 
                        << 2U) | (QData)((IData)((((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__7__alu_en) 
                                                   << 1U) 
                                                  | (IData)(__Vtask_tb_execute_alu__DOT__send_instruction__7__br_taken))))) 
                      >> 0x00000020U)));
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[5U];
    vlSelfRef.tb_execute_alu__DOT__rr_fire_valid = 1U;
    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(vlSelf, 
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008f00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         140);
    __Vtemp_6 = Vtb_execute_alu___024unit::__Venumtab_enum_name15
        .at(__Vtask_tb_execute_alu__DOT__send_instruction__7__opcode);
    VL_WRITEF_NX("Sent instruction: OPCODE= %@, rob_entry= %0#, PC= 0x%x, alu_en= %0#, ,val1= %0#, val2= %0#, imm_val= %0#, dst-areg= %0#, dst-preg= %0#, br_taken= %0# at Cycle %0d\n",0,
                 -1,&(__Vtemp_6),4,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__7__rob_entry_idx),
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__7__pc,
                 1,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__7__alu_en),
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__7__src1_val,
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__7__src2_val,
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__7__imm_val,
                 5,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__7__dst_areg),
                 6,__Vtask_tb_execute_alu__DOT__send_instruction__7__dst_preg,
                 1,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__7__br_taken),
                 32,vlSelfRef.tb_execute_alu__DOT__cycle_count);
    vlSelfRef.tb_execute_alu__DOT__rr_fire_valid = 0U;
    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(vlSelf, 
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008f00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         144);
    Vtb_execute_alu___024root____VbeforeTrig_h31008eaa__0(vlSelf, 
                                                          "@(posedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008eaa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         183);
    __Vtask_tb_execute_alu__DOT__check_assertion__8__condition 
        = (0x0000000cU == vlSelfRef.tb_execute_alu__DOT__fwrd_val);
    vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__8__test_name = "ADD should result in 10"s;
    if (__Vtask_tb_execute_alu__DOT__check_assertion__8__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__8__test_name));
        vlSelfRef.tb_execute_alu__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__8__test_name));
        vlSelfRef.tb_execute_alu__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    __Vtask_tb_execute_alu__DOT__check_assertion__9__condition 
        = vlSelfRef.tb_execute_alu__DOT__fwrd_valid;
    vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__9__test_name = "ALU should have valid result"s;
    if (__Vtask_tb_execute_alu__DOT__check_assertion__9__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__9__test_name));
        vlSelfRef.tb_execute_alu__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__9__test_name));
        vlSelfRef.tb_execute_alu__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 3] Verify Execute with alu_en off\n",0);
    __Vtask_tb_execute_alu__DOT__send_instruction__11__br_taken = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__11__alu_en = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__11__src2_val = 5U;
    __Vtask_tb_execute_alu__DOT__send_instruction__11__src1_val = 5U;
    __Vtask_tb_execute_alu__DOT__send_instruction__11__instr_valid = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__11__imm_val = 7U;
    __Vtask_tb_execute_alu__DOT__send_instruction__11__dst_preg = 0x21U;
    __Vtask_tb_execute_alu__DOT__send_instruction__11__dst_areg = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__11__rob_entry_idx = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__11__pc = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__11__opcode = 0x0000000bU;
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0x3fffffffU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__11__opcode 
              << 0x0000001eU));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[5U] 
        = (__Vtask_tb_execute_alu__DOT__send_instruction__11__opcode 
           >> 2U);
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U] 
        = ((3U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__11__pc 
              << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
        = ((0xfffffffcU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__11__pc 
              >> 0x0000001eU));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xffffff87U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__11__rob_entry_idx) 
              << 3U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xc007ffffU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (0xfff80000U & (((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__11__dst_areg) 
                              << 0x00000019U) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__11__dst_preg) 
                                                 << 0x00000013U))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U] 
        = ((3U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__11__pc)) 
                        << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__11__src1_val)))) 
              << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U] 
        = (((IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__11__pc)) 
                      << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__11__src1_val)))) 
            >> 0x0000001eU) | ((IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__11__pc)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__11__src1_val))) 
                                        >> 0x00000020U)) 
                               << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
        = (((IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__11__pc)) 
                       << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__11__src1_val))) 
                     >> 0x00000020U)) >> 0x0000001eU) 
           | ((__Vtask_tb_execute_alu__DOT__send_instruction__11__imm_val 
               << 3U) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__11__instr_valid) 
                         << 2U)));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xfffffff8U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (((3U & (__Vtask_tb_execute_alu__DOT__send_instruction__11__imm_val 
                      >> 0x0000001dU)) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__11__instr_valid) 
                                          >> 0x0000001eU)) 
              | (4U & (__Vtask_tb_execute_alu__DOT__send_instruction__11__imm_val 
                       >> 0x0000001dU))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U] 
        = (IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__11__src2_val)) 
                    << 2U) | (QData)((IData)((((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__11__alu_en) 
                                               << 1U) 
                                              | (IData)(__Vtask_tb_execute_alu__DOT__send_instruction__11__br_taken))))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U] 
        = ((0xfffffffcU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U]) 
           | (IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__11__src2_val)) 
                        << 2U) | (QData)((IData)((((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__11__alu_en) 
                                                   << 1U) 
                                                  | (IData)(__Vtask_tb_execute_alu__DOT__send_instruction__11__br_taken))))) 
                      >> 0x00000020U)));
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[5U];
    vlSelfRef.tb_execute_alu__DOT__rr_fire_valid = 1U;
    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(vlSelf, 
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008f00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         140);
    __Vtemp_9 = Vtb_execute_alu___024unit::__Venumtab_enum_name15
        .at(__Vtask_tb_execute_alu__DOT__send_instruction__11__opcode);
    VL_WRITEF_NX("Sent instruction: OPCODE= %@, rob_entry= %0#, PC= 0x%x, alu_en= %0#, ,val1= %0#, val2= %0#, imm_val= %0#, dst-areg= %0#, dst-preg= %0#, br_taken= %0# at Cycle %0d\n",0,
                 -1,&(__Vtemp_9),4,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__11__rob_entry_idx),
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__11__pc,
                 1,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__11__alu_en),
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__11__src1_val,
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__11__src2_val,
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__11__imm_val,
                 5,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__11__dst_areg),
                 6,__Vtask_tb_execute_alu__DOT__send_instruction__11__dst_preg,
                 1,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__11__br_taken),
                 32,vlSelfRef.tb_execute_alu__DOT__cycle_count);
    vlSelfRef.tb_execute_alu__DOT__rr_fire_valid = 0U;
    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(vlSelf, 
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008f00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         144);
    Vtb_execute_alu___024root____VbeforeTrig_h31008eaa__0(vlSelf, 
                                                          "@(posedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008eaa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         195);
    __Vtask_tb_execute_alu__DOT__check_assertion__12__condition 
        = (1U & (~ (IData)(vlSelfRef.tb_execute_alu__DOT__fwrd_valid)));
    vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__12__test_name = "ALU should not have valid result"s;
    if (__Vtask_tb_execute_alu__DOT__check_assertion__12__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__12__test_name));
        vlSelfRef.tb_execute_alu__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__12__test_name));
        vlSelfRef.tb_execute_alu__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 4] Verify Execute sends correct data to reg file\n",0);
    __Vtask_tb_execute_alu__DOT__send_instruction__14__br_taken = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__14__alu_en = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__14__src2_val = 5U;
    __Vtask_tb_execute_alu__DOT__send_instruction__14__src1_val = 5U;
    __Vtask_tb_execute_alu__DOT__send_instruction__14__instr_valid = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__14__imm_val = 7U;
    __Vtask_tb_execute_alu__DOT__send_instruction__14__dst_preg = 0x21U;
    __Vtask_tb_execute_alu__DOT__send_instruction__14__dst_areg = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__14__rob_entry_idx = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__14__pc = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__14__opcode = 0U;
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0x3fffffffU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__14__opcode 
              << 0x0000001eU));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[5U] 
        = (__Vtask_tb_execute_alu__DOT__send_instruction__14__opcode 
           >> 2U);
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U] 
        = ((3U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__14__pc 
              << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
        = ((0xfffffffcU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__14__pc 
              >> 0x0000001eU));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xffffff87U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__14__rob_entry_idx) 
              << 3U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xc007ffffU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (0xfff80000U & (((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__14__dst_areg) 
                              << 0x00000019U) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__14__dst_preg) 
                                                 << 0x00000013U))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U] 
        = ((3U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__14__pc)) 
                        << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__14__src1_val)))) 
              << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U] 
        = (((IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__14__pc)) 
                      << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__14__src1_val)))) 
            >> 0x0000001eU) | ((IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__14__pc)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__14__src1_val))) 
                                        >> 0x00000020U)) 
                               << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
        = (((IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__14__pc)) 
                       << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__14__src1_val))) 
                     >> 0x00000020U)) >> 0x0000001eU) 
           | ((__Vtask_tb_execute_alu__DOT__send_instruction__14__imm_val 
               << 3U) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__14__instr_valid) 
                         << 2U)));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xfffffff8U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (((3U & (__Vtask_tb_execute_alu__DOT__send_instruction__14__imm_val 
                      >> 0x0000001dU)) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__14__instr_valid) 
                                          >> 0x0000001eU)) 
              | (4U & (__Vtask_tb_execute_alu__DOT__send_instruction__14__imm_val 
                       >> 0x0000001dU))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U] 
        = (IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__14__src2_val)) 
                    << 2U) | (QData)((IData)((((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__14__alu_en) 
                                               << 1U) 
                                              | (IData)(__Vtask_tb_execute_alu__DOT__send_instruction__14__br_taken))))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U] 
        = ((0xfffffffcU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U]) 
           | (IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__14__src2_val)) 
                        << 2U) | (QData)((IData)((((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__14__alu_en) 
                                                   << 1U) 
                                                  | (IData)(__Vtask_tb_execute_alu__DOT__send_instruction__14__br_taken))))) 
                      >> 0x00000020U)));
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[5U];
    vlSelfRef.tb_execute_alu__DOT__rr_fire_valid = 1U;
    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(vlSelf, 
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008f00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         140);
    __Vtemp_12 = Vtb_execute_alu___024unit::__Venumtab_enum_name15
        .at(__Vtask_tb_execute_alu__DOT__send_instruction__14__opcode);
    VL_WRITEF_NX("Sent instruction: OPCODE= %@, rob_entry= %0#, PC= 0x%x, alu_en= %0#, ,val1= %0#, val2= %0#, imm_val= %0#, dst-areg= %0#, dst-preg= %0#, br_taken= %0# at Cycle %0d\n",0,
                 -1,&(__Vtemp_12),4,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__14__rob_entry_idx),
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__14__pc,
                 1,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__14__alu_en),
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__14__src1_val,
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__14__src2_val,
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__14__imm_val,
                 5,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__14__dst_areg),
                 6,__Vtask_tb_execute_alu__DOT__send_instruction__14__dst_preg,
                 1,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__14__br_taken),
                 32,vlSelfRef.tb_execute_alu__DOT__cycle_count);
    vlSelfRef.tb_execute_alu__DOT__rr_fire_valid = 0U;
    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(vlSelf, 
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008f00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         144);
    Vtb_execute_alu___024root____VbeforeTrig_h31008eaa__0(vlSelf, 
                                                          "@(posedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008eaa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         207);
    __Vtask_tb_execute_alu__DOT__check_assertion__15__condition 
        = (0x21U == (IData)(vlSelfRef.tb_execute_alu__DOT__rf_wr_preg));
    vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__15__test_name = "Execute should write to the correct dest register"s;
    if (__Vtask_tb_execute_alu__DOT__check_assertion__15__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__15__test_name));
        vlSelfRef.tb_execute_alu__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__15__test_name));
        vlSelfRef.tb_execute_alu__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    __Vtask_tb_execute_alu__DOT__check_assertion__16__condition 
        = vlSelfRef.tb_execute_alu__DOT__rf_wr_en;
    vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__16__test_name = "Execute value should be valid"s;
    if (__Vtask_tb_execute_alu__DOT__check_assertion__16__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__16__test_name));
        vlSelfRef.tb_execute_alu__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__16__test_name));
        vlSelfRef.tb_execute_alu__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    __Vtask_tb_execute_alu__DOT__check_assertion__17__condition 
        = (0x0000000aU == vlSelfRef.tb_execute_alu__DOT__rf_wr_val);
    vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__17__test_name = "Execute value should be correct"s;
    if (__Vtask_tb_execute_alu__DOT__check_assertion__17__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__17__test_name));
        vlSelfRef.tb_execute_alu__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__17__test_name));
        vlSelfRef.tb_execute_alu__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 5] Verify Execute sends correct data to reorder buffer\n",0);
    __Vtask_tb_execute_alu__DOT__send_instruction__19__br_taken = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__19__alu_en = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__19__src2_val = 5U;
    __Vtask_tb_execute_alu__DOT__send_instruction__19__src1_val = 5U;
    __Vtask_tb_execute_alu__DOT__send_instruction__19__instr_valid = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__19__imm_val = 7U;
    __Vtask_tb_execute_alu__DOT__send_instruction__19__dst_preg = 0x21U;
    __Vtask_tb_execute_alu__DOT__send_instruction__19__dst_areg = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__19__rob_entry_idx = 7U;
    __Vtask_tb_execute_alu__DOT__send_instruction__19__pc = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__19__opcode = 0U;
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0x3fffffffU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__19__opcode 
              << 0x0000001eU));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[5U] 
        = (__Vtask_tb_execute_alu__DOT__send_instruction__19__opcode 
           >> 2U);
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U] 
        = ((3U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__19__pc 
              << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
        = ((0xfffffffcU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__19__pc 
              >> 0x0000001eU));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xffffff87U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__19__rob_entry_idx) 
              << 3U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xc007ffffU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (0xfff80000U & (((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__19__dst_areg) 
                              << 0x00000019U) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__19__dst_preg) 
                                                 << 0x00000013U))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U] 
        = ((3U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__19__pc)) 
                        << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__19__src1_val)))) 
              << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U] 
        = (((IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__19__pc)) 
                      << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__19__src1_val)))) 
            >> 0x0000001eU) | ((IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__19__pc)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__19__src1_val))) 
                                        >> 0x00000020U)) 
                               << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
        = (((IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__19__pc)) 
                       << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__19__src1_val))) 
                     >> 0x00000020U)) >> 0x0000001eU) 
           | ((__Vtask_tb_execute_alu__DOT__send_instruction__19__imm_val 
               << 3U) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__19__instr_valid) 
                         << 2U)));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xfffffff8U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (((3U & (__Vtask_tb_execute_alu__DOT__send_instruction__19__imm_val 
                      >> 0x0000001dU)) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__19__instr_valid) 
                                          >> 0x0000001eU)) 
              | (4U & (__Vtask_tb_execute_alu__DOT__send_instruction__19__imm_val 
                       >> 0x0000001dU))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U] 
        = (IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__19__src2_val)) 
                    << 2U) | (QData)((IData)((((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__19__alu_en) 
                                               << 1U) 
                                              | (IData)(__Vtask_tb_execute_alu__DOT__send_instruction__19__br_taken))))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U] 
        = ((0xfffffffcU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U]) 
           | (IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__19__src2_val)) 
                        << 2U) | (QData)((IData)((((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__19__alu_en) 
                                                   << 1U) 
                                                  | (IData)(__Vtask_tb_execute_alu__DOT__send_instruction__19__br_taken))))) 
                      >> 0x00000020U)));
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[5U];
    vlSelfRef.tb_execute_alu__DOT__rr_fire_valid = 1U;
    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(vlSelf, 
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008f00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         140);
    __Vtemp_15 = Vtb_execute_alu___024unit::__Venumtab_enum_name15
        .at(__Vtask_tb_execute_alu__DOT__send_instruction__19__opcode);
    VL_WRITEF_NX("Sent instruction: OPCODE= %@, rob_entry= %0#, PC= 0x%x, alu_en= %0#, ,val1= %0#, val2= %0#, imm_val= %0#, dst-areg= %0#, dst-preg= %0#, br_taken= %0# at Cycle %0d\n",0,
                 -1,&(__Vtemp_15),4,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__19__rob_entry_idx),
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__19__pc,
                 1,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__19__alu_en),
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__19__src1_val,
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__19__src2_val,
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__19__imm_val,
                 5,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__19__dst_areg),
                 6,__Vtask_tb_execute_alu__DOT__send_instruction__19__dst_preg,
                 1,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__19__br_taken),
                 32,vlSelfRef.tb_execute_alu__DOT__cycle_count);
    vlSelfRef.tb_execute_alu__DOT__rr_fire_valid = 0U;
    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(vlSelf, 
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008f00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         144);
    Vtb_execute_alu___024root____VbeforeTrig_h31008eaa__0(vlSelf, 
                                                          "@(posedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008eaa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         219);
    VL_WRITEF_NX("ALU Output: Value= %0#, Valid=%0#\n=== Debug ALU Inputs ===\nALU alu_en=%0#\n",0,
                 32,vlSelfRef.tb_execute_alu__DOT__fwrd_val,
                 1,(IData)(vlSelfRef.tb_execute_alu__DOT__fwrd_valid),
                 1,vlSelfRef.tb_execute_alu__DOT__fwrd_valid);
    __Vtemp_16 = Vtb_execute_alu___024unit::__Venumtab_enum_name15
        .at(vlSelfRef.tb_execute_alu__DOT__dut__DOT____Vcellinp__alu__opcode);
    VL_WRITEF_NX("ALU opcode=%@\nALU src1_val=%0# (0x%x)\nALU src2_val=%0# (0x%x)\nALU imm_val=%0# (0x%x)\nALU Output: Value=%0#, Valid=%0#\n",0,
                 -1,&(__Vtemp_16),32,vlSelfRef.tb_execute_alu__DOT__dut__DOT____Vcellinp__alu__src1_val,
                 32,vlSelfRef.tb_execute_alu__DOT__dut__DOT____Vcellinp__alu__src1_val,
                 32,vlSelfRef.tb_execute_alu__DOT__dut__DOT____Vcellinp__alu__src2_val,
                 32,vlSelfRef.tb_execute_alu__DOT__dut__DOT____Vcellinp__alu__src2_val,
                 32,vlSelfRef.tb_execute_alu__DOT__dut__DOT____Vcellinp__alu__imm_val,
                 32,vlSelfRef.tb_execute_alu__DOT__dut__DOT____Vcellinp__alu__imm_val,
                 32,vlSelfRef.tb_execute_alu__DOT__fwrd_val,
                 1,(IData)(vlSelfRef.tb_execute_alu__DOT__fwrd_valid));
    __Vtask_tb_execute_alu__DOT__check_assertion__21__condition 
        = (1U & (~ (IData)(vlSelfRef.tb_execute_alu__DOT__rob_br_mispred)));
    vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__21__test_name = "No branch misprediction should be detected"s;
    if (__Vtask_tb_execute_alu__DOT__check_assertion__21__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__21__test_name));
        vlSelfRef.tb_execute_alu__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__21__test_name));
        vlSelfRef.tb_execute_alu__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    __Vtask_tb_execute_alu__DOT__check_assertion__22__condition 
        = (1U & (~ (IData)(vlSelfRef.tb_execute_alu__DOT__rob_exception)));
    vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__22__test_name = "No exeception should be raised"s;
    if (__Vtask_tb_execute_alu__DOT__check_assertion__22__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__22__test_name));
        vlSelfRef.tb_execute_alu__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__22__test_name));
        vlSelfRef.tb_execute_alu__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    __Vtask_tb_execute_alu__DOT__check_assertion__23__condition 
        = (7U == (IData)(vlSelfRef.tb_execute_alu__DOT__rob_idx));
    vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__23__test_name = "Execute should write to the correct ROB entry"s;
    if (__Vtask_tb_execute_alu__DOT__check_assertion__23__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__23__test_name));
        vlSelfRef.tb_execute_alu__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__23__test_name));
        vlSelfRef.tb_execute_alu__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    __Vtask_tb_execute_alu__DOT__check_assertion__24__condition 
        = vlSelfRef.tb_execute_alu__DOT__rob_valid;
    vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__24__test_name = "Execute value should be valid"s;
    if (__Vtask_tb_execute_alu__DOT__check_assertion__24__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__24__test_name));
        vlSelfRef.tb_execute_alu__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__24__test_name));
        vlSelfRef.tb_execute_alu__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    __Vtask_tb_execute_alu__DOT__check_assertion__25__condition 
        = (0x0000000aU == vlSelfRef.tb_execute_alu__DOT__rob_val);
    vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__25__test_name = "Execute value should be correct"s;
    if (__Vtask_tb_execute_alu__DOT__check_assertion__25__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__25__test_name));
        vlSelfRef.tb_execute_alu__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__25__test_name));
        vlSelfRef.tb_execute_alu__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 6] Verify Execute sends correct data to forwarding unit\n",0);
    __Vtask_tb_execute_alu__DOT__send_instruction__27__br_taken = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__27__alu_en = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__27__src2_val = 5U;
    __Vtask_tb_execute_alu__DOT__send_instruction__27__src1_val = 5U;
    __Vtask_tb_execute_alu__DOT__send_instruction__27__instr_valid = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__27__imm_val = 7U;
    __Vtask_tb_execute_alu__DOT__send_instruction__27__dst_preg = 0x21U;
    __Vtask_tb_execute_alu__DOT__send_instruction__27__dst_areg = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__27__rob_entry_idx = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__27__pc = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__27__opcode = 0U;
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0x3fffffffU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__27__opcode 
              << 0x0000001eU));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[5U] 
        = (__Vtask_tb_execute_alu__DOT__send_instruction__27__opcode 
           >> 2U);
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U] 
        = ((3U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__27__pc 
              << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
        = ((0xfffffffcU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__27__pc 
              >> 0x0000001eU));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xffffff87U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__27__rob_entry_idx) 
              << 3U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xc007ffffU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (0xfff80000U & (((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__27__dst_areg) 
                              << 0x00000019U) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__27__dst_preg) 
                                                 << 0x00000013U))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U] 
        = ((3U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__27__pc)) 
                        << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__27__src1_val)))) 
              << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U] 
        = (((IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__27__pc)) 
                      << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__27__src1_val)))) 
            >> 0x0000001eU) | ((IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__27__pc)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__27__src1_val))) 
                                        >> 0x00000020U)) 
                               << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
        = (((IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__27__pc)) 
                       << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__27__src1_val))) 
                     >> 0x00000020U)) >> 0x0000001eU) 
           | ((__Vtask_tb_execute_alu__DOT__send_instruction__27__imm_val 
               << 3U) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__27__instr_valid) 
                         << 2U)));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xfffffff8U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (((3U & (__Vtask_tb_execute_alu__DOT__send_instruction__27__imm_val 
                      >> 0x0000001dU)) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__27__instr_valid) 
                                          >> 0x0000001eU)) 
              | (4U & (__Vtask_tb_execute_alu__DOT__send_instruction__27__imm_val 
                       >> 0x0000001dU))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U] 
        = (IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__27__src2_val)) 
                    << 2U) | (QData)((IData)((((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__27__alu_en) 
                                               << 1U) 
                                              | (IData)(__Vtask_tb_execute_alu__DOT__send_instruction__27__br_taken))))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U] 
        = ((0xfffffffcU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U]) 
           | (IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__27__src2_val)) 
                        << 2U) | (QData)((IData)((((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__27__alu_en) 
                                                   << 1U) 
                                                  | (IData)(__Vtask_tb_execute_alu__DOT__send_instruction__27__br_taken))))) 
                      >> 0x00000020U)));
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[5U];
    vlSelfRef.tb_execute_alu__DOT__rr_fire_valid = 1U;
    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(vlSelf, 
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008f00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         140);
    __Vtemp_19 = Vtb_execute_alu___024unit::__Venumtab_enum_name15
        .at(__Vtask_tb_execute_alu__DOT__send_instruction__27__opcode);
    VL_WRITEF_NX("Sent instruction: OPCODE= %@, rob_entry= %0#, PC= 0x%x, alu_en= %0#, ,val1= %0#, val2= %0#, imm_val= %0#, dst-areg= %0#, dst-preg= %0#, br_taken= %0# at Cycle %0d\n",0,
                 -1,&(__Vtemp_19),4,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__27__rob_entry_idx),
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__27__pc,
                 1,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__27__alu_en),
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__27__src1_val,
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__27__src2_val,
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__27__imm_val,
                 5,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__27__dst_areg),
                 6,__Vtask_tb_execute_alu__DOT__send_instruction__27__dst_preg,
                 1,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__27__br_taken),
                 32,vlSelfRef.tb_execute_alu__DOT__cycle_count);
    vlSelfRef.tb_execute_alu__DOT__rr_fire_valid = 0U;
    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(vlSelf, 
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008f00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         144);
    Vtb_execute_alu___024root____VbeforeTrig_h31008eaa__0(vlSelf, 
                                                          "@(posedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008eaa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         235);
    __Vtask_tb_execute_alu__DOT__check_assertion__28__condition 
        = (0x21U == (IData)(vlSelfRef.tb_execute_alu__DOT__rf_wr_preg));
    vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__28__test_name = "Execute should send correct dest register"s;
    if (__Vtask_tb_execute_alu__DOT__check_assertion__28__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__28__test_name));
        vlSelfRef.tb_execute_alu__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__28__test_name));
        vlSelfRef.tb_execute_alu__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    __Vtask_tb_execute_alu__DOT__check_assertion__29__condition 
        = vlSelfRef.tb_execute_alu__DOT__rf_wr_en;
    vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__29__test_name = "Forwarded Execute value should be valid"s;
    if (__Vtask_tb_execute_alu__DOT__check_assertion__29__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__29__test_name));
        vlSelfRef.tb_execute_alu__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__29__test_name));
        vlSelfRef.tb_execute_alu__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    __Vtask_tb_execute_alu__DOT__check_assertion__30__condition 
        = (0x0000000aU == vlSelfRef.tb_execute_alu__DOT__rf_wr_val);
    vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__30__test_name = "Forwarded Execute value should be correct"s;
    if (__Vtask_tb_execute_alu__DOT__check_assertion__30__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__30__test_name));
        vlSelfRef.tb_execute_alu__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__30__test_name));
        vlSelfRef.tb_execute_alu__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 7] Verify Execute correctly detects a correct branch when it should be taken\n",0);
    __Vtask_tb_execute_alu__DOT__send_instruction__32__br_taken = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__32__alu_en = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__32__src2_val = 7U;
    __Vtask_tb_execute_alu__DOT__send_instruction__32__src1_val = 6U;
    __Vtask_tb_execute_alu__DOT__send_instruction__32__instr_valid = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__32__imm_val = 7U;
    __Vtask_tb_execute_alu__DOT__send_instruction__32__dst_preg = 0x21U;
    __Vtask_tb_execute_alu__DOT__send_instruction__32__dst_areg = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__32__rob_entry_idx = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__32__pc = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__32__opcode = 0x0000001cU;
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0x3fffffffU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__32__opcode 
              << 0x0000001eU));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[5U] 
        = (__Vtask_tb_execute_alu__DOT__send_instruction__32__opcode 
           >> 2U);
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U] 
        = ((3U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__32__pc 
              << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
        = ((0xfffffffcU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__32__pc 
              >> 0x0000001eU));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xffffff87U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__32__rob_entry_idx) 
              << 3U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xc007ffffU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (0xfff80000U & (((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__32__dst_areg) 
                              << 0x00000019U) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__32__dst_preg) 
                                                 << 0x00000013U))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U] 
        = ((3U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__32__pc)) 
                        << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__32__src1_val)))) 
              << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U] 
        = (((IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__32__pc)) 
                      << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__32__src1_val)))) 
            >> 0x0000001eU) | ((IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__32__pc)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__32__src1_val))) 
                                        >> 0x00000020U)) 
                               << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
        = (((IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__32__pc)) 
                       << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__32__src1_val))) 
                     >> 0x00000020U)) >> 0x0000001eU) 
           | ((__Vtask_tb_execute_alu__DOT__send_instruction__32__imm_val 
               << 3U) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__32__instr_valid) 
                         << 2U)));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xfffffff8U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (((3U & (__Vtask_tb_execute_alu__DOT__send_instruction__32__imm_val 
                      >> 0x0000001dU)) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__32__instr_valid) 
                                          >> 0x0000001eU)) 
              | (4U & (__Vtask_tb_execute_alu__DOT__send_instruction__32__imm_val 
                       >> 0x0000001dU))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U] 
        = (IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__32__src2_val)) 
                    << 2U) | (QData)((IData)((((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__32__alu_en) 
                                               << 1U) 
                                              | (IData)(__Vtask_tb_execute_alu__DOT__send_instruction__32__br_taken))))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U] 
        = ((0xfffffffcU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U]) 
           | (IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__32__src2_val)) 
                        << 2U) | (QData)((IData)((((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__32__alu_en) 
                                                   << 1U) 
                                                  | (IData)(__Vtask_tb_execute_alu__DOT__send_instruction__32__br_taken))))) 
                      >> 0x00000020U)));
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[5U];
    vlSelfRef.tb_execute_alu__DOT__rr_fire_valid = 1U;
    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(vlSelf, 
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008f00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         140);
    __Vtemp_22 = Vtb_execute_alu___024unit::__Venumtab_enum_name15
        .at(__Vtask_tb_execute_alu__DOT__send_instruction__32__opcode);
    VL_WRITEF_NX("Sent instruction: OPCODE= %@, rob_entry= %0#, PC= 0x%x, alu_en= %0#, ,val1= %0#, val2= %0#, imm_val= %0#, dst-areg= %0#, dst-preg= %0#, br_taken= %0# at Cycle %0d\n",0,
                 -1,&(__Vtemp_22),4,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__32__rob_entry_idx),
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__32__pc,
                 1,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__32__alu_en),
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__32__src1_val,
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__32__src2_val,
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__32__imm_val,
                 5,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__32__dst_areg),
                 6,__Vtask_tb_execute_alu__DOT__send_instruction__32__dst_preg,
                 1,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__32__br_taken),
                 32,vlSelfRef.tb_execute_alu__DOT__cycle_count);
    vlSelfRef.tb_execute_alu__DOT__rr_fire_valid = 0U;
    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(vlSelf, 
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008f00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         144);
    Vtb_execute_alu___024root____VbeforeTrig_h31008eaa__0(vlSelf, 
                                                          "@(posedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008eaa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         247);
    __Vtask_tb_execute_alu__DOT__check_assertion__33__condition 
        = vlSelfRef.tb_execute_alu__DOT__rob_valid;
    vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__33__test_name = "Execute value should be valid"s;
    if (__Vtask_tb_execute_alu__DOT__check_assertion__33__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__33__test_name));
        vlSelfRef.tb_execute_alu__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__33__test_name));
        vlSelfRef.tb_execute_alu__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    __Vtask_tb_execute_alu__DOT__check_assertion__34__condition 
        = (1U & (~ (IData)(vlSelfRef.tb_execute_alu__DOT__rob_br_mispred)));
    vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__34__test_name = "No branch misprediction should be detected"s;
    if (__Vtask_tb_execute_alu__DOT__check_assertion__34__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__34__test_name));
        vlSelfRef.tb_execute_alu__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__34__test_name));
        vlSelfRef.tb_execute_alu__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 8] Verify Execute correctly detects an incorrect branch when it should be taken\n",0);
    __Vtask_tb_execute_alu__DOT__send_instruction__36__br_taken = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__36__alu_en = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__36__src2_val = 7U;
    __Vtask_tb_execute_alu__DOT__send_instruction__36__src1_val = 6U;
    __Vtask_tb_execute_alu__DOT__send_instruction__36__instr_valid = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__36__imm_val = 7U;
    __Vtask_tb_execute_alu__DOT__send_instruction__36__dst_preg = 0x21U;
    __Vtask_tb_execute_alu__DOT__send_instruction__36__dst_areg = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__36__rob_entry_idx = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__36__pc = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__36__opcode = 0x0000001cU;
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0x3fffffffU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__36__opcode 
              << 0x0000001eU));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[5U] 
        = (__Vtask_tb_execute_alu__DOT__send_instruction__36__opcode 
           >> 2U);
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U] 
        = ((3U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__36__pc 
              << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
        = ((0xfffffffcU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__36__pc 
              >> 0x0000001eU));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xffffff87U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__36__rob_entry_idx) 
              << 3U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xc007ffffU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (0xfff80000U & (((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__36__dst_areg) 
                              << 0x00000019U) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__36__dst_preg) 
                                                 << 0x00000013U))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U] 
        = ((3U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__36__pc)) 
                        << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__36__src1_val)))) 
              << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U] 
        = (((IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__36__pc)) 
                      << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__36__src1_val)))) 
            >> 0x0000001eU) | ((IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__36__pc)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__36__src1_val))) 
                                        >> 0x00000020U)) 
                               << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
        = (((IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__36__pc)) 
                       << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__36__src1_val))) 
                     >> 0x00000020U)) >> 0x0000001eU) 
           | ((__Vtask_tb_execute_alu__DOT__send_instruction__36__imm_val 
               << 3U) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__36__instr_valid) 
                         << 2U)));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xfffffff8U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (((3U & (__Vtask_tb_execute_alu__DOT__send_instruction__36__imm_val 
                      >> 0x0000001dU)) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__36__instr_valid) 
                                          >> 0x0000001eU)) 
              | (4U & (__Vtask_tb_execute_alu__DOT__send_instruction__36__imm_val 
                       >> 0x0000001dU))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U] 
        = (IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__36__src2_val)) 
                    << 2U) | (QData)((IData)((((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__36__alu_en) 
                                               << 1U) 
                                              | (IData)(__Vtask_tb_execute_alu__DOT__send_instruction__36__br_taken))))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U] 
        = ((0xfffffffcU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U]) 
           | (IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__36__src2_val)) 
                        << 2U) | (QData)((IData)((((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__36__alu_en) 
                                                   << 1U) 
                                                  | (IData)(__Vtask_tb_execute_alu__DOT__send_instruction__36__br_taken))))) 
                      >> 0x00000020U)));
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[5U];
    vlSelfRef.tb_execute_alu__DOT__rr_fire_valid = 1U;
    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(vlSelf, 
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008f00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         140);
    __Vtemp_25 = Vtb_execute_alu___024unit::__Venumtab_enum_name15
        .at(__Vtask_tb_execute_alu__DOT__send_instruction__36__opcode);
    VL_WRITEF_NX("Sent instruction: OPCODE= %@, rob_entry= %0#, PC= 0x%x, alu_en= %0#, ,val1= %0#, val2= %0#, imm_val= %0#, dst-areg= %0#, dst-preg= %0#, br_taken= %0# at Cycle %0d\n",0,
                 -1,&(__Vtemp_25),4,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__36__rob_entry_idx),
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__36__pc,
                 1,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__36__alu_en),
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__36__src1_val,
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__36__src2_val,
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__36__imm_val,
                 5,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__36__dst_areg),
                 6,__Vtask_tb_execute_alu__DOT__send_instruction__36__dst_preg,
                 1,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__36__br_taken),
                 32,vlSelfRef.tb_execute_alu__DOT__cycle_count);
    vlSelfRef.tb_execute_alu__DOT__rr_fire_valid = 0U;
    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(vlSelf, 
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008f00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         144);
    Vtb_execute_alu___024root____VbeforeTrig_h31008eaa__0(vlSelf, 
                                                          "@(posedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008eaa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         258);
    __Vtask_tb_execute_alu__DOT__check_assertion__37__condition 
        = vlSelfRef.tb_execute_alu__DOT__rob_valid;
    vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__37__test_name = "Execute value should be valid"s;
    if (__Vtask_tb_execute_alu__DOT__check_assertion__37__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__37__test_name));
        vlSelfRef.tb_execute_alu__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__37__test_name));
        vlSelfRef.tb_execute_alu__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    __Vtask_tb_execute_alu__DOT__check_assertion__38__condition 
        = vlSelfRef.tb_execute_alu__DOT__rob_br_mispred;
    vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__38__test_name = "Branch misprediction should be detected"s;
    if (__Vtask_tb_execute_alu__DOT__check_assertion__38__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__38__test_name));
        vlSelfRef.tb_execute_alu__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__38__test_name));
        vlSelfRef.tb_execute_alu__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 9] Verify Execute correctly detects a correct branch when it should be not taken\n",0);
    __Vtask_tb_execute_alu__DOT__send_instruction__40__br_taken = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__40__alu_en = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__40__src2_val = 7U;
    __Vtask_tb_execute_alu__DOT__send_instruction__40__src1_val = 7U;
    __Vtask_tb_execute_alu__DOT__send_instruction__40__instr_valid = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__40__imm_val = 7U;
    __Vtask_tb_execute_alu__DOT__send_instruction__40__dst_preg = 0x21U;
    __Vtask_tb_execute_alu__DOT__send_instruction__40__dst_areg = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__40__rob_entry_idx = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__40__pc = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__40__opcode = 0x0000001cU;
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0x3fffffffU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__40__opcode 
              << 0x0000001eU));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[5U] 
        = (__Vtask_tb_execute_alu__DOT__send_instruction__40__opcode 
           >> 2U);
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U] 
        = ((3U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__40__pc 
              << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
        = ((0xfffffffcU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__40__pc 
              >> 0x0000001eU));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xffffff87U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__40__rob_entry_idx) 
              << 3U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xc007ffffU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (0xfff80000U & (((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__40__dst_areg) 
                              << 0x00000019U) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__40__dst_preg) 
                                                 << 0x00000013U))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U] 
        = ((3U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__40__pc)) 
                        << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__40__src1_val)))) 
              << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U] 
        = (((IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__40__pc)) 
                      << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__40__src1_val)))) 
            >> 0x0000001eU) | ((IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__40__pc)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__40__src1_val))) 
                                        >> 0x00000020U)) 
                               << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
        = (((IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__40__pc)) 
                       << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__40__src1_val))) 
                     >> 0x00000020U)) >> 0x0000001eU) 
           | ((__Vtask_tb_execute_alu__DOT__send_instruction__40__imm_val 
               << 3U) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__40__instr_valid) 
                         << 2U)));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xfffffff8U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (((3U & (__Vtask_tb_execute_alu__DOT__send_instruction__40__imm_val 
                      >> 0x0000001dU)) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__40__instr_valid) 
                                          >> 0x0000001eU)) 
              | (4U & (__Vtask_tb_execute_alu__DOT__send_instruction__40__imm_val 
                       >> 0x0000001dU))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U] 
        = (IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__40__src2_val)) 
                    << 2U) | (QData)((IData)((((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__40__alu_en) 
                                               << 1U) 
                                              | (IData)(__Vtask_tb_execute_alu__DOT__send_instruction__40__br_taken))))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U] 
        = ((0xfffffffcU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U]) 
           | (IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__40__src2_val)) 
                        << 2U) | (QData)((IData)((((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__40__alu_en) 
                                                   << 1U) 
                                                  | (IData)(__Vtask_tb_execute_alu__DOT__send_instruction__40__br_taken))))) 
                      >> 0x00000020U)));
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[5U];
    vlSelfRef.tb_execute_alu__DOT__rr_fire_valid = 1U;
    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(vlSelf, 
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008f00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         140);
    __Vtemp_28 = Vtb_execute_alu___024unit::__Venumtab_enum_name15
        .at(__Vtask_tb_execute_alu__DOT__send_instruction__40__opcode);
    VL_WRITEF_NX("Sent instruction: OPCODE= %@, rob_entry= %0#, PC= 0x%x, alu_en= %0#, ,val1= %0#, val2= %0#, imm_val= %0#, dst-areg= %0#, dst-preg= %0#, br_taken= %0# at Cycle %0d\n",0,
                 -1,&(__Vtemp_28),4,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__40__rob_entry_idx),
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__40__pc,
                 1,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__40__alu_en),
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__40__src1_val,
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__40__src2_val,
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__40__imm_val,
                 5,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__40__dst_areg),
                 6,__Vtask_tb_execute_alu__DOT__send_instruction__40__dst_preg,
                 1,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__40__br_taken),
                 32,vlSelfRef.tb_execute_alu__DOT__cycle_count);
    vlSelfRef.tb_execute_alu__DOT__rr_fire_valid = 0U;
    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(vlSelf, 
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008f00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         144);
    Vtb_execute_alu___024root____VbeforeTrig_h31008eaa__0(vlSelf, 
                                                          "@(posedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008eaa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         269);
    __Vtask_tb_execute_alu__DOT__check_assertion__41__condition 
        = vlSelfRef.tb_execute_alu__DOT__rob_valid;
    vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__41__test_name = "Execute value should be valid"s;
    if (__Vtask_tb_execute_alu__DOT__check_assertion__41__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__41__test_name));
        vlSelfRef.tb_execute_alu__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__41__test_name));
        vlSelfRef.tb_execute_alu__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    __Vtask_tb_execute_alu__DOT__check_assertion__42__condition 
        = (1U & (~ (IData)(vlSelfRef.tb_execute_alu__DOT__rob_br_mispred)));
    vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__42__test_name = "No branch misprediction should be detected"s;
    if (__Vtask_tb_execute_alu__DOT__check_assertion__42__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__42__test_name));
        vlSelfRef.tb_execute_alu__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__42__test_name));
        vlSelfRef.tb_execute_alu__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    VL_WRITEF_NX("\n[Test 10] Verify Execute correctly detects an incorrect branch when it should be not taken\n",0);
    __Vtask_tb_execute_alu__DOT__send_instruction__44__br_taken = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__44__alu_en = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__44__src2_val = 7U;
    __Vtask_tb_execute_alu__DOT__send_instruction__44__src1_val = 7U;
    __Vtask_tb_execute_alu__DOT__send_instruction__44__instr_valid = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__44__imm_val = 7U;
    __Vtask_tb_execute_alu__DOT__send_instruction__44__dst_preg = 0x21U;
    __Vtask_tb_execute_alu__DOT__send_instruction__44__dst_areg = 1U;
    __Vtask_tb_execute_alu__DOT__send_instruction__44__rob_entry_idx = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__44__pc = 0U;
    __Vtask_tb_execute_alu__DOT__send_instruction__44__opcode = 0x0000001cU;
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0x3fffffffU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__44__opcode 
              << 0x0000001eU));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[5U] 
        = (__Vtask_tb_execute_alu__DOT__send_instruction__44__opcode 
           >> 2U);
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U] 
        = ((3U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__44__pc 
              << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
        = ((0xfffffffcU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U]) 
           | (__Vtask_tb_execute_alu__DOT__send_instruction__44__pc 
              >> 0x0000001eU));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xffffff87U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__44__rob_entry_idx) 
              << 3U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xc007ffffU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (0xfff80000U & (((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__44__dst_areg) 
                              << 0x00000019U) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__44__dst_preg) 
                                                 << 0x00000013U))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U] 
        = ((3U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__44__pc)) 
                        << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__44__src1_val)))) 
              << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U] 
        = (((IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__44__pc)) 
                      << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__44__src1_val)))) 
            >> 0x0000001eU) | ((IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__44__pc)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__44__src1_val))) 
                                        >> 0x00000020U)) 
                               << 2U));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
        = (((IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__44__pc)) 
                       << 0x00000020U) | (QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__44__src1_val))) 
                     >> 0x00000020U)) >> 0x0000001eU) 
           | ((__Vtask_tb_execute_alu__DOT__send_instruction__44__imm_val 
               << 3U) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__44__instr_valid) 
                         << 2U)));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
        = ((0xfffffff8U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U]) 
           | (((3U & (__Vtask_tb_execute_alu__DOT__send_instruction__44__imm_val 
                      >> 0x0000001dU)) | ((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__44__instr_valid) 
                                          >> 0x0000001eU)) 
              | (4U & (__Vtask_tb_execute_alu__DOT__send_instruction__44__imm_val 
                       >> 0x0000001dU))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U] 
        = (IData)((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__44__src2_val)) 
                    << 2U) | (QData)((IData)((((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__44__alu_en) 
                                               << 1U) 
                                              | (IData)(__Vtask_tb_execute_alu__DOT__send_instruction__44__br_taken))))));
    vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U] 
        = ((0xfffffffcU & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U]) 
           | (IData)(((((QData)((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__44__src2_val)) 
                        << 2U) | (QData)((IData)((((IData)(__Vtask_tb_execute_alu__DOT__send_instruction__44__alu_en) 
                                                   << 1U) 
                                                  | (IData)(__Vtask_tb_execute_alu__DOT__send_instruction__44__br_taken))))) 
                      >> 0x00000020U)));
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U];
    vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] = vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[5U];
    vlSelfRef.tb_execute_alu__DOT__rr_fire_valid = 1U;
    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(vlSelf, 
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008f00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         140);
    __Vtemp_31 = Vtb_execute_alu___024unit::__Venumtab_enum_name15
        .at(__Vtask_tb_execute_alu__DOT__send_instruction__44__opcode);
    VL_WRITEF_NX("Sent instruction: OPCODE= %@, rob_entry= %0#, PC= 0x%x, alu_en= %0#, ,val1= %0#, val2= %0#, imm_val= %0#, dst-areg= %0#, dst-preg= %0#, br_taken= %0# at Cycle %0d\n",0,
                 -1,&(__Vtemp_31),4,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__44__rob_entry_idx),
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__44__pc,
                 1,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__44__alu_en),
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__44__src1_val,
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__44__src2_val,
                 32,__Vtask_tb_execute_alu__DOT__send_instruction__44__imm_val,
                 5,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__44__dst_areg),
                 6,__Vtask_tb_execute_alu__DOT__send_instruction__44__dst_preg,
                 1,(IData)(__Vtask_tb_execute_alu__DOT__send_instruction__44__br_taken),
                 32,vlSelfRef.tb_execute_alu__DOT__cycle_count);
    vlSelfRef.tb_execute_alu__DOT__rr_fire_valid = 0U;
    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(vlSelf, 
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008f00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         144);
    Vtb_execute_alu___024root____VbeforeTrig_h31008eaa__0(vlSelf, 
                                                          "@(posedge tb_execute_alu.clk)");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VtrigSched_h31008eaa__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_execute_alu.clk)", 
                                                         "sim/tb_execute_alu.sv", 
                                                         280);
    __Vtask_tb_execute_alu__DOT__check_assertion__45__condition 
        = vlSelfRef.tb_execute_alu__DOT__rob_valid;
    vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__45__test_name = "Execute value should be valid"s;
    if (__Vtask_tb_execute_alu__DOT__check_assertion__45__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__45__test_name));
        vlSelfRef.tb_execute_alu__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__45__test_name));
        vlSelfRef.tb_execute_alu__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    __Vtask_tb_execute_alu__DOT__check_assertion__46__condition 
        = vlSelfRef.tb_execute_alu__DOT__rob_br_mispred;
    vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__46__test_name = "Branch misprediction should be detected"s;
    if (__Vtask_tb_execute_alu__DOT__check_assertion__46__condition) {
        VL_WRITEF_NX("  [\033[32mPASS\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__46__test_name));
        vlSelfRef.tb_execute_alu__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__pass_count);
    } else {
        VL_WRITEF_NX("  [\033[31mFAIL\033[0m] %@\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_execute_alu__DOT__check_assertion__46__test_name));
        vlSelfRef.tb_execute_alu__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    tb_execute_alu__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, tb_execute_alu__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_execute_alu___024root____VbeforeTrig_h31008eaa__0(vlSelf, 
                                                              "@(posedge tb_execute_alu.clk)");
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        co_await vlSelfRef.__VtrigSched_h31008eaa__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_execute_alu.clk)", 
                                                             "sim/tb_execute_alu.sv", 
                                                             307);
        tb_execute_alu__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_execute_alu__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    VL_WRITEF_NX("\n=== Testbench Complete ===\nTotal Tests: %0d\n",0,
                 32,(vlSelfRef.tb_execute_alu__DOT__pass_count 
                     + vlSelfRef.tb_execute_alu__DOT__fail_count));
    if ((0U == vlSelfRef.tb_execute_alu__DOT__fail_count)) {
        VL_WRITEF_NX("[\033[32mALL TESTS PASSED\033[0m] %0d/%0d passed\n",0,
                     32,vlSelfRef.tb_execute_alu__DOT__pass_count,
                     32,(vlSelfRef.tb_execute_alu__DOT__pass_count 
                         + vlSelfRef.tb_execute_alu__DOT__fail_count));
    } else {
        VL_WRITEF_NX("[\033[31mSOME TESTS FAILED\033[0m] %0d passed, %0d failed\n",0,
                     32,vlSelfRef.tb_execute_alu__DOT__pass_count,
                     32,vlSelfRef.tb_execute_alu__DOT__fail_count);
    }
    VL_FINISH_MT("sim/tb_execute_alu.sv", 316, "");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_return;
}

void Vtb_execute_alu___024root___eval_triggers_vec__act(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___eval_triggers_vec__act\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.tb_execute_alu__DOT__clk)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_execute_alu__DOT__clk__0)) 
                                                      << 2U) 
                                                     | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_execute_alu__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_execute_alu__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_execute_alu__DOT__clk__0 
        = vlSelfRef.tb_execute_alu__DOT__clk;
}

bool Vtb_execute_alu___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___trigger_anySet__act\n"); );
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

void Vtb_execute_alu___024root___act_comb__TOP__0(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___act_comb__TOP__0\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_execute_alu__DOT__fwrd_valid = (1U 
                                                 & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                    >> 1U));
    vlSelfRef.tb_execute_alu__DOT__dut__DOT____Vcellinp__alu__opcode 
        = ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
            << 2U) | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                      >> 0x0000001eU));
    vlSelfRef.tb_execute_alu__DOT__dut__DOT____Vcellinp__alu__src1_val 
        = ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
            << 0x0000001eU) | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                               >> 2U));
    vlSelfRef.tb_execute_alu__DOT__dut__DOT____Vcellinp__alu__src2_val 
        = ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
            << 0x0000001eU) | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                               >> 2U));
    vlSelfRef.tb_execute_alu__DOT__dut__DOT____Vcellinp__alu__imm_val 
        = ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
            << 0x0000001dU) | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                               >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = VL_LTS_III(32, 
                                                          ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                            << 0x0000001eU) 
                                                           | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                              >> 2U)), 
                                                          ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                            << 0x0000001eU) 
                                                           | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                              >> 2U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                  << 0x0000001eU) 
                                                 | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                    >> 2U)) 
                                                < (
                                                   (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                    << 0x0000001eU) 
                                                   | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                      >> 2U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15 = (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                   << 0x0000001eU) 
                                                  | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                     >> 2U)) 
                                                 + 
                                                 ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                   << 0x0000001eU) 
                                                  | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                     >> 2U)));
    vlSelfRef.tb_execute_alu__DOT__fwrd_val = ((2U 
                                                & vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U])
                                                ? (
                                                   (((0U 
                                                      == 
                                                      ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                        << 2U) 
                                                       | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                          >> 0x0000001eU))) 
                                                     | (1U 
                                                        == 
                                                        ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                          << 2U) 
                                                         | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                            >> 0x0000001eU)))) 
                                                    | (((2U 
                                                         == 
                                                         ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                           << 2U) 
                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                             >> 0x0000001eU))) 
                                                        | (3U 
                                                           == 
                                                           ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                             << 2U) 
                                                            | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                               >> 0x0000001eU)))) 
                                                       | ((4U 
                                                           == 
                                                           ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                             << 2U) 
                                                            | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                               >> 0x0000001eU))) 
                                                          | ((5U 
                                                              == 
                                                              ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                                << 2U) 
                                                               | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                  >> 0x0000001eU))) 
                                                             | ((6U 
                                                                 == 
                                                                 ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                                   << 2U) 
                                                                  | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                     >> 0x0000001eU))) 
                                                                | (7U 
                                                                   == 
                                                                   ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                                     << 2U) 
                                                                    | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                       >> 0x0000001eU))))))))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                       << 2U) 
                                                      | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                         >> 0x0000001eU)))
                                                     ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15
                                                     : 
                                                    ((1U 
                                                      == 
                                                      ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                        << 2U) 
                                                       | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                          >> 0x0000001eU)))
                                                      ? 
                                                     (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                        << 0x0000001eU) 
                                                       | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                          >> 2U)) 
                                                      - 
                                                      ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                        << 0x0000001eU) 
                                                       | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                          >> 2U)))
                                                      : 
                                                     ((2U 
                                                       == 
                                                       ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                         << 2U) 
                                                        | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                           >> 0x0000001eU)))
                                                       ? 
                                                      (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                         << 0x0000001eU) 
                                                        | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                           >> 2U)) 
                                                       & ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                           << 0x0000001eU) 
                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                             >> 2U)))
                                                       : 
                                                      ((3U 
                                                        == 
                                                        ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                          << 2U) 
                                                         | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                            >> 0x0000001eU)))
                                                        ? 
                                                       (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                          << 0x0000001eU) 
                                                         | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                            >> 2U)) 
                                                        | ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                            << 0x0000001eU) 
                                                           | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                              >> 2U)))
                                                        : 
                                                       ((4U 
                                                         == 
                                                         ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                           << 2U) 
                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                             >> 0x0000001eU)))
                                                         ? 
                                                        (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                           << 0x0000001eU) 
                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                             >> 2U)) 
                                                         ^ 
                                                         ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                           << 0x0000001eU) 
                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                             >> 2U)))
                                                         : 
                                                        ((5U 
                                                          == 
                                                          ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                            << 2U) 
                                                           | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                              >> 0x0000001eU)))
                                                          ? 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)
                                                           ? 1U
                                                           : 0U)
                                                          : 
                                                         ((6U 
                                                           == 
                                                           ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                             << 2U) 
                                                            | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                               >> 0x0000001eU)))
                                                           ? 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)
                                                            ? 1U
                                                            : 0U)
                                                           : 
                                                          VL_SHIFTRS_III(32,32,5, 
                                                                         ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                                             >> 2U)), 
                                                                         (0x0000001fU 
                                                                          & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                                             >> 2U))))))))))
                                                    : 
                                                   ((((8U 
                                                       == 
                                                       ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                         << 2U) 
                                                        | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                           >> 0x0000001eU))) 
                                                      | (9U 
                                                         == 
                                                         ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                           << 2U) 
                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                             >> 0x0000001eU)))) 
                                                     | (((0x0000000aU 
                                                          == 
                                                          ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                            << 2U) 
                                                           | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                              >> 0x0000001eU))) 
                                                         | (0x0000000bU 
                                                            == 
                                                            ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                              << 2U) 
                                                             | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                >> 0x0000001eU)))) 
                                                        | ((0x0000000cU 
                                                            == 
                                                            ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                              << 2U) 
                                                             | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                >> 0x0000001eU))) 
                                                           | ((0x0000000dU 
                                                               == 
                                                               ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                                 << 2U) 
                                                                | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                   >> 0x0000001eU))) 
                                                              | ((0x0000000eU 
                                                                  == 
                                                                  ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                                    << 2U) 
                                                                   | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                      >> 0x0000001eU))) 
                                                                 | (0x0000000fU 
                                                                    == 
                                                                    ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                                      << 2U) 
                                                                     | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                        >> 0x0000001eU))))))))
                                                     ? 
                                                    ((8U 
                                                      == 
                                                      ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                        << 2U) 
                                                       | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                          >> 0x0000001eU)))
                                                      ? 
                                                     (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                        << 0x0000001eU) 
                                                       | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                          >> 2U)) 
                                                      >> 
                                                      (0x0000001fU 
                                                       & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                          >> 2U)))
                                                      : 
                                                     ((9U 
                                                       == 
                                                       ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                         << 2U) 
                                                        | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                           >> 0x0000001eU)))
                                                       ? 
                                                      (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                         << 0x0000001eU) 
                                                        | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                           >> 2U)) 
                                                       << 
                                                       (0x0000001fU 
                                                        & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                           >> 2U)))
                                                       : 
                                                      ((0x0000000aU 
                                                        == 
                                                        ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                          << 2U) 
                                                         | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                            >> 0x0000001eU)))
                                                        ? 
                                                       VL_MULS_III(32, 
                                                                   ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                                     << 0x0000001eU) 
                                                                    | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                                       >> 2U)), 
                                                                   ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                                     << 0x0000001eU) 
                                                                    | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                                       >> 2U)))
                                                        : 
                                                       ((0x0000000bU 
                                                         == 
                                                         ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                           << 2U) 
                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                             >> 0x0000001eU)))
                                                         ? 
                                                        (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                           << 0x0000001eU) 
                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                             >> 2U)) 
                                                         + 
                                                         ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                           << 0x0000001dU) 
                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                             >> 3U)))
                                                         : 
                                                        ((0x0000000cU 
                                                          == 
                                                          ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                            << 2U) 
                                                           | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                              >> 0x0000001eU)))
                                                          ? 
                                                         (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                            << 0x0000001eU) 
                                                           | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                              >> 2U)) 
                                                          & ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                              << 0x0000001dU) 
                                                             | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                                >> 3U)))
                                                          : 
                                                         ((0x0000000dU 
                                                           == 
                                                           ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                             << 2U) 
                                                            | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                               >> 0x0000001eU)))
                                                           ? 
                                                          (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                             << 0x0000001eU) 
                                                            | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                               >> 2U)) 
                                                           | ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                               << 0x0000001dU) 
                                                              | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                                 >> 3U)))
                                                           : 
                                                          ((0x0000000eU 
                                                            == 
                                                            ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                              << 2U) 
                                                             | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                >> 0x0000001eU)))
                                                            ? 
                                                           (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                              << 0x0000001eU) 
                                                             | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                                >> 2U)) 
                                                            ^ 
                                                            ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                              << 0x0000001dU) 
                                                             | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                                >> 3U)))
                                                            : 
                                                           (VL_LTS_III(32, 
                                                                       ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                                         << 0x0000001eU) 
                                                                        | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                                           >> 2U)), 
                                                                       ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                         << 0x0000001dU) 
                                                                        | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                                           >> 3U)))
                                                             ? 1U
                                                             : 0U))))))))
                                                     : 
                                                    ((((0x00000010U 
                                                        == 
                                                        ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                          << 2U) 
                                                         | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                            >> 0x0000001eU))) 
                                                       | (0x00000011U 
                                                          == 
                                                          ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                            << 2U) 
                                                           | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                              >> 0x0000001eU)))) 
                                                      | (((0x00000012U 
                                                           == 
                                                           ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                             << 2U) 
                                                            | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                               >> 0x0000001eU))) 
                                                          | (0x00000013U 
                                                             == 
                                                             ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                               << 2U) 
                                                              | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                 >> 0x0000001eU)))) 
                                                         | ((0x00000014U 
                                                             == 
                                                             ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                               << 2U) 
                                                              | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                 >> 0x0000001eU))) 
                                                            | ((0x00000015U 
                                                                == 
                                                                ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                                  << 2U) 
                                                                 | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                    >> 0x0000001eU))) 
                                                               | ((0x0000001bU 
                                                                   == 
                                                                   ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                                     << 2U) 
                                                                    | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                       >> 0x0000001eU))) 
                                                                  | (0x0000001cU 
                                                                     == 
                                                                     ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                                       << 2U) 
                                                                      | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                         >> 0x0000001eU))))))))
                                                      ? 
                                                     ((0x00000010U 
                                                       == 
                                                       ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                         << 2U) 
                                                        | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                           >> 0x0000001eU)))
                                                       ? 
                                                      ((((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                          << 0x0000001eU) 
                                                         | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                            >> 2U)) 
                                                        < 
                                                        ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                          << 0x0000001dU) 
                                                         | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                            >> 3U)))
                                                        ? 1U
                                                        : 0U)
                                                       : 
                                                      ((0x00000011U 
                                                        == 
                                                        ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                          << 2U) 
                                                         | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                            >> 0x0000001eU)))
                                                        ? 
                                                       VL_SHIFTRS_III(32,32,5, 
                                                                      ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                                        << 0x0000001eU) 
                                                                       | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                                          >> 2U)), 
                                                                      (0x0000001fU 
                                                                       & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                                          >> 3U)))
                                                        : 
                                                       ((0x00000012U 
                                                         == 
                                                         ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                           << 2U) 
                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                             >> 0x0000001eU)))
                                                         ? 
                                                        (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                           << 0x0000001eU) 
                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                             >> 2U)) 
                                                         >> 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                             >> 3U)))
                                                         : 
                                                        ((0x00000013U 
                                                          == 
                                                          ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                            << 2U) 
                                                           | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                              >> 0x0000001eU)))
                                                          ? 
                                                         (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                            << 0x0000001eU) 
                                                           | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                              >> 2U)) 
                                                          << 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                              >> 3U)))
                                                          : 
                                                         ((0x00000014U 
                                                           == 
                                                           ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                             << 2U) 
                                                            | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                               >> 0x0000001eU)))
                                                           ? 
                                                          ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                            << 0x0000001dU) 
                                                           | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                              >> 3U))
                                                           : 
                                                          ((0x00000015U 
                                                            == 
                                                            ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                              << 2U) 
                                                             | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                >> 0x0000001eU)))
                                                            ? 
                                                           (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                              << 0x0000001eU) 
                                                             | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                                >> 2U)) 
                                                            + 
                                                            ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                              << 0x0000001dU) 
                                                             | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                                >> 3U)))
                                                            : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15))))))
                                                      : 
                                                     ((0x0000001dU 
                                                       == 
                                                       ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                         << 2U) 
                                                        | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                           >> 0x0000001eU)))
                                                       ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15
                                                       : 
                                                      ((0x0000001eU 
                                                        == 
                                                        ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                          << 2U) 
                                                         | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                            >> 0x0000001eU)))
                                                        ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15
                                                        : 
                                                       ((0x0000001fU 
                                                         == 
                                                         ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                           << 2U) 
                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                             >> 0x0000001eU)))
                                                         ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15
                                                         : 
                                                        ((0x00000020U 
                                                          == 
                                                          ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                            << 2U) 
                                                           | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                              >> 0x0000001eU)))
                                                          ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15
                                                          : 0U)))))))
                                                : 0U);
}

void Vtb_execute_alu___024root___eval_act(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___eval_act\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_execute_alu___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_execute_alu___024root___nba_comb__TOP__0(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___nba_comb__TOP__0\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_execute_alu__DOT__fwrd_valid = (1U 
                                                 & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                    >> 1U));
    vlSelfRef.tb_execute_alu__DOT__dut__DOT____Vcellinp__alu__opcode 
        = ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
            << 2U) | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                      >> 0x0000001eU));
    vlSelfRef.tb_execute_alu__DOT__dut__DOT____Vcellinp__alu__src1_val 
        = ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
            << 0x0000001eU) | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                               >> 2U));
    vlSelfRef.tb_execute_alu__DOT__dut__DOT____Vcellinp__alu__src2_val 
        = ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
            << 0x0000001eU) | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                               >> 2U));
    vlSelfRef.tb_execute_alu__DOT__dut__DOT____Vcellinp__alu__imm_val 
        = ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
            << 0x0000001dU) | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                               >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15 = (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                   << 0x0000001eU) 
                                                  | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                     >> 2U)) 
                                                 + 
                                                 ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                   << 0x0000001eU) 
                                                  | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                     >> 2U)));
}

void Vtb_execute_alu___024root___nba_sequent__TOP__0(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___nba_sequent__TOP__0\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_execute_alu__DOT__rob_exception = 0U;
    if (vlSelfRef.tb_execute_alu__DOT__rst) {
        vlSelfRef.tb_execute_alu__DOT__rf_wr_preg = 0U;
        vlSelfRef.tb_execute_alu__DOT__rf_wr_val = 0U;
        vlSelfRef.tb_execute_alu__DOT__rob_idx = 0U;
        vlSelfRef.tb_execute_alu__DOT__rob_val = 0U;
    } else {
        vlSelfRef.tb_execute_alu__DOT__rf_wr_preg = 
            (0x0000003fU & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                            >> 0x00000013U));
        vlSelfRef.tb_execute_alu__DOT__rf_wr_val = vlSelfRef.tb_execute_alu__DOT__fwrd_val;
        vlSelfRef.tb_execute_alu__DOT__rob_idx = (0x0000000fU 
                                                  & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                     >> 3U));
        vlSelfRef.tb_execute_alu__DOT__rob_val = vlSelfRef.tb_execute_alu__DOT__fwrd_val;
    }
    vlSelfRef.tb_execute_alu__DOT__rf_wr_en = ((1U 
                                                & (~ (IData)(vlSelfRef.tb_execute_alu__DOT__rst))) 
                                               && (1U 
                                                   & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                      >> 1U)));
    vlSelfRef.tb_execute_alu__DOT__rob_valid = ((1U 
                                                 & (~ (IData)(vlSelfRef.tb_execute_alu__DOT__rst))) 
                                                && (1U 
                                                    & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                       >> 1U)));
    vlSelfRef.tb_execute_alu__DOT__rob_br_mispred = 
        ((1U & (~ (IData)(vlSelfRef.tb_execute_alu__DOT__rst))) 
         && (1U & (((0x0000001bU == ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                      << 2U) | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                >> 0x0000001eU)))
                     ? (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                          << 0x0000001eU) | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                             >> 2U)) 
                        == ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                             << 0x0000001eU) | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                >> 2U)))
                     : ((0x0000001cU == ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                          << 2U) | 
                                         (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                          >> 0x0000001eU)))
                         ? (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                              << 0x0000001eU) | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                 >> 2U)) 
                            != ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                 << 0x0000001eU) | 
                                (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                 >> 2U))) : ((0x0000001dU 
                                              == ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                   << 2U) 
                                                  | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                     >> 0x0000001eU)))
                                              ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)
                                              : ((0x0000001eU 
                                                  == 
                                                  ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                    << 2U) 
                                                   | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                      >> 0x0000001eU)))
                                                  ? 
                                                 VL_GTES_III(32, 
                                                             ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                               << 0x0000001eU) 
                                                              | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                                 >> 2U)), 
                                                             ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                               << 0x0000001eU) 
                                                              | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                                 >> 2U)))
                                                  : 
                                                 ((0x0000001fU 
                                                   == 
                                                   ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                       >> 0x0000001eU)))
                                                   ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)
                                                   : 
                                                  ((0x00000020U 
                                                    == 
                                                    ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                      << 2U) 
                                                     | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                        >> 0x0000001eU))) 
                                                   & (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                        << 0x0000001eU) 
                                                       | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                          >> 2U)) 
                                                      >= 
                                                      ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                        << 0x0000001eU) 
                                                       | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                          >> 2U))))))))) 
                   ^ vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U])));
}

void Vtb_execute_alu___024root___nba_comb__TOP__1(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___nba_comb__TOP__1\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = VL_LTS_III(32, 
                                                          ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                            << 0x0000001eU) 
                                                           | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                              >> 2U)), 
                                                          ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                            << 0x0000001eU) 
                                                           | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                              >> 2U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                  << 0x0000001eU) 
                                                 | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                    >> 2U)) 
                                                < (
                                                   (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                    << 0x0000001eU) 
                                                   | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                      >> 2U)));
    vlSelfRef.tb_execute_alu__DOT__fwrd_val = ((2U 
                                                & vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U])
                                                ? (
                                                   (((0U 
                                                      == 
                                                      ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                        << 2U) 
                                                       | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                          >> 0x0000001eU))) 
                                                     | (1U 
                                                        == 
                                                        ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                          << 2U) 
                                                         | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                            >> 0x0000001eU)))) 
                                                    | (((2U 
                                                         == 
                                                         ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                           << 2U) 
                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                             >> 0x0000001eU))) 
                                                        | (3U 
                                                           == 
                                                           ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                             << 2U) 
                                                            | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                               >> 0x0000001eU)))) 
                                                       | ((4U 
                                                           == 
                                                           ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                             << 2U) 
                                                            | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                               >> 0x0000001eU))) 
                                                          | ((5U 
                                                              == 
                                                              ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                                << 2U) 
                                                               | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                  >> 0x0000001eU))) 
                                                             | ((6U 
                                                                 == 
                                                                 ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                                   << 2U) 
                                                                  | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                     >> 0x0000001eU))) 
                                                                | (7U 
                                                                   == 
                                                                   ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                                     << 2U) 
                                                                    | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                       >> 0x0000001eU))))))))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                       << 2U) 
                                                      | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                         >> 0x0000001eU)))
                                                     ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15
                                                     : 
                                                    ((1U 
                                                      == 
                                                      ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                        << 2U) 
                                                       | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                          >> 0x0000001eU)))
                                                      ? 
                                                     (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                        << 0x0000001eU) 
                                                       | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                          >> 2U)) 
                                                      - 
                                                      ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                        << 0x0000001eU) 
                                                       | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                          >> 2U)))
                                                      : 
                                                     ((2U 
                                                       == 
                                                       ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                         << 2U) 
                                                        | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                           >> 0x0000001eU)))
                                                       ? 
                                                      (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                         << 0x0000001eU) 
                                                        | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                           >> 2U)) 
                                                       & ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                           << 0x0000001eU) 
                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                             >> 2U)))
                                                       : 
                                                      ((3U 
                                                        == 
                                                        ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                          << 2U) 
                                                         | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                            >> 0x0000001eU)))
                                                        ? 
                                                       (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                          << 0x0000001eU) 
                                                         | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                            >> 2U)) 
                                                        | ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                            << 0x0000001eU) 
                                                           | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                              >> 2U)))
                                                        : 
                                                       ((4U 
                                                         == 
                                                         ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                           << 2U) 
                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                             >> 0x0000001eU)))
                                                         ? 
                                                        (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                           << 0x0000001eU) 
                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                             >> 2U)) 
                                                         ^ 
                                                         ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                           << 0x0000001eU) 
                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                             >> 2U)))
                                                         : 
                                                        ((5U 
                                                          == 
                                                          ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                            << 2U) 
                                                           | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                              >> 0x0000001eU)))
                                                          ? 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)
                                                           ? 1U
                                                           : 0U)
                                                          : 
                                                         ((6U 
                                                           == 
                                                           ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                             << 2U) 
                                                            | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                               >> 0x0000001eU)))
                                                           ? 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)
                                                            ? 1U
                                                            : 0U)
                                                           : 
                                                          VL_SHIFTRS_III(32,32,5, 
                                                                         ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                                             >> 2U)), 
                                                                         (0x0000001fU 
                                                                          & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                                             >> 2U))))))))))
                                                    : 
                                                   ((((8U 
                                                       == 
                                                       ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                         << 2U) 
                                                        | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                           >> 0x0000001eU))) 
                                                      | (9U 
                                                         == 
                                                         ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                           << 2U) 
                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                             >> 0x0000001eU)))) 
                                                     | (((0x0000000aU 
                                                          == 
                                                          ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                            << 2U) 
                                                           | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                              >> 0x0000001eU))) 
                                                         | (0x0000000bU 
                                                            == 
                                                            ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                              << 2U) 
                                                             | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                >> 0x0000001eU)))) 
                                                        | ((0x0000000cU 
                                                            == 
                                                            ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                              << 2U) 
                                                             | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                >> 0x0000001eU))) 
                                                           | ((0x0000000dU 
                                                               == 
                                                               ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                                 << 2U) 
                                                                | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                   >> 0x0000001eU))) 
                                                              | ((0x0000000eU 
                                                                  == 
                                                                  ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                                    << 2U) 
                                                                   | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                      >> 0x0000001eU))) 
                                                                 | (0x0000000fU 
                                                                    == 
                                                                    ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                                      << 2U) 
                                                                     | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                        >> 0x0000001eU))))))))
                                                     ? 
                                                    ((8U 
                                                      == 
                                                      ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                        << 2U) 
                                                       | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                          >> 0x0000001eU)))
                                                      ? 
                                                     (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                        << 0x0000001eU) 
                                                       | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                          >> 2U)) 
                                                      >> 
                                                      (0x0000001fU 
                                                       & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                          >> 2U)))
                                                      : 
                                                     ((9U 
                                                       == 
                                                       ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                         << 2U) 
                                                        | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                           >> 0x0000001eU)))
                                                       ? 
                                                      (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                         << 0x0000001eU) 
                                                        | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                           >> 2U)) 
                                                       << 
                                                       (0x0000001fU 
                                                        & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                           >> 2U)))
                                                       : 
                                                      ((0x0000000aU 
                                                        == 
                                                        ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                          << 2U) 
                                                         | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                            >> 0x0000001eU)))
                                                        ? 
                                                       VL_MULS_III(32, 
                                                                   ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                                     << 0x0000001eU) 
                                                                    | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                                       >> 2U)), 
                                                                   ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                                     << 0x0000001eU) 
                                                                    | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                                       >> 2U)))
                                                        : 
                                                       ((0x0000000bU 
                                                         == 
                                                         ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                           << 2U) 
                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                             >> 0x0000001eU)))
                                                         ? 
                                                        (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                           << 0x0000001eU) 
                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                             >> 2U)) 
                                                         + 
                                                         ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                           << 0x0000001dU) 
                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                             >> 3U)))
                                                         : 
                                                        ((0x0000000cU 
                                                          == 
                                                          ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                            << 2U) 
                                                           | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                              >> 0x0000001eU)))
                                                          ? 
                                                         (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                            << 0x0000001eU) 
                                                           | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                              >> 2U)) 
                                                          & ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                              << 0x0000001dU) 
                                                             | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                                >> 3U)))
                                                          : 
                                                         ((0x0000000dU 
                                                           == 
                                                           ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                             << 2U) 
                                                            | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                               >> 0x0000001eU)))
                                                           ? 
                                                          (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                             << 0x0000001eU) 
                                                            | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                               >> 2U)) 
                                                           | ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                               << 0x0000001dU) 
                                                              | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                                 >> 3U)))
                                                           : 
                                                          ((0x0000000eU 
                                                            == 
                                                            ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                              << 2U) 
                                                             | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                >> 0x0000001eU)))
                                                            ? 
                                                           (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                              << 0x0000001eU) 
                                                             | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                                >> 2U)) 
                                                            ^ 
                                                            ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                              << 0x0000001dU) 
                                                             | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                                >> 3U)))
                                                            : 
                                                           (VL_LTS_III(32, 
                                                                       ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                                         << 0x0000001eU) 
                                                                        | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                                           >> 2U)), 
                                                                       ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                         << 0x0000001dU) 
                                                                        | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                                           >> 3U)))
                                                             ? 1U
                                                             : 0U))))))))
                                                     : 
                                                    ((((0x00000010U 
                                                        == 
                                                        ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                          << 2U) 
                                                         | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                            >> 0x0000001eU))) 
                                                       | (0x00000011U 
                                                          == 
                                                          ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                            << 2U) 
                                                           | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                              >> 0x0000001eU)))) 
                                                      | (((0x00000012U 
                                                           == 
                                                           ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                             << 2U) 
                                                            | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                               >> 0x0000001eU))) 
                                                          | (0x00000013U 
                                                             == 
                                                             ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                               << 2U) 
                                                              | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                 >> 0x0000001eU)))) 
                                                         | ((0x00000014U 
                                                             == 
                                                             ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                               << 2U) 
                                                              | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                 >> 0x0000001eU))) 
                                                            | ((0x00000015U 
                                                                == 
                                                                ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                                  << 2U) 
                                                                 | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                    >> 0x0000001eU))) 
                                                               | ((0x0000001bU 
                                                                   == 
                                                                   ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                                     << 2U) 
                                                                    | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                       >> 0x0000001eU))) 
                                                                  | (0x0000001cU 
                                                                     == 
                                                                     ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                                       << 2U) 
                                                                      | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                         >> 0x0000001eU))))))))
                                                      ? 
                                                     ((0x00000010U 
                                                       == 
                                                       ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                         << 2U) 
                                                        | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                           >> 0x0000001eU)))
                                                       ? 
                                                      ((((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                          << 0x0000001eU) 
                                                         | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                            >> 2U)) 
                                                        < 
                                                        ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                          << 0x0000001dU) 
                                                         | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                            >> 3U)))
                                                        ? 1U
                                                        : 0U)
                                                       : 
                                                      ((0x00000011U 
                                                        == 
                                                        ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                          << 2U) 
                                                         | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                            >> 0x0000001eU)))
                                                        ? 
                                                       VL_SHIFTRS_III(32,32,5, 
                                                                      ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                                        << 0x0000001eU) 
                                                                       | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                                          >> 2U)), 
                                                                      (0x0000001fU 
                                                                       & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                                          >> 3U)))
                                                        : 
                                                       ((0x00000012U 
                                                         == 
                                                         ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                           << 2U) 
                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                             >> 0x0000001eU)))
                                                         ? 
                                                        (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                           << 0x0000001eU) 
                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                             >> 2U)) 
                                                         >> 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                             >> 3U)))
                                                         : 
                                                        ((0x00000013U 
                                                          == 
                                                          ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                            << 2U) 
                                                           | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                              >> 0x0000001eU)))
                                                          ? 
                                                         (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                            << 0x0000001eU) 
                                                           | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                              >> 2U)) 
                                                          << 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                              >> 3U)))
                                                          : 
                                                         ((0x00000014U 
                                                           == 
                                                           ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                             << 2U) 
                                                            | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                               >> 0x0000001eU)))
                                                           ? 
                                                          ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                            << 0x0000001dU) 
                                                           | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                              >> 3U))
                                                           : 
                                                          ((0x00000015U 
                                                            == 
                                                            ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                              << 2U) 
                                                             | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                                >> 0x0000001eU)))
                                                            ? 
                                                           (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                              << 0x0000001eU) 
                                                             | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                                >> 2U)) 
                                                            + 
                                                            ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                              << 0x0000001dU) 
                                                             | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                                                >> 3U)))
                                                            : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15))))))
                                                      : 
                                                     ((0x0000001dU 
                                                       == 
                                                       ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                         << 2U) 
                                                        | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                           >> 0x0000001eU)))
                                                       ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15
                                                       : 
                                                      ((0x0000001eU 
                                                        == 
                                                        ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                          << 2U) 
                                                         | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                            >> 0x0000001eU)))
                                                        ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15
                                                        : 
                                                       ((0x0000001fU 
                                                         == 
                                                         ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                           << 2U) 
                                                          | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                             >> 0x0000001eU)))
                                                         ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15
                                                         : 
                                                        ((0x00000020U 
                                                          == 
                                                          ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                            << 2U) 
                                                           | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                              >> 0x0000001eU)))
                                                          ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15
                                                          : 0U)))))))
                                                : 0U);
}

void Vtb_execute_alu___024root___eval_nba(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___eval_nba\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_execute_alu___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_execute_alu___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_execute_alu___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vtb_execute_alu___024root___timing_ready(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___timing_ready\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h31008f00__0.ready("@(negedge tb_execute_alu.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h31008eaa__0.ready("@(posedge tb_execute_alu.clk)");
    }
}

void Vtb_execute_alu___024root___timing_resume(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___timing_resume\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h31008f00__0.moveToResumeQueue(
                                                          "@(negedge tb_execute_alu.clk)");
    vlSelfRef.__VtrigSched_h31008eaa__0.moveToResumeQueue(
                                                          "@(posedge tb_execute_alu.clk)");
    vlSelfRef.__VtrigSched_h31008f00__0.resume("@(negedge tb_execute_alu.clk)");
    vlSelfRef.__VtrigSched_h31008eaa__0.resume("@(posedge tb_execute_alu.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_execute_alu___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_execute_alu___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_execute_alu___024root___eval_phase__act(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___eval_phase__act\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_execute_alu___024root___eval_triggers_vec__act(vlSelf);
    Vtb_execute_alu___024root___timing_ready(vlSelf);
    Vtb_execute_alu___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_execute_alu___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_execute_alu___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_execute_alu___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_execute_alu___024root___timing_resume(vlSelf);
        Vtb_execute_alu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_execute_alu___024root___eval_phase__inact(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___eval_phase__inact\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("sim/tb_execute_alu.sv", 5, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_execute_alu___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_execute_alu___024root___eval_phase__nba(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___eval_phase__nba\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_execute_alu___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_execute_alu___024root___eval_nba(vlSelf);
        Vtb_execute_alu___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_execute_alu___024root___eval(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___eval\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_execute_alu___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("sim/tb_execute_alu.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("sim/tb_execute_alu.sv", 5, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_execute_alu___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("sim/tb_execute_alu.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_execute_alu___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_execute_alu___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_execute_alu___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0(Vtb_execute_alu___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root____VbeforeTrig_h31008f00__0\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_execute_alu__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_execute_alu__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.tb_execute_alu__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_execute_alu__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_execute_alu__DOT__clk__0 
        = vlSelfRef.tb_execute_alu__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h31008eaa__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008eaa__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008eaa__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008eaa__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008eaa__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008eaa__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008eaa__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008eaa__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008eaa__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008eaa__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008eaa__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_execute_alu___024root____VbeforeTrig_h31008eaa__0(Vtb_execute_alu___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root____VbeforeTrig_h31008eaa__0\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_execute_alu__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_execute_alu__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.tb_execute_alu__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_execute_alu__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_execute_alu__DOT__clk__0 
        = vlSelfRef.tb_execute_alu__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h31008eaa__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008eaa__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008eaa__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008eaa__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008eaa__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008eaa__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008eaa__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008eaa__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008eaa__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008eaa__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008eaa__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h31008f00__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_execute_alu___024root___eval_debug_assertions(Vtb_execute_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root___eval_debug_assertions\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
