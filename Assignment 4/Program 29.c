#include <stdio.h>

int main(){
    
    int number, factorial = 1;
    
    printf("Enter a number : ");
    scanf("%d",&number);
    
    int i = 1;
    while(i <= number){
        factorial = factorial*i;
        i++;
    }
    
    printf("Factorial of %d is : %d",number, factorial);
    
    return 0;
}
