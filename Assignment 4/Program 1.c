#include <stdio.h>
#include <math.h>

int main(){

    int N, i = 2, j, isPrime;
    
    printf("Enter N : ");
    scanf("%d",&N);
    
    printf("\nPrime numbers from 1 to %d is :  \n",N);
    
    while(i<=N){
        
        j = 2;
        isPrime = 1;
        
        while(j<=sqrt(i)){
            
            if(i%j==0){
                isPrime = 0;
                break;
            }
        
            j++;
        }
    
        if(isPrime == 1){
            printf("%d \t",i);
        }
    
        i++;
    }

    return 0;
}
