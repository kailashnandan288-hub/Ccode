#include <stdio.h>

int main() {
    int a[10], i;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);

        if(a[i] > 0)
            positive++;
        else if(a[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);
    printf("Zeros = %d\n", zero);

    return 0;
}