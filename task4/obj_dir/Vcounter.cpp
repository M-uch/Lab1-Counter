// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcounter.h"
#include "Vcounter__Syms.h"

//============================================================
// Constructors

Vcounter::Vcounter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcounter__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , count{vlSymsp->TOP.count}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcounter::Vcounter(const char* _vcname__)
    : Vcounter(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcounter::~Vcounter() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vcounter___024root___eval_initial(Vcounter___024root* vlSelf);
void Vcounter___024root___eval_settle(Vcounter___024root* vlSelf);
void Vcounter___024root___eval(Vcounter___024root* vlSelf);
#ifdef VL_DEBUG
void Vcounter___024root___eval_debug_assertions(Vcounter___024root* vlSelf);
#endif  // VL_DEBUG
void Vcounter___024root___final(Vcounter___024root* vlSelf);

static void _eval_initial_loop(Vcounter__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vcounter___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vcounter___024root___eval_settle(&(vlSymsp->TOP));
        Vcounter___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vcounter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcounter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcounter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vcounter___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vcounter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vcounter::final() {
    Vcounter___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcounter::hierName() const { return vlSymsp->name(); }
const char* Vcounter::modelName() const { return "Vcounter"; }
unsigned Vcounter::threads() const { return 1; }
