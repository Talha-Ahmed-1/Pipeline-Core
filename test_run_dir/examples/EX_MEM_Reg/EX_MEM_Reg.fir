;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit EX_MEM_Reg : 
  module EX_MEM_Reg : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip rs2_in : SInt<32>, rs2_out : SInt<32>, flip alu_in : SInt<32>, alu_out : SInt<32>, flip rd_in : SInt<5>, rd_out : SInt<5>, flip MemWrite_in : UInt<1>, flip MemRead_in : UInt<1>, flip RegWrite_in : UInt<1>, flip MemtoReg_in : UInt<1>, MemWrite_out : UInt<1>, MemRead_out : UInt<1>, RegWrite_out : UInt<1>, MemtoReg_out : UInt<1>}
    
    reg rs2reg : SInt, clock @[EX_MEM_Reg.scala 26:29]
    rs2reg <= asSInt(UInt<32>("h00")) @[EX_MEM_Reg.scala 26:29]
    rs2reg <= io.rs2_in @[EX_MEM_Reg.scala 27:16]
    io.rs2_out <= rs2reg @[EX_MEM_Reg.scala 28:20]
    reg alureg : SInt, clock @[EX_MEM_Reg.scala 30:29]
    alureg <= asSInt(UInt<32>("h00")) @[EX_MEM_Reg.scala 30:29]
    alureg <= io.alu_in @[EX_MEM_Reg.scala 31:16]
    io.alu_out <= alureg @[EX_MEM_Reg.scala 32:20]
    reg rdreg : SInt, clock @[EX_MEM_Reg.scala 34:28]
    rdreg <= asSInt(UInt<5>("h00")) @[EX_MEM_Reg.scala 34:28]
    rdreg <= io.rd_in @[EX_MEM_Reg.scala 35:15]
    io.rd_out <= rdreg @[EX_MEM_Reg.scala 36:19]
    reg MemWritereg : UInt, clock @[EX_MEM_Reg.scala 38:34]
    MemWritereg <= UInt<1>("h00") @[EX_MEM_Reg.scala 38:34]
    reg MemReadreg : UInt, clock @[EX_MEM_Reg.scala 39:33]
    MemReadreg <= UInt<1>("h00") @[EX_MEM_Reg.scala 39:33]
    reg RegWritereg : UInt, clock @[EX_MEM_Reg.scala 40:34]
    RegWritereg <= UInt<1>("h00") @[EX_MEM_Reg.scala 40:34]
    reg MemtoRegreg : UInt, clock @[EX_MEM_Reg.scala 41:34]
    MemtoRegreg <= UInt<1>("h00") @[EX_MEM_Reg.scala 41:34]
    MemWritereg <= io.MemWrite_in @[EX_MEM_Reg.scala 43:21]
    io.MemWrite_out <= MemWritereg @[EX_MEM_Reg.scala 44:25]
    MemReadreg <= io.MemRead_in @[EX_MEM_Reg.scala 45:20]
    io.MemRead_out <= MemReadreg @[EX_MEM_Reg.scala 46:24]
    RegWritereg <= io.RegWrite_in @[EX_MEM_Reg.scala 47:21]
    io.RegWrite_out <= RegWritereg @[EX_MEM_Reg.scala 48:25]
    MemtoRegreg <= io.MemtoReg_in @[EX_MEM_Reg.scala 49:21]
    io.MemtoReg_out <= MemtoRegreg @[EX_MEM_Reg.scala 50:25]
    
