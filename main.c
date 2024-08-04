#include "rush01.h"
#include <unistd.h>

void ft_puterror(void) {
    write(1, "Error\n", 6);
}

int main(int argc, char **argv) {
    if (argc != 2 || !is_valid_input(argv[1])) {
        ft_puterror();
        return 1;
    }
    solve_puzzle(argv[1]);
    return 0;
}
