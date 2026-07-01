#include <stdio.h>

int main() {
    float a, b, c;

    printf("enter three sides of a triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0) {
        if (a + b > c && a + c > b && b + c > a)
            printf("valid triangle!\n");
        else
            printf("not a valid triangle\n");
    } else {
        printf("only positive numbers\n");
    }

    return 0;
}