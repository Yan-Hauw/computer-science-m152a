`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:14:58 04/06/2023 
// Design Name: 
// Module Name:    led 
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
module led(clk, o_led);

input clk;
output reg o_led;

reg [31:0] cntr;

always @ (posedge clk) begin
  cntr <= cntr + 1;
  if (cntr == 'd100000000) begin
    o_led <= !o_led;
    cntr <= 0;
  end
end

endmodule
