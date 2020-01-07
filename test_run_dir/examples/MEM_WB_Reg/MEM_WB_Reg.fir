;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit MEM_WB_Reg : 
  module MEM_WB_Reg : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip mem_in : SInt<32>, mem_out : SInt<32>, flip alu_in : SInt<32>, alu_out : SInt<32>, flip rd_in : SInt<5>, rd_out : SInt<5>, flip RegWrite_in : UInt<1>, RegWrite_out : UInt<1>, flip MemtoReg_in : UInt<1>, MemtoReg_out : UInt<1>}
    
    reg memreg : SInt, clock @[MEM_WB_Reg.scala 20:29]
    memreg <= asSInt(UInt<32>("h00")) @[MEM_WB_Reg.scala 20:29]
    memreg <= io.mem_in @[MEM_WB_Reg.scala 21:16]
    io.mem_out <= memreg @[MEM_WB_Reg.scala 22:20]
    reg alureg : SInt, clock @[MEM_WB_Reg.scala 24:29]
    alureg <= asSInt(UInt<32>("h00")) @[MEM_WB_Reg.scala 24:29]
    alureg <= io.alu_in @[MEM_WB_Reg.scala 25:16]
    io.alu_out <= alureg @[MEM_WB_Reg.scala 26:20]
    reg rdreg : SInt, clock @[MEM_WB_Reg.scala 28:28]
    rdreg <= asSInt(UInt<5>("h00")) @[MEM_WB_Reg.scala 28:28]
    rdreg <= io.rd_in @[MEM_WB_Reg.scala 29:15]
    io.rd_out <= rdreg @[MEM_WB_Reg.scala 30:19]
    reg RegWritereg : UInt, clock @[MEM_WB_Reg.scala 32:34]
    RegWritereg <= UInt<1>("h00") @[MEM_WB_Reg.scala 32:34]
    reg MemtoRegreg : UInt, clock @[MEM_WB_Reg.scala 33:34]
    MemtoRegreg <= UInt<1>("h00") @[MEM_WB_Reg.scala 33:34]
    RegWritereg <= io.RegWrite_in @[MEM_WB_Reg.scala 34:21]
    io.RegWrite_out <= RegWritereg @[MEM_WB_Reg.scala 35:25]
    MemtoRegreg <= io.MemtoReg_in @[MEM_WB_Reg.scala 36:21]
    io.MemtoReg_out <= MemtoRegreg @[MEM_WB_Reg.scala 37:25]
    
