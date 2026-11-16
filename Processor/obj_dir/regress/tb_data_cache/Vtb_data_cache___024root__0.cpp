// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_data_cache.h for the primary calling header

#include "Vtb_data_cache__pch.h"

void Vtb_data_cache___024root___eval_triggers_vec__act(Vtb_data_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root___eval_triggers_vec__act\n"); );
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.tb_data_cache__DOT__clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_data_cache__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_data_cache__DOT__clk__0 
        = vlSelfRef.tb_data_cache__DOT__clk;
}

bool Vtb_data_cache___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root___trigger_anySet__act\n"); );
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

void Vtb_data_cache___024root___nba_sequent__TOP__0(Vtb_data_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root___nba_sequent__TOP__0\n"); );
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlySet__tb_data_cache__DOT__dut__DOT__data_array__v0;
    __VdlySet__tb_data_cache__DOT__dut__DOT__data_array__v0 = 0;
    VlWide<4>/*127:0*/ __VdlyVal__tb_data_cache__DOT__dut__DOT__data_array__v64;
    VL_ZERO_W(128, __VdlyVal__tb_data_cache__DOT__dut__DOT__data_array__v64);
    CData/*5:0*/ __VdlyDim0__tb_data_cache__DOT__dut__DOT__data_array__v64;
    __VdlyDim0__tb_data_cache__DOT__dut__DOT__data_array__v64 = 0;
    CData/*0:0*/ __VdlySet__tb_data_cache__DOT__dut__DOT__data_array__v64;
    __VdlySet__tb_data_cache__DOT__dut__DOT__data_array__v64 = 0;
    CData/*0:0*/ __VdlySet__tb_data_cache__DOT__dut__DOT__tag_array__v0;
    __VdlySet__tb_data_cache__DOT__dut__DOT__tag_array__v0 = 0;
    CData/*5:0*/ __VdlyDim0__tb_data_cache__DOT__dut__DOT__tag_array__v64;
    __VdlyDim0__tb_data_cache__DOT__dut__DOT__tag_array__v64 = 0;
    CData/*0:0*/ __VdlySet__tb_data_cache__DOT__dut__DOT__tag_array__v64;
    __VdlySet__tb_data_cache__DOT__dut__DOT__tag_array__v64 = 0;
    IData/*21:0*/ __VdlyVal__tb_data_cache__DOT__dut__DOT__tag_array__v65;
    __VdlyVal__tb_data_cache__DOT__dut__DOT__tag_array__v65 = 0;
    CData/*5:0*/ __VdlyDim0__tb_data_cache__DOT__dut__DOT__tag_array__v65;
    __VdlyDim0__tb_data_cache__DOT__dut__DOT__tag_array__v65 = 0;
    CData/*0:0*/ __VdlyVal__tb_data_cache__DOT__dut__DOT__tag_array__v66;
    __VdlyVal__tb_data_cache__DOT__dut__DOT__tag_array__v66 = 0;
    CData/*5:0*/ __VdlyDim0__tb_data_cache__DOT__dut__DOT__tag_array__v66;
    __VdlyDim0__tb_data_cache__DOT__dut__DOT__tag_array__v66 = 0;
    CData/*5:0*/ __VdlyDim0__tb_data_cache__DOT__dut__DOT__tag_array__v67;
    __VdlyDim0__tb_data_cache__DOT__dut__DOT__tag_array__v67 = 0;
    CData/*0:0*/ __VdlySet__tb_data_cache__DOT__dut__DOT__tag_array__v67;
    __VdlySet__tb_data_cache__DOT__dut__DOT__tag_array__v67 = 0;
    IData/*31:0*/ __Vilp1;
    // Body
    __VdlySet__tb_data_cache__DOT__dut__DOT__data_array__v0 = 0U;
    __VdlySet__tb_data_cache__DOT__dut__DOT__data_array__v64 = 0U;
    __VdlySet__tb_data_cache__DOT__dut__DOT__tag_array__v0 = 0U;
    __VdlySet__tb_data_cache__DOT__dut__DOT__tag_array__v64 = 0U;
    __VdlySet__tb_data_cache__DOT__dut__DOT__tag_array__v67 = 0U;
    if (vlSelfRef.tb_data_cache__DOT__rst) {
        __VdlySet__tb_data_cache__DOT__dut__DOT__data_array__v0 = 1U;
        __VdlySet__tb_data_cache__DOT__dut__DOT__tag_array__v0 = 1U;
    } else if (vlSelfRef.tb_data_cache__DOT__wr_en) {
        __VdlyVal__tb_data_cache__DOT__dut__DOT__data_array__v64[0U] 
            = vlSelfRef.tb_data_cache__DOT__wr_data_i[0U];
        __VdlyVal__tb_data_cache__DOT__dut__DOT__data_array__v64[1U] 
            = vlSelfRef.tb_data_cache__DOT__wr_data_i[1U];
        __VdlyVal__tb_data_cache__DOT__dut__DOT__data_array__v64[2U] 
            = vlSelfRef.tb_data_cache__DOT__wr_data_i[2U];
        __VdlyVal__tb_data_cache__DOT__dut__DOT__data_array__v64[3U] 
            = vlSelfRef.tb_data_cache__DOT__wr_data_i[3U];
        __VdlyDim0__tb_data_cache__DOT__dut__DOT__data_array__v64 
            = (0x0000003fU & (vlSelfRef.tb_data_cache__DOT__wr_addr_i 
                              >> 4U));
        __VdlySet__tb_data_cache__DOT__dut__DOT__data_array__v64 = 1U;
        if (vlSelfRef.tb_data_cache__DOT__is_repair_i) {
            __VdlyDim0__tb_data_cache__DOT__dut__DOT__tag_array__v64 
                = (0x0000003fU & (vlSelfRef.tb_data_cache__DOT__wr_addr_i 
                                  >> 4U));
            __VdlySet__tb_data_cache__DOT__dut__DOT__tag_array__v64 = 1U;
            __VdlyVal__tb_data_cache__DOT__dut__DOT__tag_array__v65 
                = (vlSelfRef.tb_data_cache__DOT__wr_addr_i 
                   >> 0x0000000aU);
            __VdlyDim0__tb_data_cache__DOT__dut__DOT__tag_array__v65 
                = (0x0000003fU & (vlSelfRef.tb_data_cache__DOT__wr_addr_i 
                                  >> 4U));
            __VdlyVal__tb_data_cache__DOT__dut__DOT__tag_array__v66 
                = vlSelfRef.tb_data_cache__DOT__is_repair_dirty_i;
            __VdlyDim0__tb_data_cache__DOT__dut__DOT__tag_array__v66 
                = (0x0000003fU & (vlSelfRef.tb_data_cache__DOT__wr_addr_i 
                                  >> 4U));
        } else {
            __VdlyDim0__tb_data_cache__DOT__dut__DOT__tag_array__v67 
                = (0x0000003fU & (vlSelfRef.tb_data_cache__DOT__wr_addr_i 
                                  >> 4U));
            __VdlySet__tb_data_cache__DOT__dut__DOT__tag_array__v67 = 1U;
        }
    }
    if (__VdlySet__tb_data_cache__DOT__dut__DOT__data_array__v0) {
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[0U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[0U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[0U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[0U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[1U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[1U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[1U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[1U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[2U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[2U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[2U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[2U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[3U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[3U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[3U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[3U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[4U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[4U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[4U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[4U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[5U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[5U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[5U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[5U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[6U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[6U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[6U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[6U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[7U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[7U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[7U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[7U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[8U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[8U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[8U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[8U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[9U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[9U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[9U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[9U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[10U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[10U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[10U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[10U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[11U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[11U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[11U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[11U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[12U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[12U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[12U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[12U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[13U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[13U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[13U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[13U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[14U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[14U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[14U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[14U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[15U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[15U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[15U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[15U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[16U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[16U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[16U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[16U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[17U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[17U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[17U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[17U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[18U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[18U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[18U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[18U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[19U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[19U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[19U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[19U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[20U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[20U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[20U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[20U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[21U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[21U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[21U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[21U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[22U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[22U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[22U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[22U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[23U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[23U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[23U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[23U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[24U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[24U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[24U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[24U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[25U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[25U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[25U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[25U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[26U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[26U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[26U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[26U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[27U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[27U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[27U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[27U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[28U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[28U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[28U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[28U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[29U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[29U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[29U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[29U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[30U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[30U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[30U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[30U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[31U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[31U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[31U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[31U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[32U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[32U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[32U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[32U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[33U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[33U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[33U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[33U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[34U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[34U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[34U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[34U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[35U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[35U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[35U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[35U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[36U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[36U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[36U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[36U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[37U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[37U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[37U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[37U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[38U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[38U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[38U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[38U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[39U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[39U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[39U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[39U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[40U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[40U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[40U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[40U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[41U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[41U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[41U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[41U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[42U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[42U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[42U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[42U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[43U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[43U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[43U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[43U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[44U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[44U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[44U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[44U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[45U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[45U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[45U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[45U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[46U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[46U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[46U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[46U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[47U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[47U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[47U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[47U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[48U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[48U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[48U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[48U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[49U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[49U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[49U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[49U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[50U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[50U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[50U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[50U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[51U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[51U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[51U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[51U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[52U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[52U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[52U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[52U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[53U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[53U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[53U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[53U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[54U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[54U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[54U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[54U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[55U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[55U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[55U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[55U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[56U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[56U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[56U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[56U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[57U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[57U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[57U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[57U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[58U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[58U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[58U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[58U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[59U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[59U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[59U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[59U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[60U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[60U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[60U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[60U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[61U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[61U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[61U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[61U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[62U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[62U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[62U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[62U][3U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[63U][0U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[63U][1U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[63U][2U] = 0U;
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[63U][3U] = 0U;
    }
    if (__VdlySet__tb_data_cache__DOT__dut__DOT__data_array__v64) {
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[__VdlyDim0__tb_data_cache__DOT__dut__DOT__data_array__v64][0U] 
            = __VdlyVal__tb_data_cache__DOT__dut__DOT__data_array__v64[0U];
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[__VdlyDim0__tb_data_cache__DOT__dut__DOT__data_array__v64][1U] 
            = __VdlyVal__tb_data_cache__DOT__dut__DOT__data_array__v64[1U];
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[__VdlyDim0__tb_data_cache__DOT__dut__DOT__data_array__v64][2U] 
            = __VdlyVal__tb_data_cache__DOT__dut__DOT__data_array__v64[2U];
        vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array[__VdlyDim0__tb_data_cache__DOT__dut__DOT__data_array__v64][3U] 
            = __VdlyVal__tb_data_cache__DOT__dut__DOT__data_array__v64[3U];
    }
    if (__VdlySet__tb_data_cache__DOT__dut__DOT__tag_array__v0) {
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x0000003fU)) {
            vlSelfRef.tb_data_cache__DOT__dut__DOT__tag_array[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
    if (__VdlySet__tb_data_cache__DOT__dut__DOT__tag_array__v64) {
        vlSelfRef.tb_data_cache__DOT__dut__DOT__tag_array[__VdlyDim0__tb_data_cache__DOT__dut__DOT__tag_array__v64] 
            = (2U | vlSelfRef.tb_data_cache__DOT__dut__DOT__tag_array
               [__VdlyDim0__tb_data_cache__DOT__dut__DOT__tag_array__v64]);
        vlSelfRef.tb_data_cache__DOT__dut__DOT__tag_array[__VdlyDim0__tb_data_cache__DOT__dut__DOT__tag_array__v65] 
            = ((3U & vlSelfRef.tb_data_cache__DOT__dut__DOT__tag_array
                [__VdlyDim0__tb_data_cache__DOT__dut__DOT__tag_array__v65]) 
               | (__VdlyVal__tb_data_cache__DOT__dut__DOT__tag_array__v65 
                  << 2U));
        vlSelfRef.tb_data_cache__DOT__dut__DOT__tag_array[__VdlyDim0__tb_data_cache__DOT__dut__DOT__tag_array__v66] 
            = ((0x00fffffeU & vlSelfRef.tb_data_cache__DOT__dut__DOT__tag_array
                [__VdlyDim0__tb_data_cache__DOT__dut__DOT__tag_array__v66]) 
               | (IData)(__VdlyVal__tb_data_cache__DOT__dut__DOT__tag_array__v66));
    }
    if (__VdlySet__tb_data_cache__DOT__dut__DOT__tag_array__v67) {
        vlSelfRef.tb_data_cache__DOT__dut__DOT__tag_array[__VdlyDim0__tb_data_cache__DOT__dut__DOT__tag_array__v67] 
            = (1U | vlSelfRef.tb_data_cache__DOT__dut__DOT__tag_array
               [__VdlyDim0__tb_data_cache__DOT__dut__DOT__tag_array__v67]);
    }
    vlSelfRef.tb_data_cache__DOT__wb_evicted_en = 0U;
    vlSelfRef.tb_data_cache__DOT__wb_evicted_block[0U] = 0U;
    vlSelfRef.tb_data_cache__DOT__wb_evicted_block[1U] = 0U;
    vlSelfRef.tb_data_cache__DOT__wb_evicted_block[2U] = 0U;
    vlSelfRef.tb_data_cache__DOT__wb_evicted_block[3U] = 0U;
    if (((IData)(vlSelfRef.tb_data_cache__DOT__wr_en) 
         & (IData)(vlSelfRef.tb_data_cache__DOT__is_repair_i))) {
        if ((1U & ((vlSelfRef.tb_data_cache__DOT__dut__DOT__tag_array
                    [(0x0000003fU & (vlSelfRef.tb_data_cache__DOT__wr_addr_i 
                                     >> 4U))] >> 1U) 
                   & vlSelfRef.tb_data_cache__DOT__dut__DOT__tag_array
                   [(0x0000003fU & (vlSelfRef.tb_data_cache__DOT__wr_addr_i 
                                    >> 4U))]))) {
            vlSelfRef.tb_data_cache__DOT__wb_evicted_en = 1U;
            vlSelfRef.tb_data_cache__DOT__wb_evicted_block[0U] 
                = vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array
                [(0x0000003fU & (vlSelfRef.tb_data_cache__DOT__wr_addr_i 
                                 >> 4U))][0U];
            vlSelfRef.tb_data_cache__DOT__wb_evicted_block[1U] 
                = vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array
                [(0x0000003fU & (vlSelfRef.tb_data_cache__DOT__wr_addr_i 
                                 >> 4U))][1U];
            vlSelfRef.tb_data_cache__DOT__wb_evicted_block[2U] 
                = vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array
                [(0x0000003fU & (vlSelfRef.tb_data_cache__DOT__wr_addr_i 
                                 >> 4U))][2U];
            vlSelfRef.tb_data_cache__DOT__wb_evicted_block[3U] 
                = vlSelfRef.tb_data_cache__DOT__dut__DOT__data_array
                [(0x0000003fU & (vlSelfRef.tb_data_cache__DOT__wr_addr_i 
                                 >> 4U))][3U];
        }
    }
}

void Vtb_data_cache___024root___eval_nba(Vtb_data_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root___eval_nba\n"); );
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_data_cache___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vtb_data_cache___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_data_cache___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_data_cache___024root___eval_phase__act(Vtb_data_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root___eval_phase__act\n"); );
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_data_cache___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_data_cache___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_data_cache___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtb_data_cache___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_data_cache___024root___eval_phase__nba(Vtb_data_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root___eval_phase__nba\n"); );
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_data_cache___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_data_cache___024root___eval_nba(vlSelf);
        Vtb_data_cache___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_data_cache___024root___eval(Vtb_data_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root___eval\n"); );
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_data_cache___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("sim/tb_data_cache.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_data_cache___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("sim/tb_data_cache.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtb_data_cache___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_data_cache___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_data_cache___024root___eval_debug_assertions(Vtb_data_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root___eval_debug_assertions\n"); );
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
