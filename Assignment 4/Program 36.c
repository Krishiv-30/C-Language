#include <stdio.h>

int main(){
    
    int binary, decimal = 0, octal = 0;
    int base = 1, remainder, place = 1;
    
    printf("Enter an binary number : ");
    scanf("%d",&binary);
    
    //Convert binary to decimal :
    while(binary>0){
        remainder = binary%10;
        decimal = decimal + (remainder*base);
        binary /= 10;
        base *= 2;
    }
    
    //Convert decimal to octal : 
    while(decimal>0){
        remainder = decimal%8;
        octal = octal + (remainder*place);
        decimal /= 8;
        place *= 10;
    }
    
    printf("Octal number is : %d\n",octal);

    return 0;
}
