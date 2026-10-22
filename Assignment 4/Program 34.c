#include <stdio.h>

int main(){
    
    int octal, decimal = 0, binary = 0;
    int base = 1, remainder, place = 1;
    
    printf("Enter an octal number : ");
    scanf("%d",&octal);
    
    //Convert octal to decimal : 
    while(octal>0){
        remainder = octal%10;
        decimal = decimal + (remainder*base);
        octal /= 10;
        base *= 8;
    }
    
     //Convert decimal to binary :
    while(decimal>0){
        remainder = decimal%2;
        binary = binary + (remainder*place);
        decimal /= 2;
        place *= 10;
    }
    
    printf("Binary number is : %d\n", binary);

    return 0;
}
