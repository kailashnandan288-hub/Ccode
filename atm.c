#include <stdio.h>

int main() {
    int pin         = 1234;
    float balance   = 10000.00;
    int enterPin;
    int amount;

    

    
    printf("\nEnter your PIN: ");
    scanf("%d", &enterPin);

    if (enterPin != pin) {
        printf("\nIncorrect PIN.\n");
    }
    else {
        printf("\nPIN Accepted!\n");
       
        printf("Balance: %.2f\n", balance);
        

        printf("\nEnter amount to withdraw: ");
        scanf("%d", &amount);

        if (amount > balance) {
            printf("\nInsufficient Funds!\n");
            
        }
        else {
            if (amount % 100 != 0){
                printf("enter amount in multiple of 100");
            }
            else{
            balance = balance - amount;

            int total = amount;
        

            int n500 = total / 500;
            total = total % 500;

            int n200 = total / 200;
            total = total % 200;
            
            int n100 = total / 100;
            total = total % 100;

            printf("500 notes : %d\n", n500);
            printf("200 notes : %d\n", n200);
            printf("100 notes : %d\n", n100);

            

           
    
            printf("Success!\n");
           
            printf("Amount Withdrawn  : %.2f\n", amount);
            printf("Remaining Balance : %.2f\n", balance);     
            }
           
        }  
    }

    return 0;
}