#include <stdio.h>

int main() {
    int number;
    int hundreds, tens, ones, sum;

    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    hundreds = number / 100;
    tens     = (number / 10) % 10;
    ones     = number % 10;

    sum = (hundreds * hundreds * hundreds) +
          (tens * tens * tens) +
          (ones * ones * ones);

    if (number == sum) {
        printf("it is an Armstrong number\n");
    }
    else {
        printf("it is not an Armstrong number\n");
    }

    return 0;
}