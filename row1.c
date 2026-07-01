
#include <stdio.h>

int main() {
    int row = 5;
    int i, col, space;

    for (i = 1; i <= row; i++) {
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
