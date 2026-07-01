#include<stdio.h>

int main(){
	printf("Hi Kailash");
	return 0;
}

#include<stdio.h>

int main(){
    // int a= 2 ;
    short int age=34;
    unsigned short int age=34;

    long int mobile=9394379474;
    float b=23.5;
    char c= 'A';
    return 0;
}
    -128 - 0 - +127 - short int
    0+127+128 - 255 -unsigned short int
    -32,768 - 0 - +32,768 - int
    -2,14,74,83,648 - 0- +2,14,74,83,648 -long int




    #include<stdio.h>

int main(){
    float marks=75;
    float total=100;
    
    float percentage=(marks/total)*100;
    
    printf("%f",percentage);

}


#include<stdio.h>

int main(){
    float price_per_kg=200;
    float kg=15.6;
    
    float cost=(price_per_kg*kg);
    
    printf("%.2f",cost);
}