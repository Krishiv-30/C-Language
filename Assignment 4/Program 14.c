#include <stdio.h>

int main(){

    int N, sum_odd = 0, sum_even = 0;
    
    printf("Enter N : ");
    scanf("%d",&N);
    
    printf("\n");
    
    //sum of odd numbers :
    int i = 1;
    while(i <= N){
    
        if(i%2!=0){
            sum_odd = sum_odd + i;
        }
        
        i++;
    }
    printf("Sum of all odd numbers upto %d is : %d",N, sum_odd);
    
    printf("\n\n");
    
    //summ of even numbers :
    int j = 1;
    while(j <= N){
        
        if(j%2==0){
            sum_even = sum_even + j;
        }
    
        j++;
    }
    printf("Sum of all even numbers upto %d is : %d",N, sum_even);
    
    printf("\n");
    
    return 0;
}
