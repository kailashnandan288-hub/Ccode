#include <stdio.h>

    int main() {
        int number, reverse = 0;
        int ones;

        printf("Enter a number: ");
        scanf("%d", &number);

        int original = number;

        while (number != 0) {
            ones    = number % 10;
            reverse = (reverse * 10) + ones;
            number  = number / 10;
        }

        printf("Original number : %d\n", original);
        printf("Reversed number : %d\n", reverse);

        return 0;
    }