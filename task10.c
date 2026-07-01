#include <stdio.h>

int main() {
    int number;
    int hundreds, tens, ones, reverse;

    printf("Enter 3 digit number: ");
    scanf("%d", &number);

    hundreds = number / 100;
    tens = (number / 10) % 10;
    ones = number % 10;
    reverse = (ones * 100) + (tens * 10) + hundreds;

    // printf("the number at hundreds place is:%d\n", hundreds);
    // printf("the number at tens place is:%d\n", tens);
    // printf("the number at ones place is:%d\n", ones);
    if (number == reverse) {
    printf("it is a palindrome\n");
    }
    else{
        printf("it is not a palindrome\n");
    }
    return 0;
}