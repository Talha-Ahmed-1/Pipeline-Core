;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit instfetch : 
  module instfetch : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip wrAddr : UInt<10>, rdData : UInt<32>, flip input : UInt<32>, pc4 : UInt<32>, pc : UInt<32>}
    
    reg reg : UInt, clock @[instfetch.scala 17:26]
    reg <= UInt<32>("h00") @[instfetch.scala 17:26]
    reg <= io.input @[instfetch.scala 18:13]
    node _T_18 = add(reg, UInt<3>("h04")) @[instfetch.scala 19:23]
    node _T_19 = tail(_T_18, 1) @[instfetch.scala 19:23]
    io.pc4 <= _T_19 @[instfetch.scala 19:16]
    io.pc <= reg @[instfetch.scala 20:15]
    cmem mem : UInt<32>[1024] @[instfetch.scala 22:22]
    infer mport _T_22 = mem[io.wrAddr], clock @[instfetch.scala 23:25]
    io.rdData <= _T_22 @[instfetch.scala 23:19]
    
