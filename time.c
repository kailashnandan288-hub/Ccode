#include <stdio.h>

int main() {
    int hh, mm, ss;

    printf("enter time (hh mm ss): ");
    scanf("%d %d %d", &hh, &mm, &ss);

    if (hh >= 0 && hh <= 23 && mm >= 0 && mm <= 59 && ss >= 0 && ss <= 59)
        printf("valid time.\n");
    else
        printf("invalid time.\n");

    return 0;
}