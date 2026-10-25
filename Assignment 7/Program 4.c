#include<stdio.h>

int calcFactorial(int n);

int main(){

    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    
    printf("Factorial of %d is : %d",n, calcFactorial(n));
    
    return 0;
}

int calcFactorial(int n){
    
    if(n==0){
        return 1;
    }
    
    int factNm1 = calcFactorial(n-1);
    int factT = factNm1*n;
    
    return factT;
}
