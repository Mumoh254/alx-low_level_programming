#include <stdio.h>

void print_diagonal(int n) {
    if (n <= 0) {
        putchar('\n');
        return;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i - 1; j++) {
            putchar(' ');
        }
        putchar('\\');
        putchar('\n');
    }
    putchar('\n');
}
