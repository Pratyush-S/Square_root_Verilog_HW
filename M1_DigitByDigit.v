`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:37:45 03/24/2018 
// Design Name: 
// Module Name:    M1_DigitByDigit 
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
module M1_DigitByDigit(
    input [5:0] num,
    output [2:0] sqrr,
    input clk,
	 input reset
    );
    reg a,b;
	 reg [5:0]chain;
	 reg [7:0]div;
	 reg [5:0]base;
	 reg [5:0] sqrr;
	 reg [4:0]i;
	 
	 always@(negedge reset)
	 begin
	 i=5;
	 sqrr=0;
	 end
	 
	 always@(posedge clk)
	 begin
	 
	 div<={sqrr,2'b01};
	 a<=num[i];
	 b<=num[i-1];
	 base<=(base*4)+{a,b};
	 sqrr<=sqrr*2;
	 if (base>div)
	 
	 begin
	 base<=base-div;
	 sqrr<=sqrr+1;
	 end
	 i=i-2;
	 end

endmodule
