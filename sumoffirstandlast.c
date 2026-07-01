#include <stdio.h>

int main()
{
    int num, first, last, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    temp = num;
    while(temp >= 10)
    {
        temp = temp / 10;
    }

    first = temp;

    printf("Sum = %d", first + last);

    return 0;
}