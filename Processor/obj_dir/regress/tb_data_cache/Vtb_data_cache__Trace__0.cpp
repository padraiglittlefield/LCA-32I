// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_data_cache__Syms.h"


void Vtb_data_cache___024root__trace_chg_0_sub_0(Vtb_data_cache___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtb_data_cache___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root__trace_chg_0\n"); );
    // Body
    Vtb_data_cache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_data_cache___024root*>(voidSelf);
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_data_cache___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_data_cache___024root__trace_chg_0_sub_0(Vtb_data_cache___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root__trace_chg_0_sub_0\n"); );
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        if (vlSelfRef.tb_data_cache__DOT__rd_en) {
            __Vtemp_2[0U] = vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array
                [(0x0000003fU & (vlSelfRef.tb_data_cache__DOT__rd_addr_i 
                                 >> 4U))][0U];
            __Vtemp_2[1U] = vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array
                [(0x0000003fU & (vlSelfRef.tb_data_cache__DOT__rd_addr_i 
                                 >> 4U))][1U];
            __Vtemp_2[2U] = vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array
                [(0x0000003fU & (vlSelfRef.tb_data_cache__DOT__rd_addr_i 
                                 >> 4U))][2U];
            __Vtemp_2[3U] = vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array
                [(0x0000003fU & (vlSelfRef.tb_data_cache__DOT__rd_addr_i 
                                 >> 4U))][3U];
        } else {
            __Vtemp_2[0U] = 0U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
            __Vtemp_2[3U] = 0U;
        }
        bufp->chgWData(oldp+0,(__Vtemp_2),128);
        bufp->chgIData(oldp+4,((0x003fffffU & (((IData)(vlSelfRef.tb_data_cache__DOT__rd_en)
                                                 ? vlSelfRef.tb_data_cache__DOT__dut__DOT__tag_array
                                                [(0x0000003fU 
                                                  & (vlSelfRef.tb_data_cache__DOT__rd_addr_i 
                                                     >> 4U))]
                                                 : 0U) 
                                               >> 2U))),22);
        bufp->chgBit(oldp+5,((1U & (((IData)(vlSelfRef.tb_data_cache__DOT__rd_en)
                                      ? vlSelfRef.tb_data_cache__DOT__dut__DOT__tag_array
                                     [(0x0000003fU 
                                       & (vlSelfRef.tb_data_cache__DOT__rd_addr_i 
                                          >> 4U))] : 0U) 
                                    >> 1U))));
        bufp->chgBit(oldp+6,(((IData)(vlSelfRef.tb_data_cache__DOT__rd_en)
                               ? (1U & vlSelfRef.tb_data_cache__DOT__dut__DOT__tag_array
                                  [(0x0000003fU & (vlSelfRef.tb_data_cache__DOT__rd_addr_i 
                                                   >> 4U))])
                               : 0U)));
        bufp->chgBit(oldp+7,(vlSelfRef.tb_data_cache__DOT__wb_evicted_en));
        bufp->chgWData(oldp+8,(vlSelfRef.tb_data_cache__DOT__wb_evicted_block),128);
    }
}

void Vtb_data_cache___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root__trace_cleanup\n"); );
    // Body
    Vtb_data_cache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_data_cache___024root*>(voidSelf);
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
