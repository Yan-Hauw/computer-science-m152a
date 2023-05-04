`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:17:23 05/04/2023 
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
module counter(
  // Inputs
  btnR, btnP, swADJ, swSEL, clkNORMAL, clkADJ,
  // Outputs
  minutes, seconds
  );
  // Logic
  input btnR;
  input btnP;
  input swADJ;
  input swSEL;
  input clkNORMAL;
  input clkADJ;
  
  output reg[5:0] minutes;
  output reg[5:0] seconds;
  
  //local vars to store state
  reg isPaused = 0;
  
  always @ (posedge btnP)
    isPaused <= !isPaused;
  
  always @ (posedge btnR) begin
    minutes <= 0;
    seconds <= 0;
  end
  
  always @ (posedge clkNORMAL) //handle normal counting states
   if(!swADJ) begin
     if(!isPaused) begin //count up
      seconds <= seconds + 1;
      if(seconds == 60) begin
        seconds <= 0;
        minutes <= minutes + 1;
        if(minutes == 60) begin
          minutes = 0;
        end
      end
     end
   end
  
  always @ (posedge clkADJ) //handle adjustment states
    if(swADJ) begin
      if(swSEL) begin //adjust seconds
        seconds <= seconds + 1;
        if(seconds == 60) begin
          seconds <= 0;
        end
      end
      else begin
        minutes <= minutes + 1;
        if(minutes == 60) begin
          minutes <= 0;
        end
      end
    end
endmodule
