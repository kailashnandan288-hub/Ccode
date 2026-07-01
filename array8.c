#include <stdio.h>

int main() {
    int a[10], i;
    int evenSum = 0, oddSum = 0;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 10; i++) {
        if(a[i] % 2 == 0)
            evenSum = evenSum + a[i];
        else
            oddSum = oddSum + a[i];
    }

    printf("Sum of even numbers = %d\n", evenSum);
    printf("Sum of odd numbers = %d", oddSum);

    return 0;