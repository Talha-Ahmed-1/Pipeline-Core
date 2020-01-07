package riscv

import chisel3._
import chisel3.util._
import chisel3.core

class TopPipeline extends Module {
  val io = IO (new Bundle {
	//val Instruction = Input(UInt(32.W))
	//val Pc = Input(UInt(32.W))
	val Reg_Out = Output(SInt(32.W))
  })
	val Alu = Module(new Alu())
	val Control = Module(new Control())
	val ImmediateGeneration = Module(new ImmGen())
	val AluControl = Module(new AluCntrl())
	val Register = Module(new Register())
	val Memory = Module(new Memory())
	val Pc = Module(new Pc())
	val Jalr = Module(new Jalr())
	val DataMemory = Module(new MemoryD())

	val IF_ID = Module(new IF_ID_Reg())
	val ID_EX = Module(new ID_EX_Reg())
	val EX_MEM = Module(new EX_MEM_Reg())
	val MEM_WB = Module(new MEM_WB_Reg())
///////////////////////////////////////////////////////////////////////////Fetch////////////////////////////////////////////////////////
	Memory.io.wrAddr := Pc.io.pc(11,2)
	Pc.io.input := Pc.io.pc4
	IF_ID.io.pc_in := Pc.io.pc
	IF_ID.io.pc4_in := Pc.io.pc4
	IF_ID.io.inst_in := Memory.io.rdData
///////////////////////////////////////////////////////////////////////////Decode//////////////////////////////////////////////////////////
	Control.io.opcode := IF_ID.io.inst_out(6,0)
	ImmediateGeneration.io.instruction := IF_ID.io.inst_out
	ImmediateGeneration.io.pc := IF_ID.io.pc_out

	Register.io.rs1_s := IF_ID.io.inst_out(19,15)
	Register.io.rs2_s := IF_ID.io.inst_out(24,20)
////////////////////////////////////////////////////////////////////////////////Execute//////////////////////////////////////////////////////////
	ID_EX.io.pc_in := IF_ID.io.pc_out
	ID_EX.io.pc4_in := IF_ID.io.pc4_out
//
	ID_EX.io.MemWrite_in := Control.io.MemWrite
	ID_EX.io.Branch_in := Control.io.Branch
	ID_EX.io.MemRead_in := Control.io.MemRead
	ID_EX.io.RegWrite_in := Control.io.RegWrite
	ID_EX.io.MemtoReg_in := Control.io.MemtoReg
	ID_EX.io.AluOp_in := Control.io.AluOp
	ID_EX.io.OpA_in := Control.io.OpA
	ID_EX.io.OpB_in := Control.io.OpB
	ID_EX.io.NextPc_in := Control.io.NextPc
//
//	ID_EX.io.imm_in = Input(SInt(32.W))
//
	ID_EX.io.func3_in := IF_ID.io.inst_out(14,12)
	ID_EX.io.func7_in := IF_ID.io.inst_out(30)
//
	ID_EX.io.rs1_in := Register.io.rs1
	ID_EX.io.rs2_in := Register.io.rs2
	ID_EX.io.rs1_s_in := IF_ID.io.inst_out(19,15)
	ID_EX.io.rs2_s_in := IF_ID.io.inst_out(24,20)
	ID_EX.io.rd_in := IF_ID.io.inst_out(11,7)
//////////////////////////////////////////////////////////////////////
	AluControl.io.aluOp := ID_EX.io.AluOp_out
	AluControl.io.funct3 := ID_EX.io.func3_out
	AluControl.io.funct7 := ID_EX.io.func7_out

	when (Control.io.ExtSel === "b00".U && ID_EX.io.OpB_out === "b1".U){
		ID_EX.io.imm_in :=ImmediateGeneration.io.i_imm
		Alu.io.in2 := ID_EX.io.imm_out}
	.elsewhen (Control.io.ExtSel === "b01".U && ID_EX.io.OpB_out === "b1".U){
		ID_EX.io.imm_in :=ImmediateGeneration.io.u_imm
		Alu.io.in2 := ID_EX.io.imm_out}
	.elsewhen (Control.io.ExtSel === "b10".U && ID_EX.io.OpB_out === "b1".U){
		ID_EX.io.imm_in :=ImmediateGeneration.io.s_imm
		Alu.io.in2 := ID_EX.io.imm_out}
	.otherwise {Alu.io.in2 := ID_EX.io.rs2_out}
	Alu.io.AluControl := AluControl.io.out
	//Register.io.WriteData := Alu.io.out
	io.Reg_Out := Register.io.WriteData

	when (ID_EX.io.NextPc_out === "b01".U && ID_EX.io.Branch_out === "b0".U && Alu.io.Branch === "b0".U){Pc.io.input := ID_EX.io.pc4_out}
	.elsewhen (ID_EX.io.NextPc_out === "b01".U && ID_EX.io.Branch_out === "b1".U && Alu.io.Branch === "b0".U){Pc.io.input := ID_EX.io.pc4_out}
	.elsewhen (ID_EX.io.NextPc_out === "b01".U && ID_EX.io.Branch_out === "b0".U && Alu.io.Branch === "b1".U){Pc.io.input := ID_EX.io.pc4_out}
	.elsewhen (ID_EX.io.NextPc_out === "b01".U && ID_EX.io.Branch_out === "b1".U && Alu.io.Branch === "b1".U){
		ID_EX.io.imm_in := ImmediateGeneration.io.sb_imm//.asUInt
		Pc.io.input := ID_EX.io.imm_out.asUInt}
		//Pc.io.input := ImmediateGeneration.io.sb_imm.asUInt}
	.elsewhen (ID_EX.io.NextPc_out === "b00".U){Pc.io.input := ID_EX.io.pc4_out}
	.elsewhen (ID_EX.io.NextPc_out === "b10".U){
		ID_EX.io.imm_in := ImmediateGeneration.io.uj_imm//.asUInt
		Pc.io.input := ID_EX.io.imm_out.asUInt}
		//Pc.io.input := ImmediateGeneration.io.uj_imm.asUInt}
	.elsewhen (ID_EX.io.NextPc_out === "b11".U){Pc.io.input := Jalr.io.out.asUInt}
	.otherwise {Pc.io.input := DontCare}

	Jalr.io.in1 := ID_EX.io.rs1_out
	ID_EX.io.imm_in := ImmediateGeneration.io.i_imm
	Jalr.io.in2 := ID_EX.io.imm_out
	//Jalr.io.in2 := ImmediateGeneration.io.i_imm

	when (ID_EX.io.OpA_out === "b00".U || ID_EX.io.OpA_out === "b11".U){Alu.io.in1 := ID_EX.io.rs1_out}
	.elsewhen (ID_EX.io.OpA_out === "b10".U){Alu.io.in1 := ID_EX.io.pc4_out.asSInt}
	.otherwise {Alu.io.in1 := DontCare}
///////////////////////////////////////////////////////////////Memory////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
	EX_MEM.io.rs2_in := ID_EX.io.rs2_out
	EX_MEM.io.rd_in := ID_EX.io.rd_out
	EX_MEM.io.alu_in := Alu.io.out
	EX_MEM.io.MemWrite_in := ID_EX.io.MemWrite_out
	EX_MEM.io.MemRead_in := ID_EX.io.MemRead_out
	EX_MEM.io.RegWrite_in := ID_EX.io.RegWrite_out
	EX_MEM.io.MemtoReg_in := ID_EX.io.MemtoReg_out
////////////////////////////////////////////////////////////
	DataMemory.io.Addr := (EX_MEM.io.alu_out(9,2)).asUInt
	DataMemory.io.Data := EX_MEM.io.rs2_out
	DataMemory.io.MemWrite := EX_MEM.io.MemWrite_out
	DataMemory.io.MemRead := EX_MEM.io.MemtoReg_out
///////////////////////////////////////////////////////////////Write Back////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
	MEM_WB.io.rd_in := EX_MEM.io.rd_out
	MEM_WB.io.alu_in := EX_MEM.io.alu_out
	MEM_WB.io.mem_in := DataMemory.io.out
	MEM_WB.io.RegWrite_in := EX_MEM.io.RegWrite_out
	MEM_WB.io.MemtoReg_in := EX_MEM.io.MemtoReg_out
////////////////////////////////////////////////////////////
	when (MEM_WB.io.MemtoReg_out === 1.U){Register.io.WriteData := MEM_WB.io.mem_out}
	.otherwise {Register.io.WriteData := MEM_WB.io.alu_out}

	Register.io.RegWrite := MEM_WB.io.RegWrite_out
	Register.io.rd := MEM_WB.io.rd_out

}

