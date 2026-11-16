// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_data_cache__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vtb_data_cache::Vtb_data_cache(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_data_cache__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtb_data_cache::Vtb_data_cache(const char* _vcname__)
    : Vtb_data_cache(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_data_cache::~Vtb_data_cache() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_data_cache___024root___eval_debug_assertions(Vtb_data_cache___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_data_cache___024root___eval_static(Vtb_data_cache___024root* vlSelf);
void Vtb_data_cache___024root___eval_initial(Vtb_data_cache___024root* vlSelf);
void Vtb_data_cache___024root___eval_settle(Vtb_data_cache___024root* vlSelf);
void Vtb_data_cache___024root___eval(Vtb_data_cache___024root* vlSelf);

void Vtb_data_cache::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_data_cache::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_data_cache___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_data_cache___024root___eval_static(&(vlSymsp->TOP));
        Vtb_data_cache___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_data_cache___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_data_cache___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_data_cache::eventsPending() { return false; }

uint64_t Vtb_data_cache::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_data_cache::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_data_cache___024root___eval_final(Vtb_data_cache___024root* vlSelf);

VL_ATTR_COLD void Vtb_data_cache::final() {
    Vtb_data_cache___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_data_cache::hierName() const { return vlSymsp->name(); }
const char* Vtb_data_cache::modelName() const { return "Vtb_data_cache"; }
unsigned Vtb_data_cache::threads() const { return 1; }
void Vtb_data_cache::prepareClone() const { contextp()->prepareClone(); }
void Vtb_data_cache::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_data_cache::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_data_cache___024root__trace_decl_types(VerilatedFst* tracep);

void Vtb_data_cache___024root__trace_init_top(Vtb_data_cache___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_data_cache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_data_cache___024root*>(voidSelf);
    Vtb_data_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_data_cache___024root__trace_decl_types(tracep);
    Vtb_data_cache___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_data_cache___024root__trace_register(Vtb_data_cache___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtb_data_cache::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_data_cache::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 44);
    Vtb_data_cache___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
