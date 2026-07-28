#include <stdio.h>

int main() {
    int n, i, largestEven = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            if (arr[i] > largestEven) {
                largestEven = arr[i];
            }
        }
    }

    if (largestEven == -1)
        printf("No even number found.");
    else
        printf("Largest even number = %d", largestEven);

    return 0;
}
