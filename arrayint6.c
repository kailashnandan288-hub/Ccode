#include <stdio.h>

int main() {
    int a[10], i, largest, index = 0;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    largest = a[0];

    for(i = 1; i < 10; i++) {
        if(a[i] > largest) {
            largest = a[i];
            index = i;
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Index position = %d", index);

    return 0;
}