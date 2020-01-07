circuit IF : @[:@2.0]
  module IF : @[:@3.2]
    input clock : Clock @[:@4.4]
    input reset : UInt<1> @[:@5.4]
    input io_pc_in : UInt<10> @[:@6.4]
    output io_pc_out : UInt<32> @[:@6.4]
    input io_pc4_in : UInt<10> @[:@6.4]
    output io_pc4_out : UInt<32> @[:@6.4]
    input io_inst_in : UInt<10> @[:@6.4]
    output io_inst_out : UInt<32> @[:@6.4]
  
    reg pcreg : UInt<32>, clock with :
      reset => (UInt<1>("h0"), pcreg) @[IF.scala 17:28:@8.4]
    reg pc4reg : UInt<32>, clock with :
      reset => (UInt<1>("h0"), pc4reg) @[IF.scala 18:29:@10.4]
    reg instreg : UInt<32>, clock with :
      reset => (UInt<1>("h0"), instreg) @[IF.scala 19:30:@12.4]
    io_pc_out <= pcreg @[IF.scala 21:19:@15.4]
    io_pc4_out <= pc4reg @[IF.scala 23:20:@17.4]
    io_inst_out <= instreg @[IF.scala 25:21:@19.4]
    pcreg <= io_pc_in @[IF.scala 17:28:@9.4 IF.scala 20:15:@14.4]
    pc4reg <= io_pc4_in @[IF.scala 18:29:@11.4 IF.scala 22:16:@16.4]
    instreg <= io_inst_in @[IF.scala 19:30:@13.4 IF.scala 24:17:@18.4]
