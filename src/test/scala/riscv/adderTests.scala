package riscv

import chisel3.iotesters.PeekPokeTester

class adderTests(c: adder) extends PeekPokeTester(c) {
        poke(c.io.a,1)
        poke(c.io.b, 1)
	poke(c.io.cin,1)
        step(1)
        expect(c.io.sum, 1)
	expect(c.io.cout, 1)
}
