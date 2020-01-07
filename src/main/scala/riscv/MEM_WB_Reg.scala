package riscv

import chisel3._


class MEM_WB_Reg extends Module {
  val io = IO (new Bundle {

	val mem_in = Input(SInt(32.W))	
	val mem_out = Output(SInt(32.W))
	val alu_in = Input(SInt(32.W))
	val alu_out = Output(SInt(32.W))
	val rd_in = Input(SInt(5.W))
	val rd_out = Output(SInt(5.W))
	val RegWrite_in = Input(UInt(1.W))
	val RegWrite_out = Output(UInt(1.W))
	val MemtoReg_in = Input(UInt(1.W))
	val MemtoReg_out = Output(UInt(1.W))
  })
	val memreg = RegNext(0.S(32.W))
	memreg := io.mem_in
	io.mem_out := memreg

	val alureg = RegNext(0.S(32.W))
	alureg := io.alu_in
	io.alu_out := alureg

	val rdreg = RegNext(0.S(5.W))
	rdreg := io.rd_in
	io.rd_out := rdreg

	val RegWritereg = RegNext(0.U(1.W))
	val MemtoRegreg = RegNext(0.U(1.W))
	RegWritereg := io.RegWrite_in
	io.RegWrite_out := RegWritereg
	MemtoRegreg := io.MemtoReg_in
	io.MemtoReg_out := MemtoRegreg

	
}
