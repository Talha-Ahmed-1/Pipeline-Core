package riscv

import chisel3.iotesters.PeekPokeTester

class ID_EX_RegTests(c: ID_EX_Reg) extends PeekPokeTester(c) {
        step(1)
}
