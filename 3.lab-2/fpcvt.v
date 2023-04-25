`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:11:26 04/20/2023 
// Design Name: 
// Module Name:    fpcvt 
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
module fpcvt(D, S, E, F
    );
input [11:0] D;
output reg S;
output reg [2:0] E;
output reg [3:0] F;

reg [11:0] magnitude;
reg R;

always @* begin
  S = D[11]; //MSB of D is the sign
  
  // Compute the magnitude //
  if(S==1) begin
    magnitude[10:0] = -D[10:0];
    if(!magnitude) magnitude = 2047; //handles edge case of D = -2048; pretend D is -2047
  end else begin
    magnitude[10:0] = D[10:0];
  end
  magnitude[11] = 0;
  
  // Priority Encoder //
  // Compute the Exponent //
  if(magnitude[10]==1) E=3'd7; 
  else if(magnitude[9]==1) E=3'd6;
  else if(magnitude[8]==1) E=3'd5;
  else if(magnitude[7]==1) E=3'd4;
  else if(magnitude[6]==1) E=3'd3;
  else if(magnitude[5]==1) E=3'd2;
  else if(magnitude[4]==1) E=3'd1;
  else
  E=3'd0;
  
  // Compute the Significand //
  F = magnitude[E+3-:4];
  
  // Rounding //
  
  R = magnitude[E-1];
  if(R) begin
    if (F < 15) begin
      F = F + 1;
    end
    // If incrementing F will overflow, set F to 1000 and increment E (unless E would overflow) //
    else if(E < 7) begin
      E = E + 1;
      F = 4'b1000;
    end
    
  end
end
endmodule
