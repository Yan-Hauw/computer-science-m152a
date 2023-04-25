/*
 * Module: Testbench for FPCVT Module * 
 * Filename: tb.v
 * Version: 1.0
 *
 * Author:  Cejo Konuparamban Lonappan
 * Modified by: Ramsey Boyce, Yan Hauw, Kevin Xia
 *
 * Description: The testbench code for verifying the two's complement to
 * floating point converter.
 */

`timescale 1ns / 1ps

module tb; // No inputs for a testbench!

// Inputs in the module to be tested will be port mapped to register variables
reg [11:0] D;

// Outputs in the module to be tested will be port mapped to wire variables
wire S;
wire [2:0] E;
wire [3:0] F;

// Instantiation of the design module to be verified by the testbench
// Use named portmapping to map inputs to regsiter variables and outputs to
// wires
fpcvt UUT 	(.D(D), 
				 .S(S), .E(E), .F(F));

// Used for saving Value Change Dump (.vcd) file that records the waveforms of
// the simulation. Not needed while using Xilinx ISIM simulator.
/*
initial
begin
        $dumpfile("combinational_gates_muxed.vcd");
        $dumpvars(2, fpcvt.UUT);
end
*/

// IMPORTANT: Initialize all inputs. Otherwise the default value of register
// will be don't care (x).
initial
begin
	D = 1'b0;
end

// Use an always block to generate all the test cases
always
	#5 D = D + 1'b1;

// Code to terminate simulation after all the test cases have been covered.
//initial
	//#160090000 $finish; // After 160 timeunits, terminate simulation.

endmodule
