#include <stdio.h>

int main(){
    
    int N, original, remainder, sum = 0, factT = 1, factT_reset = 1;
    
    printf("Enter N : ");
    scanf("%d",&N);
    
    original = N;
    
    while(N != 0){
       remainder = N%10;
       
       for(int i = 1; i <= remainder; i++){
           factT = factT*i ;
       }
        
       sum = sum + factT;
       factT = factT_reset;
       
       N = N/10;
    }
    
    if(sum==original){
        printf("%d is a strong number",original);
    } else {
        printf("%d is not a strong number",original);
    }
    
    return 0;
}
