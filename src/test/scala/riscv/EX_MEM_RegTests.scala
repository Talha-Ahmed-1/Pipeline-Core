package riscv

import chisel3.iotesters.PeekPokeTester

class EX_MEM_RegTests(c: EX_MEM_Reg) extends PeekPokeTester(c) {
        step(1)
}
