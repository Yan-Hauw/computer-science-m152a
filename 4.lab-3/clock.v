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
   RsTx, led,
   // Inputs
   RsRx, sw, btnS, btnR, clk
   );
  //include "seq_definitions.v"
   
   // USB-UART
   input        RsRx;
   output       RsTx;

   // Misc.
   input  [7:0] sw;
   output [7:0] led;
   input        btnS;                 // single-step instruction
   input        btnR;                 // arst
   
   // Logic
   input        clk;                  // 100MHz
   reg clkCOUNTER;
   reg clkADJ;
   reg clkBLINKING;
   reg clkDISPLAY;
   
   integer master_clk_counter;
   
   wire [17:0] clk_dv_inc;
   reg [16:0]  clk_dv;
   reg         clk_en;

   wire swADJ;
   wire swSEL;
   wire buttonRESET;
   wire buttonPAUSE;
   
   reg[5:0] minutes;
   reg[5:0] seconds;


//Debouncing clock//
   assign clk_dv_inc = clk_dv + 1;
   
   always @ (posedge clk) begin
        clk_dv   <= clk_dv_inc[16:0];
        clk_en   <= clk_dv_inc[17]; //clk_en is the debouncing sampler
   end
//////

//Other clocks//
  always @ (posedge clk) begin
    master_clk_counter <= master_clk_counter + 1;
    if(master_clk_counter == 100000000) begin
      master_clk_counter <= 0;
    end
    if(master_clk_counter % (100000000 / 2) == 0) begin
      clkCOUNTER <= !clkCOUNTER;
    end
    if(master_clk_counter % (100000000 / 4) == 0) begin
      clkADJ <= !clkADJ;
    end
    if(master_clk_counter % (100000000 / 1000) == 0) begin
      clkDISPLAY <= !clkDISPLAY;
    end
    if(master_clk_counter % (100000000 / 3) == 0) begin
      clkBLINKING <= clkBLINKING;
    end
  end

//DEBOUNCING//
assign swADJ = sw[0] & clk_en;
assign swSEL = sw[1] & clk_en;
assign buttonRESET = btnR & clk_en;
assign buttonPAUSE = btnS & clk_en;
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
endmodule
