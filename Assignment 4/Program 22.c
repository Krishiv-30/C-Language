#include <stdio.h>

int main(){
    
    int N, original, remainder, sum = 0, sum_reset = 0, factT = 1, factT_reset = 1;
    
    printf("Enter N : ");
    scanf("%d",&N);
    
    printf("Strong numbers upto %d are : \n",N);
    
    int i = 1;
    while(i <= N){
    
        original = i;
    
        while(i != 0){
            
            remainder = i%10;
            
            for(int j = 1; j <= remainder; j++){
                factT = factT*j;
            }
            
            sum = sum + factT;
            factT = factT_reset;
            
            i = i/10;
        }
        
        if(sum==original){
            printf("%d \t",original);
        }
        
        sum = sum_reset;
        i = original;
        
        i++;
    }
    
    return 0;
}
