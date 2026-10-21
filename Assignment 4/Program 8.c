#include <stdio.h>

int main(){

    int number;
    int original;
    int count = 0;
    int count_reset = 0;
    int remainder;
    int power;
    int sum = 0;
    int sum_reset = 0;
    
    printf("Enter your number : ");
    scanf("%d",&number);
    
    printf("All Armstrong numbers between 1 to %d is : \n",number);
    
    int i = 1;
    while(i <= number){
    
         original = i;
        
        while(i != 0){
            count++;
            i = i/10;
        }
        
        i = original;
        
        while(original != 0){
            
            remainder = original%10;
            
            power = 1;
            int j = 1;
            
            while(j <= count){
                power = power*remainder;
                j++;
            }
            
            sum = sum + power;
            original = original/10;
        
        }
        
        if(sum == i){
            printf("%d \t",i);
        }
        
        count = count_reset;
        sum = sum_reset;
        
        i++;
    }
    
    return 0;
}
