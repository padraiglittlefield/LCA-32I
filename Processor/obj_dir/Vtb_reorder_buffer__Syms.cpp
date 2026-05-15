// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_reorder_buffer__pch.h"
#include "Vtb_reorder_buffer.h"
#include "Vtb_reorder_buffer___024root.h"
#include "Vtb_reorder_buffer___024unit.h"
#include "Vtb_reorder_buffer_reorder_buffer_flush_unit_if.h"
#include "Vtb_reorder_buffer_dispatch_reorder_buffer_if.h"
#include "Vtb_reorder_buffer_execute_reorder_buffer_if.h"

// FUNCTIONS
Vtb_reorder_buffer__Syms::~Vtb_reorder_buffer__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vtb_reorder_buffer__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtb_reorder_buffer__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtb_reorder_buffer__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vtb_reorder_buffer__Syms::Vtb_reorder_buffer__Syms(VerilatedContext* contextp, const char* namep, Vtb_reorder_buffer* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__tb_reorder_buffer__DOT__disp_if__BRA__0__KET__{this, Verilated::catName(namep, "tb_reorder_buffer.disp_if[0]")}
    , TOP__tb_reorder_buffer__DOT__disp_if__BRA__1__KET__{this, Verilated::catName(namep, "tb_reorder_buffer.disp_if[1]")}
    , TOP__tb_reorder_buffer__DOT__exec_if__BRA__0__KET__{this, Verilated::catName(namep, "tb_reorder_buffer.exec_if[0]")}
    , TOP__tb_reorder_buffer__DOT__exec_if__BRA__1__KET__{this, Verilated::catName(namep, "tb_reorder_buffer.exec_if[1]")}
    , TOP__tb_reorder_buffer__DOT__exec_if__BRA__2__KET__{this, Verilated::catName(namep, "tb_reorder_buffer.exec_if[2]")}
    , TOP__tb_reorder_buffer__DOT__flush_if{this, Verilated::catName(namep, "tb_reorder_buffer.flush_if")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__tb_reorder_buffer__DOT__disp_if__BRA__0__KET__ = &TOP__tb_reorder_buffer__DOT__disp_if__BRA__0__KET__;
    TOP.__PVT__tb_reorder_buffer__DOT__disp_if__BRA__1__KET__ = &TOP__tb_reorder_buffer__DOT__disp_if__BRA__1__KET__;
    TOP.__PVT__tb_reorder_buffer__DOT__exec_if__BRA__0__KET__ = &TOP__tb_reorder_buffer__DOT__exec_if__BRA__0__KET__;
    TOP.__PVT__tb_reorder_buffer__DOT__exec_if__BRA__1__KET__ = &TOP__tb_reorder_buffer__DOT__exec_if__BRA__1__KET__;
    TOP.__PVT__tb_reorder_buffer__DOT__exec_if__BRA__2__KET__ = &TOP__tb_reorder_buffer__DOT__exec_if__BRA__2__KET__;
    TOP.__PVT__tb_reorder_buffer__DOT__flush_if = &TOP__tb_reorder_buffer__DOT__flush_if;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_reorder_buffer__DOT__disp_if__BRA__0__KET__.__Vconfigure(true);
    TOP__tb_reorder_buffer__DOT__disp_if__BRA__1__KET__.__Vconfigure(false);
    TOP__tb_reorder_buffer__DOT__exec_if__BRA__0__KET__.__Vconfigure(true);
    TOP__tb_reorder_buffer__DOT__exec_if__BRA__1__KET__.__Vconfigure(false);
    TOP__tb_reorder_buffer__DOT__exec_if__BRA__2__KET__.__Vconfigure(false);
    TOP__tb_reorder_buffer__DOT__flush_if.__Vconfigure(true);
}
