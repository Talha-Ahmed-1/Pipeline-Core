// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


//======================

void VTop::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTop* t=(VTop*)userthis;
    VTop__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VTop::traceChgThis(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTop::traceChgThis__2(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->Top__DOT__AluControl_io_out),5);
	vcdp->chgBus  (c+2,(vlTOPp->Top__DOT__Alu_io_in1),32);
	vcdp->chgBus  (c+3,(vlTOPp->Top__DOT__Alu_io_in2),32);
	vcdp->chgBit  (c+4,(vlTOPp->Top__DOT__Alu_io_Branch));
	vcdp->chgBus  (c+5,((IData)(vlTOPp->Top__DOT__Alu__DOT___GEN_19)),32);
	vcdp->chgBus  (c+6,((0x7fU & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)),7);
	vcdp->chgBit  (c+7,(((0x33U != (0x7fU & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
			     & ((~ (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Load)) 
				& (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Store)))));
	vcdp->chgBit  (c+8,(vlTOPp->Top__DOT__Control__DOT__c2_io_Branch));
	vcdp->chgBit  (c+9,(((0x33U != (0x7fU & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
			     & (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Load))));
	vcdp->chgBit  (c+10,(vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite));
	vcdp->chgBus  (c+11,(vlTOPp->Top__DOT__Control__DOT__c2_io_AluOp),3);
	vcdp->chgBus  (c+12,(vlTOPp->Top__DOT__Control__DOT__c2_io_OpA),2);
	vcdp->chgBit  (c+13,(vlTOPp->Top__DOT__Control__DOT__c2_io_OpB));
	vcdp->chgBus  (c+14,(vlTOPp->Top__DOT__Control__DOT__c2_io_ExtSel),2);
	vcdp->chgBus  (c+15,(vlTOPp->Top__DOT__Control__DOT__c2_io_NextPc),2);
	vcdp->chgBus  (c+16,(vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data),32);
	vcdp->chgBus  (c+17,(((((0x80000000U & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)
				 ? 0xfffffU : 0U) << 0xcU) 
			      | ((0xfe0U & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
					    >> 0x14U)) 
				 | (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
					     >> 7U))))),32);
	vcdp->chgBus  (c+18,((vlTOPp->Top__DOT__ImmediateGeneration__DOT___T_41 
			      + vlTOPp->Top__DOT__Pc__DOT__reg__024)),32);
	vcdp->chgBus  (c+19,(((IData)(vlTOPp->Top__DOT__ImmediateGeneration__DOT___T_58) 
			      + vlTOPp->Top__DOT__Pc__DOT__reg__024)),32);
	vcdp->chgBus  (c+20,((IData)((VL_ULL(0xfffffffffff) 
				      & ((QData)((IData)(
							 ((((0x80000000U 
							     & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)
							     ? 0xfffU
							     : 0U) 
							   << 0x14U) 
							  | (0xfffffU 
							     & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								>> 0xcU))))) 
					 << 0xcU)))),32);
	vcdp->chgBus  (c+21,(vlTOPp->Top__DOT__ImmediateGeneration__DOT___T_77),32);
	vcdp->chgBus  (c+22,((7U & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 0xcU))),3);
	vcdp->chgBit  (c+23,((1U & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 0x1eU))));
	vcdp->chgBus  (c+24,((0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				       >> 0xfU))),5);
	vcdp->chgBus  (c+25,((0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				       >> 0x14U))),5);
	vcdp->chgBus  (c+26,((0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				       >> 7U))),5);
	vcdp->chgBus  (c+27,(vlTOPp->Top__DOT__Register_io_WriteData),32);
	vcdp->chgBus  (c+28,(vlTOPp->Top__DOT__Register_io_rs1),32);
	vcdp->chgBus  (c+29,(vlTOPp->Top__DOT__Register_io_rs2),32);
	vcdp->chgBus  (c+30,((((IData)(vlTOPp->Top__DOT___T_33) 
			       & (~ (IData)(vlTOPp->Top__DOT__Alu_io_Branch)))
			       ? ((IData)(4U) + vlTOPp->Top__DOT__Pc__DOT__reg__024)
			       : (((IData)(vlTOPp->Top__DOT___T_41) 
				   & (~ (IData)(vlTOPp->Top__DOT__Alu_io_Branch)))
				   ? ((IData)(4U) + vlTOPp->Top__DOT__Pc__DOT__reg__024)
				   : (((IData)(vlTOPp->Top__DOT___T_33) 
				       & (IData)(vlTOPp->Top__DOT__Alu_io_Branch))
				       ? ((IData)(4U) 
					  + vlTOPp->Top__DOT__Pc__DOT__reg__024)
				       : (((IData)(vlTOPp->Top__DOT___T_41) 
					   & (IData)(vlTOPp->Top__DOT__Alu_io_Branch))
					   ? (vlTOPp->Top__DOT__ImmediateGeneration__DOT___T_41 
					      + vlTOPp->Top__DOT__Pc__DOT__reg__024)
					   : ((0U == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_NextPc))
					       ? ((IData)(4U) 
						  + vlTOPp->Top__DOT__Pc__DOT__reg__024)
					       : ((2U 
						   == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_NextPc))
						   ? 
						  ((IData)(vlTOPp->Top__DOT__ImmediateGeneration__DOT___T_58) 
						   + vlTOPp->Top__DOT__Pc__DOT__reg__024)
						   : 
						  (0xfffffffeU 
						   & (vlTOPp->Top__DOT__Register_io_rs1 
						      + vlTOPp->Top__DOT__ImmediateGeneration__DOT___T_77))))))))),32);
	vcdp->chgBus  (c+31,((0xfffffffeU & (vlTOPp->Top__DOT__Register_io_rs1 
					     + vlTOPp->Top__DOT__ImmediateGeneration__DOT___T_77))),32);
	vcdp->chgBus  (c+32,((0xffU & (IData)((vlTOPp->Top__DOT__Alu__DOT___GEN_19 
					       >> 2U)))),8);
	vcdp->chgBus  (c+33,(vlTOPp->Top__DOT__DataMemory__DOT__mem___05FT_22_data),32);
	vcdp->chgBit  (c+34,((0x33U == (0x7fU & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data))));
	vcdp->chgBit  (c+35,(vlTOPp->Top__DOT__Control__DOT__c1_io_Load));
	vcdp->chgBit  (c+36,(vlTOPp->Top__DOT__Control__DOT__c1_io_Store));
	vcdp->chgBit  (c+37,(vlTOPp->Top__DOT__Control__DOT__c1_io_Branch));
	vcdp->chgBit  (c+38,(vlTOPp->Top__DOT__Control__DOT__c1_io_I));
	vcdp->chgBit  (c+39,(vlTOPp->Top__DOT__Control__DOT__c1_io_Jal));
	vcdp->chgBit  (c+40,(vlTOPp->Top__DOT__Control__DOT__c1_io_Jalr));
	vcdp->chgBit  (c+41,(vlTOPp->Top__DOT__Control__DOT__c1_io_Lui));
	vcdp->chgBus  (c+42,(((0xfe0U & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
					 >> 0x14U)) 
			      | (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
					  >> 7U)))),12);
	vcdp->chgBus  (c+43,(((0x1000U & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
					  >> 0x13U)) 
			      | ((0x800U & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
					    << 4U)) 
				 | ((0x7e0U & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
					       >> 0x14U)) 
				    | (0x1eU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						>> 7U)))))),13);
	vcdp->chgBus  (c+44,(((0x100000U & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
					    >> 0xbU)) 
			      | ((0xff000U & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data) 
				 | ((0x800U & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
					       >> 9U)) 
				    | (0x7feU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						 >> 0x14U)))))),21);
	vcdp->chgBus  (c+45,((vlTOPp->Top__DOT__Register_io_rs1 
			      + vlTOPp->Top__DOT__ImmediateGeneration__DOT___T_77)),32);
	vcdp->chgBus  (c+46,((0xffU & (IData)((vlTOPp->Top__DOT__Alu__DOT___GEN_19 
					       >> 2U)))),10);
    }
}

void VTop::traceChgThis__3(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+47,(vlTOPp->Top__DOT__Pc__DOT__reg__024),32);
	vcdp->chgBus  (c+48,((0x3ffU & (vlTOPp->Top__DOT__Pc__DOT__reg__024 
					>> 2U))),10);
	vcdp->chgBus  (c+49,(((IData)(4U) + vlTOPp->Top__DOT__Pc__DOT__reg__024)),32);
	vcdp->chgBus  (c+50,(vlTOPp->Top__DOT__Register__DOT__register_0),32);
	vcdp->chgBus  (c+51,(vlTOPp->Top__DOT__Register__DOT__register_1),32);
	vcdp->chgBus  (c+52,(vlTOPp->Top__DOT__Register__DOT__register_2),32);
	vcdp->chgBus  (c+53,(vlTOPp->Top__DOT__Register__DOT__register_3),32);
	vcdp->chgBus  (c+54,(vlTOPp->Top__DOT__Register__DOT__register_4),32);
	vcdp->chgBus  (c+55,(vlTOPp->Top__DOT__Register__DOT__register_5),32);
	vcdp->chgBus  (c+56,(vlTOPp->Top__DOT__Register__DOT__register_6),32);
	vcdp->chgBus  (c+57,(vlTOPp->Top__DOT__Register__DOT__register_7),32);
	vcdp->chgBus  (c+58,(vlTOPp->Top__DOT__Register__DOT__register_8),32);
	vcdp->chgBus  (c+59,(vlTOPp->Top__DOT__Register__DOT__register_9),32);
	vcdp->chgBus  (c+60,(vlTOPp->Top__DOT__Register__DOT__register_10),32);
	vcdp->chgBus  (c+61,(vlTOPp->Top__DOT__Register__DOT__register_11),32);
	vcdp->chgBus  (c+62,(vlTOPp->Top__DOT__Register__DOT__register_12),32);
	vcdp->chgBus  (c+63,(vlTOPp->Top__DOT__Register__DOT__register_13),32);
	vcdp->chgBus  (c+64,(vlTOPp->Top__DOT__Register__DOT__register_14),32);
	vcdp->chgBus  (c+65,(vlTOPp->Top__DOT__Register__DOT__register_15),32);
	vcdp->chgBus  (c+66,(vlTOPp->Top__DOT__Register__DOT__register_16),32);
	vcdp->chgBus  (c+67,(vlTOPp->Top__DOT__Register__DOT__register_17),32);
	vcdp->chgBus  (c+68,(vlTOPp->Top__DOT__Register__DOT__register_18),32);
	vcdp->chgBus  (c+69,(vlTOPp->Top__DOT__Register__DOT__register_19),32);
	vcdp->chgBus  (c+70,(vlTOPp->Top__DOT__Register__DOT__register_20),32);
	vcdp->chgBus  (c+71,(vlTOPp->Top__DOT__Register__DOT__register_21),32);
	vcdp->chgBus  (c+72,(vlTOPp->Top__DOT__Register__DOT__register_22),32);
	vcdp->chgBus  (c+73,(vlTOPp->Top__DOT__Register__DOT__register_23),32);
	vcdp->chgBus  (c+74,(vlTOPp->Top__DOT__Register__DOT__register_24),32);
	vcdp->chgBus  (c+75,(vlTOPp->Top__DOT__Register__DOT__register_25),32);
	vcdp->chgBus  (c+76,(vlTOPp->Top__DOT__Register__DOT__register_26),32);
	vcdp->chgBus  (c+77,(vlTOPp->Top__DOT__Register__DOT__register_27),32);
	vcdp->chgBus  (c+78,(vlTOPp->Top__DOT__Register__DOT__register_28),32);
	vcdp->chgBus  (c+79,(vlTOPp->Top__DOT__Register__DOT__register_29),32);
	vcdp->chgBus  (c+80,(vlTOPp->Top__DOT__Register__DOT__register_30),32);
	vcdp->chgBus  (c+81,(vlTOPp->Top__DOT__Register__DOT__register_31),32);
    }
}

void VTop::traceChgThis__4(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+82,(vlTOPp->clock));
	vcdp->chgBit  (c+83,(vlTOPp->reset));
	vcdp->chgBus  (c+84,(vlTOPp->io_Reg_Out),32);
    }
}
