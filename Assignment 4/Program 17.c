#include <stdio.h>

int main(){
    
    int number, original, remainder, sum = 0, product = 1;
    
    printf("Enter number : ");
    scanf("%d",&number);
    
    original = number;
    
    //to calculate sum of a digits of a number : 
    while(number != 0){
        remainder = number%10;
        sum = sum + remainder;
        number = number/10;
    }
    printf("Sum of a digits of a number %d is : %d \n", original, sum);

    number = original;
    
    //to calculate product of a digits of a number : 
    while(number != 0){
        remainder = number%10;
        product = product*remainder;
        number = number/10;
    }
    printf("Product of a digits of a number %d is : %d \n", original, product);
    
    return 0;
}
