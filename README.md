# Check Soduku

This C program checks the validity of a given Sudoku solution. Users input a completed 9x9 Sudoku grid, and the program verifies if it adheres to the standard Sudoku rules: each row, column, and 3x3 subgrid contains unique numbers from 1 to 9.
## Inspiration
This program was inspired by the work of **Y. Daniel Liang**, the author of *Introduction to Java Programming and Data Structures*. Liang's book provides foundational insights into programming and data structures, and his explanations of algorithmic problem-solving served as an inspiration for developing this solution validator in C.

## Features
- Validates if a 9x9 grid is a correct Sudoku solution
- Ensures each row, column, and 3x3 subgrid contains numbers 1-9 without repetition

## Getting Started

### Prerequisites
- A C compiler, such as GCC.

### Compilation and Execution
To compile and run the program:
```bash
gcc CheckSoduku.c -o CheckSoduku
./CheckSoduku
