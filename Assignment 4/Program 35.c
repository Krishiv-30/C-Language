#include <stdio.h>
#include <math.h>

int main(){

    int N, isPrime = 1;
    
    printf("Enter your number : ");
    scanf("%d",&N);
    
    for(int i = 2; i <= sqrt(N); i++){
        if(N%i==0){
            isPrime = 0;
            break;
        }
    }
    
    if(isPrime==1){
        printf("Number is a prime number");
    } else {
        printf("Number is not a prime number");
    }
        
    return 0;
}
