#include<stdio.h>

int main(){
    int total;
    float percentage;

    printf("Enter Total Marks\n");
    scanf("%d",&total); 

    percentage = (total / 500.0) * 100;

    printf("The total marks is : %d\n",total);
    printf("The percentage of student is : %.2f%%\n",percentage);

    return 0;
}