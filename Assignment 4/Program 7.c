#include <stdio.h>

int main(){

    int number;       //to get input from user
    int original;     //to store input from user because var(number) is used to count total no of digits
    int count = 0;    //count total no of digits
    int remainder;    //to store last digit
    int power;        //to store calculated power which is equal to no. of digits
    int sum = 0;      //to store armstrong number
    int i;            //control the flow of while lool
    
    //to get input from user
    printf("Enter your number : ");
    scanf("%d",&number);
    
    original = number;
    
    //to count total digits in a number
    while(number != 0){
        count++;
        number = number/10;
    }
    
    number = original;
    
    //to find armstrong number
    while(number != 0){
        
        remainder = number%10;
        
        power = 1;
        i = 1;
        
        while(i <= count){
            power = power*remainder;
            i++;
        }
        
        sum = sum + power;
        number = number/10;
    }
    
    //to print final result
    if(sum==original){
        printf("%d is an Armstrong number",original);
    } else {
        printf("%d is not an Armstrong number",original);
    }
    
    return 0;
}
