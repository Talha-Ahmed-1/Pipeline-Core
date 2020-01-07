package riscv

import chisel3._


class IF_ID_Reg extends Module {
  val io = IO (new Bundle {

	val pc_in = Input(UInt(32.W))
	val pc_out = Output(UInt(32.W))
	val pc4_in = Input(UInt(32.W))
	val pc4_out = Output(UInt(32.W))
	val inst_in = Input(UInt(32.W))
	val inst_out = Output(UInt(32.W))
  })

	val pcreg = RegNext(0.U(32.W))
	val pc4reg = RegNext(0.U(32.W))
	val instreg = RegNext(0.U(32.W))
	pcreg := io.pc_in
	io.pc_out := pcreg
	pc4reg := io.pc4_in
	io.pc4_out := pc4reg
	instreg := io.inst_in
	io.inst_out := instreg
}
