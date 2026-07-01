#include <stdio.h>

int main() {
    int a[10], i;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    printf("Elements greater than both neighbors:\n");

    for(i = 1; i < 9; i++) {
        if(a[i] > a[i - 1] && a[i] > a[i + 1]) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}