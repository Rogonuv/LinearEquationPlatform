# Linear Equation Platform

This is my first C++ prototype of a platform for solving linear equations step by step.

I developed this project while learning C++. The main idea is to evaluate the process used by the student to solve an equation instead of only checking the final answer.

## How It Works

The program generates a random linear equation such as:

3x + 9 = 12

The student then solves the equation step by step:

3x = 12 - 9

3x = 3

x = 3 / 3

x = 1

The program checks each step before allowing the student to continue. If the answer is incorrect, the student receives feedback and can try again.

## Features Implemented

- Random generation of linear equations.
- Step-by-step solution process.
- Validation of each step.
- Feedback for correct and incorrect answers.
- Multiple attempts when an answer is incorrect.
- Attempt counter.
- Measurement of the total time used to complete the exercise.
- Automatic saving of attempts and completion time in a text file.
- The results file is opened in append mode, so new exercise results can be added without deleting previous results.

## Concepts I Practiced

While developing this prototype, I practiced and learned how to use:

- Variables and data types.
- Conditional statements (`if` / `else`).
- `while` loops.
- User input with `cin`.
- Console output with `cout`.
- Random number generation.
- Time measurement using the `<chrono>` library.
- File handling using the `<fstream>` library.
- Append mode (`ios::app`) to keep a history of results.
- Basic input validation logic.
- Git for version control.
- GitHub for storing and sharing the project.

## Results File

After the student completes the exercise, the program creates or updates a file called:

`resultados.txt`

The program saves information such as:

- Number of attempts.
- Total completion time.

The file is generated locally when the program is executed. It is not included in the repository because it contains results produced during each execution of the program.

## Current Limitation

The current prototype expects the student to enter each answer following the expected input format and order.

For example, if the program expects:

3x = 12 - 9

the input is read as different values and characters in a specific order.

If the student enters a different structure, or enters a character where the program expects a number, the input stream can fail and the program may not allow the student to continue normally.

I identified this input validation as one of the main limitations of the current version and something I would like to improve in a future version.

## Project Status

This is an initial prototype.

My goal with this first version was to understand and build the basic logic myself while learning C++, including the step-by-step validation, attempts, timing, file output, and version control.

I plan to continue improving the platform as I learn more C++ and receive feedback about the project.