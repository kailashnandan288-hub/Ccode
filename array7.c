#include <stdio.h>

int main() {
    int a[10], i, j, count = 0;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 10; i++) {

        int factors = 0;

        for(j = 1; j <= a[i]; j++) {
            if(a[i] % j == 0)
                factors++;
        }

        if(factors == 2)
            count++;
    }

    printf("Prime numbers = %d", count);

    return 0;
}