#include <stdio.h>

int main() {
    int a[10], i, sum = 0;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 10; i++) {
        if(a[i] > 50) {
            sum = sum + a[i];
        }
    }

    printf("Sum of elements greater than 50 = %d", sum);

    return 0;
}