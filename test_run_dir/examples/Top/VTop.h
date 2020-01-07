// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTop_H_
#define _VTop_H_

#include "verilated.h"
class VTop__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VTop) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    //char	__VpadToAlign2[2];
    VL_OUT(io_Reg_Out,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(Top__DOT__Alu_io_Branch,0,0);
    VL_SIG8(Top__DOT__AluControl_io_out,4,0);
    VL_SIG8(Top__DOT___T_33,0,0);
    VL_SIG8(Top__DOT___T_41,0,0);
    VL_SIG8(Top__DOT__Alu__DOT___GEN_11,1,0);
    VL_SIG8(Top__DOT__Control__DOT__c1_io_Load,0,0);
    VL_SIG8(Top__DOT__Control__DOT__c1_io_Store,0,0);
    VL_SIG8(Top__DOT__Control__DOT__c1_io_Branch,0,0);
    VL_SIG8(Top__DOT__Control__DOT__c1_io_I,0,0);
    VL_SIG8(Top__DOT__Control__DOT__c1_io_Jal,0,0);
    VL_SIG8(Top__DOT__Control__DOT__c1_io_Jalr,0,0);
    VL_SIG8(Top__DOT__Control__DOT__c1_io_Lui,0,0);
    VL_SIG8(Top__DOT__Control__DOT__c2_io_Branch,0,0);
    VL_SIG8(Top__DOT__Control__DOT__c2_io_RegWrite,0,0);
    VL_SIG8(Top__DOT__Control__DOT__c2_io_AluOp,2,0);
    VL_SIG8(Top__DOT__Control__DOT__c2_io_OpA,1,0);
    VL_SIG8(Top__DOT__Control__DOT__c2_io_OpB,0,0);
    VL_SIG8(Top__DOT__Control__DOT__c2_io_ExtSel,1,0);
    VL_SIG8(Top__DOT__Control__DOT__c2_io_NextPc,1,0);
    VL_SIG8(Top__DOT__Control__DOT__c2__DOT___GEN_14,0,0);
    VL_SIG(Top__DOT__Alu_io_in1,31,0);
    VL_SIG(Top__DOT__Alu_io_in2,31,0);
    VL_SIG(Top__DOT__Register_io_WriteData,31,0);
    VL_SIG(Top__DOT__Register_io_rs1,31,0);
    VL_SIG(Top__DOT__Register_io_rs2,31,0);
    VL_SIG(Top__DOT__Pc_io_input,31,0);
    VL_SIG(Top__DOT__Alu__DOT___GEN_17,31,0);
    VL_SIG(Top__DOT__ImmediateGeneration__DOT___T_41,31,0);
    VL_SIG(Top__DOT__ImmediateGeneration__DOT___T_77,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_0,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_1,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_2,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_3,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_4,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_5,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_6,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_7,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_8,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_9,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_10,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_11,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_12,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_13,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_14,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_15,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_16,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_17,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_18,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_19,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_20,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_21,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_22,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_23,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_24,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_25,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_26,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_27,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_28,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_29,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_30,31,0);
    VL_SIG(Top__DOT__Register__DOT__register_31,31,0);
    VL_SIG(Top__DOT__Memory__DOT__mem___05FT_11_data,31,0);
    VL_SIG(Top__DOT__Pc__DOT__reg__024,31,0);
    VL_SIG(Top__DOT__DataMemory__DOT__mem___05FT_22_data,31,0);
    VL_SIG64(Top__DOT__Alu__DOT___GEN_19,62,0);
    VL_SIG64(Top__DOT__ImmediateGeneration__DOT___T_58,32,0);
    VL_SIG(Top__DOT__Memory__DOT__mem[1024],31,0);
    VL_SIG(Top__DOT__DataMemory__DOT__mem[1024],31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    //char	__VpadToAlign8421[3];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VTop__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VTop& operator= (const VTop&);	///< Copying not allowed
    VTop(const VTop&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VTop(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VTop();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VTop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VTop__Syms* symsp, bool first);
  private:
    static QData	_change_request(VTop__Syms* __restrict vlSymsp);
    void	_configure_coverage(VTop__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VTop__Syms* __restrict vlSymsp);
    static void	_eval_initial(VTop__Syms* __restrict vlSymsp);
    static void	_eval_settle(VTop__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(VTop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__10(VTop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__12(VTop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(VTop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(VTop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__6(VTop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(VTop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__11(VTop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__13(VTop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__3(VTop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__5(VTop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__7(VTop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__9(VTop__Syms* __restrict vlSymsp);
    static void	traceChgThis(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
