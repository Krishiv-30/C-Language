#include <stdio.h>

int main(){
    
    int n;
    int sum = 0, sum_reset = 0;
    
    printf("Enter n : ");
    scanf("%d",&n);
    
    printf("Perfect numbers upto %d are : \n",n);
    
    int i = 1;
    while(i <= n){
        
        int j = 1;
        while(j <= i/2){
            
            if(i%j==0){
                sum = sum + j;
            }
            
            j++;
        }
        
        if(sum==i){
            printf("%d \t",i);
        }
        
        sum = sum_reset;
        i++;
    }
    
    printf("\n");
    
    return 0;
}
