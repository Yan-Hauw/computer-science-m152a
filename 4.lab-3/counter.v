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
  
  output [5:0] minutes;
  output [5:0] seconds;
  
  //local vars to store state
  reg isPaused = 0;
  reg[5:0] secondsNORMAL = 0;
  reg[5:0] minutesNORMAL = 0;
  reg[5:0] secondsSEL = 0;
  reg[5:0] minutesSEL = 0;
  
  
  
  always @ (posedge btnP)
    isPaused <= !isPaused;

  always @ (posedge clkNORMAL) begin//handle normal counting states
    if(btnR) begin
      minutesNORMAL <= 0;
      secondsNORMAL <= 0;
    end
    else if(!isPaused) begin
      if(seconds == 59) begin
        secondsNORMAL <= 0;
        if(minutes == 59) begin
          minutesNORMAL <= 0;
        end
        else begin
          minutesNORMAL <= minutes + 1;
        end
      end
      else begin
        secondsNORMAL <= seconds + 1;
      end
    end
    else begin
      minutesNORMAL <= minutes;
      secondsNORMAL <= seconds;
    end
end
  always @ (posedge clkADJ) begin//handle adjustment states
    if(btnR) begin
      minutesSEL <= 0;
      secondsSEL <= 0;
    end
    else if(!isPaused) begin
      if(seconds == 59) begin
        secondsSEL <= 0;
        if(minutes == 59) begin
          minutesSEL <= 0;
        end
        else begin
          minutesSEL <= minutes + 1;
        end
      end
      else begin
        secondsSEL <= seconds + 1;
      end
    end
    else begin
      minutesSEL <= minutes;
      secondsSEL <= seconds;
    end
end
assign minutes = btnR ? 0 : (swADJ ? minutesSEL : minutesNORMAL);
assign seconds = btnR ? 0 : (swADJ ? secondsSEL : secondsNORMAL);
endmodule
