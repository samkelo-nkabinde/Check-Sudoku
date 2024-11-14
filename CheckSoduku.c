#include <stdio.h>
#include <stdbool.h>

void readASolution(int grid[9][9]);
bool isValid(int grid[9][9]);
bool isValidCell(int i, int j, int grid[9][9]);

int main() {
    int grid[9][9];

    // Read a Sudoku solution
    readASolution(grid);

    // Check if the solution is valid
    if (isValid(grid)) {
        printf("Valid solution\n");
    } else {
        printf("Invalid solution\n");
    }

    return 0;
}

// Read a Sudoku solution from the console
void readASolution(int grid[9][9]) {
    printf("Enter a Sudoku puzzle solution:\n");
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &grid[i][j]);
        }
    }
}

// Check whether a solution is valid
bool isValid(int grid[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (grid[i][j] < 1 || grid[i][j] > 9 || !isValidCell(i, j, grid)) {
                return false;
            }
        }
    }
    return true; // The solution is valid
}

// Check whether grid[i][j] is valid in the grid
bool isValidCell(int i, int j, int grid[9][9]) {
    // Check whether grid[i][j] is unique in i's row
    for (int column = 0; column < 9; column++) {
        if (column != j && grid[i][column] == grid[i][j]) {
            return false;
        }
    }

    // Check whether grid[i][j] is unique in j's column
    for (int row = 0; row < 9; row++) {
        if (row != i && grid[row][j] == grid[i][j]) {
            return false;
        }
    }

    // Check whether grid[i][j] is unique in the 3-by-3 box
    int boxRowStart = (i / 3) * 3;
    int boxColStart = (j / 3) * 3;
    for (int row = boxRowStart; row < boxRowStart + 3; row++) {
        for (int col = boxColStart; col < boxColStart + 3; col++) {
            if ((row != i || col != j) && grid[row][col] == grid[i][j]) {
                return false;
            }
        }
    }

    return true; // The current value at grid[i][j] is valid
}
