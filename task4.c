#include<stdio.h>

int main(){
    int marks;

    printf("Enter marks\n");
    scanf("%d",&marks); //user input

    if(marks >= 90 && marks <= 100){
        printf("Grade is : A\n");
    }
    else if(marks >= 80 && marks <= 89){
        printf("Grade is : B\n");
    }
    else if(marks >= 70 && marks <= 79){
        printf("Grade is : C\n");
    }
    else if(marks >= 60 && marks <= 69){
        printf("Grade is : D\n");
    }
    else if(marks < 60 && marks >= 0){
        printf("Grade is : F\n");
    }
    else{
        printf("Invalid marks! Enter between 0 and 100\n");
    }

    return 0;
}