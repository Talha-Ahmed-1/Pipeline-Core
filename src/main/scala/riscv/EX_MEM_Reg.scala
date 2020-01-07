package riscv

import chisel3._


class EX_MEM_Reg extends Module {
  val io = IO (new Bundle {

	val rs2_in = Input(SInt(32.W))
	val rs2_out = Output(SInt(32.W))
	val alu_in = Input(SInt(32.W))
	val alu_out = Output(SInt(32.W))
	val rd_in = Input(SInt(5.W))
	val rd_out = Output(SInt(5.W))

	val MemWrite_in = Input(UInt(1.W))
	val MemRead_in = Input(UInt(1.W))
	val RegWrite_in = Input(UInt(1.W))
	val MemtoReg_in = Input(UInt(1.W))
	val MemWrite_out = Output(UInt(1.W))
	val MemRead_out = Output(UInt(1.W))
	val RegWrite_out = Output(UInt(1.W))
	val MemtoReg_out = Output(UInt(1.W))
  })

	val rs2reg = RegNext(0.S(32.W))
	rs2reg := io.rs2_in
	io.rs2_out := rs2reg

	val alureg = RegNext(0.S(32.W))
	alureg := io.alu_in
	io.alu_out := alureg

	val rdreg = RegNext(0.S(5.W))
	rdreg := io.rd_in
	io.rd_out := rdreg

	val MemWritereg = RegNext(0.U(1.W))
	val MemReadreg = RegNext(0.U(1.W))
	val RegWritereg = RegNext(0.U(1.W))
	val MemtoRegreg = RegNext(0.U(1.W))

	MemWritereg := io.MemWrite_in
	io.MemWrite_out := MemWritereg
	MemReadreg := io.MemRead_in
	io.MemRead_out := MemReadreg
	RegWritereg := io.RegWrite_in
	io.RegWrite_out := RegWritereg
	MemtoRegreg := io.MemtoReg_in
	io.MemtoReg_out := MemtoRegreg

}
