#include "rush01.h"

int check_row_left(int grid[4][4], int row, int expected) {
    int max_height = 0;
    int visible_count = 0;
    for (int i = 0; i < 4; i++) {
        if (grid[row][i] > max_height) {
            max_height = grid[row][i];
            visible_count++;
        }
    }
    return (visible_count == expected);
}

int check_row_right(int grid[4][4], int row, int expected) {
    int max_height = 0;
    int visible_count = 0;
    for (int i = 3; i >= 0; i--) {
        if (grid[row][i] > max_height) {
            max_height = grid[row][i];
            visible_count++;
        }
    }
    return (visible_count == expected);
}

int check_col_up(int grid[4][4], int col, int expected) {
    int max_height = 0;
    int visible_count = 0;
    for (int i = 0; i < 4; i++) {
        if (grid[i][col] > max_height) {
            max_height = grid[i][col];
            visible_count++;
        }
    }
    return (visible_count == expected);
}

int check_col_down(int grid[4][4], int col, int expected) {
    int max_height = 0;
    int visible_count = 0;
    for (int i = 3; i >= 0; i--) {
        if (grid[i][col] > max_height) {
            max_height = grid[i][col];
            visible_count++;
        }
    }
    return (visible_count == expected);
}

int is_valid_grid(int grid[4][4], int *constraints) {
    for (int i = 0; i < 4; i++) {
        if (!check_col_up(grid, i, constraints[i]) || !check_col_down(grid, i, constraints[i + 4]))
            return 0;
        if (!check_row_left(grid, i, constraints[i + 8]) || !check_row_right(grid, i, constraints[i + 12]))
            return 0;
    }
    return 1;
}
