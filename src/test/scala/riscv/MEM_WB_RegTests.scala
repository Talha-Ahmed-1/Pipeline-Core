package riscv

import chisel3.iotesters.PeekPokeTester

class MEM_WB_RegTests(c: MEM_WB_Reg) extends PeekPokeTester(c) {
        step(1)
}
