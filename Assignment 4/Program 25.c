#include <stdio.h>

int main(){
    
    int number, power, result = 1;
    
    printf("Enter number : ");
    scanf("%d",&number);
    
    printf("Enter power : ");
    scanf("%d",&power);
    
    int i = 1;
    while(i<=power){
        result = result*number;
        i++;
    }
    
    printf("%d^%d = %d",number, power, result);
    
    return 0;
}
