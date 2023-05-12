`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:16:47 05/09/2023 
// Design Name: 
// Module Name:    display 
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
module display(
//inputs
digit,
//outputs
cathode
    );
input [3:0] digit;
output reg [6:0] cathode;

always @* begin
  if (digit == 0) cathode = 7'b1000000;
  else if (digit == 1) cathode = 7'b1111001;
  else if (digit == 2) cathode = 7'b0100100;
  else if (digit == 3) cathode = 7'b0110000;
  else if (digit == 4) cathode = 7'b0011001;
  else if (digit == 5) cathode = 7'b0010010;
  else if (digit == 6) cathode = 7'b0000010;
  else if (digit == 7) cathode = 7'b1111000;
  else if (digit == 8) cathode = 7'b0000000;
  else if (digit == 9) cathode = 7'b0010000;
  else cathode = 7'b1111111;
end



endmodule
