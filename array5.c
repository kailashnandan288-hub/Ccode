#include <stdio.h>

int main()
{
    int a[10] = {15, 30, 18, 12, 9, 10, 21, 40, 45, 3}, i;

    printf("divisible by both 3 and 5:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 3 == 0 && a[i] % 5 == 0)
        {
            printf("%d\n", a[i]);
        }
    }
    return 0;
}
