#include <stdio.h>

int main(){
    
    int number, original, remainder, reverse = 0;
    
    printf("Enter your number : ");
    scanf("%d",&number);
    
    original = number;
  
    while(number != 0){
        remainder = number%10;
        reverse = reverse*10 + remainder;
        number = number/10;
    }
    
    printf("Original number is : %d \n",original);
    printf("Reverse number is : %d \n",reverse);
    
    if(original==reverse){
        printf("%d is a palindrome number\n",original);
    } else {
        printf("%d is not a palindrome number\n",original);
    }
    
    return 0;
}
