circuit instfetch : @[:@2.0]
  module instfetch : @[:@3.2]
    input clock : Clock @[:@4.4]
    input reset : UInt<1> @[:@5.4]
    input io_wrAddr : UInt<10> @[:@6.4]
    output io_rdData : UInt<32> @[:@6.4]
    input io_input : UInt<32> @[:@6.4]
    output io_pc4 : UInt<32> @[:@6.4]
    output io_pc : UInt<32> @[:@6.4]
  
    mem mem : @[instfetch.scala 22:22:@15.4]
      data-type => UInt<32>
      depth => 1024
      read-latency => 0
      write-latency => 1
      reader => _T_22
      read-under-write => undefined
    reg reg : UInt<32>, clock with :
      reset => (UInt<1>("h0"), reg) @[instfetch.scala 17:26:@8.4]
    node _T_18 = add(reg, UInt<3>("h4")) @[instfetch.scala 19:23:@11.4]
    node _T_19 = tail(_T_18, 1) @[instfetch.scala 19:23:@12.4]
    io_rdData <= mem._T_22.data @[instfetch.scala 23:19:@17.4]
    io_pc4 <= _T_19 @[instfetch.scala 19:16:@13.4]
    io_pc <= reg @[instfetch.scala 20:15:@14.4]
    reg <= io_input @[instfetch.scala 17:26:@9.4 instfetch.scala 18:13:@10.4]
    mem._T_22.addr <= io_wrAddr @[instfetch.scala 23:25:@16.4]
    mem._T_22.en <= UInt<1>("h1") @[instfetch.scala 22:22:@15.4 instfetch.scala 23:25:@16.4]
    mem._T_22.clk <= clock @[instfetch.scala 23:25:@16.4]
