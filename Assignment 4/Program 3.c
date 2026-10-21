#include <stdio.h>
#include <math.h>

int main(){
    
    int N, i=2, j, isPrime, sum=0;
    
    printf("Enter value of N to which sum of prime numbers is to be calculate : ");
    scanf("%d",&N);
    printf("Prime numbers from 1 to %d is : \n",N);
    
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
            sum += i;
        }
    
        i++;
    }
    
    printf("\n");
    printf("Sum of all prime numbers between 1 to %d is : %d",N, sum);
    
    return 0;
}
