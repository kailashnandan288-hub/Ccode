#include <stdio.h>

int main() {
    int i;

    printf("Alphabets from A to Z:\n");

    for (i = 65; i <= 90; i++) {
        printf("ASCII %d = %c\n", i, (char)i);
    }

    return 0;
}