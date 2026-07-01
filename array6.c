#include <stdio.h>

int main() {
    int a[10], i;
    float sum = 0, avg;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    avg = sum / 10;

    printf("Average = %.2f\n", avg);

    printf("Elements greater than average:\n");

    for(i = 0; i < 10; i++) {
        if(a[i] > avg)
            printf("%d ", a[i]);
    }

    return 0;
}