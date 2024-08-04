#include "rush01.h"
#include <unistd.h>

void print_solution(int grid[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            char c = grid[i][j] + '0';
            write(1, &c, 1);
            if (j < 3)
                write(1, " ", 1);
        }
        write(1, "$\n", 2);
    }
}
