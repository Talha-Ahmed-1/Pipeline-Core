package riscv

import chisel3.iotesters.PeekPokeTester

class IF_ID_RegTests(c: IF_ID_Reg) extends PeekPokeTester(c) {
        step(1)
}
