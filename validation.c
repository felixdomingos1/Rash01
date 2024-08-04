#include "rush01.h"

int is_valid_digit(char c) {
    return (c >= '1' && c <= '4');
}

int is_valid_input(char *input) {
    int i = 0;
    int count = 0;

    while (input[i]) {
        if (is_valid_digit(input[i])) {
            count++;
            i++;
        } else if (input[i] == ' ') {
            i++;
        } else {
            return 0;
        }
    }
    return (count == 16);
}
