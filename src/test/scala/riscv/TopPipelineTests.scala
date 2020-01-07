package riscv

import chisel3.iotesters.PeekPokeTester

class TopPipelineTests(c: TopPipeline) extends PeekPokeTester(c) {
	step(6)
}
