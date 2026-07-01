#include <stdio.h>

int main() {
    int num, fd, ld, md;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Please enter a valid 3-digit number.\n");
        return 0;
    }
    

    if (fd == ld)
        printf("%d is a Palindrome.\n", num);
    else
        printf("%d is not a Palindrome.\n", num);

    return 0;
}