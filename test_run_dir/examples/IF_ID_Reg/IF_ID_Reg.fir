;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit IF_ID_Reg : 
  module IF_ID_Reg : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip pc_in : UInt<10>, pc_out : UInt<10>, flip pc4_in : UInt<10>, pc4_out : UInt<10>, flip inst_in : UInt<32>, inst_out : UInt<32>}
    
    reg pcreg : UInt, clock @[IF_ID_Reg.scala 17:28]
    pcreg <= UInt<10>("h00") @[IF_ID_Reg.scala 17:28]
    reg pc4reg : UInt, clock @[IF_ID_Reg.scala 18:29]
    pc4reg <= UInt<10>("h00") @[IF_ID_Reg.scala 18:29]
    reg instreg : UInt, clock @[IF_ID_Reg.scala 19:30]
    instreg <= UInt<10>("h00") @[IF_ID_Reg.scala 19:30]
    pcreg <= io.pc_in @[IF_ID_Reg.scala 20:15]
    io.pc_out <= pcreg @[IF_ID_Reg.scala 21:19]
    pc4reg <= io.pc4_in @[IF_ID_Reg.scala 22:16]
    io.pc4_out <= pc4reg @[IF_ID_Reg.scala 23:20]
    instreg <= io.inst_in @[IF_ID_Reg.scala 24:17]
    io.inst_out <= instreg @[IF_ID_Reg.scala 25:21]
    
