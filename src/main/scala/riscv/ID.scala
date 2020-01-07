package riscv

import chisel3._
import chisel3.util._

class ID extends Module {
  val io = IO (new Bundle {
//Register
	val RegWrite1 = Input(UInt(1.W))
	val rs1_s = Input(UInt(5.W))
	val rs2_s = Input(UInt(5.W))
	val rd = Input(UInt(5.W))
	val WriteData = Input(SInt(32.W))
	val rs1 = Output(SInt(32.W))
	val rs2 = Output(SInt(32.W))
//Control
	val opcode = Input(UInt(7.W))
	val MemWrite = Output(UInt(1.W))
	val Branch = Output(UInt(1.W))
	val MemRead = Output(UInt(1.W))
	val RegWrite = Output(UInt(1.W))
	val MemtoReg = Output(UInt(1.W))
	val AluOp = Output(UInt(3.W))
	val OpA = Output(UInt(2.W))
	val OpB = Output(UInt(1.W))
	val ExtSel = Output(UInt(2.W))
	val NextPc = Output(UInt(2.W))
//Immediate Generation
	val instruction = Input(UInt(32.W))
	val pc = Input(UInt(32.W))
	val s_imm = Output(SInt(32.W))
	val sb_imm = Output(SInt(32.W))
	val uj_imm = Output(SInt(32.W))
	val u_imm = Output(SInt(32.W))
	val i_imm = Output(SInt(32.W))
  })
//Register
	val register = Reg(Vec(32,SInt(32.W)))
	register(0) := 0.S
	io.rs1 := register(io.rs1_s)
	io.rs2 := register(io.rs2_s)
	when(io.RegWrite1 === 1.U){
		when(io.rd === "b00000".U){register(io.rd) := 0.S}
		.otherwise {register(io.rd) := io.WriteData}
	}
//Control
	val c1 = Module(new InstTypeDeco())
	val c2 = Module(new CntrlDecode())

	c1.io.opcode := io.opcode

	c2.io.R := c1.io.R
	c2.io.Load := c1.io.Load
	c2.io.Store := c1.io.Store
	c2.io.Branch1 := c1.io.Branch
	c2.io.I := c1.io.I
	c2.io.Jal := c1.io.Jal
	c2.io.Jalr := c1.io.Jalr
	c2.io.Lui := c1.io.Lui

	io.MemWrite := c2.io.MemWrite
	io.Branch := c2.io.Branch
	io.MemRead := c2.io.MemRead
	io.RegWrite := c2.io.RegWrite
	io.MemtoReg := c2.io.MemtoReg
	io.AluOp := c2.io.AluOp
	io.OpA := c2.io.OpA
	io.OpB := c2.io.OpB
	io.ExtSel := c2.io.ExtSel
	io.NextPc := c2.io.NextPc
//Immediate Generation
	//S
	val s_imm13 = Cat (io.instruction(31,25),io.instruction(11,7))
	io.s_imm := (Cat(Fill(20,s_imm13(11)),s_imm13)).asSInt
	//SB
	val sb_imm13 = Cat (io.instruction(31),io.instruction(7),io.instruction(30,25),io.instruction(11,8),"b0".U)
	io.sb_imm := ((Cat(Fill(19,sb_imm13(12)),sb_imm13)) + io.pc).asSInt
	//UJ
	val uj_imm21 = Cat (io.instruction(31),io.instruction(19,12),io.instruction(20),io.instruction(30,21),"b0".U)
	io.uj_imm := ((Cat(Fill(12,uj_imm21(20)),uj_imm21)) + io.pc).asSInt
	//U
	io.u_imm := ((Cat(Fill(12,io.instruction(31)),io.instruction(31,12))) << 12).asSInt
	//I
	io.i_imm := (Cat(Fill(20,io.instruction(31)),io.instruction(31,20))).asSInt
}
