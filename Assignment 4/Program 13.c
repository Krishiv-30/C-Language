#include <stdio.h>

int main(){

    int N;
    printf("Enter value of N : ");
    scanf("%d",&N);
    
    printf("Table of %d is : \n",N);
    
    int i = 1;
    while(i <= 10){
        printf("%d×%d = %d \n",N, i, N*i);
        i++;
    }
    
    return 0;
}
