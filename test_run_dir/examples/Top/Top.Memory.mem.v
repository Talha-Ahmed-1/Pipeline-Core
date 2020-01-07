module BindsTo_0_Memory(
  input         clock,
  input  [9:0]  io_wrAddr,
  output [31:0] io_rdData
);

initial begin
  $readmemh("/home/talha/riscv/shaheen/abc.txt", Memory.mem);
end
                      endmodule

bind Memory BindsTo_0_Memory BindsTo_0_Memory_Inst(.*);