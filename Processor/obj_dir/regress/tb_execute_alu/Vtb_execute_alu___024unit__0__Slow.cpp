// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_execute_alu.h for the primary calling header

#include "Vtb_execute_alu__pch.h"

VL_ATTR_COLD void Vtb_execute_alu___024unit___ctor_var_reset(Vtb_execute_alu___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_execute_alu___024unit___ctor_var_reset\n"); );
    Vtb_execute_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__Venumtab_enum_name15.atDefault() = ""s;
    vlSelf->__Venumtab_enum_name15.at(0) = "ADD"s;
    vlSelf->__Venumtab_enum_name15.at(1) = "SUB"s;
    vlSelf->__Venumtab_enum_name15.at(2) = "AND"s;
    vlSelf->__Venumtab_enum_name15.at(3) = "OR"s;
    vlSelf->__Venumtab_enum_name15.at(4) = "XOR"s;
    vlSelf->__Venumtab_enum_name15.at(5) = "SLT"s;
    vlSelf->__Venumtab_enum_name15.at(6) = "SLTU"s;
    vlSelf->__Venumtab_enum_name15.at(7) = "SRA"s;
    vlSelf->__Venumtab_enum_name15.at(8) = "SRL"s;
    vlSelf->__Venumtab_enum_name15.at(9) = "SLL"s;
    vlSelf->__Venumtab_enum_name15.at(10) = "MUL"s;
    vlSelf->__Venumtab_enum_name15.at(11) = "ADDI"s;
    vlSelf->__Venumtab_enum_name15.at(12) = "ANDI"s;
    vlSelf->__Venumtab_enum_name15.at(13) = "ORI"s;
    vlSelf->__Venumtab_enum_name15.at(14) = "XORI"s;
    vlSelf->__Venumtab_enum_name15.at(15) = "SLTI"s;
    vlSelf->__Venumtab_enum_name15.at(16) = "SLTIU"s;
    vlSelf->__Venumtab_enum_name15.at(17) = "SRAI"s;
    vlSelf->__Venumtab_enum_name15.at(18) = "SRLI"s;
    vlSelf->__Venumtab_enum_name15.at(19) = "SLLI"s;
    vlSelf->__Venumtab_enum_name15.at(20) = "LUI"s;
    vlSelf->__Venumtab_enum_name15.at(21) = "AUIPC"s;
    vlSelf->__Venumtab_enum_name15.at(22) = "LW"s;
    vlSelf->__Venumtab_enum_name15.at(23) = "SW"s;
    vlSelf->__Venumtab_enum_name15.at(24) = "JAL"s;
    vlSelf->__Venumtab_enum_name15.at(25) = "JR"s;
    vlSelf->__Venumtab_enum_name15.at(26) = "JALR"s;
    vlSelf->__Venumtab_enum_name15.at(27) = "BEQ"s;
    vlSelf->__Venumtab_enum_name15.at(28) = "BNE"s;
    vlSelf->__Venumtab_enum_name15.at(29) = "BLT"s;
    vlSelf->__Venumtab_enum_name15.at(30) = "BGE"s;
    vlSelf->__Venumtab_enum_name15.at(31) = "BLTU"s;
    vlSelf->__Venumtab_enum_name15.at(32) = "BGEU"s;
    vlSelf->__Venumtab_enum_name15.at(33) = "INVALID"s;
}
