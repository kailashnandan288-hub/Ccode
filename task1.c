#include<stdio.h>

int main(){
    int num;

    printf("Enter a number\n");
    scanf("%d",&num); //user input

    if(num > 0){
        printf("The number %d is Positive\n",num);
    }
    else if(num < 0){
        printf("The number %d is Negative\n",num);
    }
    else{
        printf("The number is Zero\n");
    }

    return 0;
}