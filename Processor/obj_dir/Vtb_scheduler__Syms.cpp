// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_scheduler__pch.h"
#include "Vtb_scheduler.h"
#include "Vtb_scheduler___024root.h"
#include "Vtb_scheduler___024unit.h"
#include "Vtb_scheduler_execute_scheduler_if.h"
#include "Vtb_scheduler_dispatch_scheduler_if.h"

// FUNCTIONS
Vtb_scheduler__Syms::~Vtb_scheduler__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vtb_scheduler__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtb_scheduler__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtb_scheduler__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vtb_scheduler__Syms::Vtb_scheduler__Syms(VerilatedContext* contextp, const char* namep, Vtb_scheduler* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__tb_scheduler__DOT__disp_if{this, Verilated::catName(namep, "tb_scheduler.disp_if")}
    , TOP__tb_scheduler__DOT__exec_if{this, Verilated::catName(namep, "tb_scheduler.exec_if")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__tb_scheduler__DOT__disp_if = &TOP__tb_scheduler__DOT__disp_if;
    TOP.__PVT__tb_scheduler__DOT__exec_if = &TOP__tb_scheduler__DOT__exec_if;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_scheduler__DOT__disp_if.__Vconfigure(true);
    TOP__tb_scheduler__DOT__exec_if.__Vconfigure(true);
}
