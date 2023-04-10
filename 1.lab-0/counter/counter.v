`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:28:00 04/06/2023 
// Design Name: 
// Module Name:    counter 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module counter(clk, rst, a);

// Input and output declaration
input clk, rst;
output reg [3:0] a;

always @ (posedge clk) begin
  if(rst) begin
    a <= 4'b0000;
  end
  else begin
    a <= a+1'b1;
  end
end
endmodule
