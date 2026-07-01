#include <stdio.h>

int main() {
    int arr[5];
    int sum = 0, product = 1;


    for(int i = 0; i < 5; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    for(int i = 0; i < 5; i++) {
        sum = sum + arr[i];
        product = product * arr[i];
    }

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);

    return 0;
}