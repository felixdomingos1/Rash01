#include "rush01.h"

int solve(int grid[4][4], int *constraints, int row, int col) {
    if (row == 4) {
        if (is_valid_grid(grid, constraints))
            return 1;
        return 0;
    }
    if (col == 4)
        return solve(grid, constraints, row + 1, 0);

    for (int num = 1; num <= 4; num++) {
        int valid = 1;
        for (int k = 0; k < 4; k++) {
            if (grid[row][k] == num || grid[k][col] == num) {
                valid = 0;
                break;
            }
        }
        if (valid) {
            grid[row][col] = num;
            if (solve(grid, constraints, row, col + 1))
                return 1;
            grid[row][col] = 0;
        }
    }
    return 0;
}

void solve_puzzle(char *input) {
    int constraints[16];
    int grid[4][4] = {{0}};

    for (int i = 0, j = 0; i < 31; i += 2, j++) {
        constraints[j] = input[i] - '0';
    }

    if (solve(grid, constraints, 0, 0)) {
        print_solution(grid);
    } else {
        ft_puterror();
    }
}
