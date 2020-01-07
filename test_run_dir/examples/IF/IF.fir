;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit IF : 
  module IF : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip pc_in : UInt<10>, pc_out : UInt<32>, flip pc4_in : UInt<10>, pc4_out : UInt<32>, flip inst_in : UInt<10>, inst_out : UInt<32>}
    
    reg pcreg : UInt, clock @[IF.scala 17:28]
    pcreg <= UInt<32>("h00") @[IF.scala 17:28]
    reg pc4reg : UInt, clock @[IF.scala 18:29]
    pc4reg <= UInt<32>("h00") @[IF.scala 18:29]
    reg instreg : UInt, clock @[IF.scala 19:30]
    instreg <= UInt<32>("h00") @[IF.scala 19:30]
    pcreg <= io.pc_in @[IF.scala 20:15]
    io.pc_out <= pcreg @[IF.scala 21:19]
    pc4reg <= io.pc4_in @[IF.scala 22:16]
    io.pc4_out <= pc4reg @[IF.scala 23:20]
    instreg <= io.inst_in @[IF.scala 24:17]
    io.inst_out <= instreg @[IF.scala 25:21]
    
