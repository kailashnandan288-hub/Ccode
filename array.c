#include <stdio.h>

int main(){
    int week[7] = {24,34,27,30,25,22,29};
    int product = 1;

    for(int i = 0  ; i < 7 ; i++){
        product = product * week[i];
}
printf("product = %d\n", product);

return 0;
}