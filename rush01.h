#ifndef RUSH01_H
#define RUSH01_H

void ft_puterror(void);
int is_valid_digit(char c);
int is_valid_input(char *input);
void print_solution(int grid[4][4]);
int check_row_left(int grid[4][4], int row, int expected);
int check_row_right(int grid[4][4], int row, int expected);
int check_col_up(int grid[4][4], int col, int expected);
int check_col_down(int grid[4][4], int col, int expected);
int is_valid_grid(int grid[4][4], int *constraints);
int solve(int grid[4][4], int *constraints, int row, int col);
void solve_puzzle(char *input);

#endif
