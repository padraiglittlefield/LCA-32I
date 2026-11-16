// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_execute_alu__Syms.h"


void Vtb_execute_alu___024root__trace_chg_0_sub_0(Vtb_execute_alu___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtb_execute_alu___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root__trace_chg_0\n"); );
    // Body
    Vtb_execute_alu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_execute_alu___024root*>(voidSelf);
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_execute_alu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_execute_alu___024root__trace_chg_0_sub_0(Vtb_execute_alu___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root__trace_chg_0_sub_0\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[2U]) 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_execute_alu__DOT__pass_count),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_execute_alu__DOT__fail_count),32);
        bufp->chgIData(oldp+2,(((vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[5U] 
                                 << 2U) | (vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
                                           >> 0x0000001eU))),32);
        bufp->chgCData(oldp+3,((0x0000001fU & (vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
                                               >> 0x00000019U))),5);
        bufp->chgCData(oldp+4,((0x0000003fU & (vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
                                               >> 0x00000013U))),6);
        bufp->chgCData(oldp+5,((0x0000003fU & (vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
                                               >> 0x0000000dU))),6);
        bufp->chgCData(oldp+6,((0x0000003fU & (vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
                                               >> 7U))),6);
        bufp->chgCData(oldp+7,((0x0000000fU & (vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
                                               >> 3U))),4);
        bufp->chgIData(oldp+8,(((vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[4U] 
                                 << 0x0000001dU) | 
                                (vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
                                 >> 3U))),32);
        bufp->chgBit(oldp+9,((1U & (vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
                                    >> 2U))));
        bufp->chgIData(oldp+10,(((vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[3U] 
                                  << 0x0000001eU) | 
                                 (vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U] 
                                  >> 2U))),32);
        bufp->chgIData(oldp+11,(((vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[2U] 
                                  << 0x0000001eU) | 
                                 (vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U] 
                                  >> 2U))),32);
        bufp->chgIData(oldp+12,(((vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[1U] 
                                  << 0x0000001eU) | 
                                 (vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U] 
                                  >> 2U))),32);
        bufp->chgBit(oldp+13,((1U & (vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+14,((1U & vlSelfRef.tb_execute_alu__DOT__send_instruction__Vstatic__unnamedblk1__DOT__new_exec_pkt[0U])));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgBit(oldp+15,(vlSelfRef.tb_execute_alu__DOT__rst));
        bufp->chgBit(oldp+16,(vlSelfRef.tb_execute_alu__DOT__rr_fire_valid));
        bufp->chgIData(oldp+17,(((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                  << 2U) | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                            >> 0x0000001eU))),32);
        bufp->chgCData(oldp+18,((0x0000001fU & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                >> 0x00000019U))),5);
        bufp->chgCData(oldp+19,((0x0000003fU & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                >> 0x00000013U))),6);
        bufp->chgCData(oldp+20,((0x0000003fU & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                >> 0x0000000dU))),6);
        bufp->chgCData(oldp+21,((0x0000003fU & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                >> 7U))),6);
        bufp->chgCData(oldp+22,((0x0000000fU & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                >> 3U))),4);
        bufp->chgIData(oldp+23,(((vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                  << 0x0000001dU) | 
                                 (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                  >> 3U))),32);
        bufp->chgBit(oldp+24,((1U & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                     >> 2U))));
        bufp->chgIData(oldp+25,(((vlSelfRef.tb_execute_alu__DOT__rr_pkt[3U] 
                                  << 0x0000001eU) | 
                                 (vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                  >> 2U))),32);
        bufp->chgIData(oldp+26,(((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                  << 0x0000001eU) | 
                                 (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                  >> 2U))),32);
        bufp->chgIData(oldp+27,(((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                  << 0x0000001eU) | 
                                 (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                  >> 2U))),32);
        bufp->chgBit(oldp+28,((1U & (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+29,((1U & vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U])));
        bufp->chgIData(oldp+30,(((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                  << 2U) | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                            >> 0x0000001eU))),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+31,(vlSelfRef.tb_execute_alu__DOT__rf_wr_en));
        bufp->chgCData(oldp+32,(vlSelfRef.tb_execute_alu__DOT__rf_wr_preg),6);
        bufp->chgIData(oldp+33,(vlSelfRef.tb_execute_alu__DOT__rf_wr_val),32);
        bufp->chgBit(oldp+34,(vlSelfRef.tb_execute_alu__DOT__rob_valid));
        bufp->chgCData(oldp+35,(vlSelfRef.tb_execute_alu__DOT__rob_idx),4);
        bufp->chgIData(oldp+36,(vlSelfRef.tb_execute_alu__DOT__rob_val),32);
        bufp->chgBit(oldp+37,(vlSelfRef.tb_execute_alu__DOT__rob_br_mispred));
        bufp->chgBit(oldp+38,(vlSelfRef.tb_execute_alu__DOT__rob_exception));
    }
    bufp->chgBit(oldp+39,(vlSelfRef.tb_execute_alu__DOT__clk));
    bufp->chgIData(oldp+40,(vlSelfRef.tb_execute_alu__DOT__cycle_count),32);
    bufp->chgIData(oldp+41,(vlSelfRef.tb_execute_alu__DOT__fwrd_val),32);
    bufp->chgBit(oldp+42,(((0x0000001bU == ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                             << 2U) 
                                            | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                               >> 0x0000001eU)))
                            ? (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                 << 0x0000001eU) | 
                                (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                 >> 2U)) == ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                              << 0x0000001eU) 
                                             | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                >> 2U)))
                            : ((0x0000001cU == ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                 << 2U) 
                                                | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                   >> 0x0000001eU)))
                                ? (((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                     << 0x0000001eU) 
                                    | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                       >> 2U)) != (
                                                   (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                    << 0x0000001eU) 
                                                   | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                      >> 2U)))
                                : ((0x0000001dU == 
                                    ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                      << 2U) | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                >> 0x0000001eU)))
                                    ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)
                                    : ((0x0000001eU 
                                        == ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                             << 2U) 
                                            | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                               >> 0x0000001eU)))
                                        ? VL_GTES_III(32, 
                                                      ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[2U] 
                                                        << 0x0000001eU) 
                                                       | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                          >> 2U)), 
                                                      ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[1U] 
                                                        << 0x0000001eU) 
                                                       | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[0U] 
                                                          >> 2U)))
                                        : ((0x0000001fU 
                                            == ((vlSelfRef.tb_execute_alu__DOT__rr_pkt[5U] 
                                                 << 2U) 
                                                | (vlSelfRef.tb_execute_alu__DOT__rr_pkt[4U] 
                                                   >> 0x0000001eU)))
                                            ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)
                                            : ((0x00000020U 
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
                                                      >> 2U)))))))))));
}

void Vtb_execute_alu___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_alu___024root__trace_cleanup\n"); );
    // Body
    Vtb_execute_alu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_execute_alu___024root*>(voidSelf);
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
