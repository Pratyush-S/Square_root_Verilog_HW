`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:11:20 03/24/2018 
// Design Name: 
// Module Name:    M2_Babylonian 
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
module M2_Babylonian(
    input [15:-8] num,
    output [5:0] sqrr,
    input clk,
    input rst
    );
	 
	 reg signed [8:0]i;
	 always@(rst)
	 i=15;
	 
	 always@(posedge clk)
	 i=i-1;
	

endmodule
