#include <stdio.h>

int main(){

    int N;
    printf("Enter N : ");
    scanf("%d",&N);
    
    printf("Natural numbers from 1 to %d is : \n",N);
    
    int i = 1;
    while(i<=N){
        printf("%d \t",i);
        i++;
    }
    
    return 0;
}
