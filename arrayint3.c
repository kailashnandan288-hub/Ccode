#include <stdio.h>

int main()
{
    int a[10], i, n, temp, rev = 0, digit;

    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    printf("Palindrome numbers are:\n");

    for(i = 0; i < 10; i++)
    {
        n = a[i];
        temp = n;
        rev = 0;

        while(temp != 0)
        {
            digit = temp % 10;
            rev = rev * 10 + digit;
            temp = temp / 10;
        }

        if(rev == n)
            printf("%d ", n);
    }

    return 0;
}