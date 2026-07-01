#include <stdio.h>

int main() {
    int a = 23;
    int b = 35;
    int c;


    c = a;
    a = b;
    b = c;

    printf("after swap: a = %d, b = %d\n", a, b);

    return 0;
}