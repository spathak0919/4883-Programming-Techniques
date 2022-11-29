### P673 - Parentheses Balance

### Problem Description:

You are given a string consisting of parentheses () and []. 
A string of this type is said to be correct: 
(a) if it is the empty string
(b) if A and B are correct, AB is correct
(c) if A is correct, (A) and [A] is correct. Write a program that takes a sequence of strings of this type and check their correctness. 
Your program can assume that the maximum string length is 128.


### Breaking down the problem: 

Basically the problem is just asking us to cheack whether the current parenthesis are match.  Well we need each opening bracket to have a closing bracket in the right postion.

Here are some things I noticed that helped with addressing the problem 
We know that an empty string is considered correct, so this edge case can be handled right away. 
We can see that if something is odd there will be no chance for the input to have a balanced open and closed pairs. 
We need specific pattern a sequence to check the first open bracket with the latest closed bracket 

programming paradigims i though about was linear scan and using the stack data structure . 
The stack data structure follows the LIFO pattern which helps process the brackets in the order we want.

One approach to check balanced parentheses is to use stack. 
Each time, when an open parentheses is encountered push it in the stack, and when closed parenthesis is encountered, match it with the top of stack and pop it. If stack is empty at the end, return Balanced otherwise, Unbalanced.


For input we just have to read a line which is just one test case. 
The test case it self is just a string and we just have to iterate over it.

The order of the output played no role in the solution. the output format it self didn't cause any problems.

### Files

|   #   | File            | Description                                        |
| :---: | --------------- | -------------------------------------------------- |
|   1   | main.py        |Solution code for the file     |
|   2   |Banner  |Banner Comments |
|   3   |p673.pdf |Problem |
