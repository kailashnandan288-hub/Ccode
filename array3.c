#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    int even = 0, odd = 0;

    printf("Enter %d numbers:\n", n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);

    return 0;
}