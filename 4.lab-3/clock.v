`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:14:32 05/02/2023 
// Design Name: 
// Module Name:    clock 
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
module clock(
   // Outputs
   seg, an,
   // Inputs
   sw, btnS, btnR, clk
   );
  //include "seq_definitions.v"
   
   
   // Misc.
   input  [7:0] sw;
   input        btnS;                 // single-step instruction
   input        btnR;                 // arst
   output [6:0] seg;
   output [3:0] an;
   
   // Logic
   input        clk;                  // 100MHz
   reg clkCOUNTER;
   reg clkADJ;
   reg clkBLINKING;
   reg clkDISPLAY;
   
   integer clkCOUNTER_counter = 0;
   integer clkADJ_counter = 0;
   integer clkBLINKING_counter = 0;
   integer clkDISPLAY_counter = 0;
   
   
   wire [17:0] clk_dv_inc;
   reg [16:0]  clk_dv;
   reg         clk_en;
   reg         clk_en_d;

   wire swADJ;
   wire swSEL;
   
   reg [7:0] inst_wd;
   reg[2:0] stepRESET;
   reg[2:0] stepPAUSE;
   reg buttonRESET;
   reg buttonPAUSE;
   
   wire[5:0] minutes;
   wire[5:0] seconds;
initial begin
  clkCOUNTER = 0;
  clkADJ = 0;
  clkBLINKING = 0;
  clkDISPLAY = 0;
  clk_dv = 0;  
end

//Debouncing clock//
   assign clk_dv_inc = clk_dv + 1;
   
   always @ (posedge clk) begin
     clk_dv   <= clk_dv_inc[16:0];
     clk_en   <= clk_dv_inc[17]; //clk_en is the debouncing sampler
     clk_en_d <= clk_en;
   end
   
   always @ (posedge clk) begin
      if (clk_en)
       begin
          inst_wd[7:0] <= sw[7:0];
          stepRESET[2:0]  <= {btnR, stepRESET[2:1]};
          stepPAUSE[2:0]  <= {btnS, stepPAUSE[2:1]};

       end
        buttonRESET <= ~stepRESET[0] & stepRESET[1] & clk_en_d;
        buttonPAUSE <= ~stepPAUSE[0] & stepPAUSE[1] & clk_en_d;

   end
//////

//Other clocks//
  always @ (posedge clk) begin
    clkCOUNTER_counter <= clkCOUNTER_counter + 1;
    if(clkCOUNTER_counter == /*50000000*/10000000) clkCOUNTER_counter <= 0;
    clkADJ_counter <= clkADJ_counter + 1;
    if(clkADJ_counter == 25000000) clkADJ_counter <= 0;
    clkDISPLAY_counter <= clkDISPLAY_counter + 1;
    if(clkDISPLAY_counter == 100000) clkDISPLAY_counter <= 0;
    clkBLINKING_counter <= clkBLINKING_counter + 1;
    if(clkBLINKING_counter == 16666666) clkBLINKING_counter <= 0;
 
    if(!clkCOUNTER_counter) begin
      clkCOUNTER <= !clkCOUNTER;
    end
    if(!clkADJ_counter) begin
      clkADJ <= !clkADJ;
    end
    if(!clkDISPLAY_counter) begin
      clkDISPLAY <= !clkDISPLAY;
    end
    if(!clkBLINKING_counter) begin
      clkBLINKING <= clkBLINKING;
    end
    
  end

//DEBOUNCING//
assign swADJ = inst_wd[0];
assign swSEL = inst_wd[1];
//////

   // ===========================================================================
   // Counter
   // ===========================================================================
   counter counter_ (//outputs
                     .minutes(minutes),
                     .seconds(seconds),
                     //inputs
                     .clkNORMAL(clkCOUNTER),
                     .clkADJ(clkADJ),
                     .btnR(buttonRESET),
                     .btnP(buttonPAUSE),
                     .swADJ(swADJ),
                     .swSEL(swSEL)); //add the other parameters
   // ===========================================================================
   // Display
   // ===========================================================================
reg[3:0] minutesSecondDigit;
reg[3:0] minutesFirstDigit;
always @minutes begin
  minutesSecondDigit = minutes % 10;
  minutesFirstDigit = minutes / 10;
end
reg[3:0] secondsSecondDigit;
reg[3:0] secondsFirstDigit;
always @seconds begin
  secondsSecondDigit = seconds % 10;
  secondsFirstDigit = seconds / 10;
end
reg[1:0] displayDigit;
always @(posedge clkDISPLAY) begin
  displayDigit <= displayDigit + 1;
end
display display_ (//outputs
                      .cathode(seg),
                      .digit(  displayDigit == 0 ? minutesFirstDigit : (displayDigit == 1 ? minutesSecondDigit : (displayDigit == 2 ? secondsFirstDigit : secondsSecondDigit))   ));


assign an = displayDigit == 0 ? 4'b0111 : (displayDigit == 1 ? 4'b1011 : (displayDigit == 2 ? 4'b1101 : 4'b1110));
endmodule
