#include <stdio.h>

int main() {
    int a = 1, sum = 0;
    while (a <= 10)
     {
        sum = sum + a;
        a++;
    }
    printf("Sum = %d\n", sum);
    return 0;
}