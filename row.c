#include <stdio.h>
int main() {
    int row = 5;
    for(int i = 1; i <= 5; i++){
        for(int space = 1; space <= row-i; space++){
            printf(" ");
        }
        for(int col = 1; col <= i; col++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}