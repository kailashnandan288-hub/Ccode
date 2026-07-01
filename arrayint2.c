#include <stdio.h>

int main()
{
    int a[10], i, n, temp, digit, sum;

    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    printf("Armstrong numbers are:\n");

    for(i = 0; i < 10; i++)
    {
        n = a[i];
        temp = n;
        sum = 0;

        while(temp != 0)
        {
            digit = temp % 10;
            sum = sum + digit * digit * digit;
            temp = temp / 10;
        }

        if(sum == n)
            printf("%d ", n);
    }

    return 0;
}