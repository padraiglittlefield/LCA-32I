// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_data_cache__Syms.h"


VL_ATTR_COLD void Vtb_data_cache___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_data_cache___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtb_data_cache___024root__trace_init_sub__TOP__0(Vtb_data_cache___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root__trace_init_sub__TOP__0\n"); );
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("CORE_PKG", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_data_cache___024root__trace_init_sub__TOP__CORE_PKG__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_data_cache", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+12,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"is_repair_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"is_repair_dirty_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"wr_addr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("wr_data_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declArray(c+18,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->declBit(c+22,0,"rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"rd_addr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rd_data_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declArray(c+0,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("rd_tag_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+4,0,"tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+5,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"dirty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+7,0,"wb_evicted_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("wb_evicted_block", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declArray(c+8,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+12,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"is_repair_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"is_repair_dirty_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"wr_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("wr_data_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declArray(c+18,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->declBit(c+22,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"rd_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rd_data_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declArray(c+0,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("rd_tag_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+4,0,"tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+5,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"dirty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+7,0,"wb_evicted_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("wb_evicted_block", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declArray(c+8,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->declBus(c+24,0,"write_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+25,0,"write_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+26,0,"write_block_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("write_tag_block", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+27,0,"tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+28,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"dirty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+30,0,"read_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+31,0,"read_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+32,0,"read_block_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+33,0,"read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_data_cache___024root__trace_init_sub__TOP__CORE_PKG__0(Vtb_data_cache___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root__trace_init_sub__TOP__CORE_PKG__0\n"); );
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+34,0,"DECODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"RENAME_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"NUM_PREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"NUM_AREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"RS_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"NUM_FUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"FRONTEND_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"ROB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"RETIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"FIRE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("FU_TYPE", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+39,0,"[0]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+39,0,"[1]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+39,0,"[2]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+40,0,"[3]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->declBus(c+38,0,"LDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"SDQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"NUM_MSHR_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"CACHE_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"NUM_CACHE_ENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"NUM_IDX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"BLOCK_OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"NUM_TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_data_cache___024root__trace_init_top(Vtb_data_cache___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root__trace_init_top\n"); );
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_data_cache___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_data_cache___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtb_data_cache___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_data_cache___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_data_cache___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtb_data_cache___024root__trace_register(Vtb_data_cache___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root__trace_register\n"); );
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_data_cache___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_data_cache___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_data_cache___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_data_cache___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_data_cache___024root__trace_const_0_sub_0(Vtb_data_cache___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_data_cache___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root__trace_const_0\n"); );
    // Body
    Vtb_data_cache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_data_cache___024root*>(voidSelf);
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_data_cache___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_data_cache___024root__trace_const_0_sub_0(Vtb_data_cache___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root__trace_const_0_sub_0\n"); );
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+12,(vlSelfRef.tb_data_cache__DOT__clk));
    bufp->fullBit(oldp+13,(vlSelfRef.tb_data_cache__DOT__rst));
    bufp->fullBit(oldp+14,(vlSelfRef.tb_data_cache__DOT__wr_en));
    bufp->fullBit(oldp+15,(vlSelfRef.tb_data_cache__DOT__is_repair_i));
    bufp->fullBit(oldp+16,(vlSelfRef.tb_data_cache__DOT__is_repair_dirty_i));
    bufp->fullIData(oldp+17,(vlSelfRef.tb_data_cache__DOT__wr_addr_i),32);
    bufp->fullWData(oldp+18,(vlSelfRef.tb_data_cache__DOT__wr_data_i),128);
    bufp->fullBit(oldp+22,(vlSelfRef.tb_data_cache__DOT__rd_en));
    bufp->fullIData(oldp+23,(vlSelfRef.tb_data_cache__DOT__rd_addr_i),32);
    bufp->fullIData(oldp+24,((vlSelfRef.tb_data_cache__DOT__wr_addr_i 
                              >> 0x0000000aU)),22);
    bufp->fullCData(oldp+25,((0x0000003fU & (vlSelfRef.tb_data_cache__DOT__wr_addr_i 
                                             >> 4U))),6);
    bufp->fullCData(oldp+26,((3U & (vlSelfRef.tb_data_cache__DOT__wr_addr_i 
                                    >> 2U))),2);
    bufp->fullIData(oldp+27,((0x003fffffU & (vlSelfRef.tb_data_cache__DOT__dut__DOT__write_tag_block 
                                             >> 2U))),22);
    bufp->fullBit(oldp+28,((1U & (vlSelfRef.tb_data_cache__DOT__dut__DOT__write_tag_block 
                                  >> 1U))));
    bufp->fullBit(oldp+29,((1U & vlSelfRef.tb_data_cache__DOT__dut__DOT__write_tag_block)));
    bufp->fullIData(oldp+30,((vlSelfRef.tb_data_cache__DOT__rd_addr_i 
                              >> 0x0000000aU)),22);
    bufp->fullCData(oldp+31,((0x0000003fU & (vlSelfRef.tb_data_cache__DOT__rd_addr_i 
                                             >> 4U))),6);
    bufp->fullCData(oldp+32,((3U & (vlSelfRef.tb_data_cache__DOT__rd_addr_i 
                                    >> 2U))),2);
    bufp->fullIData(oldp+33,(vlSelfRef.tb_data_cache__DOT__dut__DOT__read_data),32);
    bufp->fullIData(oldp+34,(2U),32);
    bufp->fullIData(oldp+35,(0x00000040U),32);
    bufp->fullIData(oldp+36,(0x00000020U),32);
    bufp->fullIData(oldp+37,(4U),32);
    bufp->fullIData(oldp+38,(0x00000010U),32);
    bufp->fullCData(oldp+39,(0U),2);
    bufp->fullCData(oldp+40,(1U),2);
    bufp->fullIData(oldp+41,(0x00000080U),32);
    bufp->fullIData(oldp+42,(6U),32);
    bufp->fullIData(oldp+43,(0x00000016U),32);
}

VL_ATTR_COLD void Vtb_data_cache___024root__trace_full_0_sub_0(Vtb_data_cache___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_data_cache___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root__trace_full_0\n"); );
    // Body
    Vtb_data_cache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_data_cache___024root*>(voidSelf);
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_data_cache___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_data_cache___024root__trace_full_0_sub_0(Vtb_data_cache___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_data_cache___024root__trace_full_0_sub_0\n"); );
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
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
    bufp->fullWData(oldp+0,(__Vtemp_2),128);
    bufp->fullIData(oldp+4,((0x003fffffU & (((IData)(vlSelfRef.tb_data_cache__DOT__rd_en)
                                              ? vlSelfRef.tb_data_cache__DOT__dut__DOT__tag_array
                                             [(0x0000003fU 
                                               & (vlSelfRef.tb_data_cache__DOT__rd_addr_i 
                                                  >> 4U))]
                                              : 0U) 
                                            >> 2U))),22);
    bufp->fullBit(oldp+5,((1U & (((IData)(vlSelfRef.tb_data_cache__DOT__rd_en)
                                   ? vlSelfRef.tb_data_cache__DOT__dut__DOT__tag_array
                                  [(0x0000003fU & (vlSelfRef.tb_data_cache__DOT__rd_addr_i 
                                                   >> 4U))]
                                   : 0U) >> 1U))));
    bufp->fullBit(oldp+6,(((IData)(vlSelfRef.tb_data_cache__DOT__rd_en)
                            ? (1U & vlSelfRef.tb_data_cache__DOT__dut__DOT__tag_array
                               [(0x0000003fU & (vlSelfRef.tb_data_cache__DOT__rd_addr_i 
                                                >> 4U))])
                            : 0U)));
    bufp->fullBit(oldp+7,(vlSelfRef.tb_data_cache__DOT__wb_evicted_en));
    bufp->fullWData(oldp+8,(vlSelfRef.tb_data_cache__DOT__wb_evicted_block),128);
}
