#include <stdio.h>

int main(){
    int n, digit, divisor = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Find the highest place value
    while (n / divisor >= 10){
        divisor = divisor * 10;
    }

    printf("Number in words: ");

    while (divisor > 0){
    
        digit = n / divisor;
        n = n % divisor;
        divisor = divisor / 10;

        switch (digit){
                    
            case 1: printf("One ");
                    break;
                    
            case 2: printf("Two "); 
                    break;
                    
            case 3: printf("Three "); 
                    break;
                    
            case 4: printf("Four "); 
                    break;
                    
            case 5: printf("Five "); 
                    break;
                    
            case 6: printf("Six "); 
                    break;
                    
            case 7: printf("Seven "); 
                    break;
                    
            case 8: printf("Eight "); 
                    break;
                    
            case 9: printf("Nine "); 
                    break;
                    
            default : printf("Zero ");        
        }
        
    }

    return 0;
}
