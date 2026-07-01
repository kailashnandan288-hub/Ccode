#include <stdio.h>

int main() {
    int row = 5;
    int i, col, space;

    for (i = row; i >= 1; i--) {
        for (space = 1; space <= row - i; space++) {
            printf("  ");
        }
        for (col = 1; col <= i; col++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}