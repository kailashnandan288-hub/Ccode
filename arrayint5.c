#include <stdio.h>

int main() {
    int a[10], i, smallestOdd = -1;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 10; i++) {
        if(a[i] % 2 != 0) {
            if(smallestOdd == -1 || a[i] < smallestOdd) {
                smallestOdd = a[i];
            }
        }
    }

    if(smallestOdd == -1)
        printf("No odd numbers found.");
    else
        printf("Smallest odd number = %d", smallestOdd);

    return 0;
}