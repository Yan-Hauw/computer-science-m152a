`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:28:37 05/09/2023
// Design Name:   clock
// Module Name:   C:/Users/Student/Documents/dhb/lab5group4project3/testbench.v
// Project Name:  lab5group4project3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clock
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testbench;

	// Inputs
	reg [7:0] sw;
	reg btnS;
	reg btnR;
	reg clk;

	// Outputs
	wire [6:0] seg;
	wire [3:0] an;

	// Instantiate the Unit Under Test (UUT)
	clock uut (
		.seg(seg), 
		.an(an), 
		.sw(sw), 
		.btnS(btnS), 
		.btnR(btnR), 
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		sw = 0;
		btnS = 0;
		btnR = 0;
		clk = 0;
        
		// Add stimulus here
  
	end
  always
      #1 clk <= !clk;
  
endmodule

