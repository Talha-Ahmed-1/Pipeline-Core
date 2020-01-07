// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop.h"              // For This
#include "VTop__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VTop) {
    VTop__Syms* __restrict vlSymsp = __VlSymsp = new VTop__Syms(this, name());
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTop::__Vconfigure(VTop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTop::~VTop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VTop::eval() {
    VTop__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VTop::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VTop::_eval_initial_loop(VTop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void VTop::_initial__TOP__1(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_initial__TOP__1\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign4[4];
    VL_SIGW(__Vtemp1,287,0,9);
    // Body
    // INITIAL at /home/talha/riscv/pipeline/test_run_dir/examples/Top/Top.Memory.mem.v:7
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x2f616263U;
    __Vtemp1[2U] = 0x6865656eU;
    __Vtemp1[3U] = 0x2f736861U;
    __Vtemp1[4U] = 0x69736376U;
    __Vtemp1[5U] = 0x68612f72U;
    __Vtemp1[6U] = 0x2f74616cU;
    __Vtemp1[7U] = 0x686f6d65U;
    __Vtemp1[8U] = 0x2fU;
    VL_READMEM_W (true,32,1024, 0,9, __Vtemp1, vlTOPp->Top__DOT__Memory__DOT__mem
		  ,0,~0);
}

VL_INLINE_OPT void VTop::_sequent__TOP__2(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_sequent__TOP__2\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvset__Top__DOT__DataMemory__DOT__mem__v0,0,0);
    //char	__VpadToAlign65[1];
    VL_SIG16(__Vdlyvdim0__Top__DOT__DataMemory__DOT__mem__v0,9,0);
    VL_SIG(__Vdlyvval__Top__DOT__DataMemory__DOT__mem__v0,31,0);
    // Body
    __Vdlyvset__Top__DOT__DataMemory__DOT__mem__v0 = 0U;
    // ALWAYS at Top.v:1091
    vlTOPp->Top__DOT__Register__DOT__register_0 = ((IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite)
						    ? 
						   ((0U 
						     == 
						     (0x1fU 
						      & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							 >> 7U)))
						     ? 0U
						     : 
						    ((0U 
						      == 
						      (0x1fU 
						       & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							  >> 7U)))
						      ? vlTOPp->Top__DOT__Register_io_WriteData
						      : 0U))
						    : 0U);
    // ALWAYS at Top.v:1102
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((1U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_1 = 0U;
	    }
	} else {
	    if ((1U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_1 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1113
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((2U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_2 = 0U;
	    }
	} else {
	    if ((2U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_2 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1124
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((3U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_3 = 0U;
	    }
	} else {
	    if ((3U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_3 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1135
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((4U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_4 = 0U;
	    }
	} else {
	    if ((4U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_4 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1146
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((5U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_5 = 0U;
	    }
	} else {
	    if ((5U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_5 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1157
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((6U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_6 = 0U;
	    }
	} else {
	    if ((6U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_6 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1168
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((7U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_7 = 0U;
	    }
	} else {
	    if ((7U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_7 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1179
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((8U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_8 = 0U;
	    }
	} else {
	    if ((8U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_8 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1190
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((9U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_9 = 0U;
	    }
	} else {
	    if ((9U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_9 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1201
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0xaU == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				   >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_10 = 0U;
	    }
	} else {
	    if ((0xaU == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				   >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_10 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1212
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0xbU == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				   >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_11 = 0U;
	    }
	} else {
	    if ((0xbU == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				   >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_11 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1223
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0xcU == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				   >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_12 = 0U;
	    }
	} else {
	    if ((0xcU == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				   >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_12 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1234
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0xdU == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				   >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_13 = 0U;
	    }
	} else {
	    if ((0xdU == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				   >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_13 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1245
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0xeU == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				   >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_14 = 0U;
	    }
	} else {
	    if ((0xeU == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				   >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_14 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1256
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0xfU == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				   >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_15 = 0U;
	    }
	} else {
	    if ((0xfU == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				   >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_15 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1267
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x10U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_16 = 0U;
	    }
	} else {
	    if ((0x10U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_16 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1278
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x11U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_17 = 0U;
	    }
	} else {
	    if ((0x11U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_17 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1289
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x12U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_18 = 0U;
	    }
	} else {
	    if ((0x12U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_18 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1300
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x13U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_19 = 0U;
	    }
	} else {
	    if ((0x13U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_19 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1311
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x14U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_20 = 0U;
	    }
	} else {
	    if ((0x14U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_20 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1322
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x15U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_21 = 0U;
	    }
	} else {
	    if ((0x15U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_21 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1333
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x16U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_22 = 0U;
	    }
	} else {
	    if ((0x16U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_22 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1344
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x17U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_23 = 0U;
	    }
	} else {
	    if ((0x17U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_23 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1355
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x18U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_24 = 0U;
	    }
	} else {
	    if ((0x18U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_24 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1366
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x19U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_25 = 0U;
	    }
	} else {
	    if ((0x19U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_25 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1377
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x1aU == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_26 = 0U;
	    }
	} else {
	    if ((0x1aU == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_26 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1388
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x1bU == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_27 = 0U;
	    }
	} else {
	    if ((0x1bU == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_27 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1399
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x1cU == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_28 = 0U;
	    }
	} else {
	    if ((0x1cU == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_28 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1410
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x1dU == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_29 = 0U;
	    }
	} else {
	    if ((0x1dU == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_29 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1421
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x1eU == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_30 = 0U;
	    }
	} else {
	    if ((0x1eU == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_30 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1432
    if (vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x1fU == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_31 = 0U;
	    }
	} else {
	    if ((0x1fU == (0x1fU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__Register__DOT__register_31 
		    = vlTOPp->Top__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1610
    if (((0x33U != (0x7fU & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
	 & ((~ (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Load)) 
	    & (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Store)))) {
	__Vdlyvval__Top__DOT__DataMemory__DOT__mem__v0 
	    = vlTOPp->Top__DOT__Register_io_rs2;
	__Vdlyvset__Top__DOT__DataMemory__DOT__mem__v0 = 1U;
	__Vdlyvdim0__Top__DOT__DataMemory__DOT__mem__v0 
	    = (0xffU & (IData)((vlTOPp->Top__DOT__Alu__DOT___GEN_19 
				>> 2U)));
    }
    // ALWAYS at Top.v:1531
    vlTOPp->Top__DOT__Pc__DOT__reg__024 = vlTOPp->Top__DOT__Pc_io_input;
    // ALWAYSPOST at Top.v:1612
    if (__Vdlyvset__Top__DOT__DataMemory__DOT__mem__v0) {
	vlTOPp->Top__DOT__DataMemory__DOT__mem[__Vdlyvdim0__Top__DOT__DataMemory__DOT__mem__v0] 
	    = __Vdlyvval__Top__DOT__DataMemory__DOT__mem__v0;
    }
    vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
	= vlTOPp->Top__DOT__Memory__DOT__mem[(0x3ffU 
					      & (vlTOPp->Top__DOT__Pc__DOT__reg__024 
						 >> 2U))];
}

void VTop::_settle__TOP__3(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_settle__TOP__3\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
	= vlTOPp->Top__DOT__Memory__DOT__mem[(0x3ffU 
					      & (vlTOPp->Top__DOT__Pc__DOT__reg__024 
						 >> 2U))];
    vlTOPp->Top__DOT__ImmediateGeneration__DOT___T_41 
	= ((((0x80000000U & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)
	      ? 0x7ffffU : 0U) << 0xdU) | ((0x1000U 
					    & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
					       >> 0x13U)) 
					   | ((0x800U 
					       & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						  << 4U)) 
					      | ((0x7e0U 
						  & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						     >> 0x14U)) 
						 | (0x1eU 
						    & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						       >> 7U))))));
    vlTOPp->Top__DOT__ImmediateGeneration__DOT___T_58 
	= ((QData)((IData)(((((0x80000000U & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)
			       ? 0xfffU : 0U) << 0x14U) 
			    | ((0x80000U & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
					    >> 0xcU)) 
			       | ((0x7f800U & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
					       >> 1U)) 
				  | ((0x400U & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						>> 0xaU)) 
				     | (0x3ffU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						  >> 0x15U)))))))) 
	   << 1U);
    vlTOPp->Top__DOT__ImmediateGeneration__DOT___T_77 
	= ((((0x80000000U & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)
	      ? 0xfffffU : 0U) << 0xcU) | (0xfffU & 
					   (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
					    >> 0x14U)));
    vlTOPp->Top__DOT__Register_io_rs2 = ((0x1fU == 
					  (0x1fU & 
					   (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
					    >> 0x14U)))
					  ? vlTOPp->Top__DOT__Register__DOT__register_31
					  : ((0x1eU 
					      == (0x1fU 
						  & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						     >> 0x14U)))
					      ? vlTOPp->Top__DOT__Register__DOT__register_30
					      : ((0x1dU 
						  == 
						  (0x1fU 
						   & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						      >> 0x14U)))
						  ? vlTOPp->Top__DOT__Register__DOT__register_29
						  : 
						 ((0x1cU 
						   == 
						   (0x1fU 
						    & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						       >> 0x14U)))
						   ? vlTOPp->Top__DOT__Register__DOT__register_28
						   : 
						  ((0x1bU 
						    == 
						    (0x1fU 
						     & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							>> 0x14U)))
						    ? vlTOPp->Top__DOT__Register__DOT__register_27
						    : 
						   ((0x1aU 
						     == 
						     (0x1fU 
						      & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							 >> 0x14U)))
						     ? vlTOPp->Top__DOT__Register__DOT__register_26
						     : 
						    ((0x19U 
						      == 
						      (0x1fU 
						       & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							  >> 0x14U)))
						      ? vlTOPp->Top__DOT__Register__DOT__register_25
						      : 
						     ((0x18U 
						       == 
						       (0x1fU 
							& (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							   >> 0x14U)))
						       ? vlTOPp->Top__DOT__Register__DOT__register_24
						       : 
						      ((0x17U 
							== 
							(0x1fU 
							 & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							    >> 0x14U)))
						        ? vlTOPp->Top__DOT__Register__DOT__register_23
						        : 
						       ((0x16U 
							 == 
							 (0x1fU 
							  & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							     >> 0x14U)))
							 ? vlTOPp->Top__DOT__Register__DOT__register_22
							 : 
							((0x15U 
							  == 
							  (0x1fU 
							   & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							      >> 0x14U)))
							  ? vlTOPp->Top__DOT__Register__DOT__register_21
							  : 
							 ((0x14U 
							   == 
							   (0x1fU 
							    & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							       >> 0x14U)))
							   ? vlTOPp->Top__DOT__Register__DOT__register_20
							   : 
							  ((0x13U 
							    == 
							    (0x1fU 
							     & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								>> 0x14U)))
							    ? vlTOPp->Top__DOT__Register__DOT__register_19
							    : 
							   ((0x12U 
							     == 
							     (0x1fU 
							      & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								 >> 0x14U)))
							     ? vlTOPp->Top__DOT__Register__DOT__register_18
							     : 
							    ((0x11U 
							      == 
							      (0x1fU 
							       & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								  >> 0x14U)))
							      ? vlTOPp->Top__DOT__Register__DOT__register_17
							      : 
							     ((0x10U 
							       == 
							       (0x1fU 
								& (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								   >> 0x14U)))
							       ? vlTOPp->Top__DOT__Register__DOT__register_16
							       : 
							      ((0xfU 
								== 
								(0x1fU 
								 & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								    >> 0x14U)))
							        ? vlTOPp->Top__DOT__Register__DOT__register_15
							        : 
							       ((0xeU 
								 == 
								 (0x1fU 
								  & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								     >> 0x14U)))
								 ? vlTOPp->Top__DOT__Register__DOT__register_14
								 : 
								((0xdU 
								  == 
								  (0x1fU 
								   & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								      >> 0x14U)))
								  ? vlTOPp->Top__DOT__Register__DOT__register_13
								  : 
								 ((0xcU 
								   == 
								   (0x1fU 
								    & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								       >> 0x14U)))
								   ? vlTOPp->Top__DOT__Register__DOT__register_12
								   : 
								  ((0xbU 
								    == 
								    (0x1fU 
								     & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									>> 0x14U)))
								    ? vlTOPp->Top__DOT__Register__DOT__register_11
								    : 
								   ((0xaU 
								     == 
								     (0x1fU 
								      & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									 >> 0x14U)))
								     ? vlTOPp->Top__DOT__Register__DOT__register_10
								     : 
								    ((9U 
								      == 
								      (0x1fU 
								       & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									  >> 0x14U)))
								      ? vlTOPp->Top__DOT__Register__DOT__register_9
								      : 
								     ((8U 
								       == 
								       (0x1fU 
									& (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									   >> 0x14U)))
								       ? vlTOPp->Top__DOT__Register__DOT__register_8
								       : 
								      ((7U 
									== 
									(0x1fU 
									 & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									    >> 0x14U)))
								        ? vlTOPp->Top__DOT__Register__DOT__register_7
								        : 
								       ((6U 
									 == 
									 (0x1fU 
									  & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									     >> 0x14U)))
									 ? vlTOPp->Top__DOT__Register__DOT__register_6
									 : 
									((5U 
									  == 
									  (0x1fU 
									   & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									      >> 0x14U)))
									  ? vlTOPp->Top__DOT__Register__DOT__register_5
									  : 
									 ((4U 
									   == 
									   (0x1fU 
									    & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									       >> 0x14U)))
									   ? vlTOPp->Top__DOT__Register__DOT__register_4
									   : 
									  ((3U 
									    == 
									    (0x1fU 
									     & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
										>> 0x14U)))
									    ? vlTOPp->Top__DOT__Register__DOT__register_3
									    : 
									   ((2U 
									     == 
									     (0x1fU 
									      & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
										>> 0x14U)))
									     ? vlTOPp->Top__DOT__Register__DOT__register_2
									     : 
									    ((1U 
									      == 
									      (0x1fU 
									       & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
										>> 0x14U)))
									      ? vlTOPp->Top__DOT__Register__DOT__register_1
									      : vlTOPp->Top__DOT__Register__DOT__register_0)))))))))))))))))))))))))))))));
    vlTOPp->Top__DOT__Register_io_rs1 = ((0x1fU == 
					  (0x1fU & 
					   (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
					    >> 0xfU)))
					  ? vlTOPp->Top__DOT__Register__DOT__register_31
					  : ((0x1eU 
					      == (0x1fU 
						  & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						     >> 0xfU)))
					      ? vlTOPp->Top__DOT__Register__DOT__register_30
					      : ((0x1dU 
						  == 
						  (0x1fU 
						   & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						      >> 0xfU)))
						  ? vlTOPp->Top__DOT__Register__DOT__register_29
						  : 
						 ((0x1cU 
						   == 
						   (0x1fU 
						    & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						       >> 0xfU)))
						   ? vlTOPp->Top__DOT__Register__DOT__register_28
						   : 
						  ((0x1bU 
						    == 
						    (0x1fU 
						     & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							>> 0xfU)))
						    ? vlTOPp->Top__DOT__Register__DOT__register_27
						    : 
						   ((0x1aU 
						     == 
						     (0x1fU 
						      & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							 >> 0xfU)))
						     ? vlTOPp->Top__DOT__Register__DOT__register_26
						     : 
						    ((0x19U 
						      == 
						      (0x1fU 
						       & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							  >> 0xfU)))
						      ? vlTOPp->Top__DOT__Register__DOT__register_25
						      : 
						     ((0x18U 
						       == 
						       (0x1fU 
							& (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							   >> 0xfU)))
						       ? vlTOPp->Top__DOT__Register__DOT__register_24
						       : 
						      ((0x17U 
							== 
							(0x1fU 
							 & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							    >> 0xfU)))
						        ? vlTOPp->Top__DOT__Register__DOT__register_23
						        : 
						       ((0x16U 
							 == 
							 (0x1fU 
							  & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							     >> 0xfU)))
							 ? vlTOPp->Top__DOT__Register__DOT__register_22
							 : 
							((0x15U 
							  == 
							  (0x1fU 
							   & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							      >> 0xfU)))
							  ? vlTOPp->Top__DOT__Register__DOT__register_21
							  : 
							 ((0x14U 
							   == 
							   (0x1fU 
							    & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							       >> 0xfU)))
							   ? vlTOPp->Top__DOT__Register__DOT__register_20
							   : 
							  ((0x13U 
							    == 
							    (0x1fU 
							     & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								>> 0xfU)))
							    ? vlTOPp->Top__DOT__Register__DOT__register_19
							    : 
							   ((0x12U 
							     == 
							     (0x1fU 
							      & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								 >> 0xfU)))
							     ? vlTOPp->Top__DOT__Register__DOT__register_18
							     : 
							    ((0x11U 
							      == 
							      (0x1fU 
							       & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								  >> 0xfU)))
							      ? vlTOPp->Top__DOT__Register__DOT__register_17
							      : 
							     ((0x10U 
							       == 
							       (0x1fU 
								& (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								   >> 0xfU)))
							       ? vlTOPp->Top__DOT__Register__DOT__register_16
							       : 
							      ((0xfU 
								== 
								(0x1fU 
								 & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								    >> 0xfU)))
							        ? vlTOPp->Top__DOT__Register__DOT__register_15
							        : 
							       ((0xeU 
								 == 
								 (0x1fU 
								  & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								     >> 0xfU)))
								 ? vlTOPp->Top__DOT__Register__DOT__register_14
								 : 
								((0xdU 
								  == 
								  (0x1fU 
								   & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								      >> 0xfU)))
								  ? vlTOPp->Top__DOT__Register__DOT__register_13
								  : 
								 ((0xcU 
								   == 
								   (0x1fU 
								    & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								       >> 0xfU)))
								   ? vlTOPp->Top__DOT__Register__DOT__register_12
								   : 
								  ((0xbU 
								    == 
								    (0x1fU 
								     & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									>> 0xfU)))
								    ? vlTOPp->Top__DOT__Register__DOT__register_11
								    : 
								   ((0xaU 
								     == 
								     (0x1fU 
								      & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									 >> 0xfU)))
								     ? vlTOPp->Top__DOT__Register__DOT__register_10
								     : 
								    ((9U 
								      == 
								      (0x1fU 
								       & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									  >> 0xfU)))
								      ? vlTOPp->Top__DOT__Register__DOT__register_9
								      : 
								     ((8U 
								       == 
								       (0x1fU 
									& (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									   >> 0xfU)))
								       ? vlTOPp->Top__DOT__Register__DOT__register_8
								       : 
								      ((7U 
									== 
									(0x1fU 
									 & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									    >> 0xfU)))
								        ? vlTOPp->Top__DOT__Register__DOT__register_7
								        : 
								       ((6U 
									 == 
									 (0x1fU 
									  & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									     >> 0xfU)))
									 ? vlTOPp->Top__DOT__Register__DOT__register_6
									 : 
									((5U 
									  == 
									  (0x1fU 
									   & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									      >> 0xfU)))
									  ? vlTOPp->Top__DOT__Register__DOT__register_5
									  : 
									 ((4U 
									   == 
									   (0x1fU 
									    & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									       >> 0xfU)))
									   ? vlTOPp->Top__DOT__Register__DOT__register_4
									   : 
									  ((3U 
									    == 
									    (0x1fU 
									     & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
										>> 0xfU)))
									    ? vlTOPp->Top__DOT__Register__DOT__register_3
									    : 
									   ((2U 
									     == 
									     (0x1fU 
									      & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
										>> 0xfU)))
									     ? vlTOPp->Top__DOT__Register__DOT__register_2
									     : 
									    ((1U 
									      == 
									      (0x1fU 
									       & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
										>> 0xfU)))
									      ? vlTOPp->Top__DOT__Register__DOT__register_1
									      : vlTOPp->Top__DOT__Register__DOT__register_0)))))))))))))))))))))))))))))));
    vlTOPp->Top__DOT__Control__DOT__c1_io_I = ((0x33U 
						!= 
						(0x7fU 
						 & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
					       & ((3U 
						   != 
						   (0x7fU 
						    & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						  & ((0x23U 
						      != 
						      (0x7fU 
						       & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						     & ((0x63U 
							 != 
							 (0x7fU 
							  & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
							& (0x13U 
							   == 
							   (0x7fU 
							    & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data))))));
    vlTOPp->Top__DOT__Control__DOT__c1_io_Store = (
						   (0x33U 
						    != 
						    (0x7fU 
						     & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						   & ((3U 
						       != 
						       (0x7fU 
							& vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						      & (0x23U 
							 == 
							 (0x7fU 
							  & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data))));
    vlTOPp->Top__DOT__Control__DOT__c1_io_Branch = 
	((0x33U != (0x7fU & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
	 & ((3U != (0x7fU & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
	    & ((0x23U != (0x7fU & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
	       & (0x63U == (0x7fU & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)))));
    vlTOPp->Top__DOT__Control__DOT__c1_io_Load = ((0x33U 
						   != 
						   (0x7fU 
						    & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						  & (3U 
						     == 
						     (0x7fU 
						      & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)));
    vlTOPp->Top__DOT__Control__DOT__c1_io_Lui = ((0x33U 
						  != 
						  (0x7fU 
						   & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						 & ((3U 
						     != 
						     (0x7fU 
						      & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						    & ((0x23U 
							!= 
							(0x7fU 
							 & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						       & ((0x63U 
							   != 
							   (0x7fU 
							    & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
							  & ((0x13U 
							      != 
							      (0x7fU 
							       & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
							     & ((0x67U 
								 != 
								 (0x7fU 
								  & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
								& ((0x6fU 
								    != 
								    (0x7fU 
								     & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
								   & (0x37U 
								      == 
								      (0x7fU 
								       & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)))))))));
    vlTOPp->Top__DOT__Control__DOT__c1_io_Jal = ((0x33U 
						  != 
						  (0x7fU 
						   & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						 & ((3U 
						     != 
						     (0x7fU 
						      & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						    & ((0x23U 
							!= 
							(0x7fU 
							 & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						       & ((0x63U 
							   != 
							   (0x7fU 
							    & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
							  & ((0x13U 
							      != 
							      (0x7fU 
							       & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
							     & ((0x67U 
								 != 
								 (0x7fU 
								  & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
								& (0x6fU 
								   == 
								   (0x7fU 
								    & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data))))))));
    vlTOPp->Top__DOT__Control__DOT__c1_io_Jalr = ((0x33U 
						   != 
						   (0x7fU 
						    & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						  & ((3U 
						      != 
						      (0x7fU 
						       & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						     & ((0x23U 
							 != 
							 (0x7fU 
							  & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
							& ((0x63U 
							    != 
							    (0x7fU 
							     & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
							   & ((0x13U 
							       != 
							       (0x7fU 
								& vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
							      & (0x67U 
								 == 
								 (0x7fU 
								  & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)))))));
}

VL_INLINE_OPT void VTop::_sequent__TOP__4(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_sequent__TOP__4\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__ImmediateGeneration__DOT___T_41 
	= ((((0x80000000U & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)
	      ? 0x7ffffU : 0U) << 0xdU) | ((0x1000U 
					    & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
					       >> 0x13U)) 
					   | ((0x800U 
					       & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						  << 4U)) 
					      | ((0x7e0U 
						  & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						     >> 0x14U)) 
						 | (0x1eU 
						    & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						       >> 7U))))));
    vlTOPp->Top__DOT__ImmediateGeneration__DOT___T_58 
	= ((QData)((IData)(((((0x80000000U & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)
			       ? 0xfffU : 0U) << 0x14U) 
			    | ((0x80000U & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
					    >> 0xcU)) 
			       | ((0x7f800U & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
					       >> 1U)) 
				  | ((0x400U & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						>> 0xaU)) 
				     | (0x3ffU & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						  >> 0x15U)))))))) 
	   << 1U);
    vlTOPp->Top__DOT__ImmediateGeneration__DOT___T_77 
	= ((((0x80000000U & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)
	      ? 0xfffffU : 0U) << 0xcU) | (0xfffU & 
					   (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
					    >> 0x14U)));
    vlTOPp->Top__DOT__Register_io_rs2 = ((0x1fU == 
					  (0x1fU & 
					   (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
					    >> 0x14U)))
					  ? vlTOPp->Top__DOT__Register__DOT__register_31
					  : ((0x1eU 
					      == (0x1fU 
						  & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						     >> 0x14U)))
					      ? vlTOPp->Top__DOT__Register__DOT__register_30
					      : ((0x1dU 
						  == 
						  (0x1fU 
						   & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						      >> 0x14U)))
						  ? vlTOPp->Top__DOT__Register__DOT__register_29
						  : 
						 ((0x1cU 
						   == 
						   (0x1fU 
						    & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						       >> 0x14U)))
						   ? vlTOPp->Top__DOT__Register__DOT__register_28
						   : 
						  ((0x1bU 
						    == 
						    (0x1fU 
						     & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							>> 0x14U)))
						    ? vlTOPp->Top__DOT__Register__DOT__register_27
						    : 
						   ((0x1aU 
						     == 
						     (0x1fU 
						      & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							 >> 0x14U)))
						     ? vlTOPp->Top__DOT__Register__DOT__register_26
						     : 
						    ((0x19U 
						      == 
						      (0x1fU 
						       & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							  >> 0x14U)))
						      ? vlTOPp->Top__DOT__Register__DOT__register_25
						      : 
						     ((0x18U 
						       == 
						       (0x1fU 
							& (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							   >> 0x14U)))
						       ? vlTOPp->Top__DOT__Register__DOT__register_24
						       : 
						      ((0x17U 
							== 
							(0x1fU 
							 & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							    >> 0x14U)))
						        ? vlTOPp->Top__DOT__Register__DOT__register_23
						        : 
						       ((0x16U 
							 == 
							 (0x1fU 
							  & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							     >> 0x14U)))
							 ? vlTOPp->Top__DOT__Register__DOT__register_22
							 : 
							((0x15U 
							  == 
							  (0x1fU 
							   & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							      >> 0x14U)))
							  ? vlTOPp->Top__DOT__Register__DOT__register_21
							  : 
							 ((0x14U 
							   == 
							   (0x1fU 
							    & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							       >> 0x14U)))
							   ? vlTOPp->Top__DOT__Register__DOT__register_20
							   : 
							  ((0x13U 
							    == 
							    (0x1fU 
							     & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								>> 0x14U)))
							    ? vlTOPp->Top__DOT__Register__DOT__register_19
							    : 
							   ((0x12U 
							     == 
							     (0x1fU 
							      & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								 >> 0x14U)))
							     ? vlTOPp->Top__DOT__Register__DOT__register_18
							     : 
							    ((0x11U 
							      == 
							      (0x1fU 
							       & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								  >> 0x14U)))
							      ? vlTOPp->Top__DOT__Register__DOT__register_17
							      : 
							     ((0x10U 
							       == 
							       (0x1fU 
								& (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								   >> 0x14U)))
							       ? vlTOPp->Top__DOT__Register__DOT__register_16
							       : 
							      ((0xfU 
								== 
								(0x1fU 
								 & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								    >> 0x14U)))
							        ? vlTOPp->Top__DOT__Register__DOT__register_15
							        : 
							       ((0xeU 
								 == 
								 (0x1fU 
								  & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								     >> 0x14U)))
								 ? vlTOPp->Top__DOT__Register__DOT__register_14
								 : 
								((0xdU 
								  == 
								  (0x1fU 
								   & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								      >> 0x14U)))
								  ? vlTOPp->Top__DOT__Register__DOT__register_13
								  : 
								 ((0xcU 
								   == 
								   (0x1fU 
								    & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								       >> 0x14U)))
								   ? vlTOPp->Top__DOT__Register__DOT__register_12
								   : 
								  ((0xbU 
								    == 
								    (0x1fU 
								     & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									>> 0x14U)))
								    ? vlTOPp->Top__DOT__Register__DOT__register_11
								    : 
								   ((0xaU 
								     == 
								     (0x1fU 
								      & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									 >> 0x14U)))
								     ? vlTOPp->Top__DOT__Register__DOT__register_10
								     : 
								    ((9U 
								      == 
								      (0x1fU 
								       & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									  >> 0x14U)))
								      ? vlTOPp->Top__DOT__Register__DOT__register_9
								      : 
								     ((8U 
								       == 
								       (0x1fU 
									& (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									   >> 0x14U)))
								       ? vlTOPp->Top__DOT__Register__DOT__register_8
								       : 
								      ((7U 
									== 
									(0x1fU 
									 & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									    >> 0x14U)))
								        ? vlTOPp->Top__DOT__Register__DOT__register_7
								        : 
								       ((6U 
									 == 
									 (0x1fU 
									  & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									     >> 0x14U)))
									 ? vlTOPp->Top__DOT__Register__DOT__register_6
									 : 
									((5U 
									  == 
									  (0x1fU 
									   & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									      >> 0x14U)))
									  ? vlTOPp->Top__DOT__Register__DOT__register_5
									  : 
									 ((4U 
									   == 
									   (0x1fU 
									    & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									       >> 0x14U)))
									   ? vlTOPp->Top__DOT__Register__DOT__register_4
									   : 
									  ((3U 
									    == 
									    (0x1fU 
									     & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
										>> 0x14U)))
									    ? vlTOPp->Top__DOT__Register__DOT__register_3
									    : 
									   ((2U 
									     == 
									     (0x1fU 
									      & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
										>> 0x14U)))
									     ? vlTOPp->Top__DOT__Register__DOT__register_2
									     : 
									    ((1U 
									      == 
									      (0x1fU 
									       & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
										>> 0x14U)))
									      ? vlTOPp->Top__DOT__Register__DOT__register_1
									      : vlTOPp->Top__DOT__Register__DOT__register_0)))))))))))))))))))))))))))))));
    vlTOPp->Top__DOT__Register_io_rs1 = ((0x1fU == 
					  (0x1fU & 
					   (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
					    >> 0xfU)))
					  ? vlTOPp->Top__DOT__Register__DOT__register_31
					  : ((0x1eU 
					      == (0x1fU 
						  & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						     >> 0xfU)))
					      ? vlTOPp->Top__DOT__Register__DOT__register_30
					      : ((0x1dU 
						  == 
						  (0x1fU 
						   & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						      >> 0xfU)))
						  ? vlTOPp->Top__DOT__Register__DOT__register_29
						  : 
						 ((0x1cU 
						   == 
						   (0x1fU 
						    & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						       >> 0xfU)))
						   ? vlTOPp->Top__DOT__Register__DOT__register_28
						   : 
						  ((0x1bU 
						    == 
						    (0x1fU 
						     & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							>> 0xfU)))
						    ? vlTOPp->Top__DOT__Register__DOT__register_27
						    : 
						   ((0x1aU 
						     == 
						     (0x1fU 
						      & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							 >> 0xfU)))
						     ? vlTOPp->Top__DOT__Register__DOT__register_26
						     : 
						    ((0x19U 
						      == 
						      (0x1fU 
						       & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							  >> 0xfU)))
						      ? vlTOPp->Top__DOT__Register__DOT__register_25
						      : 
						     ((0x18U 
						       == 
						       (0x1fU 
							& (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							   >> 0xfU)))
						       ? vlTOPp->Top__DOT__Register__DOT__register_24
						       : 
						      ((0x17U 
							== 
							(0x1fU 
							 & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							    >> 0xfU)))
						        ? vlTOPp->Top__DOT__Register__DOT__register_23
						        : 
						       ((0x16U 
							 == 
							 (0x1fU 
							  & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							     >> 0xfU)))
							 ? vlTOPp->Top__DOT__Register__DOT__register_22
							 : 
							((0x15U 
							  == 
							  (0x1fU 
							   & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							      >> 0xfU)))
							  ? vlTOPp->Top__DOT__Register__DOT__register_21
							  : 
							 ((0x14U 
							   == 
							   (0x1fU 
							    & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							       >> 0xfU)))
							   ? vlTOPp->Top__DOT__Register__DOT__register_20
							   : 
							  ((0x13U 
							    == 
							    (0x1fU 
							     & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								>> 0xfU)))
							    ? vlTOPp->Top__DOT__Register__DOT__register_19
							    : 
							   ((0x12U 
							     == 
							     (0x1fU 
							      & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								 >> 0xfU)))
							     ? vlTOPp->Top__DOT__Register__DOT__register_18
							     : 
							    ((0x11U 
							      == 
							      (0x1fU 
							       & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								  >> 0xfU)))
							      ? vlTOPp->Top__DOT__Register__DOT__register_17
							      : 
							     ((0x10U 
							       == 
							       (0x1fU 
								& (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								   >> 0xfU)))
							       ? vlTOPp->Top__DOT__Register__DOT__register_16
							       : 
							      ((0xfU 
								== 
								(0x1fU 
								 & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								    >> 0xfU)))
							        ? vlTOPp->Top__DOT__Register__DOT__register_15
							        : 
							       ((0xeU 
								 == 
								 (0x1fU 
								  & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								     >> 0xfU)))
								 ? vlTOPp->Top__DOT__Register__DOT__register_14
								 : 
								((0xdU 
								  == 
								  (0x1fU 
								   & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								      >> 0xfU)))
								  ? vlTOPp->Top__DOT__Register__DOT__register_13
								  : 
								 ((0xcU 
								   == 
								   (0x1fU 
								    & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
								       >> 0xfU)))
								   ? vlTOPp->Top__DOT__Register__DOT__register_12
								   : 
								  ((0xbU 
								    == 
								    (0x1fU 
								     & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									>> 0xfU)))
								    ? vlTOPp->Top__DOT__Register__DOT__register_11
								    : 
								   ((0xaU 
								     == 
								     (0x1fU 
								      & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									 >> 0xfU)))
								     ? vlTOPp->Top__DOT__Register__DOT__register_10
								     : 
								    ((9U 
								      == 
								      (0x1fU 
								       & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									  >> 0xfU)))
								      ? vlTOPp->Top__DOT__Register__DOT__register_9
								      : 
								     ((8U 
								       == 
								       (0x1fU 
									& (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									   >> 0xfU)))
								       ? vlTOPp->Top__DOT__Register__DOT__register_8
								       : 
								      ((7U 
									== 
									(0x1fU 
									 & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									    >> 0xfU)))
								        ? vlTOPp->Top__DOT__Register__DOT__register_7
								        : 
								       ((6U 
									 == 
									 (0x1fU 
									  & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									     >> 0xfU)))
									 ? vlTOPp->Top__DOT__Register__DOT__register_6
									 : 
									((5U 
									  == 
									  (0x1fU 
									   & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									      >> 0xfU)))
									  ? vlTOPp->Top__DOT__Register__DOT__register_5
									  : 
									 ((4U 
									   == 
									   (0x1fU 
									    & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									       >> 0xfU)))
									   ? vlTOPp->Top__DOT__Register__DOT__register_4
									   : 
									  ((3U 
									    == 
									    (0x1fU 
									     & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
										>> 0xfU)))
									    ? vlTOPp->Top__DOT__Register__DOT__register_3
									    : 
									   ((2U 
									     == 
									     (0x1fU 
									      & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
										>> 0xfU)))
									     ? vlTOPp->Top__DOT__Register__DOT__register_2
									     : 
									    ((1U 
									      == 
									      (0x1fU 
									       & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
										>> 0xfU)))
									      ? vlTOPp->Top__DOT__Register__DOT__register_1
									      : vlTOPp->Top__DOT__Register__DOT__register_0)))))))))))))))))))))))))))))));
    vlTOPp->Top__DOT__Control__DOT__c1_io_I = ((0x33U 
						!= 
						(0x7fU 
						 & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
					       & ((3U 
						   != 
						   (0x7fU 
						    & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						  & ((0x23U 
						      != 
						      (0x7fU 
						       & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						     & ((0x63U 
							 != 
							 (0x7fU 
							  & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
							& (0x13U 
							   == 
							   (0x7fU 
							    & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data))))));
    vlTOPp->Top__DOT__Control__DOT__c1_io_Store = (
						   (0x33U 
						    != 
						    (0x7fU 
						     & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						   & ((3U 
						       != 
						       (0x7fU 
							& vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						      & (0x23U 
							 == 
							 (0x7fU 
							  & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data))));
    vlTOPp->Top__DOT__Control__DOT__c1_io_Branch = 
	((0x33U != (0x7fU & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
	 & ((3U != (0x7fU & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
	    & ((0x23U != (0x7fU & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
	       & (0x63U == (0x7fU & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)))));
    vlTOPp->Top__DOT__Control__DOT__c1_io_Load = ((0x33U 
						   != 
						   (0x7fU 
						    & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						  & (3U 
						     == 
						     (0x7fU 
						      & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)));
    vlTOPp->Top__DOT__Control__DOT__c1_io_Lui = ((0x33U 
						  != 
						  (0x7fU 
						   & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						 & ((3U 
						     != 
						     (0x7fU 
						      & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						    & ((0x23U 
							!= 
							(0x7fU 
							 & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						       & ((0x63U 
							   != 
							   (0x7fU 
							    & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
							  & ((0x13U 
							      != 
							      (0x7fU 
							       & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
							     & ((0x67U 
								 != 
								 (0x7fU 
								  & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
								& ((0x6fU 
								    != 
								    (0x7fU 
								     & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
								   & (0x37U 
								      == 
								      (0x7fU 
								       & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)))))))));
    vlTOPp->Top__DOT__Control__DOT__c1_io_Jal = ((0x33U 
						  != 
						  (0x7fU 
						   & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						 & ((3U 
						     != 
						     (0x7fU 
						      & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						    & ((0x23U 
							!= 
							(0x7fU 
							 & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						       & ((0x63U 
							   != 
							   (0x7fU 
							    & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
							  & ((0x13U 
							      != 
							      (0x7fU 
							       & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
							     & ((0x67U 
								 != 
								 (0x7fU 
								  & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
								& (0x6fU 
								   == 
								   (0x7fU 
								    & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data))))))));
    vlTOPp->Top__DOT__Control__DOT__c1_io_Jalr = ((0x33U 
						   != 
						   (0x7fU 
						    & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						  & ((3U 
						      != 
						      (0x7fU 
						       & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						     & ((0x23U 
							 != 
							 (0x7fU 
							  & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
							& ((0x63U 
							    != 
							    (0x7fU 
							     & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
							   & ((0x13U 
							       != 
							       (0x7fU 
								& vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
							      & (0x67U 
								 == 
								 (0x7fU 
								  & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)))))));
    vlTOPp->Top__DOT__Control__DOT__c2_io_Branch = 
	((0x33U != (0x7fU & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
	 & ((~ (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Load)) 
	    & ((~ (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Store)) 
	       & (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Branch))));
    vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite 
	= ((0x33U == (0x7fU & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
	   | ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Load) 
	      | ((~ (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Store)) 
		 & ((~ (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Branch)) 
		    & ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_I) 
		       | ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Jal) 
			  | ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Jalr) 
			     | (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Lui))))))));
    vlTOPp->Top__DOT__Control__DOT__c2_io_NextPc = 
	((0x33U == (0x7fU & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data))
	  ? 0U : ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Load)
		   ? 0U : ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Store)
			    ? 0U : ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Branch)
				     ? 1U : ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_I)
					      ? 0U : 
					     ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Jal)
					       ? 2U
					       : ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Jalr)
						   ? 3U
						   : 0U)))))));
    vlTOPp->Top__DOT__Control__DOT__c2_io_OpA = ((0x33U 
						  == 
						  (0x7fU 
						   & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data))
						  ? 0U
						  : 
						 ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Load)
						   ? 0U
						   : 
						  ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Store)
						    ? 0U
						    : 
						   ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Branch)
						     ? 0U
						     : 
						    ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_I)
						      ? 0U
						      : 
						     ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Jal)
						       ? 2U
						       : 
						      ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Jalr)
						        ? 2U
						        : 
						       ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Lui)
							 ? 3U
							 : 0U))))))));
    vlTOPp->Top__DOT__Control__DOT__c2_io_AluOp = (
						   (0x33U 
						    == 
						    (0x7fU 
						     & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data))
						    ? 0U
						    : 
						   ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Load)
						     ? 4U
						     : 
						    ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Store)
						      ? 5U
						      : 
						     ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Branch)
						       ? 2U
						       : 
						      ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_I)
						        ? 1U
						        : 
						       ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Jal)
							 ? 3U
							 : 
							((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Jalr)
							  ? 3U
							  : 
							 ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Lui)
							   ? 6U
							   : 7U))))))));
    vlTOPp->Top__DOT__Control__DOT__c2__DOT___GEN_14 
	= ((~ (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Jal)) 
	   & ((~ (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Jalr)) 
	      & (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Lui)));
}

void VTop::_settle__TOP__5(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_settle__TOP__5\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__Control__DOT__c2_io_Branch = 
	((0x33U != (0x7fU & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
	 & ((~ (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Load)) 
	    & ((~ (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Store)) 
	       & (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Branch))));
    vlTOPp->Top__DOT__Control__DOT__c2_io_RegWrite 
	= ((0x33U == (0x7fU & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
	   | ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Load) 
	      | ((~ (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Store)) 
		 & ((~ (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Branch)) 
		    & ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_I) 
		       | ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Jal) 
			  | ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Jalr) 
			     | (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Lui))))))));
    vlTOPp->Top__DOT__Control__DOT__c2_io_NextPc = 
	((0x33U == (0x7fU & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data))
	  ? 0U : ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Load)
		   ? 0U : ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Store)
			    ? 0U : ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Branch)
				     ? 1U : ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_I)
					      ? 0U : 
					     ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Jal)
					       ? 2U
					       : ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Jalr)
						   ? 3U
						   : 0U)))))));
    vlTOPp->Top__DOT__Control__DOT__c2_io_OpA = ((0x33U 
						  == 
						  (0x7fU 
						   & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data))
						  ? 0U
						  : 
						 ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Load)
						   ? 0U
						   : 
						  ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Store)
						    ? 0U
						    : 
						   ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Branch)
						     ? 0U
						     : 
						    ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_I)
						      ? 0U
						      : 
						     ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Jal)
						       ? 2U
						       : 
						      ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Jalr)
						        ? 2U
						        : 
						       ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Lui)
							 ? 3U
							 : 0U))))))));
    vlTOPp->Top__DOT__Control__DOT__c2_io_AluOp = (
						   (0x33U 
						    == 
						    (0x7fU 
						     & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data))
						    ? 0U
						    : 
						   ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Load)
						     ? 4U
						     : 
						    ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Store)
						      ? 5U
						      : 
						     ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Branch)
						       ? 2U
						       : 
						      ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_I)
						        ? 1U
						        : 
						       ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Jal)
							 ? 3U
							 : 
							((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Jalr)
							  ? 3U
							  : 
							 ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Lui)
							   ? 6U
							   : 7U))))))));
    vlTOPp->Top__DOT__Control__DOT__c2__DOT___GEN_14 
	= ((~ (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Jal)) 
	   & ((~ (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Jalr)) 
	      & (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Lui)));
    vlTOPp->Top__DOT___T_33 = ((1U == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_NextPc)) 
			       & (~ (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_Branch)));
    vlTOPp->Top__DOT___T_41 = ((1U == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_NextPc)) 
			       & (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_Branch));
    vlTOPp->Top__DOT__Alu_io_in1 = (((0U == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_OpA)) 
				     | (3U == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_OpA)))
				     ? vlTOPp->Top__DOT__Register_io_rs1
				     : ((IData)(4U) 
					+ vlTOPp->Top__DOT__Pc__DOT__reg__024));
    vlTOPp->Top__DOT__AluControl_io_out = (((0U == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_AluOp)) 
					    | (1U == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_AluOp)))
					    ? ((8U 
						& (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						   >> 0x1bU)) 
					       | (7U 
						  & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						     >> 0xcU)))
					    : (((5U 
						 == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_AluOp)) 
						| (4U 
						   == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_AluOp)))
					        ? 0U
					        : (
						   (3U 
						    == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_AluOp))
						    ? 0x1fU
						    : 
						   ((2U 
						     == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_AluOp))
						     ? 
						    (0x10U 
						     | (7U 
							& (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							   >> 0xcU)))
						     : 0U))));
    vlTOPp->Top__DOT__Control__DOT__c2_io_OpB = ((0x33U 
						  != 
						  (0x7fU 
						   & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						 & ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Load) 
						    | ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Store) 
						       | ((~ (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Branch)) 
							  & ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_I) 
							     | (IData)(vlTOPp->Top__DOT__Control__DOT__c2__DOT___GEN_14))))));
    vlTOPp->Top__DOT__Control__DOT__c2_io_ExtSel = 
	((0x33U == (0x7fU & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data))
	  ? 0U : ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Load)
		   ? 0U : ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Store)
			    ? 2U : ((~ (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Branch)) 
				    & ((~ (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_I)) 
				       & (IData)(vlTOPp->Top__DOT__Control__DOT__c2__DOT___GEN_14))))));
}

VL_INLINE_OPT void VTop::_sequent__TOP__6(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_sequent__TOP__6\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT___T_33 = ((1U == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_NextPc)) 
			       & (~ (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_Branch)));
    vlTOPp->Top__DOT___T_41 = ((1U == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_NextPc)) 
			       & (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_Branch));
    vlTOPp->Top__DOT__Alu_io_in1 = (((0U == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_OpA)) 
				     | (3U == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_OpA)))
				     ? vlTOPp->Top__DOT__Register_io_rs1
				     : ((IData)(4U) 
					+ vlTOPp->Top__DOT__Pc__DOT__reg__024));
    vlTOPp->Top__DOT__AluControl_io_out = (((0U == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_AluOp)) 
					    | (1U == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_AluOp)))
					    ? ((8U 
						& (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						   >> 0x1bU)) 
					       | (7U 
						  & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						     >> 0xcU)))
					    : (((5U 
						 == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_AluOp)) 
						| (4U 
						   == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_AluOp)))
					        ? 0U
					        : (
						   (3U 
						    == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_AluOp))
						    ? 0x1fU
						    : 
						   ((2U 
						     == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_AluOp))
						     ? 
						    (0x10U 
						     | (7U 
							& (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							   >> 0xcU)))
						     : 0U))));
    vlTOPp->Top__DOT__Control__DOT__c2_io_OpB = ((0x33U 
						  != 
						  (0x7fU 
						   & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						 & ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Load) 
						    | ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Store) 
						       | ((~ (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Branch)) 
							  & ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_I) 
							     | (IData)(vlTOPp->Top__DOT__Control__DOT__c2__DOT___GEN_14))))));
    vlTOPp->Top__DOT__Control__DOT__c2_io_ExtSel = 
	((0x33U == (0x7fU & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data))
	  ? 0U : ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Load)
		   ? 0U : ((IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Store)
			    ? 2U : ((~ (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Branch)) 
				    & ((~ (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_I)) 
				       & (IData)(vlTOPp->Top__DOT__Control__DOT__c2__DOT___GEN_14))))));
    vlTOPp->Top__DOT__Alu_io_in2 = (((0U == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_ExtSel)) 
				     & (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_OpB))
				     ? vlTOPp->Top__DOT__ImmediateGeneration__DOT___T_77
				     : (((1U == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_ExtSel)) 
					 & (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_OpB))
					 ? (IData)(
						   (VL_ULL(0xfffffffffff) 
						    & ((QData)((IData)(
								       ((((0x80000000U 
									   & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)
									   ? 0xfffU
									   : 0U) 
									 << 0x14U) 
									| (0xfffffU 
									   & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									      >> 0xcU))))) 
						       << 0xcU)))
					 : (((2U == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_ExtSel)) 
					     & (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_OpB))
					     ? ((((0x80000000U 
						   & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)
						   ? 0xfffffU
						   : 0U) 
						 << 0xcU) 
						| ((0xfe0U 
						    & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						       >> 0x14U)) 
						   | (0x1fU 
						      & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							 >> 7U))))
					     : vlTOPp->Top__DOT__Register_io_rs2)));
}

void VTop::_settle__TOP__7(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_settle__TOP__7\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__Alu_io_in2 = (((0U == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_ExtSel)) 
				     & (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_OpB))
				     ? vlTOPp->Top__DOT__ImmediateGeneration__DOT___T_77
				     : (((1U == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_ExtSel)) 
					 & (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_OpB))
					 ? (IData)(
						   (VL_ULL(0xfffffffffff) 
						    & ((QData)((IData)(
								       ((((0x80000000U 
									   & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)
									   ? 0xfffU
									   : 0U) 
									 << 0x14U) 
									| (0xfffffU 
									   & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
									      >> 0xcU))))) 
						       << 0xcU)))
					 : (((2U == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_ExtSel)) 
					     & (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_OpB))
					     ? ((((0x80000000U 
						   & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)
						   ? 0xfffffU
						   : 0U) 
						 << 0xcU) 
						| ((0xfe0U 
						    & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
						       >> 0x14U)) 
						   | (0x1fU 
						      & (vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data 
							 >> 7U))))
					     : vlTOPp->Top__DOT__Register_io_rs2)));
    vlTOPp->Top__DOT__Alu__DOT___GEN_11 = ((0x15U == (IData)(vlTOPp->Top__DOT__AluControl_io_out))
					    ? (VL_GTES_III(1,32,32, vlTOPp->Top__DOT__Alu_io_in1, vlTOPp->Top__DOT__Alu_io_in2)
					        ? 1U
					        : 0U)
					    : ((0x17U 
						== (IData)(vlTOPp->Top__DOT__AluControl_io_out))
					        ? (
						   (vlTOPp->Top__DOT__Alu_io_in1 
						    >= vlTOPp->Top__DOT__Alu_io_in2)
						    ? 1U
						    : 0U)
					        : (
						   ((3U 
						     == (IData)(vlTOPp->Top__DOT__AluControl_io_out)) 
						    | (0x16U 
						       == (IData)(vlTOPp->Top__DOT__AluControl_io_out)))
						    ? 
						   ((vlTOPp->Top__DOT__Alu_io_in1 
						     < vlTOPp->Top__DOT__Alu_io_in2)
						     ? 1U
						     : 0U)
						    : 
						   ((0x10U 
						     == (IData)(vlTOPp->Top__DOT__AluControl_io_out))
						     ? 
						    ((vlTOPp->Top__DOT__Alu_io_in1 
						      == vlTOPp->Top__DOT__Alu_io_in2)
						      ? 1U
						      : 0U)
						     : 
						    (((2U 
						       == (IData)(vlTOPp->Top__DOT__AluControl_io_out)) 
						      | (0x14U 
							 == (IData)(vlTOPp->Top__DOT__AluControl_io_out)))
						      ? 
						     (VL_LTS_III(1,32,32, vlTOPp->Top__DOT__Alu_io_in1, vlTOPp->Top__DOT__Alu_io_in2)
						       ? 1U
						       : 0U)
						      : 
						     ((vlTOPp->Top__DOT__Alu_io_in1 
						       != vlTOPp->Top__DOT__Alu_io_in2)
						       ? 1U
						       : 0U))))));
}

VL_INLINE_OPT void VTop::_sequent__TOP__8(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_sequent__TOP__8\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__Alu__DOT___GEN_11 = ((0x15U == (IData)(vlTOPp->Top__DOT__AluControl_io_out))
					    ? (VL_GTES_III(1,32,32, vlTOPp->Top__DOT__Alu_io_in1, vlTOPp->Top__DOT__Alu_io_in2)
					        ? 1U
					        : 0U)
					    : ((0x17U 
						== (IData)(vlTOPp->Top__DOT__AluControl_io_out))
					        ? (
						   (vlTOPp->Top__DOT__Alu_io_in1 
						    >= vlTOPp->Top__DOT__Alu_io_in2)
						    ? 1U
						    : 0U)
					        : (
						   ((3U 
						     == (IData)(vlTOPp->Top__DOT__AluControl_io_out)) 
						    | (0x16U 
						       == (IData)(vlTOPp->Top__DOT__AluControl_io_out)))
						    ? 
						   ((vlTOPp->Top__DOT__Alu_io_in1 
						     < vlTOPp->Top__DOT__Alu_io_in2)
						     ? 1U
						     : 0U)
						    : 
						   ((0x10U 
						     == (IData)(vlTOPp->Top__DOT__AluControl_io_out))
						     ? 
						    ((vlTOPp->Top__DOT__Alu_io_in1 
						      == vlTOPp->Top__DOT__Alu_io_in2)
						      ? 1U
						      : 0U)
						     : 
						    (((2U 
						       == (IData)(vlTOPp->Top__DOT__AluControl_io_out)) 
						      | (0x14U 
							 == (IData)(vlTOPp->Top__DOT__AluControl_io_out)))
						      ? 
						     (VL_LTS_III(1,32,32, vlTOPp->Top__DOT__Alu_io_in1, vlTOPp->Top__DOT__Alu_io_in2)
						       ? 1U
						       : 0U)
						      : 
						     ((vlTOPp->Top__DOT__Alu_io_in1 
						       != vlTOPp->Top__DOT__Alu_io_in2)
						       ? 1U
						       : 0U))))));
    vlTOPp->Top__DOT__Alu__DOT___GEN_17 = ((4U == (IData)(vlTOPp->Top__DOT__AluControl_io_out))
					    ? (vlTOPp->Top__DOT__Alu_io_in1 
					       ^ vlTOPp->Top__DOT__Alu_io_in2)
					    : (((5U 
						 == (IData)(vlTOPp->Top__DOT__AluControl_io_out)) 
						| (0xdU 
						   == (IData)(vlTOPp->Top__DOT__AluControl_io_out)))
					        ? VL_SHIFTRS_III(32,32,5, vlTOPp->Top__DOT__Alu_io_in1, 
								 (0x1fU 
								  & vlTOPp->Top__DOT__Alu_io_in2))
					        : (
						   (6U 
						    == (IData)(vlTOPp->Top__DOT__AluControl_io_out))
						    ? 
						   (vlTOPp->Top__DOT__Alu_io_in1 
						    | vlTOPp->Top__DOT__Alu_io_in2)
						    : 
						   ((7U 
						     == (IData)(vlTOPp->Top__DOT__AluControl_io_out))
						     ? 
						    (vlTOPp->Top__DOT__Alu_io_in1 
						     & vlTOPp->Top__DOT__Alu_io_in2)
						     : 
						    ((8U 
						      == (IData)(vlTOPp->Top__DOT__AluControl_io_out))
						      ? 
						     (vlTOPp->Top__DOT__Alu_io_in1 
						      - vlTOPp->Top__DOT__Alu_io_in2)
						      : 
						     ((0x1fU 
						       == (IData)(vlTOPp->Top__DOT__AluControl_io_out))
						       ? vlTOPp->Top__DOT__Alu_io_in1
						       : 
						      ((0xfffffffcU 
							& (VL_NEGATE_I((IData)(
									       (1U 
										& ((IData)(vlTOPp->Top__DOT__Alu__DOT___GEN_11) 
										>> 1U)))) 
							   << 2U)) 
						       | (IData)(vlTOPp->Top__DOT__Alu__DOT___GEN_11))))))));
}

void VTop::_settle__TOP__9(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_settle__TOP__9\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__Alu__DOT___GEN_17 = ((4U == (IData)(vlTOPp->Top__DOT__AluControl_io_out))
					    ? (vlTOPp->Top__DOT__Alu_io_in1 
					       ^ vlTOPp->Top__DOT__Alu_io_in2)
					    : (((5U 
						 == (IData)(vlTOPp->Top__DOT__AluControl_io_out)) 
						| (0xdU 
						   == (IData)(vlTOPp->Top__DOT__AluControl_io_out)))
					        ? VL_SHIFTRS_III(32,32,5, vlTOPp->Top__DOT__Alu_io_in1, 
								 (0x1fU 
								  & vlTOPp->Top__DOT__Alu_io_in2))
					        : (
						   (6U 
						    == (IData)(vlTOPp->Top__DOT__AluControl_io_out))
						    ? 
						   (vlTOPp->Top__DOT__Alu_io_in1 
						    | vlTOPp->Top__DOT__Alu_io_in2)
						    : 
						   ((7U 
						     == (IData)(vlTOPp->Top__DOT__AluControl_io_out))
						     ? 
						    (vlTOPp->Top__DOT__Alu_io_in1 
						     & vlTOPp->Top__DOT__Alu_io_in2)
						     : 
						    ((8U 
						      == (IData)(vlTOPp->Top__DOT__AluControl_io_out))
						      ? 
						     (vlTOPp->Top__DOT__Alu_io_in1 
						      - vlTOPp->Top__DOT__Alu_io_in2)
						      : 
						     ((0x1fU 
						       == (IData)(vlTOPp->Top__DOT__AluControl_io_out))
						       ? vlTOPp->Top__DOT__Alu_io_in1
						       : 
						      ((0xfffffffcU 
							& (VL_NEGATE_I((IData)(
									       (1U 
										& ((IData)(vlTOPp->Top__DOT__Alu__DOT___GEN_11) 
										>> 1U)))) 
							   << 2U)) 
						       | (IData)(vlTOPp->Top__DOT__Alu__DOT___GEN_11))))))));
    vlTOPp->Top__DOT__Alu__DOT___GEN_19 = (VL_ULL(0x7fffffffffffffff) 
					   & ((0U == (IData)(vlTOPp->Top__DOT__AluControl_io_out))
					       ? (((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& ((vlTOPp->Top__DOT__Alu_io_in1 
										+ vlTOPp->Top__DOT__Alu_io_in2) 
										>> 0x1fU))))))) 
						   << 0x20U) 
						  | (QData)((IData)(
								    (vlTOPp->Top__DOT__Alu_io_in1 
								     + vlTOPp->Top__DOT__Alu_io_in2))))
					       : ((1U 
						   == (IData)(vlTOPp->Top__DOT__AluControl_io_out))
						   ? 
						  ((((QData)((IData)(
								     (0x7fffffffU 
								      & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Top__DOT__Alu_io_in1 
										>> 0x1fU))))))) 
						     << 0x20U) 
						    | (QData)((IData)(vlTOPp->Top__DOT__Alu_io_in1))) 
						   << 
						   (0x1fU 
						    & vlTOPp->Top__DOT__Alu_io_in2))
						   : 
						  (((QData)((IData)(
								    (0x7fffffffU 
								     & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Top__DOT__Alu__DOT___GEN_17 
										>> 0x1fU))))))) 
						    << 0x20U) 
						   | (QData)((IData)(vlTOPp->Top__DOT__Alu__DOT___GEN_17))))));
}

VL_INLINE_OPT void VTop::_sequent__TOP__10(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_sequent__TOP__10\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__Alu__DOT___GEN_19 = (VL_ULL(0x7fffffffffffffff) 
					   & ((0U == (IData)(vlTOPp->Top__DOT__AluControl_io_out))
					       ? (((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& ((vlTOPp->Top__DOT__Alu_io_in1 
										+ vlTOPp->Top__DOT__Alu_io_in2) 
										>> 0x1fU))))))) 
						   << 0x20U) 
						  | (QData)((IData)(
								    (vlTOPp->Top__DOT__Alu_io_in1 
								     + vlTOPp->Top__DOT__Alu_io_in2))))
					       : ((1U 
						   == (IData)(vlTOPp->Top__DOT__AluControl_io_out))
						   ? 
						  ((((QData)((IData)(
								     (0x7fffffffU 
								      & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Top__DOT__Alu_io_in1 
										>> 0x1fU))))))) 
						     << 0x20U) 
						    | (QData)((IData)(vlTOPp->Top__DOT__Alu_io_in1))) 
						   << 
						   (0x1fU 
						    & vlTOPp->Top__DOT__Alu_io_in2))
						   : 
						  (((QData)((IData)(
								    (0x7fffffffU 
								     & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Top__DOT__Alu__DOT___GEN_17 
										>> 0x1fU))))))) 
						    << 0x20U) 
						   | (QData)((IData)(vlTOPp->Top__DOT__Alu__DOT___GEN_17))))));
    vlTOPp->Top__DOT__Alu_io_Branch = ((1U == (IData)(vlTOPp->Top__DOT__Alu__DOT___GEN_19)) 
				       & (2U == (3U 
						 & ((IData)(vlTOPp->Top__DOT__AluControl_io_out) 
						    >> 3U))));
    vlTOPp->Top__DOT__DataMemory__DOT__mem___05FT_22_data 
	= vlTOPp->Top__DOT__DataMemory__DOT__mem[(0xffU 
						  & (IData)(
							    (vlTOPp->Top__DOT__Alu__DOT___GEN_19 
							     >> 2U)))];
}

void VTop::_settle__TOP__11(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_settle__TOP__11\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__Alu_io_Branch = ((1U == (IData)(vlTOPp->Top__DOT__Alu__DOT___GEN_19)) 
				       & (2U == (3U 
						 & ((IData)(vlTOPp->Top__DOT__AluControl_io_out) 
						    >> 3U))));
    vlTOPp->Top__DOT__DataMemory__DOT__mem___05FT_22_data 
	= vlTOPp->Top__DOT__DataMemory__DOT__mem[(0xffU 
						  & (IData)(
							    (vlTOPp->Top__DOT__Alu__DOT___GEN_19 
							     >> 2U)))];
    vlTOPp->Top__DOT__Pc_io_input = (((IData)(vlTOPp->Top__DOT___T_33) 
				      & (~ (IData)(vlTOPp->Top__DOT__Alu_io_Branch)))
				      ? ((IData)(4U) 
					 + vlTOPp->Top__DOT__Pc__DOT__reg__024)
				      : (((IData)(vlTOPp->Top__DOT___T_41) 
					  & (~ (IData)(vlTOPp->Top__DOT__Alu_io_Branch)))
					  ? ((IData)(4U) 
					     + vlTOPp->Top__DOT__Pc__DOT__reg__024)
					  : (((IData)(vlTOPp->Top__DOT___T_33) 
					      & (IData)(vlTOPp->Top__DOT__Alu_io_Branch))
					      ? ((IData)(4U) 
						 + vlTOPp->Top__DOT__Pc__DOT__reg__024)
					      : (((IData)(vlTOPp->Top__DOT___T_41) 
						  & (IData)(vlTOPp->Top__DOT__Alu_io_Branch))
						  ? 
						 (vlTOPp->Top__DOT__ImmediateGeneration__DOT___T_41 
						  + vlTOPp->Top__DOT__Pc__DOT__reg__024)
						  : 
						 ((0U 
						   == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_NextPc))
						   ? 
						  ((IData)(4U) 
						   + vlTOPp->Top__DOT__Pc__DOT__reg__024)
						   : 
						  ((2U 
						    == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_NextPc))
						    ? 
						   ((IData)(vlTOPp->Top__DOT__ImmediateGeneration__DOT___T_58) 
						    + vlTOPp->Top__DOT__Pc__DOT__reg__024)
						    : 
						   (0xfffffffeU 
						    & (vlTOPp->Top__DOT__Register_io_rs1 
						       + vlTOPp->Top__DOT__ImmediateGeneration__DOT___T_77))))))));
    vlTOPp->Top__DOT__Register_io_WriteData = (((0x33U 
						 != 
						 (0x7fU 
						  & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						& (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Load))
					        ? vlTOPp->Top__DOT__DataMemory__DOT__mem___05FT_22_data
					        : (IData)(vlTOPp->Top__DOT__Alu__DOT___GEN_19));
}

VL_INLINE_OPT void VTop::_sequent__TOP__12(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_sequent__TOP__12\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__Pc_io_input = (((IData)(vlTOPp->Top__DOT___T_33) 
				      & (~ (IData)(vlTOPp->Top__DOT__Alu_io_Branch)))
				      ? ((IData)(4U) 
					 + vlTOPp->Top__DOT__Pc__DOT__reg__024)
				      : (((IData)(vlTOPp->Top__DOT___T_41) 
					  & (~ (IData)(vlTOPp->Top__DOT__Alu_io_Branch)))
					  ? ((IData)(4U) 
					     + vlTOPp->Top__DOT__Pc__DOT__reg__024)
					  : (((IData)(vlTOPp->Top__DOT___T_33) 
					      & (IData)(vlTOPp->Top__DOT__Alu_io_Branch))
					      ? ((IData)(4U) 
						 + vlTOPp->Top__DOT__Pc__DOT__reg__024)
					      : (((IData)(vlTOPp->Top__DOT___T_41) 
						  & (IData)(vlTOPp->Top__DOT__Alu_io_Branch))
						  ? 
						 (vlTOPp->Top__DOT__ImmediateGeneration__DOT___T_41 
						  + vlTOPp->Top__DOT__Pc__DOT__reg__024)
						  : 
						 ((0U 
						   == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_NextPc))
						   ? 
						  ((IData)(4U) 
						   + vlTOPp->Top__DOT__Pc__DOT__reg__024)
						   : 
						  ((2U 
						    == (IData)(vlTOPp->Top__DOT__Control__DOT__c2_io_NextPc))
						    ? 
						   ((IData)(vlTOPp->Top__DOT__ImmediateGeneration__DOT___T_58) 
						    + vlTOPp->Top__DOT__Pc__DOT__reg__024)
						    : 
						   (0xfffffffeU 
						    & (vlTOPp->Top__DOT__Register_io_rs1 
						       + vlTOPp->Top__DOT__ImmediateGeneration__DOT___T_77))))))));
    vlTOPp->Top__DOT__Register_io_WriteData = (((0x33U 
						 != 
						 (0x7fU 
						  & vlTOPp->Top__DOT__Memory__DOT__mem___05FT_11_data)) 
						& (IData)(vlTOPp->Top__DOT__Control__DOT__c1_io_Load))
					        ? vlTOPp->Top__DOT__DataMemory__DOT__mem___05FT_22_data
					        : (IData)(vlTOPp->Top__DOT__Alu__DOT___GEN_19));
    vlTOPp->io_Reg_Out = vlTOPp->Top__DOT__Register_io_WriteData;
}

void VTop::_settle__TOP__13(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_settle__TOP__13\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_Reg_Out = vlTOPp->Top__DOT__Register_io_WriteData;
}

void VTop::_eval(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_eval\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__4(vlSymsp);
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlTOPp->_sequent__TOP__8(vlSymsp);
	vlTOPp->_sequent__TOP__10(vlSymsp);
	vlTOPp->_sequent__TOP__12(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VTop::_eval_initial(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_eval_initial\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void VTop::final() {
    VL_DEBUG_IF(VL_PRINTF("    VTop::final\n"); );
    // Variables
    VTop__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTop::_eval_settle(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_eval_settle\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlTOPp->_settle__TOP__11(vlSymsp);
    vlTOPp->_settle__TOP__13(vlSymsp);
}

VL_INLINE_OPT QData VTop::_change_request(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_change_request\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

void VTop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_Reg_Out = VL_RAND_RESET_I(32);
    Top__DOT__Alu_io_in1 = VL_RAND_RESET_I(32);
    Top__DOT__Alu_io_in2 = VL_RAND_RESET_I(32);
    Top__DOT__Alu_io_Branch = VL_RAND_RESET_I(1);
    Top__DOT__AluControl_io_out = VL_RAND_RESET_I(5);
    Top__DOT__Register_io_WriteData = VL_RAND_RESET_I(32);
    Top__DOT__Register_io_rs1 = VL_RAND_RESET_I(32);
    Top__DOT__Register_io_rs2 = VL_RAND_RESET_I(32);
    Top__DOT__Pc_io_input = VL_RAND_RESET_I(32);
    Top__DOT___T_33 = VL_RAND_RESET_I(1);
    Top__DOT___T_41 = VL_RAND_RESET_I(1);
    Top__DOT__Alu__DOT___GEN_11 = VL_RAND_RESET_I(2);
    Top__DOT__Alu__DOT___GEN_17 = VL_RAND_RESET_I(32);
    Top__DOT__Alu__DOT___GEN_19 = VL_RAND_RESET_Q(63);
    Top__DOT__Control__DOT__c1_io_Load = VL_RAND_RESET_I(1);
    Top__DOT__Control__DOT__c1_io_Store = VL_RAND_RESET_I(1);
    Top__DOT__Control__DOT__c1_io_Branch = VL_RAND_RESET_I(1);
    Top__DOT__Control__DOT__c1_io_I = VL_RAND_RESET_I(1);
    Top__DOT__Control__DOT__c1_io_Jal = VL_RAND_RESET_I(1);
    Top__DOT__Control__DOT__c1_io_Jalr = VL_RAND_RESET_I(1);
    Top__DOT__Control__DOT__c1_io_Lui = VL_RAND_RESET_I(1);
    Top__DOT__Control__DOT__c2_io_Branch = VL_RAND_RESET_I(1);
    Top__DOT__Control__DOT__c2_io_RegWrite = VL_RAND_RESET_I(1);
    Top__DOT__Control__DOT__c2_io_AluOp = VL_RAND_RESET_I(3);
    Top__DOT__Control__DOT__c2_io_OpA = VL_RAND_RESET_I(2);
    Top__DOT__Control__DOT__c2_io_OpB = VL_RAND_RESET_I(1);
    Top__DOT__Control__DOT__c2_io_ExtSel = VL_RAND_RESET_I(2);
    Top__DOT__Control__DOT__c2_io_NextPc = VL_RAND_RESET_I(2);
    Top__DOT__Control__DOT__c2__DOT___GEN_14 = VL_RAND_RESET_I(1);
    Top__DOT__ImmediateGeneration__DOT___T_41 = VL_RAND_RESET_I(32);
    Top__DOT__ImmediateGeneration__DOT___T_58 = VL_RAND_RESET_Q(33);
    Top__DOT__ImmediateGeneration__DOT___T_77 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_0 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_1 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_2 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_3 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_4 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_5 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_6 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_7 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_8 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_9 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_10 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_11 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_12 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_13 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_14 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_15 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_16 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_17 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_18 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_19 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_20 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_21 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_22 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_23 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_24 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_25 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_26 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_27 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_28 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_29 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_30 = VL_RAND_RESET_I(32);
    Top__DOT__Register__DOT__register_31 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    Top__DOT__Memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Top__DOT__Memory__DOT__mem___05FT_11_data = VL_RAND_RESET_I(32);
    Top__DOT__Pc__DOT__reg__024 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    Top__DOT__DataMemory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Top__DOT__DataMemory__DOT__mem___05FT_22_data = VL_RAND_RESET_I(32);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VTop::_configure_coverage(VTop__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
