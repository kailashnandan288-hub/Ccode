#include <stdio.h>

int main() {
    char ch;

    printf("Character\tASCII Value\n");

    for (ch = 0; ch <= 127; ch++) {
        printf("%c\t\t%d\n", ch, ch);
    }

    return 0;
}