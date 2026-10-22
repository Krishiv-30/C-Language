#include <stdio.h>

int main(){

    int n1, n2;
    printf("Enter first number : ");
    scanf("%d",&n1);
    printf("Enter second number : ");
    scanf("%d",&n2);
    
    int a = n1, b = n2;
    
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    
    printf("HCF of %d and %d is : %d",n1, n2, a);
    
    return 0;
}
