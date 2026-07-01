#include <stdio.h>

int main() {
    int a[10], i, num, found = 0;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    printf("Enter the number to search: ");
    scanf("%d", &num);

    for(i = 0; i < 10; i++) {
        if(a[i] == num) {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Number found");
    else
        printf("Number not found");

    return 0;
}