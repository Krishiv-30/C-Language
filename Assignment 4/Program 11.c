#include <stdio.h>

int main(){

    int N;
    int sum = 0;
    
    printf("Enter number : ");
    scanf("%d",&N);
    
    int i = 1;
    while(i <= N){
        sum += i;
        i++;
    }
    
    printf("Sum of all natural numbers between 1 to %d is : %d",N, sum);
    
    return 0;
}
