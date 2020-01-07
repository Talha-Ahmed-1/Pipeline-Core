package riscv

import chisel3._
import chisel3.util.experimental.loadMemoryFromFile

class IF2 extends Module {
  val io = IO (new Bundle {
//Instruction Memory
	val wrAddr = Input(UInt(10.W))
	val rdData = Output(UInt(32.W))
//PC
	val input = Input(UInt(32.W))
	val pc4 = Output(UInt(32.W))
	val pc = Output(UInt(32.W))
  })
//Instruction Memory
	val mem = Mem(1024,UInt(32.W))
	io.rdData := mem(io.wrAddr)
	loadMemoryFromFile(mem,"/home/talha/riscv/shaheen/abc.txt")
//PC
	val reg = RegNext(0.U(32.W))
	reg := io.input
	io.pc4 := reg + 4.U
	io.pc := reg

}
