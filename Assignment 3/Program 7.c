#include<stdio.h>

int main(){
    
    float n1, n2;
    int operator;
    
    printf("Enter first number : ");
    scanf("%f",&n1);
    printf("Enter second number : ");
    scanf("%f",&n2);
    printf("Select operator : \n");
    printf("Addition : 1\n");
    printf("Subtraction : 2\n");
    printf("Multiplication : 3\n");
    printf("Division : 4\n");
    printf("Enter operation(1-4) : ");
    scanf("%d",&operator);
    
    switch(operator){
    
        case 1 : printf("Sum of two numbers is : %f",n1+n2);
                 break;
    
        case 2 : printf("Difference of two numbers is : %f",n1-n2);
                 break;
    
        case 3 : printf("Product of two numbers : %f",n1*n2);
                 break;
    
        case 4 : printf("Division of two numbers : %f",n1/n2);
                 break;
        
        default : printf("Invalid operator!!");     
    }
    
    return 0;
}
