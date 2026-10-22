#include <stdio.h>

int main(){

    int number, original, count = 0;
    
    printf("Enter your number : ");
    scanf("%d",&number);
    
    original = number;
    
    while(number != 0){
        count++;
        number = number/10;
    }
    
    printf("Number of digits in %d are : %d \n", original, count);
    
    return 0;
}
