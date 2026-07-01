#include<stdio.h>

int main(){
    int num;

    printf("Enter a number\n");
    scanf("%d",&num); //user input

    if(num % 5 == 0){
        printf("The number %d is divisible by 5\n",num);
    }
    else{
        printf("The number %d is not divisible by 5\n",num);
    }

    return 0;
}