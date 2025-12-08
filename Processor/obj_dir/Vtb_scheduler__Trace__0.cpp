// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_scheduler__Syms.h"


void Vtb_scheduler___024root__trace_chg_0_sub_0(Vtb_scheduler___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_scheduler___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_chg_0\n"); );
    // Init
    Vtb_scheduler___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_scheduler___024root*>(voidSelf);
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_scheduler___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_scheduler___024root__trace_chg_0_sub_0(Vtb_scheduler___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->tb_scheduler__DOT__dut__DOT__reqs),32);
        bufp->chgCData(oldp+1,(vlSelf->tb_scheduler__DOT__dut__DOT__grant),5);
        bufp->chgBit(oldp+2,(vlSelf->tb_scheduler__DOT__dut__DOT__grant_valid));
        bufp->chgCData(oldp+3,((3U & (IData)(vlSelf->tb_scheduler__DOT__dut__DOT____Vcellout__wakeup__free_entry_out))),2);
        bufp->chgWData(oldp+4,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                               [0U]),83);
        bufp->chgWData(oldp+7,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                               [1U]),83);
        bufp->chgWData(oldp+10,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [2U]),83);
        bufp->chgWData(oldp+13,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [3U]),83);
        bufp->chgWData(oldp+16,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [4U]),83);
        bufp->chgWData(oldp+19,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [5U]),83);
        bufp->chgWData(oldp+22,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [6U]),83);
        bufp->chgWData(oldp+25,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [7U]),83);
        bufp->chgWData(oldp+28,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [8U]),83);
        bufp->chgWData(oldp+31,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [9U]),83);
        bufp->chgWData(oldp+34,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [0xaU]),83);
        bufp->chgWData(oldp+37,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [0xbU]),83);
        bufp->chgWData(oldp+40,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [0xcU]),83);
        bufp->chgWData(oldp+43,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [0xdU]),83);
        bufp->chgWData(oldp+46,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [0xeU]),83);
        bufp->chgWData(oldp+49,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [0xfU]),83);
        bufp->chgWData(oldp+52,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [0x10U]),83);
        bufp->chgWData(oldp+55,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [0x11U]),83);
        bufp->chgWData(oldp+58,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [0x12U]),83);
        bufp->chgWData(oldp+61,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [0x13U]),83);
        bufp->chgWData(oldp+64,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [0x14U]),83);
        bufp->chgWData(oldp+67,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [0x15U]),83);
        bufp->chgWData(oldp+70,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [0x16U]),83);
        bufp->chgWData(oldp+73,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [0x17U]),83);
        bufp->chgWData(oldp+76,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [0x18U]),83);
        bufp->chgWData(oldp+79,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [0x19U]),83);
        bufp->chgWData(oldp+82,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [0x1aU]),83);
        bufp->chgWData(oldp+85,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [0x1bU]),83);
        bufp->chgWData(oldp+88,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [0x1cU]),83);
        bufp->chgWData(oldp+91,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [0x1dU]),83);
        bufp->chgWData(oldp+94,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [0x1eU]),83);
        bufp->chgWData(oldp+97,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                [0x1fU]),83);
        bufp->chgWData(oldp+100,(vlSelf->tb_scheduler__DOT__dut__DOT__payload_ram
                                 [vlSelf->tb_scheduler__DOT__dut__DOT__grant]),83);
        bufp->chgIData(oldp+103,((0xffffffffU >> (IData)(vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_priority))),32);
        bufp->chgCData(oldp+104,(vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_priority),5);
        bufp->chgIData(oldp+105,(vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__masked_req),32);
        bufp->chgIData(oldp+106,(vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__curr_req),32);
        bufp->chgBit(oldp+107,(vlSelf->tb_scheduler__DOT__dut__DOT__select__DOT__request_arbiter__DOT__flag));
        bufp->chgIData(oldp+108,(vlSelf->tb_scheduler__DOT__dut__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+109,(vlSelf->tb_scheduler__DOT__dut__DOT____Vcellout__wakeup__free_entry_out),5);
        bufp->chgBit(oldp+110,(vlSelf->tb_scheduler__DOT__dut__DOT____Vcellout__wakeup__full_out));
        bufp->chgIData(oldp+111,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_valid),32);
        bufp->chgIData(oldp+112,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__entry_granted),32);
        bufp->chgCData(oldp+113,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__free_entry),5);
        bufp->chgBit(oldp+114,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__full));
        bufp->chgWData(oldp+115,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[0]),128);
        bufp->chgWData(oldp+119,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[1]),128);
        bufp->chgWData(oldp+123,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[2]),128);
        bufp->chgWData(oldp+127,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[3]),128);
        bufp->chgWData(oldp+131,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[4]),128);
        bufp->chgWData(oldp+135,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[5]),128);
        bufp->chgWData(oldp+139,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[6]),128);
        bufp->chgWData(oldp+143,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[7]),128);
        bufp->chgWData(oldp+147,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[8]),128);
        bufp->chgWData(oldp+151,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[9]),128);
        bufp->chgWData(oldp+155,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[10]),128);
        bufp->chgWData(oldp+159,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[11]),128);
        bufp->chgWData(oldp+163,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[12]),128);
        bufp->chgWData(oldp+167,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[13]),128);
        bufp->chgWData(oldp+171,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[14]),128);
        bufp->chgWData(oldp+175,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[15]),128);
        bufp->chgWData(oldp+179,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[16]),128);
        bufp->chgWData(oldp+183,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[17]),128);
        bufp->chgWData(oldp+187,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[18]),128);
        bufp->chgWData(oldp+191,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[19]),128);
        bufp->chgWData(oldp+195,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[20]),128);
        bufp->chgWData(oldp+199,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[21]),128);
        bufp->chgWData(oldp+203,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[22]),128);
        bufp->chgWData(oldp+207,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[23]),128);
        bufp->chgWData(oldp+211,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[24]),128);
        bufp->chgWData(oldp+215,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[25]),128);
        bufp->chgWData(oldp+219,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[26]),128);
        bufp->chgWData(oldp+223,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[27]),128);
        bufp->chgWData(oldp+227,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[28]),128);
        bufp->chgWData(oldp+231,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[29]),128);
        bufp->chgWData(oldp+235,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[30]),128);
        bufp->chgWData(oldp+239,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__dependency_matrix_row[31]),128);
        bufp->chgBit(oldp+243,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__flag));
        bufp->chgIData(oldp+244,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+245,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
        bufp->chgIData(oldp+246,(vlSelf->tb_scheduler__DOT__dut__DOT__wakeup__DOT__unnamedblk3__DOT__i),32);
    }
    bufp->chgBit(oldp+247,(vlSelf->tb_scheduler__DOT__clk));
    bufp->chgBit(oldp+248,(vlSelf->tb_scheduler__DOT__rst));
    bufp->chgIData(oldp+249,(vlSelf->tb_scheduler__DOT__cycle_count),32);
}

void Vtb_scheduler___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scheduler___024root__trace_cleanup\n"); );
    // Init
    Vtb_scheduler___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_scheduler___024root*>(voidSelf);
    Vtb_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
