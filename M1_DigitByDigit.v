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
    input [15:-6] num,
    output reg [7:-7] sqrr,
    input clk,
	 input reset
    );
    reg a,b;
	 reg [10:0]div;
	 reg [15:-6]base;
	 reg signed [8:0]i; ////check
	 
	 
	 always@(posedge clk )
	 begin
	 if(reset)
	 begin
	 i=15;
	 sqrr=0;
	 base=0;
	 end

	 if(!reset && i>-8)
	 begin
	 div=(sqrr*4)+2'b01;
	 a=num[i];
	 b=num[i-1];
	 base=(base*4)+{a,b};
	 sqrr=sqrr*2;
	 if (base>=div)
	 begin
	 base=base-div;
	 sqrr=sqrr+1;
	 end
	 i=i-2;
	 end
	 
	 end
	
endmodule
