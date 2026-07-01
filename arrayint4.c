#include <stdio.h>

int main()
{
    int a[10], i;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 10; i++)
    {
        if(a[i] < 0)
        {
            a[i] = 0;
        }
    }

    printf("Array after replacing negative numbers with zero:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}