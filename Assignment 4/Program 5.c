#include <stdio.h>

int main(){

    int N, i = 2;
    printf("Enter N : ");
    scanf("%d",&N);
    
    while(N>1){
        
        if(N%i==0){
            printf("%d \t",i);
            N /= i;
        } else {
            i++;
        }
    
    }
    
    return 0;
}
