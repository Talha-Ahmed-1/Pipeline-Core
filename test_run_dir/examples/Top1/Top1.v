module Alu(
  input  [4:0]  io_AluControl,
  input  [31:0] io_in1,
  input  [31:0] io_in2,
  output        io_Branch,
  output [31:0] io_out
);
  wire  _T_16; // @[Alu.scala 15:29]
  wire [32:0] _T_17; // @[Alu.scala 15:62]
  wire [31:0] _T_18; // @[Alu.scala 15:62]
  wire [31:0] _T_19; // @[Alu.scala 15:62]
  wire  _T_21; // @[Alu.scala 17:34]
  wire [4:0] _T_22; // @[Alu.scala 17:76]
  wire [62:0] _GEN_21; // @[Alu.scala 17:67]
  wire [62:0] _T_23; // @[Alu.scala 17:67]
  wire  _T_25; // @[Alu.scala 19:34]
  wire [31:0] _T_26; // @[Alu.scala 19:67]
  wire [31:0] _T_27; // @[Alu.scala 19:67]
  wire  _T_29; // @[Alu.scala 21:34]
  wire  _T_31; // @[Alu.scala 21:66]
  wire  _T_32; // @[Alu.scala 21:49]
  wire [31:0] _T_34; // @[Alu.scala 21:99]
  wire  _T_36; // @[Alu.scala 23:34]
  wire [31:0] _T_37; // @[Alu.scala 23:67]
  wire [31:0] _T_38; // @[Alu.scala 23:67]
  wire  _T_40; // @[Alu.scala 25:34]
  wire [31:0] _T_41; // @[Alu.scala 25:67]
  wire [31:0] _T_42; // @[Alu.scala 25:67]
  wire  _T_44; // @[Alu.scala 27:34]
  wire [32:0] _T_45; // @[Alu.scala 27:67]
  wire [31:0] _T_46; // @[Alu.scala 27:67]
  wire [31:0] _T_47; // @[Alu.scala 27:67]
  wire  _T_49; // @[Alu.scala 29:34]
  wire  _T_51; // @[Alu.scala 31:34]
  wire  _T_52; // @[Alu.scala 32:30]
  wire [1:0] _GEN_0; // @[Alu.scala 32:40]
  wire  _T_56; // @[Alu.scala 35:34]
  wire [31:0] _T_57; // @[Alu.scala 36:30]
  wire [31:0] _T_58; // @[Alu.scala 36:47]
  wire  _T_59; // @[Alu.scala 36:37]
  wire [1:0] _GEN_1; // @[Alu.scala 36:54]
  wire  _T_63; // @[Alu.scala 39:34]
  wire  _T_65; // @[Alu.scala 39:66]
  wire  _T_66; // @[Alu.scala 39:49]
  wire  _T_69; // @[Alu.scala 40:37]
  wire [1:0] _GEN_2; // @[Alu.scala 40:53]
  wire  _T_73; // @[Alu.scala 43:34]
  wire  _T_74; // @[Alu.scala 44:30]
  wire [1:0] _GEN_3; // @[Alu.scala 44:41]
  wire  _T_78; // @[Alu.scala 47:34]
  wire  _T_80; // @[Alu.scala 47:66]
  wire  _T_81; // @[Alu.scala 47:49]
  wire  _T_82; // @[Alu.scala 48:30]
  wire [1:0] _GEN_4; // @[Alu.scala 48:39]
  wire  _T_87; // @[Alu.scala 52:30]
  wire [1:0] _GEN_5; // @[Alu.scala 52:41]
  wire [1:0] _GEN_7; // @[Alu.scala 47:81]
  wire [1:0] _GEN_8; // @[Alu.scala 43:49]
  wire [1:0] _GEN_9; // @[Alu.scala 39:81]
  wire [1:0] _GEN_10; // @[Alu.scala 35:49]
  wire [1:0] _GEN_11; // @[Alu.scala 31:49]
  wire [31:0] _GEN_12; // @[Alu.scala 29:49]
  wire [31:0] _GEN_13; // @[Alu.scala 27:49]
  wire [31:0] _GEN_14; // @[Alu.scala 25:49]
  wire [31:0] _GEN_15; // @[Alu.scala 23:49]
  wire [31:0] _GEN_16; // @[Alu.scala 21:81]
  wire [31:0] _GEN_17; // @[Alu.scala 19:49]
  wire [62:0] _GEN_18; // @[Alu.scala 17:49]
  wire [62:0] _GEN_19; // @[Alu.scala 15:44]
  wire  _T_91; // @[Alu.scala 57:22]
  wire [1:0] _T_92; // @[Alu.scala 57:46]
  wire  _T_94; // @[Alu.scala 57:52]
  wire [31:0] _GEN_22; // @[Alu.scala 15:52 Alu.scala 17:57 Alu.scala 19:57 Alu.scala 21:89 Alu.scala 23:57 Alu.scala 25:57 Alu.scala 27:57 Alu.scala 29:57 Alu.scala 32:48 Alu.scala 33:36 Alu.scala 36:62 Alu.scala 37:36 Alu.scala 40:61 Alu.scala 41:36 Alu.scala 44:49 Alu.scala 45:36 Alu.scala 48:47 Alu.scala 49:36 Alu.scala 52:49 Alu.scala 53:36]
  assign _T_16 = io_AluControl == 5'h0; // @[Alu.scala 15:29]
  assign _T_17 = $signed(io_in1) + $signed(io_in2); // @[Alu.scala 15:62]
  assign _T_18 = $signed(io_in1) + $signed(io_in2); // @[Alu.scala 15:62]
  assign _T_19 = $signed(_T_18); // @[Alu.scala 15:62]
  assign _T_21 = io_AluControl == 5'h1; // @[Alu.scala 17:34]
  assign _T_22 = io_in2[4:0]; // @[Alu.scala 17:76]
  assign _GEN_21 = {{31{io_in1[31]}},io_in1}; // @[Alu.scala 17:67]
  assign _T_23 = $signed(_GEN_21) << _T_22; // @[Alu.scala 17:67]
  assign _T_25 = io_AluControl == 5'h4; // @[Alu.scala 19:34]
  assign _T_26 = $signed(io_in1) ^ $signed(io_in2); // @[Alu.scala 19:67]
  assign _T_27 = $signed(_T_26); // @[Alu.scala 19:67]
  assign _T_29 = io_AluControl == 5'h5; // @[Alu.scala 21:34]
  assign _T_31 = io_AluControl == 5'hd; // @[Alu.scala 21:66]
  assign _T_32 = _T_29 | _T_31; // @[Alu.scala 21:49]
  assign _T_34 = $signed(io_in1) >>> _T_22; // @[Alu.scala 21:99]
  assign _T_36 = io_AluControl == 5'h6; // @[Alu.scala 23:34]
  assign _T_37 = $signed(io_in1) | $signed(io_in2); // @[Alu.scala 23:67]
  assign _T_38 = $signed(_T_37); // @[Alu.scala 23:67]
  assign _T_40 = io_AluControl == 5'h7; // @[Alu.scala 25:34]
  assign _T_41 = $signed(io_in1) & $signed(io_in2); // @[Alu.scala 25:67]
  assign _T_42 = $signed(_T_41); // @[Alu.scala 25:67]
  assign _T_44 = io_AluControl == 5'h8; // @[Alu.scala 27:34]
  assign _T_45 = $signed(io_in1) - $signed(io_in2); // @[Alu.scala 27:67]
  assign _T_46 = $signed(io_in1) - $signed(io_in2); // @[Alu.scala 27:67]
  assign _T_47 = $signed(_T_46); // @[Alu.scala 27:67]
  assign _T_49 = io_AluControl == 5'h1f; // @[Alu.scala 29:34]
  assign _T_51 = io_AluControl == 5'h15; // @[Alu.scala 31:34]
  assign _T_52 = $signed(io_in1) >= $signed(io_in2); // @[Alu.scala 32:30]
  assign _GEN_0 = _T_52 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 32:40]
  assign _T_56 = io_AluControl == 5'h17; // @[Alu.scala 35:34]
  assign _T_57 = $unsigned(io_in1); // @[Alu.scala 36:30]
  assign _T_58 = $unsigned(io_in2); // @[Alu.scala 36:47]
  assign _T_59 = _T_57 >= _T_58; // @[Alu.scala 36:37]
  assign _GEN_1 = _T_59 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 36:54]
  assign _T_63 = io_AluControl == 5'h3; // @[Alu.scala 39:34]
  assign _T_65 = io_AluControl == 5'h16; // @[Alu.scala 39:66]
  assign _T_66 = _T_63 | _T_65; // @[Alu.scala 39:49]
  assign _T_69 = _T_57 < _T_58; // @[Alu.scala 40:37]
  assign _GEN_2 = _T_69 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 40:53]
  assign _T_73 = io_AluControl == 5'h10; // @[Alu.scala 43:34]
  assign _T_74 = $signed(io_in1) == $signed(io_in2); // @[Alu.scala 44:30]
  assign _GEN_3 = _T_74 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 44:41]
  assign _T_78 = io_AluControl == 5'h2; // @[Alu.scala 47:34]
  assign _T_80 = io_AluControl == 5'h14; // @[Alu.scala 47:66]
  assign _T_81 = _T_78 | _T_80; // @[Alu.scala 47:49]
  assign _T_82 = $signed(io_in1) < $signed(io_in2); // @[Alu.scala 48:30]
  assign _GEN_4 = _T_82 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 48:39]
  assign _T_87 = $signed(io_in1) != $signed(io_in2); // @[Alu.scala 52:30]
  assign _GEN_5 = _T_87 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 52:41]
  assign _GEN_7 = _T_81 ? $signed(_GEN_4) : $signed(_GEN_5); // @[Alu.scala 47:81]
  assign _GEN_8 = _T_73 ? $signed(_GEN_3) : $signed(_GEN_7); // @[Alu.scala 43:49]
  assign _GEN_9 = _T_66 ? $signed(_GEN_2) : $signed(_GEN_8); // @[Alu.scala 39:81]
  assign _GEN_10 = _T_56 ? $signed(_GEN_1) : $signed(_GEN_9); // @[Alu.scala 35:49]
  assign _GEN_11 = _T_51 ? $signed(_GEN_0) : $signed(_GEN_10); // @[Alu.scala 31:49]
  assign _GEN_12 = _T_49 ? $signed(io_in1) : $signed({{30{_GEN_11[1]}},_GEN_11}); // @[Alu.scala 29:49]
  assign _GEN_13 = _T_44 ? $signed(_T_47) : $signed(_GEN_12); // @[Alu.scala 27:49]
  assign _GEN_14 = _T_40 ? $signed(_T_42) : $signed(_GEN_13); // @[Alu.scala 25:49]
  assign _GEN_15 = _T_36 ? $signed(_T_38) : $signed(_GEN_14); // @[Alu.scala 23:49]
  assign _GEN_16 = _T_32 ? $signed(_T_34) : $signed(_GEN_15); // @[Alu.scala 21:81]
  assign _GEN_17 = _T_25 ? $signed(_T_27) : $signed(_GEN_16); // @[Alu.scala 19:49]
  assign _GEN_18 = _T_21 ? $signed(_T_23) : $signed({{31{_GEN_17[31]}},_GEN_17}); // @[Alu.scala 17:49]
  assign _GEN_19 = _T_16 ? $signed({{31{_T_19[31]}},_T_19}) : $signed(_GEN_18); // @[Alu.scala 15:44]
  assign _T_91 = $signed(io_out) == $signed(32'sh1); // @[Alu.scala 57:22]
  assign _T_92 = io_AluControl[4:3]; // @[Alu.scala 57:46]
  assign _T_94 = _T_92 == 2'h2; // @[Alu.scala 57:52]
  assign io_Branch = _T_91 & _T_94; // @[Alu.scala 57:75 Alu.scala 58:31]
  assign _GEN_22 = _GEN_19[31:0]; // @[Alu.scala 15:52 Alu.scala 17:57 Alu.scala 19:57 Alu.scala 21:89 Alu.scala 23:57 Alu.scala 25:57 Alu.scala 27:57 Alu.scala 29:57 Alu.scala 32:48 Alu.scala 33:36 Alu.scala 36:62 Alu.scala 37:36 Alu.scala 40:61 Alu.scala 41:36 Alu.scala 44:49 Alu.scala 45:36 Alu.scala 48:47 Alu.scala 49:36 Alu.scala 52:49 Alu.scala 53:36]
  assign io_out = $signed(_GEN_22); // @[Alu.scala 15:52 Alu.scala 17:57 Alu.scala 19:57 Alu.scala 21:89 Alu.scala 23:57 Alu.scala 25:57 Alu.scala 27:57 Alu.scala 29:57 Alu.scala 32:48 Alu.scala 33:36 Alu.scala 36:62 Alu.scala 37:36 Alu.scala 40:61 Alu.scala 41:36 Alu.scala 44:49 Alu.scala 45:36 Alu.scala 48:47 Alu.scala 49:36 Alu.scala 52:49 Alu.scala 53:36]
endmodule
module InstTypeDeco(
  input  [6:0] io_opcode,
  output       io_R,
  output       io_Load,
  output       io_Store,
  output       io_Branch,
  output       io_I,
  output       io_Jal,
  output       io_Jalr,
  output       io_Lui
);
  wire  _T_24; // @[InstTypeDeco.scala 18:25]
  wire  _T_34; // @[InstTypeDeco.scala 28:30]
  wire  _T_44; // @[InstTypeDeco.scala 38:30]
  wire  _T_54; // @[InstTypeDeco.scala 48:30]
  wire  _T_64; // @[InstTypeDeco.scala 58:30]
  wire  _T_74; // @[InstTypeDeco.scala 68:30]
  wire  _T_84; // @[InstTypeDeco.scala 78:30]
  wire  _T_94; // @[InstTypeDeco.scala 88:30]
  wire  _GEN_4; // @[InstTypeDeco.scala 78:42]
  wire  _GEN_6; // @[InstTypeDeco.scala 68:42]
  wire  _GEN_8; // @[InstTypeDeco.scala 68:42]
  wire  _GEN_11; // @[InstTypeDeco.scala 58:42]
  wire  _GEN_12; // @[InstTypeDeco.scala 58:42]
  wire  _GEN_13; // @[InstTypeDeco.scala 58:42]
  wire  _GEN_16; // @[InstTypeDeco.scala 48:42]
  wire  _GEN_17; // @[InstTypeDeco.scala 48:42]
  wire  _GEN_18; // @[InstTypeDeco.scala 48:42]
  wire  _GEN_19; // @[InstTypeDeco.scala 48:42]
  wire  _GEN_22; // @[InstTypeDeco.scala 38:42]
  wire  _GEN_23; // @[InstTypeDeco.scala 38:42]
  wire  _GEN_24; // @[InstTypeDeco.scala 38:42]
  wire  _GEN_25; // @[InstTypeDeco.scala 38:42]
  wire  _GEN_26; // @[InstTypeDeco.scala 38:42]
  wire  _GEN_29; // @[InstTypeDeco.scala 28:41]
  wire  _GEN_30; // @[InstTypeDeco.scala 28:41]
  wire  _GEN_31; // @[InstTypeDeco.scala 28:41]
  wire  _GEN_32; // @[InstTypeDeco.scala 28:41]
  wire  _GEN_33; // @[InstTypeDeco.scala 28:41]
  wire  _GEN_34; // @[InstTypeDeco.scala 28:41]
  assign _T_24 = io_opcode == 7'h33; // @[InstTypeDeco.scala 18:25]
  assign _T_34 = io_opcode == 7'h3; // @[InstTypeDeco.scala 28:30]
  assign _T_44 = io_opcode == 7'h23; // @[InstTypeDeco.scala 38:30]
  assign _T_54 = io_opcode == 7'h63; // @[InstTypeDeco.scala 48:30]
  assign _T_64 = io_opcode == 7'h13; // @[InstTypeDeco.scala 58:30]
  assign _T_74 = io_opcode == 7'h67; // @[InstTypeDeco.scala 68:30]
  assign _T_84 = io_opcode == 7'h6f; // @[InstTypeDeco.scala 78:30]
  assign _T_94 = io_opcode == 7'h37; // @[InstTypeDeco.scala 88:30]
  assign _GEN_4 = _T_84 ? 1'h0 : _T_94; // @[InstTypeDeco.scala 78:42]
  assign _GEN_6 = _T_74 ? 1'h0 : _T_84; // @[InstTypeDeco.scala 68:42]
  assign _GEN_8 = _T_74 ? 1'h0 : _GEN_4; // @[InstTypeDeco.scala 68:42]
  assign _GEN_11 = _T_64 ? 1'h0 : _GEN_6; // @[InstTypeDeco.scala 58:42]
  assign _GEN_12 = _T_64 ? 1'h0 : _T_74; // @[InstTypeDeco.scala 58:42]
  assign _GEN_13 = _T_64 ? 1'h0 : _GEN_8; // @[InstTypeDeco.scala 58:42]
  assign _GEN_16 = _T_54 ? 1'h0 : _T_64; // @[InstTypeDeco.scala 48:42]
  assign _GEN_17 = _T_54 ? 1'h0 : _GEN_11; // @[InstTypeDeco.scala 48:42]
  assign _GEN_18 = _T_54 ? 1'h0 : _GEN_12; // @[InstTypeDeco.scala 48:42]
  assign _GEN_19 = _T_54 ? 1'h0 : _GEN_13; // @[InstTypeDeco.scala 48:42]
  assign _GEN_22 = _T_44 ? 1'h0 : _T_54; // @[InstTypeDeco.scala 38:42]
  assign _GEN_23 = _T_44 ? 1'h0 : _GEN_16; // @[InstTypeDeco.scala 38:42]
  assign _GEN_24 = _T_44 ? 1'h0 : _GEN_17; // @[InstTypeDeco.scala 38:42]
  assign _GEN_25 = _T_44 ? 1'h0 : _GEN_18; // @[InstTypeDeco.scala 38:42]
  assign _GEN_26 = _T_44 ? 1'h0 : _GEN_19; // @[InstTypeDeco.scala 38:42]
  assign _GEN_29 = _T_34 ? 1'h0 : _T_44; // @[InstTypeDeco.scala 28:41]
  assign _GEN_30 = _T_34 ? 1'h0 : _GEN_22; // @[InstTypeDeco.scala 28:41]
  assign _GEN_31 = _T_34 ? 1'h0 : _GEN_23; // @[InstTypeDeco.scala 28:41]
  assign _GEN_32 = _T_34 ? 1'h0 : _GEN_24; // @[InstTypeDeco.scala 28:41]
  assign _GEN_33 = _T_34 ? 1'h0 : _GEN_25; // @[InstTypeDeco.scala 28:41]
  assign _GEN_34 = _T_34 ? 1'h0 : _GEN_26; // @[InstTypeDeco.scala 28:41]
  assign io_R = io_opcode == 7'h33; // @[InstTypeDeco.scala 19:22 InstTypeDeco.scala 29:22 InstTypeDeco.scala 39:22 InstTypeDeco.scala 49:22 InstTypeDeco.scala 59:22 InstTypeDeco.scala 69:22 InstTypeDeco.scala 79:22 InstTypeDeco.scala 89:22 InstTypeDeco.scala 99:22]
  assign io_Load = _T_24 ? 1'h0 : _T_34; // @[InstTypeDeco.scala 20:25 InstTypeDeco.scala 30:25 InstTypeDeco.scala 40:25 InstTypeDeco.scala 50:25 InstTypeDeco.scala 60:25 InstTypeDeco.scala 70:25 InstTypeDeco.scala 80:25 InstTypeDeco.scala 90:25 InstTypeDeco.scala 100:25]
  assign io_Store = _T_24 ? 1'h0 : _GEN_29; // @[InstTypeDeco.scala 21:26 InstTypeDeco.scala 31:26 InstTypeDeco.scala 41:26 InstTypeDeco.scala 51:26 InstTypeDeco.scala 61:26 InstTypeDeco.scala 71:26 InstTypeDeco.scala 81:26 InstTypeDeco.scala 91:26 InstTypeDeco.scala 101:26]
  assign io_Branch = _T_24 ? 1'h0 : _GEN_30; // @[InstTypeDeco.scala 22:27 InstTypeDeco.scala 32:27 InstTypeDeco.scala 42:27 InstTypeDeco.scala 52:27 InstTypeDeco.scala 62:27 InstTypeDeco.scala 72:27 InstTypeDeco.scala 82:27 InstTypeDeco.scala 92:27 InstTypeDeco.scala 102:27]
  assign io_I = _T_24 ? 1'h0 : _GEN_31; // @[InstTypeDeco.scala 23:22 InstTypeDeco.scala 33:22 InstTypeDeco.scala 43:22 InstTypeDeco.scala 53:22 InstTypeDeco.scala 63:22 InstTypeDeco.scala 73:22 InstTypeDeco.scala 83:22 InstTypeDeco.scala 93:22 InstTypeDeco.scala 103:22]
  assign io_Jal = _T_24 ? 1'h0 : _GEN_32; // @[InstTypeDeco.scala 24:24 InstTypeDeco.scala 34:24 InstTypeDeco.scala 44:24 InstTypeDeco.scala 54:24 InstTypeDeco.scala 64:24 InstTypeDeco.scala 74:24 InstTypeDeco.scala 84:24 InstTypeDeco.scala 94:24 InstTypeDeco.scala 104:24]
  assign io_Jalr = _T_24 ? 1'h0 : _GEN_33; // @[InstTypeDeco.scala 25:25 InstTypeDeco.scala 35:25 InstTypeDeco.scala 45:25 InstTypeDeco.scala 55:25 InstTypeDeco.scala 65:25 InstTypeDeco.scala 75:25 InstTypeDeco.scala 85:25 InstTypeDeco.scala 95:25 InstTypeDeco.scala 105:25]
  assign io_Lui = _T_24 ? 1'h0 : _GEN_34; // @[InstTypeDeco.scala 26:24 InstTypeDeco.scala 36:24 InstTypeDeco.scala 46:24 InstTypeDeco.scala 56:24 InstTypeDeco.scala 66:24 InstTypeDeco.scala 76:24 InstTypeDeco.scala 86:24 InstTypeDeco.scala 96:24 InstTypeDeco.scala 106:24]
endmodule
module CntrlDecode(
  input        io_R,
  input        io_Load,
  input        io_Store,
  input        io_Branch1,
  input        io_I,
  input        io_Jal,
  input        io_Jalr,
  input        io_Lui,
  output       io_MemWrite,
  output       io_Branch,
  output       io_MemRead,
  output       io_RegWrite,
  output       io_MemtoReg,
  output [2:0] io_AluOp,
  output [1:0] io_OpA,
  output       io_OpB,
  output [1:0] io_ExtSel,
  output [1:0] io_NextPc
);
  wire [2:0] _GEN_2; // @[CntrlDecode.scala 111:38]
  wire [1:0] _GEN_3; // @[CntrlDecode.scala 111:38]
  wire  _GEN_5; // @[CntrlDecode.scala 99:39]
  wire [2:0] _GEN_6; // @[CntrlDecode.scala 99:39]
  wire [1:0] _GEN_7; // @[CntrlDecode.scala 99:39]
  wire  _GEN_8; // @[CntrlDecode.scala 99:39]
  wire [1:0] _GEN_9; // @[CntrlDecode.scala 99:39]
  wire  _GEN_11; // @[CntrlDecode.scala 87:38]
  wire [2:0] _GEN_12; // @[CntrlDecode.scala 87:38]
  wire [1:0] _GEN_13; // @[CntrlDecode.scala 87:38]
  wire  _GEN_14; // @[CntrlDecode.scala 87:38]
  wire [1:0] _GEN_15; // @[CntrlDecode.scala 87:38]
  wire  _GEN_17; // @[CntrlDecode.scala 75:36]
  wire [2:0] _GEN_18; // @[CntrlDecode.scala 75:36]
  wire [1:0] _GEN_19; // @[CntrlDecode.scala 75:36]
  wire  _GEN_20; // @[CntrlDecode.scala 75:36]
  wire  _GEN_21; // @[CntrlDecode.scala 75:36]
  wire [1:0] _GEN_22; // @[CntrlDecode.scala 75:36]
  wire  _GEN_25; // @[CntrlDecode.scala 63:39]
  wire [2:0] _GEN_26; // @[CntrlDecode.scala 63:39]
  wire [1:0] _GEN_27; // @[CntrlDecode.scala 63:39]
  wire  _GEN_28; // @[CntrlDecode.scala 63:39]
  wire  _GEN_29; // @[CntrlDecode.scala 63:39]
  wire [1:0] _GEN_30; // @[CntrlDecode.scala 63:39]
  wire  _GEN_32; // @[CntrlDecode.scala 51:40]
  wire  _GEN_34; // @[CntrlDecode.scala 51:40]
  wire [2:0] _GEN_35; // @[CntrlDecode.scala 51:40]
  wire [1:0] _GEN_36; // @[CntrlDecode.scala 51:40]
  wire  _GEN_37; // @[CntrlDecode.scala 51:40]
  wire [1:0] _GEN_38; // @[CntrlDecode.scala 51:40]
  wire [1:0] _GEN_39; // @[CntrlDecode.scala 51:40]
  wire  _GEN_40; // @[CntrlDecode.scala 39:39]
  wire  _GEN_41; // @[CntrlDecode.scala 39:39]
  wire  _GEN_43; // @[CntrlDecode.scala 39:39]
  wire [2:0] _GEN_44; // @[CntrlDecode.scala 39:39]
  wire [1:0] _GEN_45; // @[CntrlDecode.scala 39:39]
  wire  _GEN_46; // @[CntrlDecode.scala 39:39]
  wire [1:0] _GEN_47; // @[CntrlDecode.scala 39:39]
  wire [1:0] _GEN_48; // @[CntrlDecode.scala 39:39]
  assign _GEN_2 = io_Lui ? 3'h6 : 3'h7; // @[CntrlDecode.scala 111:38]
  assign _GEN_3 = io_Lui ? 2'h3 : 2'h0; // @[CntrlDecode.scala 111:38]
  assign _GEN_5 = io_Jalr ? 1'h1 : io_Lui; // @[CntrlDecode.scala 99:39]
  assign _GEN_6 = io_Jalr ? 3'h3 : _GEN_2; // @[CntrlDecode.scala 99:39]
  assign _GEN_7 = io_Jalr ? 2'h2 : _GEN_3; // @[CntrlDecode.scala 99:39]
  assign _GEN_8 = io_Jalr ? 1'h0 : io_Lui; // @[CntrlDecode.scala 99:39]
  assign _GEN_9 = io_Jalr ? 2'h3 : 2'h0; // @[CntrlDecode.scala 99:39]
  assign _GEN_11 = io_Jal ? 1'h1 : _GEN_5; // @[CntrlDecode.scala 87:38]
  assign _GEN_12 = io_Jal ? 3'h3 : _GEN_6; // @[CntrlDecode.scala 87:38]
  assign _GEN_13 = io_Jal ? 2'h2 : _GEN_7; // @[CntrlDecode.scala 87:38]
  assign _GEN_14 = io_Jal ? 1'h0 : _GEN_8; // @[CntrlDecode.scala 87:38]
  assign _GEN_15 = io_Jal ? 2'h2 : _GEN_9; // @[CntrlDecode.scala 87:38]
  assign _GEN_17 = io_I ? 1'h1 : _GEN_11; // @[CntrlDecode.scala 75:36]
  assign _GEN_18 = io_I ? 3'h1 : _GEN_12; // @[CntrlDecode.scala 75:36]
  assign _GEN_19 = io_I ? 2'h0 : _GEN_13; // @[CntrlDecode.scala 75:36]
  assign _GEN_20 = io_I ? 1'h1 : _GEN_14; // @[CntrlDecode.scala 75:36]
  assign _GEN_21 = io_I ? 1'h0 : _GEN_14; // @[CntrlDecode.scala 75:36]
  assign _GEN_22 = io_I ? 2'h0 : _GEN_15; // @[CntrlDecode.scala 75:36]
  assign _GEN_25 = io_Branch1 ? 1'h0 : _GEN_17; // @[CntrlDecode.scala 63:39]
  assign _GEN_26 = io_Branch1 ? 3'h2 : _GEN_18; // @[CntrlDecode.scala 63:39]
  assign _GEN_27 = io_Branch1 ? 2'h0 : _GEN_19; // @[CntrlDecode.scala 63:39]
  assign _GEN_28 = io_Branch1 ? 1'h0 : _GEN_20; // @[CntrlDecode.scala 63:39]
  assign _GEN_29 = io_Branch1 ? 1'h0 : _GEN_21; // @[CntrlDecode.scala 63:39]
  assign _GEN_30 = io_Branch1 ? 2'h1 : _GEN_22; // @[CntrlDecode.scala 63:39]
  assign _GEN_32 = io_Store ? 1'h0 : io_Branch1; // @[CntrlDecode.scala 51:40]
  assign _GEN_34 = io_Store ? 1'h0 : _GEN_25; // @[CntrlDecode.scala 51:40]
  assign _GEN_35 = io_Store ? 3'h5 : _GEN_26; // @[CntrlDecode.scala 51:40]
  assign _GEN_36 = io_Store ? 2'h0 : _GEN_27; // @[CntrlDecode.scala 51:40]
  assign _GEN_37 = io_Store ? 1'h1 : _GEN_28; // @[CntrlDecode.scala 51:40]
  assign _GEN_38 = io_Store ? 2'h2 : {{1'd0}, _GEN_29}; // @[CntrlDecode.scala 51:40]
  assign _GEN_39 = io_Store ? 2'h0 : _GEN_30; // @[CntrlDecode.scala 51:40]
  assign _GEN_40 = io_Load ? 1'h0 : io_Store; // @[CntrlDecode.scala 39:39]
  assign _GEN_41 = io_Load ? 1'h0 : _GEN_32; // @[CntrlDecode.scala 39:39]
  assign _GEN_43 = io_Load ? 1'h1 : _GEN_34; // @[CntrlDecode.scala 39:39]
  assign _GEN_44 = io_Load ? 3'h4 : _GEN_35; // @[CntrlDecode.scala 39:39]
  assign _GEN_45 = io_Load ? 2'h0 : _GEN_36; // @[CntrlDecode.scala 39:39]
  assign _GEN_46 = io_Load ? 1'h1 : _GEN_37; // @[CntrlDecode.scala 39:39]
  assign _GEN_47 = io_Load ? 2'h0 : _GEN_38; // @[CntrlDecode.scala 39:39]
  assign _GEN_48 = io_Load ? 2'h0 : _GEN_39; // @[CntrlDecode.scala 39:39]
  assign io_MemWrite = io_R ? 1'h0 : _GEN_40; // @[CntrlDecode.scala 28:29 CntrlDecode.scala 40:29 CntrlDecode.scala 52:29 CntrlDecode.scala 64:29 CntrlDecode.scala 76:29 CntrlDecode.scala 88:29 CntrlDecode.scala 100:29 CntrlDecode.scala 112:29 CntrlDecode.scala 124:29]
  assign io_Branch = io_R ? 1'h0 : _GEN_41; // @[CntrlDecode.scala 29:27 CntrlDecode.scala 41:27 CntrlDecode.scala 53:27 CntrlDecode.scala 65:27 CntrlDecode.scala 77:27 CntrlDecode.scala 89:27 CntrlDecode.scala 101:27 CntrlDecode.scala 113:27 CntrlDecode.scala 125:27]
  assign io_MemRead = io_R ? 1'h0 : io_Load; // @[CntrlDecode.scala 30:28 CntrlDecode.scala 42:28 CntrlDecode.scala 54:28 CntrlDecode.scala 66:28 CntrlDecode.scala 78:28 CntrlDecode.scala 90:28 CntrlDecode.scala 102:28 CntrlDecode.scala 114:28 CntrlDecode.scala 126:28]
  assign io_RegWrite = io_R ? 1'h1 : _GEN_43; // @[CntrlDecode.scala 31:29 CntrlDecode.scala 43:29 CntrlDecode.scala 55:29 CntrlDecode.scala 67:29 CntrlDecode.scala 79:29 CntrlDecode.scala 91:29 CntrlDecode.scala 103:29 CntrlDecode.scala 115:29 CntrlDecode.scala 127:29]
  assign io_MemtoReg = io_R ? 1'h0 : io_Load; // @[CntrlDecode.scala 32:29 CntrlDecode.scala 44:29 CntrlDecode.scala 56:29 CntrlDecode.scala 68:29 CntrlDecode.scala 80:29 CntrlDecode.scala 92:29 CntrlDecode.scala 104:29 CntrlDecode.scala 116:29 CntrlDecode.scala 128:29]
  assign io_AluOp = io_R ? 3'h0 : _GEN_44; // @[CntrlDecode.scala 33:26 CntrlDecode.scala 45:26 CntrlDecode.scala 57:26 CntrlDecode.scala 69:26 CntrlDecode.scala 81:26 CntrlDecode.scala 93:26 CntrlDecode.scala 105:26 CntrlDecode.scala 117:26 CntrlDecode.scala 129:26]
  assign io_OpA = io_R ? 2'h0 : _GEN_45; // @[CntrlDecode.scala 34:24 CntrlDecode.scala 46:24 CntrlDecode.scala 58:24 CntrlDecode.scala 70:24 CntrlDecode.scala 82:24 CntrlDecode.scala 94:24 CntrlDecode.scala 106:24 CntrlDecode.scala 118:24 CntrlDecode.scala 130:24]
  assign io_OpB = io_R ? 1'h0 : _GEN_46; // @[CntrlDecode.scala 35:24 CntrlDecode.scala 47:24 CntrlDecode.scala 59:24 CntrlDecode.scala 71:24 CntrlDecode.scala 83:24 CntrlDecode.scala 95:24 CntrlDecode.scala 107:24 CntrlDecode.scala 119:24 CntrlDecode.scala 131:24]
  assign io_ExtSel = io_R ? 2'h0 : _GEN_47; // @[CntrlDecode.scala 36:27 CntrlDecode.scala 48:27 CntrlDecode.scala 60:27 CntrlDecode.scala 72:27 CntrlDecode.scala 84:27 CntrlDecode.scala 96:27 CntrlDecode.scala 108:27 CntrlDecode.scala 120:27 CntrlDecode.scala 132:27]
  assign io_NextPc = io_R ? 2'h0 : _GEN_48; // @[CntrlDecode.scala 37:27 CntrlDecode.scala 49:27 CntrlDecode.scala 61:27 CntrlDecode.scala 73:27 CntrlDecode.scala 85:27 CntrlDecode.scala 97:27 CntrlDecode.scala 109:27 CntrlDecode.scala 121:27 CntrlDecode.scala 133:27]
endmodule
module Control(
  input  [6:0] io_opcode,
  output       io_MemWrite,
  output       io_Branch,
  output       io_MemRead,
  output       io_RegWrite,
  output       io_MemtoReg,
  output [2:0] io_AluOp,
  output [1:0] io_OpA,
  output       io_OpB,
  output [1:0] io_ExtSel,
  output [1:0] io_NextPc
);
  wire [6:0] c1_io_opcode; // @[Control.scala 20:24]
  wire  c1_io_R; // @[Control.scala 20:24]
  wire  c1_io_Load; // @[Control.scala 20:24]
  wire  c1_io_Store; // @[Control.scala 20:24]
  wire  c1_io_Branch; // @[Control.scala 20:24]
  wire  c1_io_I; // @[Control.scala 20:24]
  wire  c1_io_Jal; // @[Control.scala 20:24]
  wire  c1_io_Jalr; // @[Control.scala 20:24]
  wire  c1_io_Lui; // @[Control.scala 20:24]
  wire  c2_io_R; // @[Control.scala 21:24]
  wire  c2_io_Load; // @[Control.scala 21:24]
  wire  c2_io_Store; // @[Control.scala 21:24]
  wire  c2_io_Branch1; // @[Control.scala 21:24]
  wire  c2_io_I; // @[Control.scala 21:24]
  wire  c2_io_Jal; // @[Control.scala 21:24]
  wire  c2_io_Jalr; // @[Control.scala 21:24]
  wire  c2_io_Lui; // @[Control.scala 21:24]
  wire  c2_io_MemWrite; // @[Control.scala 21:24]
  wire  c2_io_Branch; // @[Control.scala 21:24]
  wire  c2_io_MemRead; // @[Control.scala 21:24]
  wire  c2_io_RegWrite; // @[Control.scala 21:24]
  wire  c2_io_MemtoReg; // @[Control.scala 21:24]
  wire [2:0] c2_io_AluOp; // @[Control.scala 21:24]
  wire [1:0] c2_io_OpA; // @[Control.scala 21:24]
  wire  c2_io_OpB; // @[Control.scala 21:24]
  wire [1:0] c2_io_ExtSel; // @[Control.scala 21:24]
  wire [1:0] c2_io_NextPc; // @[Control.scala 21:24]
  InstTypeDeco c1 ( // @[Control.scala 20:24]
    .io_opcode(c1_io_opcode),
    .io_R(c1_io_R),
    .io_Load(c1_io_Load),
    .io_Store(c1_io_Store),
    .io_Branch(c1_io_Branch),
    .io_I(c1_io_I),
    .io_Jal(c1_io_Jal),
    .io_Jalr(c1_io_Jalr),
    .io_Lui(c1_io_Lui)
  );
  CntrlDecode c2 ( // @[Control.scala 21:24]
    .io_R(c2_io_R),
    .io_Load(c2_io_Load),
    .io_Store(c2_io_Store),
    .io_Branch1(c2_io_Branch1),
    .io_I(c2_io_I),
    .io_Jal(c2_io_Jal),
    .io_Jalr(c2_io_Jalr),
    .io_Lui(c2_io_Lui),
    .io_MemWrite(c2_io_MemWrite),
    .io_Branch(c2_io_Branch),
    .io_MemRead(c2_io_MemRead),
    .io_RegWrite(c2_io_RegWrite),
    .io_MemtoReg(c2_io_MemtoReg),
    .io_AluOp(c2_io_AluOp),
    .io_OpA(c2_io_OpA),
    .io_OpB(c2_io_OpB),
    .io_ExtSel(c2_io_ExtSel),
    .io_NextPc(c2_io_NextPc)
  );
  assign io_MemWrite = c2_io_MemWrite; // @[Control.scala 34:21]
  assign io_Branch = c2_io_Branch; // @[Control.scala 35:19]
  assign io_MemRead = c2_io_MemRead; // @[Control.scala 36:20]
  assign io_RegWrite = c2_io_RegWrite; // @[Control.scala 37:21]
  assign io_MemtoReg = c2_io_MemtoReg; // @[Control.scala 38:21]
  assign io_AluOp = c2_io_AluOp; // @[Control.scala 39:18]
  assign io_OpA = c2_io_OpA; // @[Control.scala 40:16]
  assign io_OpB = c2_io_OpB; // @[Control.scala 41:16]
  assign io_ExtSel = c2_io_ExtSel; // @[Control.scala 42:19]
  assign io_NextPc = c2_io_NextPc; // @[Control.scala 43:19]
  assign c1_io_opcode = io_opcode; // @[Control.scala 23:22]
  assign c2_io_R = c1_io_R; // @[Control.scala 25:17]
  assign c2_io_Load = c1_io_Load; // @[Control.scala 26:20]
  assign c2_io_Store = c1_io_Store; // @[Control.scala 27:21]
  assign c2_io_Branch1 = c1_io_Branch; // @[Control.scala 28:23]
  assign c2_io_I = c1_io_I; // @[Control.scala 29:17]
  assign c2_io_Jal = c1_io_Jal; // @[Control.scala 30:19]
  assign c2_io_Jalr = c1_io_Jalr; // @[Control.scala 31:20]
  assign c2_io_Lui = c1_io_Lui; // @[Control.scala 32:19]
endmodule
module ImmGen(
  input  [31:0] io_instruction,
  input  [31:0] io_pc,
  output [31:0] io_s_imm,
  output [31:0] io_sb_imm,
  output [31:0] io_uj_imm,
  output [31:0] io_u_imm,
  output [31:0] io_i_imm
);
  wire [6:0] _T_19; // @[ImmGen.scala 18:42]
  wire [4:0] _T_20; // @[ImmGen.scala 18:64]
  wire [11:0] s_imm13; // @[Cat.scala 30:58]
  wire  _T_21; // @[ImmGen.scala 19:41]
  wire [19:0] _T_25; // @[Bitwise.scala 72:12]
  wire [31:0] _T_26; // @[Cat.scala 30:58]
  wire  _T_28; // @[ImmGen.scala 21:43]
  wire  _T_29; // @[ImmGen.scala 21:62]
  wire [5:0] _T_30; // @[ImmGen.scala 21:80]
  wire [3:0] _T_31; // @[ImmGen.scala 21:102]
  wire [12:0] sb_imm13; // @[Cat.scala 30:58]
  wire  _T_36; // @[ImmGen.scala 22:44]
  wire [18:0] _T_40; // @[Bitwise.scala 72:12]
  wire [31:0] _T_41; // @[Cat.scala 30:58]
  wire [32:0] _T_42; // @[ImmGen.scala 22:61]
  wire [31:0] _T_43; // @[ImmGen.scala 22:61]
  wire [7:0] _T_46; // @[ImmGen.scala 24:62]
  wire  _T_47; // @[ImmGen.scala 24:84]
  wire [9:0] _T_48; // @[ImmGen.scala 24:103]
  wire [20:0] uj_imm21; // @[Cat.scala 30:58]
  wire  _T_53; // @[ImmGen.scala 25:44]
  wire [11:0] _T_57; // @[Bitwise.scala 72:12]
  wire [32:0] _T_58; // @[Cat.scala 30:58]
  wire [32:0] _GEN_0; // @[ImmGen.scala 25:61]
  wire [33:0] _T_59; // @[ImmGen.scala 25:61]
  wire [32:0] _T_60; // @[ImmGen.scala 25:61]
  wire [32:0] _T_61; // @[ImmGen.scala 25:70]
  wire [11:0] _T_66; // @[Bitwise.scala 72:12]
  wire [19:0] _T_67; // @[ImmGen.scala 27:69]
  wire [31:0] _T_68; // @[Cat.scala 30:58]
  wire [43:0] _GEN_1; // @[ImmGen.scala 27:79]
  wire [43:0] _T_69; // @[ImmGen.scala 27:79]
  wire [43:0] _T_70; // @[ImmGen.scala 27:86]
  wire [19:0] _T_75; // @[Bitwise.scala 72:12]
  wire [11:0] _T_76; // @[ImmGen.scala 29:68]
  wire [31:0] _T_77; // @[Cat.scala 30:58]
  wire [31:0] _GEN_2; // @[ImmGen.scala 25:19]
  wire [31:0] _GEN_3; // @[ImmGen.scala 27:18]
  assign _T_19 = io_instruction[31:25]; // @[ImmGen.scala 18:42]
  assign _T_20 = io_instruction[11:7]; // @[ImmGen.scala 18:64]
  assign s_imm13 = {_T_19,_T_20}; // @[Cat.scala 30:58]
  assign _T_21 = s_imm13[11]; // @[ImmGen.scala 19:41]
  assign _T_25 = _T_21 ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12]
  assign _T_26 = {_T_25,_T_19,_T_20}; // @[Cat.scala 30:58]
  assign _T_28 = io_instruction[31]; // @[ImmGen.scala 21:43]
  assign _T_29 = io_instruction[7]; // @[ImmGen.scala 21:62]
  assign _T_30 = io_instruction[30:25]; // @[ImmGen.scala 21:80]
  assign _T_31 = io_instruction[11:8]; // @[ImmGen.scala 21:102]
  assign sb_imm13 = {_T_28,_T_29,_T_30,_T_31,1'h0}; // @[Cat.scala 30:58]
  assign _T_36 = sb_imm13[12]; // @[ImmGen.scala 22:44]
  assign _T_40 = _T_36 ? 19'h7ffff : 19'h0; // @[Bitwise.scala 72:12]
  assign _T_41 = {_T_40,_T_28,_T_29,_T_30,_T_31,1'h0}; // @[Cat.scala 30:58]
  assign _T_42 = _T_41 + io_pc; // @[ImmGen.scala 22:61]
  assign _T_43 = _T_41 + io_pc; // @[ImmGen.scala 22:61]
  assign _T_46 = io_instruction[19:12]; // @[ImmGen.scala 24:62]
  assign _T_47 = io_instruction[20]; // @[ImmGen.scala 24:84]
  assign _T_48 = io_instruction[30:21]; // @[ImmGen.scala 24:103]
  assign uj_imm21 = {_T_28,_T_46,_T_47,_T_48,1'h0}; // @[Cat.scala 30:58]
  assign _T_53 = uj_imm21[20]; // @[ImmGen.scala 25:44]
  assign _T_57 = _T_53 ? 12'hfff : 12'h0; // @[Bitwise.scala 72:12]
  assign _T_58 = {_T_57,_T_28,_T_46,_T_47,_T_48,1'h0}; // @[Cat.scala 30:58]
  assign _GEN_0 = {{1'd0}, io_pc}; // @[ImmGen.scala 25:61]
  assign _T_59 = _T_58 + _GEN_0; // @[ImmGen.scala 25:61]
  assign _T_60 = _T_58 + _GEN_0; // @[ImmGen.scala 25:61]
  assign _T_61 = $signed(_T_60); // @[ImmGen.scala 25:70]
  assign _T_66 = _T_28 ? 12'hfff : 12'h0; // @[Bitwise.scala 72:12]
  assign _T_67 = io_instruction[31:12]; // @[ImmGen.scala 27:69]
  assign _T_68 = {_T_66,_T_67}; // @[Cat.scala 30:58]
  assign _GEN_1 = {{12'd0}, _T_68}; // @[ImmGen.scala 27:79]
  assign _T_69 = _GEN_1 << 12; // @[ImmGen.scala 27:79]
  assign _T_70 = $signed(_T_69); // @[ImmGen.scala 27:86]
  assign _T_75 = _T_28 ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12]
  assign _T_76 = io_instruction[31:20]; // @[ImmGen.scala 29:68]
  assign _T_77 = {_T_75,_T_76}; // @[Cat.scala 30:58]
  assign io_s_imm = $signed(_T_26); // @[ImmGen.scala 19:18]
  assign io_sb_imm = $signed(_T_43); // @[ImmGen.scala 22:19]
  assign _GEN_2 = _T_61[31:0]; // @[ImmGen.scala 25:19]
  assign io_uj_imm = $signed(_GEN_2); // @[ImmGen.scala 25:19]
  assign _GEN_3 = _T_70[31:0]; // @[ImmGen.scala 27:18]
  assign io_u_imm = $signed(_GEN_3); // @[ImmGen.scala 27:18]
  assign io_i_imm = $signed(_T_77); // @[ImmGen.scala 29:18]
endmodule
module AluCntrl(
  input  [2:0] io_aluOp,
  input  [2:0] io_funct3,
  input        io_funct7,
  output [4:0] io_out
);
  wire  _T_14; // @[AluCntrl.scala 11:24]
  wire  _T_16; // @[AluCntrl.scala 11:49]
  wire  _T_17; // @[AluCntrl.scala 11:37]
  wire [4:0] _T_20; // @[Cat.scala 30:58]
  wire  _T_22; // @[AluCntrl.scala 12:29]
  wire  _T_24; // @[AluCntrl.scala 12:54]
  wire  _T_25; // @[AluCntrl.scala 12:42]
  wire  _T_28; // @[AluCntrl.scala 13:29]
  wire  _T_31; // @[AluCntrl.scala 14:29]
  wire [4:0] _T_33; // @[Cat.scala 30:58]
  wire [4:0] _GEN_1; // @[AluCntrl.scala 14:42]
  wire [4:0] _GEN_2; // @[AluCntrl.scala 13:42]
  wire [4:0] _GEN_3; // @[AluCntrl.scala 12:67]
  assign _T_14 = io_aluOp == 3'h0; // @[AluCntrl.scala 11:24]
  assign _T_16 = io_aluOp == 3'h1; // @[AluCntrl.scala 11:49]
  assign _T_17 = _T_14 | _T_16; // @[AluCntrl.scala 11:37]
  assign _T_20 = {1'h0,io_funct7,io_funct3}; // @[Cat.scala 30:58]
  assign _T_22 = io_aluOp == 3'h5; // @[AluCntrl.scala 12:29]
  assign _T_24 = io_aluOp == 3'h4; // @[AluCntrl.scala 12:54]
  assign _T_25 = _T_22 | _T_24; // @[AluCntrl.scala 12:42]
  assign _T_28 = io_aluOp == 3'h3; // @[AluCntrl.scala 13:29]
  assign _T_31 = io_aluOp == 3'h2; // @[AluCntrl.scala 14:29]
  assign _T_33 = {2'h2,io_funct3}; // @[Cat.scala 30:58]
  assign _GEN_1 = _T_31 ? _T_33 : 5'h0; // @[AluCntrl.scala 14:42]
  assign _GEN_2 = _T_28 ? 5'h1f : _GEN_1; // @[AluCntrl.scala 13:42]
  assign _GEN_3 = _T_25 ? 5'h0 : _GEN_2; // @[AluCntrl.scala 12:67]
  assign io_out = _T_17 ? _T_20 : _GEN_3; // @[AluCntrl.scala 11:70 AluCntrl.scala 12:75 AluCntrl.scala 13:50 AluCntrl.scala 14:50 AluCntrl.scala 15:50]
endmodule
module Register(
  input         clock,
  input         io_RegWrite,
  input  [4:0]  io_rs1_s,
  input  [4:0]  io_rs2_s,
  input  [4:0]  io_rd,
  input  [31:0] io_WriteData,
  output [31:0] io_rs1,
  output [31:0] io_rs2
);
  reg [31:0] register_0; // @[Register.scala 16:27]
  reg [31:0] _RAND_0;
  reg [31:0] register_1; // @[Register.scala 16:27]
  reg [31:0] _RAND_1;
  reg [31:0] register_2; // @[Register.scala 16:27]
  reg [31:0] _RAND_2;
  reg [31:0] register_3; // @[Register.scala 16:27]
  reg [31:0] _RAND_3;
  reg [31:0] register_4; // @[Register.scala 16:27]
  reg [31:0] _RAND_4;
  reg [31:0] register_5; // @[Register.scala 16:27]
  reg [31:0] _RAND_5;
  reg [31:0] register_6; // @[Register.scala 16:27]
  reg [31:0] _RAND_6;
  reg [31:0] register_7; // @[Register.scala 16:27]
  reg [31:0] _RAND_7;
  reg [31:0] register_8; // @[Register.scala 16:27]
  reg [31:0] _RAND_8;
  reg [31:0] register_9; // @[Register.scala 16:27]
  reg [31:0] _RAND_9;
  reg [31:0] register_10; // @[Register.scala 16:27]
  reg [31:0] _RAND_10;
  reg [31:0] register_11; // @[Register.scala 16:27]
  reg [31:0] _RAND_11;
  reg [31:0] register_12; // @[Register.scala 16:27]
  reg [31:0] _RAND_12;
  reg [31:0] register_13; // @[Register.scala 16:27]
  reg [31:0] _RAND_13;
  reg [31:0] register_14; // @[Register.scala 16:27]
  reg [31:0] _RAND_14;
  reg [31:0] register_15; // @[Register.scala 16:27]
  reg [31:0] _RAND_15;
  reg [31:0] register_16; // @[Register.scala 16:27]
  reg [31:0] _RAND_16;
  reg [31:0] register_17; // @[Register.scala 16:27]
  reg [31:0] _RAND_17;
  reg [31:0] register_18; // @[Register.scala 16:27]
  reg [31:0] _RAND_18;
  reg [31:0] register_19; // @[Register.scala 16:27]
  reg [31:0] _RAND_19;
  reg [31:0] register_20; // @[Register.scala 16:27]
  reg [31:0] _RAND_20;
  reg [31:0] register_21; // @[Register.scala 16:27]
  reg [31:0] _RAND_21;
  reg [31:0] register_22; // @[Register.scala 16:27]
  reg [31:0] _RAND_22;
  reg [31:0] register_23; // @[Register.scala 16:27]
  reg [31:0] _RAND_23;
  reg [31:0] register_24; // @[Register.scala 16:27]
  reg [31:0] _RAND_24;
  reg [31:0] register_25; // @[Register.scala 16:27]
  reg [31:0] _RAND_25;
  reg [31:0] register_26; // @[Register.scala 16:27]
  reg [31:0] _RAND_26;
  reg [31:0] register_27; // @[Register.scala 16:27]
  reg [31:0] _RAND_27;
  reg [31:0] register_28; // @[Register.scala 16:27]
  reg [31:0] _RAND_28;
  reg [31:0] register_29; // @[Register.scala 16:27]
  reg [31:0] _RAND_29;
  reg [31:0] register_30; // @[Register.scala 16:27]
  reg [31:0] _RAND_30;
  reg [31:0] register_31; // @[Register.scala 16:27]
  reg [31:0] _RAND_31;
  wire [31:0] _GEN_1; // @[Register.scala 18:16]
  wire [31:0] _GEN_2; // @[Register.scala 18:16]
  wire [31:0] _GEN_3; // @[Register.scala 18:16]
  wire [31:0] _GEN_4; // @[Register.scala 18:16]
  wire [31:0] _GEN_5; // @[Register.scala 18:16]
  wire [31:0] _GEN_6; // @[Register.scala 18:16]
  wire [31:0] _GEN_7; // @[Register.scala 18:16]
  wire [31:0] _GEN_8; // @[Register.scala 18:16]
  wire [31:0] _GEN_9; // @[Register.scala 18:16]
  wire [31:0] _GEN_10; // @[Register.scala 18:16]
  wire [31:0] _GEN_11; // @[Register.scala 18:16]
  wire [31:0] _GEN_12; // @[Register.scala 18:16]
  wire [31:0] _GEN_13; // @[Register.scala 18:16]
  wire [31:0] _GEN_14; // @[Register.scala 18:16]
  wire [31:0] _GEN_15; // @[Register.scala 18:16]
  wire [31:0] _GEN_16; // @[Register.scala 18:16]
  wire [31:0] _GEN_17; // @[Register.scala 18:16]
  wire [31:0] _GEN_18; // @[Register.scala 18:16]
  wire [31:0] _GEN_19; // @[Register.scala 18:16]
  wire [31:0] _GEN_20; // @[Register.scala 18:16]
  wire [31:0] _GEN_21; // @[Register.scala 18:16]
  wire [31:0] _GEN_22; // @[Register.scala 18:16]
  wire [31:0] _GEN_23; // @[Register.scala 18:16]
  wire [31:0] _GEN_24; // @[Register.scala 18:16]
  wire [31:0] _GEN_25; // @[Register.scala 18:16]
  wire [31:0] _GEN_26; // @[Register.scala 18:16]
  wire [31:0] _GEN_27; // @[Register.scala 18:16]
  wire [31:0] _GEN_28; // @[Register.scala 18:16]
  wire [31:0] _GEN_29; // @[Register.scala 18:16]
  wire [31:0] _GEN_30; // @[Register.scala 18:16]
  wire [31:0] _GEN_33; // @[Register.scala 19:16]
  wire [31:0] _GEN_34; // @[Register.scala 19:16]
  wire [31:0] _GEN_35; // @[Register.scala 19:16]
  wire [31:0] _GEN_36; // @[Register.scala 19:16]
  wire [31:0] _GEN_37; // @[Register.scala 19:16]
  wire [31:0] _GEN_38; // @[Register.scala 19:16]
  wire [31:0] _GEN_39; // @[Register.scala 19:16]
  wire [31:0] _GEN_40; // @[Register.scala 19:16]
  wire [31:0] _GEN_41; // @[Register.scala 19:16]
  wire [31:0] _GEN_42; // @[Register.scala 19:16]
  wire [31:0] _GEN_43; // @[Register.scala 19:16]
  wire [31:0] _GEN_44; // @[Register.scala 19:16]
  wire [31:0] _GEN_45; // @[Register.scala 19:16]
  wire [31:0] _GEN_46; // @[Register.scala 19:16]
  wire [31:0] _GEN_47; // @[Register.scala 19:16]
  wire [31:0] _GEN_48; // @[Register.scala 19:16]
  wire [31:0] _GEN_49; // @[Register.scala 19:16]
  wire [31:0] _GEN_50; // @[Register.scala 19:16]
  wire [31:0] _GEN_51; // @[Register.scala 19:16]
  wire [31:0] _GEN_52; // @[Register.scala 19:16]
  wire [31:0] _GEN_53; // @[Register.scala 19:16]
  wire [31:0] _GEN_54; // @[Register.scala 19:16]
  wire [31:0] _GEN_55; // @[Register.scala 19:16]
  wire [31:0] _GEN_56; // @[Register.scala 19:16]
  wire [31:0] _GEN_57; // @[Register.scala 19:16]
  wire [31:0] _GEN_58; // @[Register.scala 19:16]
  wire [31:0] _GEN_59; // @[Register.scala 19:16]
  wire [31:0] _GEN_60; // @[Register.scala 19:16]
  wire [31:0] _GEN_61; // @[Register.scala 19:16]
  wire [31:0] _GEN_62; // @[Register.scala 19:16]
  wire  _T_62; // @[Register.scala 21:28]
  wire [31:0] _GEN_65; // @[Register.scala 21:60]
  wire [31:0] _GEN_66; // @[Register.scala 21:60]
  wire [31:0] _GEN_67; // @[Register.scala 21:60]
  wire [31:0] _GEN_68; // @[Register.scala 21:60]
  wire [31:0] _GEN_69; // @[Register.scala 21:60]
  wire [31:0] _GEN_70; // @[Register.scala 21:60]
  wire [31:0] _GEN_71; // @[Register.scala 21:60]
  wire [31:0] _GEN_72; // @[Register.scala 21:60]
  wire [31:0] _GEN_73; // @[Register.scala 21:60]
  wire [31:0] _GEN_74; // @[Register.scala 21:60]
  wire [31:0] _GEN_75; // @[Register.scala 21:60]
  wire [31:0] _GEN_76; // @[Register.scala 21:60]
  wire [31:0] _GEN_77; // @[Register.scala 21:60]
  wire [31:0] _GEN_78; // @[Register.scala 21:60]
  wire [31:0] _GEN_79; // @[Register.scala 21:60]
  wire [31:0] _GEN_80; // @[Register.scala 21:60]
  wire [31:0] _GEN_81; // @[Register.scala 21:60]
  wire [31:0] _GEN_82; // @[Register.scala 21:60]
  wire [31:0] _GEN_83; // @[Register.scala 21:60]
  wire [31:0] _GEN_84; // @[Register.scala 21:60]
  wire [31:0] _GEN_85; // @[Register.scala 21:60]
  wire [31:0] _GEN_86; // @[Register.scala 21:60]
  wire [31:0] _GEN_87; // @[Register.scala 21:60]
  wire [31:0] _GEN_88; // @[Register.scala 21:60]
  wire [31:0] _GEN_89; // @[Register.scala 21:60]
  wire [31:0] _GEN_90; // @[Register.scala 21:60]
  wire [31:0] _GEN_91; // @[Register.scala 21:60]
  wire [31:0] _GEN_92; // @[Register.scala 21:60]
  wire [31:0] _GEN_93; // @[Register.scala 21:60]
  wire [31:0] _GEN_94; // @[Register.scala 21:60]
  wire [31:0] _GEN_95; // @[Register.scala 21:60]
  wire [31:0] _GEN_96; // @[Register.scala 22:45]
  wire [31:0] _GEN_97; // @[Register.scala 22:45]
  wire [31:0] _GEN_98; // @[Register.scala 22:45]
  wire [31:0] _GEN_99; // @[Register.scala 22:45]
  wire [31:0] _GEN_100; // @[Register.scala 22:45]
  wire [31:0] _GEN_101; // @[Register.scala 22:45]
  wire [31:0] _GEN_102; // @[Register.scala 22:45]
  wire [31:0] _GEN_103; // @[Register.scala 22:45]
  wire [31:0] _GEN_104; // @[Register.scala 22:45]
  wire [31:0] _GEN_105; // @[Register.scala 22:45]
  wire [31:0] _GEN_106; // @[Register.scala 22:45]
  wire [31:0] _GEN_107; // @[Register.scala 22:45]
  wire [31:0] _GEN_108; // @[Register.scala 22:45]
  wire [31:0] _GEN_109; // @[Register.scala 22:45]
  wire [31:0] _GEN_110; // @[Register.scala 22:45]
  wire [31:0] _GEN_111; // @[Register.scala 22:45]
  wire [31:0] _GEN_112; // @[Register.scala 22:45]
  wire [31:0] _GEN_113; // @[Register.scala 22:45]
  wire [31:0] _GEN_114; // @[Register.scala 22:45]
  wire [31:0] _GEN_115; // @[Register.scala 22:45]
  wire [31:0] _GEN_116; // @[Register.scala 22:45]
  wire [31:0] _GEN_117; // @[Register.scala 22:45]
  wire [31:0] _GEN_118; // @[Register.scala 22:45]
  wire [31:0] _GEN_119; // @[Register.scala 22:45]
  wire [31:0] _GEN_120; // @[Register.scala 22:45]
  wire [31:0] _GEN_121; // @[Register.scala 22:45]
  wire [31:0] _GEN_122; // @[Register.scala 22:45]
  wire [31:0] _GEN_123; // @[Register.scala 22:45]
  wire [31:0] _GEN_124; // @[Register.scala 22:45]
  wire [31:0] _GEN_125; // @[Register.scala 22:45]
  wire [31:0] _GEN_126; // @[Register.scala 22:45]
  wire [31:0] _GEN_127; // @[Register.scala 22:45]
  wire [31:0] _GEN_129; // @[Register.scala 21:43]
  wire [31:0] _GEN_130; // @[Register.scala 21:43]
  wire [31:0] _GEN_131; // @[Register.scala 21:43]
  wire [31:0] _GEN_132; // @[Register.scala 21:43]
  wire [31:0] _GEN_133; // @[Register.scala 21:43]
  wire [31:0] _GEN_134; // @[Register.scala 21:43]
  wire [31:0] _GEN_135; // @[Register.scala 21:43]
  wire [31:0] _GEN_136; // @[Register.scala 21:43]
  wire [31:0] _GEN_137; // @[Register.scala 21:43]
  wire [31:0] _GEN_138; // @[Register.scala 21:43]
  wire [31:0] _GEN_139; // @[Register.scala 21:43]
  wire [31:0] _GEN_140; // @[Register.scala 21:43]
  wire [31:0] _GEN_141; // @[Register.scala 21:43]
  wire [31:0] _GEN_142; // @[Register.scala 21:43]
  wire [31:0] _GEN_143; // @[Register.scala 21:43]
  wire [31:0] _GEN_144; // @[Register.scala 21:43]
  wire [31:0] _GEN_145; // @[Register.scala 21:43]
  wire [31:0] _GEN_146; // @[Register.scala 21:43]
  wire [31:0] _GEN_147; // @[Register.scala 21:43]
  wire [31:0] _GEN_148; // @[Register.scala 21:43]
  wire [31:0] _GEN_149; // @[Register.scala 21:43]
  wire [31:0] _GEN_150; // @[Register.scala 21:43]
  wire [31:0] _GEN_151; // @[Register.scala 21:43]
  wire [31:0] _GEN_152; // @[Register.scala 21:43]
  wire [31:0] _GEN_153; // @[Register.scala 21:43]
  wire [31:0] _GEN_154; // @[Register.scala 21:43]
  wire [31:0] _GEN_155; // @[Register.scala 21:43]
  wire [31:0] _GEN_156; // @[Register.scala 21:43]
  wire [31:0] _GEN_157; // @[Register.scala 21:43]
  wire [31:0] _GEN_158; // @[Register.scala 21:43]
  wire [31:0] _GEN_159; // @[Register.scala 21:43]
  wire [31:0] _GEN_160; // @[Register.scala 21:43]
  assign _GEN_1 = 5'h1 == io_rs1_s ? $signed(register_1) : $signed(register_0); // @[Register.scala 18:16]
  assign _GEN_2 = 5'h2 == io_rs1_s ? $signed(register_2) : $signed(_GEN_1); // @[Register.scala 18:16]
  assign _GEN_3 = 5'h3 == io_rs1_s ? $signed(register_3) : $signed(_GEN_2); // @[Register.scala 18:16]
  assign _GEN_4 = 5'h4 == io_rs1_s ? $signed(register_4) : $signed(_GEN_3); // @[Register.scala 18:16]
  assign _GEN_5 = 5'h5 == io_rs1_s ? $signed(register_5) : $signed(_GEN_4); // @[Register.scala 18:16]
  assign _GEN_6 = 5'h6 == io_rs1_s ? $signed(register_6) : $signed(_GEN_5); // @[Register.scala 18:16]
  assign _GEN_7 = 5'h7 == io_rs1_s ? $signed(register_7) : $signed(_GEN_6); // @[Register.scala 18:16]
  assign _GEN_8 = 5'h8 == io_rs1_s ? $signed(register_8) : $signed(_GEN_7); // @[Register.scala 18:16]
  assign _GEN_9 = 5'h9 == io_rs1_s ? $signed(register_9) : $signed(_GEN_8); // @[Register.scala 18:16]
  assign _GEN_10 = 5'ha == io_rs1_s ? $signed(register_10) : $signed(_GEN_9); // @[Register.scala 18:16]
  assign _GEN_11 = 5'hb == io_rs1_s ? $signed(register_11) : $signed(_GEN_10); // @[Register.scala 18:16]
  assign _GEN_12 = 5'hc == io_rs1_s ? $signed(register_12) : $signed(_GEN_11); // @[Register.scala 18:16]
  assign _GEN_13 = 5'hd == io_rs1_s ? $signed(register_13) : $signed(_GEN_12); // @[Register.scala 18:16]
  assign _GEN_14 = 5'he == io_rs1_s ? $signed(register_14) : $signed(_GEN_13); // @[Register.scala 18:16]
  assign _GEN_15 = 5'hf == io_rs1_s ? $signed(register_15) : $signed(_GEN_14); // @[Register.scala 18:16]
  assign _GEN_16 = 5'h10 == io_rs1_s ? $signed(register_16) : $signed(_GEN_15); // @[Register.scala 18:16]
  assign _GEN_17 = 5'h11 == io_rs1_s ? $signed(register_17) : $signed(_GEN_16); // @[Register.scala 18:16]
  assign _GEN_18 = 5'h12 == io_rs1_s ? $signed(register_18) : $signed(_GEN_17); // @[Register.scala 18:16]
  assign _GEN_19 = 5'h13 == io_rs1_s ? $signed(register_19) : $signed(_GEN_18); // @[Register.scala 18:16]
  assign _GEN_20 = 5'h14 == io_rs1_s ? $signed(register_20) : $signed(_GEN_19); // @[Register.scala 18:16]
  assign _GEN_21 = 5'h15 == io_rs1_s ? $signed(register_21) : $signed(_GEN_20); // @[Register.scala 18:16]
  assign _GEN_22 = 5'h16 == io_rs1_s ? $signed(register_22) : $signed(_GEN_21); // @[Register.scala 18:16]
  assign _GEN_23 = 5'h17 == io_rs1_s ? $signed(register_23) : $signed(_GEN_22); // @[Register.scala 18:16]
  assign _GEN_24 = 5'h18 == io_rs1_s ? $signed(register_24) : $signed(_GEN_23); // @[Register.scala 18:16]
  assign _GEN_25 = 5'h19 == io_rs1_s ? $signed(register_25) : $signed(_GEN_24); // @[Register.scala 18:16]
  assign _GEN_26 = 5'h1a == io_rs1_s ? $signed(register_26) : $signed(_GEN_25); // @[Register.scala 18:16]
  assign _GEN_27 = 5'h1b == io_rs1_s ? $signed(register_27) : $signed(_GEN_26); // @[Register.scala 18:16]
  assign _GEN_28 = 5'h1c == io_rs1_s ? $signed(register_28) : $signed(_GEN_27); // @[Register.scala 18:16]
  assign _GEN_29 = 5'h1d == io_rs1_s ? $signed(register_29) : $signed(_GEN_28); // @[Register.scala 18:16]
  assign _GEN_30 = 5'h1e == io_rs1_s ? $signed(register_30) : $signed(_GEN_29); // @[Register.scala 18:16]
  assign _GEN_33 = 5'h1 == io_rs2_s ? $signed(register_1) : $signed(register_0); // @[Register.scala 19:16]
  assign _GEN_34 = 5'h2 == io_rs2_s ? $signed(register_2) : $signed(_GEN_33); // @[Register.scala 19:16]
  assign _GEN_35 = 5'h3 == io_rs2_s ? $signed(register_3) : $signed(_GEN_34); // @[Register.scala 19:16]
  assign _GEN_36 = 5'h4 == io_rs2_s ? $signed(register_4) : $signed(_GEN_35); // @[Register.scala 19:16]
  assign _GEN_37 = 5'h5 == io_rs2_s ? $signed(register_5) : $signed(_GEN_36); // @[Register.scala 19:16]
  assign _GEN_38 = 5'h6 == io_rs2_s ? $signed(register_6) : $signed(_GEN_37); // @[Register.scala 19:16]
  assign _GEN_39 = 5'h7 == io_rs2_s ? $signed(register_7) : $signed(_GEN_38); // @[Register.scala 19:16]
  assign _GEN_40 = 5'h8 == io_rs2_s ? $signed(register_8) : $signed(_GEN_39); // @[Register.scala 19:16]
  assign _GEN_41 = 5'h9 == io_rs2_s ? $signed(register_9) : $signed(_GEN_40); // @[Register.scala 19:16]
  assign _GEN_42 = 5'ha == io_rs2_s ? $signed(register_10) : $signed(_GEN_41); // @[Register.scala 19:16]
  assign _GEN_43 = 5'hb == io_rs2_s ? $signed(register_11) : $signed(_GEN_42); // @[Register.scala 19:16]
  assign _GEN_44 = 5'hc == io_rs2_s ? $signed(register_12) : $signed(_GEN_43); // @[Register.scala 19:16]
  assign _GEN_45 = 5'hd == io_rs2_s ? $signed(register_13) : $signed(_GEN_44); // @[Register.scala 19:16]
  assign _GEN_46 = 5'he == io_rs2_s ? $signed(register_14) : $signed(_GEN_45); // @[Register.scala 19:16]
  assign _GEN_47 = 5'hf == io_rs2_s ? $signed(register_15) : $signed(_GEN_46); // @[Register.scala 19:16]
  assign _GEN_48 = 5'h10 == io_rs2_s ? $signed(register_16) : $signed(_GEN_47); // @[Register.scala 19:16]
  assign _GEN_49 = 5'h11 == io_rs2_s ? $signed(register_17) : $signed(_GEN_48); // @[Register.scala 19:16]
  assign _GEN_50 = 5'h12 == io_rs2_s ? $signed(register_18) : $signed(_GEN_49); // @[Register.scala 19:16]
  assign _GEN_51 = 5'h13 == io_rs2_s ? $signed(register_19) : $signed(_GEN_50); // @[Register.scala 19:16]
  assign _GEN_52 = 5'h14 == io_rs2_s ? $signed(register_20) : $signed(_GEN_51); // @[Register.scala 19:16]
  assign _GEN_53 = 5'h15 == io_rs2_s ? $signed(register_21) : $signed(_GEN_52); // @[Register.scala 19:16]
  assign _GEN_54 = 5'h16 == io_rs2_s ? $signed(register_22) : $signed(_GEN_53); // @[Register.scala 19:16]
  assign _GEN_55 = 5'h17 == io_rs2_s ? $signed(register_23) : $signed(_GEN_54); // @[Register.scala 19:16]
  assign _GEN_56 = 5'h18 == io_rs2_s ? $signed(register_24) : $signed(_GEN_55); // @[Register.scala 19:16]
  assign _GEN_57 = 5'h19 == io_rs2_s ? $signed(register_25) : $signed(_GEN_56); // @[Register.scala 19:16]
  assign _GEN_58 = 5'h1a == io_rs2_s ? $signed(register_26) : $signed(_GEN_57); // @[Register.scala 19:16]
  assign _GEN_59 = 5'h1b == io_rs2_s ? $signed(register_27) : $signed(_GEN_58); // @[Register.scala 19:16]
  assign _GEN_60 = 5'h1c == io_rs2_s ? $signed(register_28) : $signed(_GEN_59); // @[Register.scala 19:16]
  assign _GEN_61 = 5'h1d == io_rs2_s ? $signed(register_29) : $signed(_GEN_60); // @[Register.scala 19:16]
  assign _GEN_62 = 5'h1e == io_rs2_s ? $signed(register_30) : $signed(_GEN_61); // @[Register.scala 19:16]
  assign _T_62 = io_rd == 5'h0; // @[Register.scala 21:28]
  assign _GEN_65 = 5'h1 == io_rd ? $signed(32'sh0) : $signed(register_1); // @[Register.scala 21:60]
  assign _GEN_66 = 5'h2 == io_rd ? $signed(32'sh0) : $signed(register_2); // @[Register.scala 21:60]
  assign _GEN_67 = 5'h3 == io_rd ? $signed(32'sh0) : $signed(register_3); // @[Register.scala 21:60]
  assign _GEN_68 = 5'h4 == io_rd ? $signed(32'sh0) : $signed(register_4); // @[Register.scala 21:60]
  assign _GEN_69 = 5'h5 == io_rd ? $signed(32'sh0) : $signed(register_5); // @[Register.scala 21:60]
  assign _GEN_70 = 5'h6 == io_rd ? $signed(32'sh0) : $signed(register_6); // @[Register.scala 21:60]
  assign _GEN_71 = 5'h7 == io_rd ? $signed(32'sh0) : $signed(register_7); // @[Register.scala 21:60]
  assign _GEN_72 = 5'h8 == io_rd ? $signed(32'sh0) : $signed(register_8); // @[Register.scala 21:60]
  assign _GEN_73 = 5'h9 == io_rd ? $signed(32'sh0) : $signed(register_9); // @[Register.scala 21:60]
  assign _GEN_74 = 5'ha == io_rd ? $signed(32'sh0) : $signed(register_10); // @[Register.scala 21:60]
  assign _GEN_75 = 5'hb == io_rd ? $signed(32'sh0) : $signed(register_11); // @[Register.scala 21:60]
  assign _GEN_76 = 5'hc == io_rd ? $signed(32'sh0) : $signed(register_12); // @[Register.scala 21:60]
  assign _GEN_77 = 5'hd == io_rd ? $signed(32'sh0) : $signed(register_13); // @[Register.scala 21:60]
  assign _GEN_78 = 5'he == io_rd ? $signed(32'sh0) : $signed(register_14); // @[Register.scala 21:60]
  assign _GEN_79 = 5'hf == io_rd ? $signed(32'sh0) : $signed(register_15); // @[Register.scala 21:60]
  assign _GEN_80 = 5'h10 == io_rd ? $signed(32'sh0) : $signed(register_16); // @[Register.scala 21:60]
  assign _GEN_81 = 5'h11 == io_rd ? $signed(32'sh0) : $signed(register_17); // @[Register.scala 21:60]
  assign _GEN_82 = 5'h12 == io_rd ? $signed(32'sh0) : $signed(register_18); // @[Register.scala 21:60]
  assign _GEN_83 = 5'h13 == io_rd ? $signed(32'sh0) : $signed(register_19); // @[Register.scala 21:60]
  assign _GEN_84 = 5'h14 == io_rd ? $signed(32'sh0) : $signed(register_20); // @[Register.scala 21:60]
  assign _GEN_85 = 5'h15 == io_rd ? $signed(32'sh0) : $signed(register_21); // @[Register.scala 21:60]
  assign _GEN_86 = 5'h16 == io_rd ? $signed(32'sh0) : $signed(register_22); // @[Register.scala 21:60]
  assign _GEN_87 = 5'h17 == io_rd ? $signed(32'sh0) : $signed(register_23); // @[Register.scala 21:60]
  assign _GEN_88 = 5'h18 == io_rd ? $signed(32'sh0) : $signed(register_24); // @[Register.scala 21:60]
  assign _GEN_89 = 5'h19 == io_rd ? $signed(32'sh0) : $signed(register_25); // @[Register.scala 21:60]
  assign _GEN_90 = 5'h1a == io_rd ? $signed(32'sh0) : $signed(register_26); // @[Register.scala 21:60]
  assign _GEN_91 = 5'h1b == io_rd ? $signed(32'sh0) : $signed(register_27); // @[Register.scala 21:60]
  assign _GEN_92 = 5'h1c == io_rd ? $signed(32'sh0) : $signed(register_28); // @[Register.scala 21:60]
  assign _GEN_93 = 5'h1d == io_rd ? $signed(32'sh0) : $signed(register_29); // @[Register.scala 21:60]
  assign _GEN_94 = 5'h1e == io_rd ? $signed(32'sh0) : $signed(register_30); // @[Register.scala 21:60]
  assign _GEN_95 = 5'h1f == io_rd ? $signed(32'sh0) : $signed(register_31); // @[Register.scala 21:60]
  assign _GEN_96 = 5'h0 == io_rd ? $signed(io_WriteData) : $signed(32'sh0); // @[Register.scala 22:45]
  assign _GEN_97 = 5'h1 == io_rd ? $signed(io_WriteData) : $signed(register_1); // @[Register.scala 22:45]
  assign _GEN_98 = 5'h2 == io_rd ? $signed(io_WriteData) : $signed(register_2); // @[Register.scala 22:45]
  assign _GEN_99 = 5'h3 == io_rd ? $signed(io_WriteData) : $signed(register_3); // @[Register.scala 22:45]
  assign _GEN_100 = 5'h4 == io_rd ? $signed(io_WriteData) : $signed(register_4); // @[Register.scala 22:45]
  assign _GEN_101 = 5'h5 == io_rd ? $signed(io_WriteData) : $signed(register_5); // @[Register.scala 22:45]
  assign _GEN_102 = 5'h6 == io_rd ? $signed(io_WriteData) : $signed(register_6); // @[Register.scala 22:45]
  assign _GEN_103 = 5'h7 == io_rd ? $signed(io_WriteData) : $signed(register_7); // @[Register.scala 22:45]
  assign _GEN_104 = 5'h8 == io_rd ? $signed(io_WriteData) : $signed(register_8); // @[Register.scala 22:45]
  assign _GEN_105 = 5'h9 == io_rd ? $signed(io_WriteData) : $signed(register_9); // @[Register.scala 22:45]
  assign _GEN_106 = 5'ha == io_rd ? $signed(io_WriteData) : $signed(register_10); // @[Register.scala 22:45]
  assign _GEN_107 = 5'hb == io_rd ? $signed(io_WriteData) : $signed(register_11); // @[Register.scala 22:45]
  assign _GEN_108 = 5'hc == io_rd ? $signed(io_WriteData) : $signed(register_12); // @[Register.scala 22:45]
  assign _GEN_109 = 5'hd == io_rd ? $signed(io_WriteData) : $signed(register_13); // @[Register.scala 22:45]
  assign _GEN_110 = 5'he == io_rd ? $signed(io_WriteData) : $signed(register_14); // @[Register.scala 22:45]
  assign _GEN_111 = 5'hf == io_rd ? $signed(io_WriteData) : $signed(register_15); // @[Register.scala 22:45]
  assign _GEN_112 = 5'h10 == io_rd ? $signed(io_WriteData) : $signed(register_16); // @[Register.scala 22:45]
  assign _GEN_113 = 5'h11 == io_rd ? $signed(io_WriteData) : $signed(register_17); // @[Register.scala 22:45]
  assign _GEN_114 = 5'h12 == io_rd ? $signed(io_WriteData) : $signed(register_18); // @[Register.scala 22:45]
  assign _GEN_115 = 5'h13 == io_rd ? $signed(io_WriteData) : $signed(register_19); // @[Register.scala 22:45]
  assign _GEN_116 = 5'h14 == io_rd ? $signed(io_WriteData) : $signed(register_20); // @[Register.scala 22:45]
  assign _GEN_117 = 5'h15 == io_rd ? $signed(io_WriteData) : $signed(register_21); // @[Register.scala 22:45]
  assign _GEN_118 = 5'h16 == io_rd ? $signed(io_WriteData) : $signed(register_22); // @[Register.scala 22:45]
  assign _GEN_119 = 5'h17 == io_rd ? $signed(io_WriteData) : $signed(register_23); // @[Register.scala 22:45]
  assign _GEN_120 = 5'h18 == io_rd ? $signed(io_WriteData) : $signed(register_24); // @[Register.scala 22:45]
  assign _GEN_121 = 5'h19 == io_rd ? $signed(io_WriteData) : $signed(register_25); // @[Register.scala 22:45]
  assign _GEN_122 = 5'h1a == io_rd ? $signed(io_WriteData) : $signed(register_26); // @[Register.scala 22:45]
  assign _GEN_123 = 5'h1b == io_rd ? $signed(io_WriteData) : $signed(register_27); // @[Register.scala 22:45]
  assign _GEN_124 = 5'h1c == io_rd ? $signed(io_WriteData) : $signed(register_28); // @[Register.scala 22:45]
  assign _GEN_125 = 5'h1d == io_rd ? $signed(io_WriteData) : $signed(register_29); // @[Register.scala 22:45]
  assign _GEN_126 = 5'h1e == io_rd ? $signed(io_WriteData) : $signed(register_30); // @[Register.scala 22:45]
  assign _GEN_127 = 5'h1f == io_rd ? $signed(io_WriteData) : $signed(register_31); // @[Register.scala 22:45]
  assign _GEN_129 = _T_62 ? $signed(32'sh0) : $signed(_GEN_96); // @[Register.scala 21:43]
  assign _GEN_130 = _T_62 ? $signed(_GEN_65) : $signed(_GEN_97); // @[Register.scala 21:43]
  assign _GEN_131 = _T_62 ? $signed(_GEN_66) : $signed(_GEN_98); // @[Register.scala 21:43]
  assign _GEN_132 = _T_62 ? $signed(_GEN_67) : $signed(_GEN_99); // @[Register.scala 21:43]
  assign _GEN_133 = _T_62 ? $signed(_GEN_68) : $signed(_GEN_100); // @[Register.scala 21:43]
  assign _GEN_134 = _T_62 ? $signed(_GEN_69) : $signed(_GEN_101); // @[Register.scala 21:43]
  assign _GEN_135 = _T_62 ? $signed(_GEN_70) : $signed(_GEN_102); // @[Register.scala 21:43]
  assign _GEN_136 = _T_62 ? $signed(_GEN_71) : $signed(_GEN_103); // @[Register.scala 21:43]
  assign _GEN_137 = _T_62 ? $signed(_GEN_72) : $signed(_GEN_104); // @[Register.scala 21:43]
  assign _GEN_138 = _T_62 ? $signed(_GEN_73) : $signed(_GEN_105); // @[Register.scala 21:43]
  assign _GEN_139 = _T_62 ? $signed(_GEN_74) : $signed(_GEN_106); // @[Register.scala 21:43]
  assign _GEN_140 = _T_62 ? $signed(_GEN_75) : $signed(_GEN_107); // @[Register.scala 21:43]
  assign _GEN_141 = _T_62 ? $signed(_GEN_76) : $signed(_GEN_108); // @[Register.scala 21:43]
  assign _GEN_142 = _T_62 ? $signed(_GEN_77) : $signed(_GEN_109); // @[Register.scala 21:43]
  assign _GEN_143 = _T_62 ? $signed(_GEN_78) : $signed(_GEN_110); // @[Register.scala 21:43]
  assign _GEN_144 = _T_62 ? $signed(_GEN_79) : $signed(_GEN_111); // @[Register.scala 21:43]
  assign _GEN_145 = _T_62 ? $signed(_GEN_80) : $signed(_GEN_112); // @[Register.scala 21:43]
  assign _GEN_146 = _T_62 ? $signed(_GEN_81) : $signed(_GEN_113); // @[Register.scala 21:43]
  assign _GEN_147 = _T_62 ? $signed(_GEN_82) : $signed(_GEN_114); // @[Register.scala 21:43]
  assign _GEN_148 = _T_62 ? $signed(_GEN_83) : $signed(_GEN_115); // @[Register.scala 21:43]
  assign _GEN_149 = _T_62 ? $signed(_GEN_84) : $signed(_GEN_116); // @[Register.scala 21:43]
  assign _GEN_150 = _T_62 ? $signed(_GEN_85) : $signed(_GEN_117); // @[Register.scala 21:43]
  assign _GEN_151 = _T_62 ? $signed(_GEN_86) : $signed(_GEN_118); // @[Register.scala 21:43]
  assign _GEN_152 = _T_62 ? $signed(_GEN_87) : $signed(_GEN_119); // @[Register.scala 21:43]
  assign _GEN_153 = _T_62 ? $signed(_GEN_88) : $signed(_GEN_120); // @[Register.scala 21:43]
  assign _GEN_154 = _T_62 ? $signed(_GEN_89) : $signed(_GEN_121); // @[Register.scala 21:43]
  assign _GEN_155 = _T_62 ? $signed(_GEN_90) : $signed(_GEN_122); // @[Register.scala 21:43]
  assign _GEN_156 = _T_62 ? $signed(_GEN_91) : $signed(_GEN_123); // @[Register.scala 21:43]
  assign _GEN_157 = _T_62 ? $signed(_GEN_92) : $signed(_GEN_124); // @[Register.scala 21:43]
  assign _GEN_158 = _T_62 ? $signed(_GEN_93) : $signed(_GEN_125); // @[Register.scala 21:43]
  assign _GEN_159 = _T_62 ? $signed(_GEN_94) : $signed(_GEN_126); // @[Register.scala 21:43]
  assign _GEN_160 = _T_62 ? $signed(_GEN_95) : $signed(_GEN_127); // @[Register.scala 21:43]
  assign io_rs1 = 5'h1f == io_rs1_s ? $signed(register_31) : $signed(_GEN_30); // @[Register.scala 18:16]
  assign io_rs2 = 5'h1f == io_rs2_s ? $signed(register_31) : $signed(_GEN_62); // @[Register.scala 19:16]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  register_0 = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  register_1 = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  register_2 = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  register_3 = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  register_4 = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  register_5 = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  register_6 = _RAND_6[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  register_7 = _RAND_7[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  register_8 = _RAND_8[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  register_9 = _RAND_9[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  register_10 = _RAND_10[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  register_11 = _RAND_11[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  register_12 = _RAND_12[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  register_13 = _RAND_13[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  register_14 = _RAND_14[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  register_15 = _RAND_15[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  register_16 = _RAND_16[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_17 = {1{`RANDOM}};
  register_17 = _RAND_17[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_18 = {1{`RANDOM}};
  register_18 = _RAND_18[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_19 = {1{`RANDOM}};
  register_19 = _RAND_19[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_20 = {1{`RANDOM}};
  register_20 = _RAND_20[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_21 = {1{`RANDOM}};
  register_21 = _RAND_21[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_22 = {1{`RANDOM}};
  register_22 = _RAND_22[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_23 = {1{`RANDOM}};
  register_23 = _RAND_23[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_24 = {1{`RANDOM}};
  register_24 = _RAND_24[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_25 = {1{`RANDOM}};
  register_25 = _RAND_25[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_26 = {1{`RANDOM}};
  register_26 = _RAND_26[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_27 = {1{`RANDOM}};
  register_27 = _RAND_27[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_28 = {1{`RANDOM}};
  register_28 = _RAND_28[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_29 = {1{`RANDOM}};
  register_29 = _RAND_29[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_30 = {1{`RANDOM}};
  register_30 = _RAND_30[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_31 = {1{`RANDOM}};
  register_31 = _RAND_31[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (io_RegWrite) begin
      if (_T_62) begin
        register_0 <= 32'sh0;
      end else begin
        if (5'h0 == io_rd) begin
          register_0 <= io_WriteData;
        end else begin
          register_0 <= 32'sh0;
        end
      end
    end else begin
      register_0 <= 32'sh0;
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h1 == io_rd) begin
          register_1 <= 32'sh0;
        end
      end else begin
        if (5'h1 == io_rd) begin
          register_1 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h2 == io_rd) begin
          register_2 <= 32'sh0;
        end
      end else begin
        if (5'h2 == io_rd) begin
          register_2 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h3 == io_rd) begin
          register_3 <= 32'sh0;
        end
      end else begin
        if (5'h3 == io_rd) begin
          register_3 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h4 == io_rd) begin
          register_4 <= 32'sh0;
        end
      end else begin
        if (5'h4 == io_rd) begin
          register_4 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h5 == io_rd) begin
          register_5 <= 32'sh0;
        end
      end else begin
        if (5'h5 == io_rd) begin
          register_5 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h6 == io_rd) begin
          register_6 <= 32'sh0;
        end
      end else begin
        if (5'h6 == io_rd) begin
          register_6 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h7 == io_rd) begin
          register_7 <= 32'sh0;
        end
      end else begin
        if (5'h7 == io_rd) begin
          register_7 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h8 == io_rd) begin
          register_8 <= 32'sh0;
        end
      end else begin
        if (5'h8 == io_rd) begin
          register_8 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h9 == io_rd) begin
          register_9 <= 32'sh0;
        end
      end else begin
        if (5'h9 == io_rd) begin
          register_9 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'ha == io_rd) begin
          register_10 <= 32'sh0;
        end
      end else begin
        if (5'ha == io_rd) begin
          register_10 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'hb == io_rd) begin
          register_11 <= 32'sh0;
        end
      end else begin
        if (5'hb == io_rd) begin
          register_11 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'hc == io_rd) begin
          register_12 <= 32'sh0;
        end
      end else begin
        if (5'hc == io_rd) begin
          register_12 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'hd == io_rd) begin
          register_13 <= 32'sh0;
        end
      end else begin
        if (5'hd == io_rd) begin
          register_13 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'he == io_rd) begin
          register_14 <= 32'sh0;
        end
      end else begin
        if (5'he == io_rd) begin
          register_14 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'hf == io_rd) begin
          register_15 <= 32'sh0;
        end
      end else begin
        if (5'hf == io_rd) begin
          register_15 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h10 == io_rd) begin
          register_16 <= 32'sh0;
        end
      end else begin
        if (5'h10 == io_rd) begin
          register_16 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h11 == io_rd) begin
          register_17 <= 32'sh0;
        end
      end else begin
        if (5'h11 == io_rd) begin
          register_17 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h12 == io_rd) begin
          register_18 <= 32'sh0;
        end
      end else begin
        if (5'h12 == io_rd) begin
          register_18 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h13 == io_rd) begin
          register_19 <= 32'sh0;
        end
      end else begin
        if (5'h13 == io_rd) begin
          register_19 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h14 == io_rd) begin
          register_20 <= 32'sh0;
        end
      end else begin
        if (5'h14 == io_rd) begin
          register_20 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h15 == io_rd) begin
          register_21 <= 32'sh0;
        end
      end else begin
        if (5'h15 == io_rd) begin
          register_21 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h16 == io_rd) begin
          register_22 <= 32'sh0;
        end
      end else begin
        if (5'h16 == io_rd) begin
          register_22 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h17 == io_rd) begin
          register_23 <= 32'sh0;
        end
      end else begin
        if (5'h17 == io_rd) begin
          register_23 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h18 == io_rd) begin
          register_24 <= 32'sh0;
        end
      end else begin
        if (5'h18 == io_rd) begin
          register_24 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h19 == io_rd) begin
          register_25 <= 32'sh0;
        end
      end else begin
        if (5'h19 == io_rd) begin
          register_25 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h1a == io_rd) begin
          register_26 <= 32'sh0;
        end
      end else begin
        if (5'h1a == io_rd) begin
          register_26 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h1b == io_rd) begin
          register_27 <= 32'sh0;
        end
      end else begin
        if (5'h1b == io_rd) begin
          register_27 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h1c == io_rd) begin
          register_28 <= 32'sh0;
        end
      end else begin
        if (5'h1c == io_rd) begin
          register_28 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h1d == io_rd) begin
          register_29 <= 32'sh0;
        end
      end else begin
        if (5'h1d == io_rd) begin
          register_29 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h1e == io_rd) begin
          register_30 <= 32'sh0;
        end
      end else begin
        if (5'h1e == io_rd) begin
          register_30 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h1f == io_rd) begin
          register_31 <= 32'sh0;
        end
      end else begin
        if (5'h1f == io_rd) begin
          register_31 <= io_WriteData;
        end
      end
    end
  end
endmodule
module Memory(
  input         clock,
  input  [9:0]  io_wrAddr,
  output [31:0] io_rdData
);
  reg [31:0] mem [0:1023]; // @[Memory.scala 11:22]
  reg [31:0] _RAND_0;
  wire [31:0] mem__T_11_data; // @[Memory.scala 11:22]
  wire [9:0] mem__T_11_addr; // @[Memory.scala 11:22]
  assign mem__T_11_addr = io_wrAddr;
  assign mem__T_11_data = mem[mem__T_11_addr]; // @[Memory.scala 11:22]
  assign io_rdData = mem__T_11_data; // @[Memory.scala 12:19]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  _RAND_0 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 1024; initvar = initvar+1)
    mem[initvar] = _RAND_0[31:0];
  `endif // RANDOMIZE_MEM_INIT
  end
`endif // RANDOMIZE
endmodule
module Pc(
  input         clock,
  input  [31:0] io_input,
  output [31:0] io_pc4,
  output [31:0] io_pc
);
  reg [31:0] reg$; // @[Pc.scala 10:26]
  reg [31:0] _RAND_0;
  wire [32:0] _T_14; // @[Pc.scala 12:23]
  assign _T_14 = reg$ + 32'h4; // @[Pc.scala 12:23]
  assign io_pc4 = reg$ + 32'h4; // @[Pc.scala 12:16]
  assign io_pc = reg$; // @[Pc.scala 13:15]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  reg$ = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    reg$ <= io_input;
  end
endmodule
module Jalr(
  input  [31:0] io_in1,
  input  [31:0] io_in2,
  output [31:0] io_out
);
  wire [32:0] _T_11; // @[Jalr.scala 11:24]
  wire [31:0] _T_12; // @[Jalr.scala 11:24]
  wire [31:0] a; // @[Jalr.scala 11:24]
  wire [32:0] _GEN_0; // @[Jalr.scala 12:21]
  wire [32:0] _T_14; // @[Jalr.scala 12:21]
  wire [32:0] _T_15; // @[Jalr.scala 12:21]
  wire [31:0] _GEN_1; // @[Jalr.scala 12:16]
  assign _T_11 = $signed(io_in1) + $signed(io_in2); // @[Jalr.scala 11:24]
  assign _T_12 = $signed(io_in1) + $signed(io_in2); // @[Jalr.scala 11:24]
  assign a = $signed(_T_12); // @[Jalr.scala 11:24]
  assign _GEN_0 = {{1{a[31]}},a}; // @[Jalr.scala 12:21]
  assign _T_14 = $signed(_GEN_0) & $signed(33'shfffffffe); // @[Jalr.scala 12:21]
  assign _T_15 = $signed(_T_14); // @[Jalr.scala 12:21]
  assign _GEN_1 = _T_15[31:0]; // @[Jalr.scala 12:16]
  assign io_out = $signed(_GEN_1); // @[Jalr.scala 12:16]
endmodule
module MemoryD(
  input         clock,
  input  [7:0]  io_Addr,
  input  [31:0] io_Data,
  input         io_MemWrite,
  input         io_MemRead,
  output [31:0] io_out
);
  reg [31:0] mem [0:1023]; // @[MemoryD.scala 15:22]
  reg [31:0] _RAND_0;
  wire [31:0] mem__T_22_data; // @[MemoryD.scala 15:22]
  wire [9:0] mem__T_22_addr; // @[MemoryD.scala 15:22]
  wire [31:0] mem__T_19_data; // @[MemoryD.scala 15:22]
  wire [9:0] mem__T_19_addr; // @[MemoryD.scala 15:22]
  wire  mem__T_19_mask; // @[MemoryD.scala 15:22]
  wire  mem__T_19_en; // @[MemoryD.scala 15:22]
  assign mem__T_22_addr = {{2'd0}, io_Addr};
  assign mem__T_22_data = mem[mem__T_22_addr]; // @[MemoryD.scala 15:22]
  assign mem__T_19_data = io_Data;
  assign mem__T_19_addr = {{2'd0}, io_Addr};
  assign mem__T_19_mask = 1'h1;
  assign mem__T_19_en = io_MemWrite;
  assign io_out = mem__T_22_data; // @[MemoryD.scala 22:24]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  _RAND_0 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 1024; initvar = initvar+1)
    mem[initvar] = _RAND_0[31:0];
  `endif // RANDOMIZE_MEM_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if(mem__T_19_en & mem__T_19_mask) begin
      mem[mem__T_19_addr] <= mem__T_19_data; // @[MemoryD.scala 15:22]
    end
  end
endmodule
module IF_ID_Reg(
  input         clock,
  input  [9:0]  io_pc_in,
  output [9:0]  io_pc_out,
  input  [9:0]  io_pc4_in,
  output [9:0]  io_pc4_out,
  input  [31:0] io_inst_in,
  output [31:0] io_inst_out
);
  reg [9:0] pcreg; // @[IF_ID_Reg.scala 17:28]
  reg [31:0] _RAND_0;
  reg [9:0] pc4reg; // @[IF_ID_Reg.scala 18:29]
  reg [31:0] _RAND_1;
  reg [31:0] instreg; // @[IF_ID_Reg.scala 19:30]
  reg [31:0] _RAND_2;
  assign io_pc_out = pcreg; // @[IF_ID_Reg.scala 21:19]
  assign io_pc4_out = pc4reg; // @[IF_ID_Reg.scala 23:20]
  assign io_inst_out = instreg; // @[IF_ID_Reg.scala 25:21]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pcreg = _RAND_0[9:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  pc4reg = _RAND_1[9:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  instreg = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    pcreg <= io_pc_in;
    pc4reg <= io_pc4_in;
    instreg <= io_inst_in;
  end
endmodule
module Top1(
  input         clock,
  input         reset,
  output [31:0] io_Reg_Out
);
  wire [4:0] Alu_io_AluControl; // @[Top1.scala 13:25]
  wire [31:0] Alu_io_in1; // @[Top1.scala 13:25]
  wire [31:0] Alu_io_in2; // @[Top1.scala 13:25]
  wire  Alu_io_Branch; // @[Top1.scala 13:25]
  wire [31:0] Alu_io_out; // @[Top1.scala 13:25]
  wire [6:0] Control_io_opcode; // @[Top1.scala 14:29]
  wire  Control_io_MemWrite; // @[Top1.scala 14:29]
  wire  Control_io_Branch; // @[Top1.scala 14:29]
  wire  Control_io_MemRead; // @[Top1.scala 14:29]
  wire  Control_io_RegWrite; // @[Top1.scala 14:29]
  wire  Control_io_MemtoReg; // @[Top1.scala 14:29]
  wire [2:0] Control_io_AluOp; // @[Top1.scala 14:29]
  wire [1:0] Control_io_OpA; // @[Top1.scala 14:29]
  wire  Control_io_OpB; // @[Top1.scala 14:29]
  wire [1:0] Control_io_ExtSel; // @[Top1.scala 14:29]
  wire [1:0] Control_io_NextPc; // @[Top1.scala 14:29]
  wire [31:0] ImmediateGeneration_io_instruction; // @[Top1.scala 15:41]
  wire [31:0] ImmediateGeneration_io_pc; // @[Top1.scala 15:41]
  wire [31:0] ImmediateGeneration_io_s_imm; // @[Top1.scala 15:41]
  wire [31:0] ImmediateGeneration_io_sb_imm; // @[Top1.scala 15:41]
  wire [31:0] ImmediateGeneration_io_uj_imm; // @[Top1.scala 15:41]
  wire [31:0] ImmediateGeneration_io_u_imm; // @[Top1.scala 15:41]
  wire [31:0] ImmediateGeneration_io_i_imm; // @[Top1.scala 15:41]
  wire [2:0] AluControl_io_aluOp; // @[Top1.scala 16:32]
  wire [2:0] AluControl_io_funct3; // @[Top1.scala 16:32]
  wire  AluControl_io_funct7; // @[Top1.scala 16:32]
  wire [4:0] AluControl_io_out; // @[Top1.scala 16:32]
  wire  Register_clock; // @[Top1.scala 17:30]
  wire  Register_io_RegWrite; // @[Top1.scala 17:30]
  wire [4:0] Register_io_rs1_s; // @[Top1.scala 17:30]
  wire [4:0] Register_io_rs2_s; // @[Top1.scala 17:30]
  wire [4:0] Register_io_rd; // @[Top1.scala 17:30]
  wire [31:0] Register_io_WriteData; // @[Top1.scala 17:30]
  wire [31:0] Register_io_rs1; // @[Top1.scala 17:30]
  wire [31:0] Register_io_rs2; // @[Top1.scala 17:30]
  wire  Memory_clock; // @[Top1.scala 18:28]
  wire [9:0] Memory_io_wrAddr; // @[Top1.scala 18:28]
  wire [31:0] Memory_io_rdData; // @[Top1.scala 18:28]
  wire  Pc_clock; // @[Top1.scala 19:24]
  wire [31:0] Pc_io_input; // @[Top1.scala 19:24]
  wire [31:0] Pc_io_pc4; // @[Top1.scala 19:24]
  wire [31:0] Pc_io_pc; // @[Top1.scala 19:24]
  wire [31:0] Jalr_io_in1; // @[Top1.scala 20:26]
  wire [31:0] Jalr_io_in2; // @[Top1.scala 20:26]
  wire [31:0] Jalr_io_out; // @[Top1.scala 20:26]
  wire  DataMemory_clock; // @[Top1.scala 21:32]
  wire [7:0] DataMemory_io_Addr; // @[Top1.scala 21:32]
  wire [31:0] DataMemory_io_Data; // @[Top1.scala 21:32]
  wire  DataMemory_io_MemWrite; // @[Top1.scala 21:32]
  wire  DataMemory_io_MemRead; // @[Top1.scala 21:32]
  wire [31:0] DataMemory_io_out; // @[Top1.scala 21:32]
  wire  IF_ID_clock; // @[Top1.scala 23:27]
  wire [9:0] IF_ID_io_pc_in; // @[Top1.scala 23:27]
  wire [9:0] IF_ID_io_pc_out; // @[Top1.scala 23:27]
  wire [9:0] IF_ID_io_pc4_in; // @[Top1.scala 23:27]
  wire [9:0] IF_ID_io_pc4_out; // @[Top1.scala 23:27]
  wire [31:0] IF_ID_io_inst_in; // @[Top1.scala 23:27]
  wire [31:0] IF_ID_io_inst_out; // @[Top1.scala 23:27]
  wire  _T_15; // @[Top1.scala 47:33]
  wire  _T_17; // @[Top1.scala 47:63]
  wire  _T_18; // @[Top1.scala 47:45]
  wire  _T_20; // @[Top1.scala 48:38]
  wire  _T_23; // @[Top1.scala 48:50]
  wire  _T_25; // @[Top1.scala 49:38]
  wire  _T_28; // @[Top1.scala 49:50]
  wire [31:0] _GEN_0; // @[Top1.scala 49:79]
  wire [31:0] _GEN_1; // @[Top1.scala 48:79]
  wire  _T_30; // @[Top1.scala 58:33]
  wire  _T_32; // @[Top1.scala 58:66]
  wire  _T_33; // @[Top1.scala 58:45]
  wire  _T_35; // @[Top1.scala 58:94]
  wire  _T_36; // @[Top1.scala 58:77]
  wire  _T_40; // @[Top1.scala 59:71]
  wire  _T_41; // @[Top1.scala 59:50]
  wire  _T_44; // @[Top1.scala 59:82]
  wire  _T_51; // @[Top1.scala 60:99]
  wire  _T_52; // @[Top1.scala 60:82]
  wire  _T_60; // @[Top1.scala 61:82]
  wire [31:0] _T_61; // @[Top1.scala 61:156]
  wire  _T_63; // @[Top1.scala 62:38]
  wire  _T_65; // @[Top1.scala 63:38]
  wire [31:0] _T_66; // @[Top1.scala 63:96]
  wire [31:0] _T_69; // @[Top1.scala 64:78]
  wire [31:0] _GEN_4; // @[Top1.scala 63:50]
  wire [31:0] _GEN_5; // @[Top1.scala 62:50]
  wire [31:0] _GEN_6; // @[Top1.scala 61:110]
  wire [31:0] _GEN_7; // @[Top1.scala 60:110]
  wire [31:0] _GEN_8; // @[Top1.scala 59:110]
  wire  _T_72; // @[Top1.scala 75:35]
  wire  _T_74; // @[Top1.scala 78:30]
  wire  _T_76; // @[Top1.scala 78:60]
  wire  _T_77; // @[Top1.scala 78:42]
  wire [9:0] _T_80; // @[Top1.scala 79:79]
  Alu Alu ( // @[Top1.scala 13:25]
    .io_AluControl(Alu_io_AluControl),
    .io_in1(Alu_io_in1),
    .io_in2(Alu_io_in2),
    .io_Branch(Alu_io_Branch),
    .io_out(Alu_io_out)
  );
  Control Control ( // @[Top1.scala 14:29]
    .io_opcode(Control_io_opcode),
    .io_MemWrite(Control_io_MemWrite),
    .io_Branch(Control_io_Branch),
    .io_MemRead(Control_io_MemRead),
    .io_RegWrite(Control_io_RegWrite),
    .io_MemtoReg(Control_io_MemtoReg),
    .io_AluOp(Control_io_AluOp),
    .io_OpA(Control_io_OpA),
    .io_OpB(Control_io_OpB),
    .io_ExtSel(Control_io_ExtSel),
    .io_NextPc(Control_io_NextPc)
  );
  ImmGen ImmediateGeneration ( // @[Top1.scala 15:41]
    .io_instruction(ImmediateGeneration_io_instruction),
    .io_pc(ImmediateGeneration_io_pc),
    .io_s_imm(ImmediateGeneration_io_s_imm),
    .io_sb_imm(ImmediateGeneration_io_sb_imm),
    .io_uj_imm(ImmediateGeneration_io_uj_imm),
    .io_u_imm(ImmediateGeneration_io_u_imm),
    .io_i_imm(ImmediateGeneration_io_i_imm)
  );
  AluCntrl AluControl ( // @[Top1.scala 16:32]
    .io_aluOp(AluControl_io_aluOp),
    .io_funct3(AluControl_io_funct3),
    .io_funct7(AluControl_io_funct7),
    .io_out(AluControl_io_out)
  );
  Register Register ( // @[Top1.scala 17:30]
    .clock(Register_clock),
    .io_RegWrite(Register_io_RegWrite),
    .io_rs1_s(Register_io_rs1_s),
    .io_rs2_s(Register_io_rs2_s),
    .io_rd(Register_io_rd),
    .io_WriteData(Register_io_WriteData),
    .io_rs1(Register_io_rs1),
    .io_rs2(Register_io_rs2)
  );
  Memory Memory ( // @[Top1.scala 18:28]
    .clock(Memory_clock),
    .io_wrAddr(Memory_io_wrAddr),
    .io_rdData(Memory_io_rdData)
  );
  Pc Pc ( // @[Top1.scala 19:24]
    .clock(Pc_clock),
    .io_input(Pc_io_input),
    .io_pc4(Pc_io_pc4),
    .io_pc(Pc_io_pc)
  );
  Jalr Jalr ( // @[Top1.scala 20:26]
    .io_in1(Jalr_io_in1),
    .io_in2(Jalr_io_in2),
    .io_out(Jalr_io_out)
  );
  MemoryD DataMemory ( // @[Top1.scala 21:32]
    .clock(DataMemory_clock),
    .io_Addr(DataMemory_io_Addr),
    .io_Data(DataMemory_io_Data),
    .io_MemWrite(DataMemory_io_MemWrite),
    .io_MemRead(DataMemory_io_MemRead),
    .io_out(DataMemory_io_out)
  );
  IF_ID_Reg IF_ID ( // @[Top1.scala 23:27]
    .clock(IF_ID_clock),
    .io_pc_in(IF_ID_io_pc_in),
    .io_pc_out(IF_ID_io_pc_out),
    .io_pc4_in(IF_ID_io_pc4_in),
    .io_pc4_out(IF_ID_io_pc4_out),
    .io_inst_in(IF_ID_io_inst_in),
    .io_inst_out(IF_ID_io_inst_out)
  );
  assign _T_15 = Control_io_ExtSel == 2'h0; // @[Top1.scala 47:33]
  assign _T_17 = Control_io_OpB; // @[Top1.scala 47:63]
  assign _T_18 = _T_15 & _T_17; // @[Top1.scala 47:45]
  assign _T_20 = Control_io_ExtSel == 2'h1; // @[Top1.scala 48:38]
  assign _T_23 = _T_20 & _T_17; // @[Top1.scala 48:50]
  assign _T_25 = Control_io_ExtSel == 2'h2; // @[Top1.scala 49:38]
  assign _T_28 = _T_25 & _T_17; // @[Top1.scala 49:50]
  assign _GEN_0 = _T_28 ? $signed(ImmediateGeneration_io_s_imm) : $signed(Register_io_rs2); // @[Top1.scala 49:79]
  assign _GEN_1 = _T_23 ? $signed(ImmediateGeneration_io_u_imm) : $signed(_GEN_0); // @[Top1.scala 48:79]
  assign _T_30 = Control_io_NextPc == 2'h1; // @[Top1.scala 58:33]
  assign _T_32 = Control_io_Branch == 1'h0; // @[Top1.scala 58:66]
  assign _T_33 = _T_30 & _T_32; // @[Top1.scala 58:45]
  assign _T_35 = Alu_io_Branch == 1'h0; // @[Top1.scala 58:94]
  assign _T_36 = _T_33 & _T_35; // @[Top1.scala 58:77]
  assign _T_40 = Control_io_Branch; // @[Top1.scala 59:71]
  assign _T_41 = _T_30 & _T_40; // @[Top1.scala 59:50]
  assign _T_44 = _T_41 & _T_35; // @[Top1.scala 59:82]
  assign _T_51 = Alu_io_Branch; // @[Top1.scala 60:99]
  assign _T_52 = _T_33 & _T_51; // @[Top1.scala 60:82]
  assign _T_60 = _T_41 & _T_51; // @[Top1.scala 61:82]
  assign _T_61 = $unsigned(ImmediateGeneration_io_sb_imm); // @[Top1.scala 61:156]
  assign _T_63 = Control_io_NextPc == 2'h0; // @[Top1.scala 62:38]
  assign _T_65 = Control_io_NextPc == 2'h2; // @[Top1.scala 63:38]
  assign _T_66 = $unsigned(ImmediateGeneration_io_uj_imm); // @[Top1.scala 63:96]
  assign _T_69 = $unsigned(Jalr_io_out); // @[Top1.scala 64:78]
  assign _GEN_4 = _T_65 ? _T_66 : _T_69; // @[Top1.scala 63:50]
  assign _GEN_5 = _T_63 ? {{22'd0}, IF_ID_io_pc4_out} : _GEN_4; // @[Top1.scala 62:50]
  assign _GEN_6 = _T_60 ? _T_61 : _GEN_5; // @[Top1.scala 61:110]
  assign _GEN_7 = _T_52 ? {{22'd0}, IF_ID_io_pc4_out} : _GEN_6; // @[Top1.scala 60:110]
  assign _GEN_8 = _T_44 ? {{22'd0}, IF_ID_io_pc4_out} : _GEN_7; // @[Top1.scala 59:110]
  assign _T_72 = Control_io_MemtoReg; // @[Top1.scala 75:35]
  assign _T_74 = Control_io_OpA == 2'h0; // @[Top1.scala 78:30]
  assign _T_76 = Control_io_OpA == 2'h3; // @[Top1.scala 78:60]
  assign _T_77 = _T_74 | _T_76; // @[Top1.scala 78:42]
  assign _T_80 = $signed(IF_ID_io_pc4_out); // @[Top1.scala 79:79]
  assign io_Reg_Out = Register_io_WriteData; // @[Top1.scala 56:20]
  assign Alu_io_AluControl = AluControl_io_out; // @[Top1.scala 54:27]
  assign Alu_io_in1 = _T_77 ? $signed(Register_io_rs1) : $signed({{22{_T_80[9]}},_T_80}); // @[Top1.scala 78:84 Top1.scala 79:59]
  assign Alu_io_in2 = _T_18 ? $signed(ImmediateGeneration_io_i_imm) : $signed(_GEN_1); // @[Top1.scala 47:86 Top1.scala 48:91 Top1.scala 50:28 Top1.scala 53:32]
  assign Control_io_opcode = IF_ID_io_inst_out[6:0]; // @[Top1.scala 34:27]
  assign ImmediateGeneration_io_instruction = IF_ID_io_inst_out; // @[Top1.scala 35:44]
  assign ImmediateGeneration_io_pc = {{22'd0}, IF_ID_io_pc_out}; // @[Top1.scala 36:35]
  assign AluControl_io_aluOp = Control_io_AluOp; // @[Top1.scala 43:29]
  assign AluControl_io_funct3 = IF_ID_io_inst_out[14:12]; // @[Top1.scala 44:30]
  assign AluControl_io_funct7 = IF_ID_io_inst_out[30]; // @[Top1.scala 45:30]
  assign Register_clock = clock;
  assign Register_io_RegWrite = Control_io_RegWrite; // @[Top1.scala 38:30]
  assign Register_io_rs1_s = IF_ID_io_inst_out[19:15]; // @[Top1.scala 39:27]
  assign Register_io_rs2_s = IF_ID_io_inst_out[24:20]; // @[Top1.scala 40:27]
  assign Register_io_rd = IF_ID_io_inst_out[11:7]; // @[Top1.scala 41:24]
  assign Register_io_WriteData = _T_72 ? $signed(DataMemory_io_out) : $signed(Alu_io_out); // @[Top1.scala 55:31 Top1.scala 75:66 Top1.scala 76:43]
  assign Memory_clock = clock;
  assign Memory_io_wrAddr = Pc_io_pc[11:2]; // @[Top1.scala 28:26]
  assign Pc_clock = clock;
  assign Pc_io_input = _T_36 ? {{22'd0}, IF_ID_io_pc4_out} : _GEN_8; // @[Top1.scala 29:21 Top1.scala 58:118 Top1.scala 59:123 Top1.scala 60:123 Top1.scala 61:123 Top1.scala 62:63 Top1.scala 63:63 Top1.scala 64:63]
  assign Jalr_io_in1 = Register_io_rs1; // @[Top1.scala 67:21]
  assign Jalr_io_in2 = ImmediateGeneration_io_i_imm; // @[Top1.scala 68:21]
  assign DataMemory_clock = clock;
  assign DataMemory_io_Addr = Alu_io_out[9:2]; // @[Top1.scala 70:28]
  assign DataMemory_io_Data = Register_io_rs2; // @[Top1.scala 71:28]
  assign DataMemory_io_MemWrite = Control_io_MemWrite; // @[Top1.scala 72:32]
  assign DataMemory_io_MemRead = Control_io_MemRead; // @[Top1.scala 73:31]
  assign IF_ID_clock = clock;
  assign IF_ID_io_pc_in = Pc_io_pc[9:0]; // @[Top1.scala 30:24]
  assign IF_ID_io_pc4_in = Pc_io_pc4[9:0]; // @[Top1.scala 31:25]
  assign IF_ID_io_inst_in = Memory_io_rdData; // @[Top1.scala 32:26]
endmodule
