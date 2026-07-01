#include<stdio.h>
#include<string.h>

int main(){
    char str[]="kailash";

    printf("%lu",strlen(str));

    char str1[]="Hello";
    char str2[20];
    strcpy(str2,str1);
    printf("new string is %s", str2);


    return 0
}