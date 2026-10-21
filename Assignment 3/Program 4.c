#include <stdio.h>

int main(){
    
    int num1, num2, check;
    
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);
    
    if(num1>num2){
        check = 1;
    } else if(num1<num2){
        check = 2;
    }
    
    switch(check){
    
        case 1 : printf("First number is maximum \n");
                 break;
    
        case 2 : printf("Second number is maximum \n");
                 break;
        
        default : printf("Both numbers are equal");     
    }
    
    return 0;
}
