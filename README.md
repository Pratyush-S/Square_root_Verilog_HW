# Square_root_Verilog_HW
This report presents a digit-by-digit calculation method to solve complicated square root calculation in hardware, as a proposed simple algorithm for implementation in field programmable gate array (FPGA). The main principle of proposed method is two-bit shifting and subtracting-multiplexing operations, in order to achieve a simpler implementation and faster calculation. The proposed algorithm has conducted to implement FPGA based unsigned 18 bit binary square root successfully. The results have shown that proposed method is most efficient of hardware resource. In addition, the strategy can be expanded to larger number easily.

<h3>Algorithm</h3>
In digit-by-digit calculation method, each digit of the square root is found in a sequence where it only one digit of the square root is generated at each iteration.
 It has several advantages, such as: every digit of the root found is known to be correct and it will not have to be changed later; if the square root has to expand, it will terminate after the last digit is found; and the algorithm works for any number base but here we deal with base two.
 
<h4>PROPOSED ALGORITHM</h4>
Step 0. Start</br>
Step 1. Initialise the number that will be squared i.e. radicand, the result of the square root i.e. the quotient, the remainder along and also variables for intermediary stages </br>
Step2. Beginning from the fixed point divide the radicand into sets of two in both the directions</br>
Step 3. Beginning on the left (most significant bit), select the first group of one or two digit (If n is odd then the first groups is one digit, and vice versa) </br>
Step 4. Choose 1 squared, and then subtract. Fist developed root is “1” if the result of subtract is positive, and vice versa is “0”</br>
 Step 5. Shift two bits, subtract guess squared with append 01. Nth-bit squared is “1” if the result of subtract is positive, and Because of subtract operation is done else Nth-bit squared is “0”, and not subtract </br>
Step 6. Go to step 5 until end group of two digits. To calculate square root of a 2n bit number, n number of iterations are required. </br>
Step 7. End</br>

