# Skyland-Coding-Challenge

An Intcode program is a list of integers separated by commas (like [1,0,0,3,99]). To run one, start by looking at the first integer. Here, you will find an opcode - either 1, 2, or 99. Each opcode is an instruction telling your program what to do.  

Below is a list of what each opcode means:

99 - The program is finished and should immediately halt      

1 - Adds together numbers read from two positions and stores the result in a third position.      
The three integers immediately after the opcode in the array tell you these three positions.      
The first two indicate the positions from which you should read the input values, and the third indicates the position at which the output should be stored.      
For example, if your Intcode computer encounters 1,10,20,30, it should read the values at positions 10 and 20, add those values, and then overwrite the value at position 30 with their sum.      

2 - Works exactly like opcode 1, except it multiplies the two inputs instead of adding them.  Once you're done processing an opcode, move to the next one by stepping forward 4 positions.

# Part I:

Run your computer on the Intcode program below and check if the result is the same. The result should be stored at index 0.
[1,12,2,3,1,1,2,3,1,3,4,3,1,5,0,3,2,1,9,19,1,19,5,23,2,23,13,27,1,10,27,31,2,31,6,35,1,5,35,39, 1,39,10,43,2,9,43,47,1,47,5,51,2,51,9,55,1,13,55,59,1,13,59,63,1,6,63,67,2,13,67,71,1,10,71,75, 2,13,75,79,1,5,79,83,2,83,9,87,2,87,13,91,1,91,5,95,2,9,95,99,1,99,5,103,1,2,103,107,1,10,107,0, 99,2,14,0,0]

Solution (so that you can check your results): 3895705
