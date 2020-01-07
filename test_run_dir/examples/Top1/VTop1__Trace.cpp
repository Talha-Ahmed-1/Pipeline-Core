// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop1__Syms.h"


//======================

void VTop1::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTop1* t=(VTop1*)userthis;
    VTop1__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VTop1::traceChgThis(VTop1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VTop1::traceChgThis__2(VTop1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->Top1__DOT__AluControl_io_out),5);
	vcdp->chgBus  (c+2,(vlTOPp->Top1__DOT__Alu_io_in1),32);
	vcdp->chgBus  (c+3,(vlTOPp->Top1__DOT__Alu_io_in2),32);
	vcdp->chgBit  (c+4,(vlTOPp->Top1__DOT__Alu_io_Branch));
	vcdp->chgBus  (c+5,((IData)(vlTOPp->Top1__DOT__Alu__DOT___GEN_19)),32);
	vcdp->chgBit  (c+6,(((0x33U != (0x7fU & vlTOPp->Top1__DOT__IF_ID__DOT__instreg)) 
			     & ((~ (IData)(vlTOPp->Top1__DOT__Control__DOT__c1_io_Load)) 
				& (IData)(vlTOPp->Top1__DOT__Control__DOT__c1_io_Store)))));
	vcdp->chgBit  (c+7,(vlTOPp->Top1__DOT__Control__DOT__c2_io_Branch));
	vcdp->chgBit  (c+8,(((0x33U != (0x7fU & vlTOPp->Top1__DOT__IF_ID__DOT__instreg)) 
			     & (IData)(vlTOPp->Top1__DOT__Control__DOT__c1_io_Load))));
	vcdp->chgBit  (c+9,(vlTOPp->Top1__DOT__Control__DOT__c2_io_RegWrite));
	vcdp->chgBus  (c+10,(vlTOPp->Top1__DOT__Control__DOT__c2_io_AluOp),3);
	vcdp->chgBus  (c+11,(vlTOPp->Top1__DOT__Control__DOT__c2_io_OpA),2);
	vcdp->chgBit  (c+12,(vlTOPp->Top1__DOT__Control__DOT__c2_io_OpB));
	vcdp->chgBus  (c+13,(vlTOPp->Top1__DOT__Control__DOT__c2_io_ExtSel),2);
	vcdp->chgBus  (c+14,(vlTOPp->Top1__DOT__Control__DOT__c2_io_NextPc),2);
	vcdp->chgBus  (c+15,((vlTOPp->Top1__DOT__ImmediateGeneration__DOT___T_41 
			      + (IData)(vlTOPp->Top1__DOT__IF_ID__DOT__pcreg))),32);
	vcdp->chgBus  (c+16,(((IData)(vlTOPp->Top1__DOT__ImmediateGeneration__DOT___T_58) 
			      + (IData)((QData)((IData)(vlTOPp->Top1__DOT__IF_ID__DOT__pcreg))))),32);
	vcdp->chgBus  (c+17,(vlTOPp->Top1__DOT__ImmediateGeneration__DOT___T_77),32);
	vcdp->chgBus  (c+18,(vlTOPp->Top1__DOT__Register_io_WriteData),32);
	vcdp->chgBus  (c+19,(vlTOPp->Top1__DOT__Register_io_rs1),32);
	vcdp->chgBus  (c+20,(vlTOPp->Top1__DOT__Register_io_rs2),32);
	vcdp->chgBus  (c+21,(vlTOPp->Top1__DOT__Memory__DOT__mem___05FT_11_data),32);
	vcdp->chgBus  (c+22,((((IData)(vlTOPp->Top1__DOT___T_33) 
			       & (~ (IData)(vlTOPp->Top1__DOT__Alu_io_Branch)))
			       ? (IData)(vlTOPp->Top1__DOT__IF_ID__DOT__pc4reg)
			       : (((IData)(vlTOPp->Top1__DOT___T_41) 
				   & (~ (IData)(vlTOPp->Top1__DOT__Alu_io_Branch)))
				   ? (IData)(vlTOPp->Top1__DOT__IF_ID__DOT__pc4reg)
				   : (((IData)(vlTOPp->Top1__DOT___T_33) 
				       & (IData)(vlTOPp->Top1__DOT__Alu_io_Branch))
				       ? (IData)(vlTOPp->Top1__DOT__IF_ID__DOT__pc4reg)
				       : (((IData)(vlTOPp->Top1__DOT___T_41) 
					   & (IData)(vlTOPp->Top1__DOT__Alu_io_Branch))
					   ? (vlTOPp->Top1__DOT__ImmediateGeneration__DOT___T_41 
					      + (IData)(vlTOPp->Top1__DOT__IF_ID__DOT__pcreg))
					   : ((0U == (IData)(vlTOPp->Top1__DOT__Control__DOT__c2_io_NextPc))
					       ? (IData)(vlTOPp->Top1__DOT__IF_ID__DOT__pc4reg)
					       : ((2U 
						   == (IData)(vlTOPp->Top1__DOT__Control__DOT__c2_io_NextPc))
						   ? 
						  ((IData)(vlTOPp->Top1__DOT__ImmediateGeneration__DOT___T_58) 
						   + (IData)((QData)((IData)(vlTOPp->Top1__DOT__IF_ID__DOT__pcreg))))
						   : 
						  (0xfffffffeU 
						   & (vlTOPp->Top1__DOT__Register_io_rs1 
						      + vlTOPp->Top1__DOT__ImmediateGeneration__DOT___T_77))))))))),32);
	vcdp->chgBus  (c+23,((0xfffffffeU & (vlTOPp->Top1__DOT__Register_io_rs1 
					     + vlTOPp->Top1__DOT__ImmediateGeneration__DOT___T_77))),32);
	vcdp->chgBus  (c+24,((0xffU & (IData)((vlTOPp->Top1__DOT__Alu__DOT___GEN_19 
					       >> 2U)))),8);
	vcdp->chgBus  (c+25,(vlTOPp->Top1__DOT__DataMemory__DOT__mem___05FT_22_data),32);
	vcdp->chgBit  (c+26,(vlTOPp->Top1__DOT__Control__DOT__c1_io_Load));
	vcdp->chgBit  (c+27,(vlTOPp->Top1__DOT__Control__DOT__c1_io_Store));
	vcdp->chgBit  (c+28,(vlTOPp->Top1__DOT__Control__DOT__c1_io_Branch));
	vcdp->chgBit  (c+29,(vlTOPp->Top1__DOT__Control__DOT__c1_io_I));
	vcdp->chgBit  (c+30,(vlTOPp->Top1__DOT__Control__DOT__c1_io_Jal));
	vcdp->chgBit  (c+31,(vlTOPp->Top1__DOT__Control__DOT__c1_io_Jalr));
	vcdp->chgBit  (c+32,(vlTOPp->Top1__DOT__Control__DOT__c1_io_Lui));
	vcdp->chgBus  (c+33,((vlTOPp->Top1__DOT__Register_io_rs1 
			      + vlTOPp->Top1__DOT__ImmediateGeneration__DOT___T_77)),32);
	vcdp->chgBus  (c+34,((0xffU & (IData)((vlTOPp->Top1__DOT__Alu__DOT___GEN_19 
					       >> 2U)))),10);
    }
}

void VTop1::traceChgThis__3(VTop1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+35,((0x7fU & vlTOPp->Top1__DOT__IF_ID__DOT__instreg)),7);
	vcdp->chgBus  (c+36,(vlTOPp->Top1__DOT__IF_ID__DOT__instreg),32);
	vcdp->chgBus  (c+37,(vlTOPp->Top1__DOT__IF_ID__DOT__pcreg),32);
	vcdp->chgBus  (c+38,(((((0x80000000U & vlTOPp->Top1__DOT__IF_ID__DOT__instreg)
				 ? 0xfffffU : 0U) << 0xcU) 
			      | ((0xfe0U & (vlTOPp->Top1__DOT__IF_ID__DOT__instreg 
					    >> 0x14U)) 
				 | (0x1fU & (vlTOPp->Top1__DOT__IF_ID__DOT__instreg 
					     >> 7U))))),32);
	vcdp->chgBus  (c+39,((IData)((VL_ULL(0xfffffffffff) 
				      & ((QData)((IData)(
							 ((((0x80000000U 
							     & vlTOPp->Top1__DOT__IF_ID__DOT__instreg)
							     ? 0xfffU
							     : 0U) 
							   << 0x14U) 
							  | (0xfffffU 
							     & (vlTOPp->Top1__DOT__IF_ID__DOT__instreg 
								>> 0xcU))))) 
					 << 0xcU)))),32);
	vcdp->chgBus  (c+40,((7U & (vlTOPp->Top1__DOT__IF_ID__DOT__instreg 
				    >> 0xcU))),3);
	vcdp->chgBit  (c+41,((1U & (vlTOPp->Top1__DOT__IF_ID__DOT__instreg 
				    >> 0x1eU))));
	vcdp->chgBus  (c+42,((0x1fU & (vlTOPp->Top1__DOT__IF_ID__DOT__instreg 
				       >> 0xfU))),5);
	vcdp->chgBus  (c+43,((0x1fU & (vlTOPp->Top1__DOT__IF_ID__DOT__instreg 
				       >> 0x14U))),5);
	vcdp->chgBus  (c+44,((0x1fU & (vlTOPp->Top1__DOT__IF_ID__DOT__instreg 
				       >> 7U))),5);
	vcdp->chgBus  (c+45,((0x3ffU & (vlTOPp->Top1__DOT__Pc__DOT__reg__024 
					>> 2U))),10);
	vcdp->chgBus  (c+46,(((IData)(4U) + vlTOPp->Top1__DOT__Pc__DOT__reg__024)),32);
	vcdp->chgBus  (c+47,(vlTOPp->Top1__DOT__Pc__DOT__reg__024),32);
	vcdp->chgBus  (c+48,((0x3ffU & vlTOPp->Top1__DOT__Pc__DOT__reg__024)),10);
	vcdp->chgBus  (c+49,(vlTOPp->Top1__DOT__IF_ID__DOT__pcreg),10);
	vcdp->chgBus  (c+50,((0x3ffU & ((IData)(4U) 
					+ vlTOPp->Top1__DOT__Pc__DOT__reg__024))),10);
	vcdp->chgBus  (c+51,(vlTOPp->Top1__DOT__IF_ID__DOT__pc4reg),10);
	vcdp->chgBit  (c+52,((0x33U == (0x7fU & vlTOPp->Top1__DOT__IF_ID__DOT__instreg))));
	vcdp->chgBus  (c+53,(((0xfe0U & (vlTOPp->Top1__DOT__IF_ID__DOT__instreg 
					 >> 0x14U)) 
			      | (0x1fU & (vlTOPp->Top1__DOT__IF_ID__DOT__instreg 
					  >> 7U)))),12);
	vcdp->chgBus  (c+54,(((0x1000U & (vlTOPp->Top1__DOT__IF_ID__DOT__instreg 
					  >> 0x13U)) 
			      | ((0x800U & (vlTOPp->Top1__DOT__IF_ID__DOT__instreg 
					    << 4U)) 
				 | ((0x7e0U & (vlTOPp->Top1__DOT__IF_ID__DOT__instreg 
					       >> 0x14U)) 
				    | (0x1eU & (vlTOPp->Top1__DOT__IF_ID__DOT__instreg 
						>> 7U)))))),13);
	vcdp->chgBus  (c+55,(((0x100000U & (vlTOPp->Top1__DOT__IF_ID__DOT__instreg 
					    >> 0xbU)) 
			      | ((0xff000U & vlTOPp->Top1__DOT__IF_ID__DOT__instreg) 
				 | ((0x800U & (vlTOPp->Top1__DOT__IF_ID__DOT__instreg 
					       >> 9U)) 
				    | (0x7feU & (vlTOPp->Top1__DOT__IF_ID__DOT__instreg 
						 >> 0x14U)))))),21);
	vcdp->chgBus  (c+56,(vlTOPp->Top1__DOT__Register__DOT__register_0),32);
	vcdp->chgBus  (c+57,(vlTOPp->Top1__DOT__Register__DOT__register_1),32);
	vcdp->chgBus  (c+58,(vlTOPp->Top1__DOT__Register__DOT__register_2),32);
	vcdp->chgBus  (c+59,(vlTOPp->Top1__DOT__Register__DOT__register_3),32);
	vcdp->chgBus  (c+60,(vlTOPp->Top1__DOT__Register__DOT__register_4),32);
	vcdp->chgBus  (c+61,(vlTOPp->Top1__DOT__Register__DOT__register_5),32);
	vcdp->chgBus  (c+62,(vlTOPp->Top1__DOT__Register__DOT__register_6),32);
	vcdp->chgBus  (c+63,(vlTOPp->Top1__DOT__Register__DOT__register_7),32);
	vcdp->chgBus  (c+64,(vlTOPp->Top1__DOT__Register__DOT__register_8),32);
	vcdp->chgBus  (c+65,(vlTOPp->Top1__DOT__Register__DOT__register_9),32);
	vcdp->chgBus  (c+66,(vlTOPp->Top1__DOT__Register__DOT__register_10),32);
	vcdp->chgBus  (c+67,(vlTOPp->Top1__DOT__Register__DOT__register_11),32);
	vcdp->chgBus  (c+68,(vlTOPp->Top1__DOT__Register__DOT__register_12),32);
	vcdp->chgBus  (c+69,(vlTOPp->Top1__DOT__Register__DOT__register_13),32);
	vcdp->chgBus  (c+70,(vlTOPp->Top1__DOT__Register__DOT__register_14),32);
	vcdp->chgBus  (c+71,(vlTOPp->Top1__DOT__Register__DOT__register_15),32);
	vcdp->chgBus  (c+72,(vlTOPp->Top1__DOT__Register__DOT__register_16),32);
	vcdp->chgBus  (c+73,(vlTOPp->Top1__DOT__Register__DOT__register_17),32);
	vcdp->chgBus  (c+74,(vlTOPp->Top1__DOT__Register__DOT__register_18),32);
	vcdp->chgBus  (c+75,(vlTOPp->Top1__DOT__Register__DOT__register_19),32);
	vcdp->chgBus  (c+76,(vlTOPp->Top1__DOT__Register__DOT__register_20),32);
	vcdp->chgBus  (c+77,(vlTOPp->Top1__DOT__Register__DOT__register_21),32);
	vcdp->chgBus  (c+78,(vlTOPp->Top1__DOT__Register__DOT__register_22),32);
	vcdp->chgBus  (c+79,(vlTOPp->Top1__DOT__Register__DOT__register_23),32);
	vcdp->chgBus  (c+80,(vlTOPp->Top1__DOT__Register__DOT__register_24),32);
	vcdp->chgBus  (c+81,(vlTOPp->Top1__DOT__Register__DOT__register_25),32);
	vcdp->chgBus  (c+82,(vlTOPp->Top1__DOT__Register__DOT__register_26),32);
	vcdp->chgBus  (c+83,(vlTOPp->Top1__DOT__Register__DOT__register_27),32);
	vcdp->chgBus  (c+84,(vlTOPp->Top1__DOT__Register__DOT__register_28),32);
	vcdp->chgBus  (c+85,(vlTOPp->Top1__DOT__Register__DOT__register_29),32);
	vcdp->chgBus  (c+86,(vlTOPp->Top1__DOT__Register__DOT__register_30),32);
	vcdp->chgBus  (c+87,(vlTOPp->Top1__DOT__Register__DOT__register_31),32);
    }
}

void VTop1::traceChgThis__4(VTop1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+88,(vlTOPp->clock));
	vcdp->chgBit  (c+89,(vlTOPp->reset));
	vcdp->chgBus  (c+90,(vlTOPp->io_Reg_Out),32);
    }
}
