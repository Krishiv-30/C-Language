#include <stdio.h>

int main(){

    int num, divisor;

    printf("Enter number : ");
    scanf("%d",&num);
    printf("Enter divisor : ");
    scanf("%d",&divisor);

    if(num%divisor==0){
        printf("Number is divisble by %d",divisor);
    } else{
        printf("Number is not divisble by %d",divisor);
    }

    return 0;
}
