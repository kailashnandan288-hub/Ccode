#include <stdio.h>

struct student{


int rollnumber;
char name[40];
float marks;
};

int main(){
    struct student x;

    printf("Enter roll number");
    scanf("%d",&x.rollnumber);

    printf("Enter student name");
    scanf("%x",x.name);

    printf("Enter marks");
    scanf("%f",&x.marks);

    printf("Roll number:%d\n", x.rollnumber);
    printf("Student name:%x\n", x.name);
    printf("student marks:%f\n", x.marks);

    return 0;
}