#include <stdio.h>

int main() {
    int a[10], i;
    int largest, second;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    if(a[0] > a[1]) {
        largest = a[0];
        second = a[1];
    } else {
        largest = a[1];
        second = a[0];
    }

    for(i = 2; i < 10; i++) {

        if(a[i] > largest) {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }

    printf("Second largest = %d", second);

    return 0;
}