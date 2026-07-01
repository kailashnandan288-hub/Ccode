#include<stdio.h>

int main(){
    int day;

    printf("Enter day number 1-7\n");
    scanf("%d",&day); //user input

    if(day==1){
        printf("Today is Monday");
    }
    else if(day==2){
        printf("Today is Tuesday");
    }
    else if(day==3){
        printf("Today is Wednesday");
    }
    else if(day==4){    
        printf("Today is Thursday");
    }
    else if(day==5){
        printf("Today is Friday");
    }
    else if(day==6){
        printf("Today is Saturday");
    }
    else if(day==7){
        printf("Today is Sunday");
    }
    else{
        printf("Invalid day");
    }

    return 0;
}