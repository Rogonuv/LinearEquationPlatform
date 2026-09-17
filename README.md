# Linear Equation Platform

This is a sample platform developed in C++ for practicing linear equations step by step.

The program generates a linear equation and asks the student to solve it through different steps instead of only entering the final answer.

## Current Features

- Generates random linear equations.
- Checks the solution step by step.
- Gives feedback when an answer is correct or incorrect.
- Allows the student to try again after an incorrect answer.
- Counts the total number of attempts.
- Measures the time used to complete the exercise.
- Saves the attempts and completion time in a text file.

## Example

The program can generate an equation such as:

3x + 9 = 12

The student solves it step by step:

3x = 12 - 9

3x = 3

x = 3 / 3

x = 1

Each step must be completed correctly before continuing to the next step.

## Current Limitation

The current prototype expects the student to enter each answer following the expected input format and order.

For example, if the program expects:

3x = 12 - 9

the input is read as different values and characters in a specific order. If the student enters a different structure or enters a character where the program expects a number, the input stream can fail and the program may not allow the student to continue normally.

This input validation is a limitation of the current version and is something I plan to improve in a future version.

## About

This is my first prototype and I developed it while learning C++. The purpose of this project is to explore a simple way of evaluating the process used to solve a linear equation, rather than only checking the final answer.

I plan to continue improving as I learn more C++.
