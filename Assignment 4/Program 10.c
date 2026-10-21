#include <stdio.h>

int main(){

    int n;
    int sum = 0;
    
    printf("Enter number : ");
    scanf("%d",&n);
    
    int i = 1;
    while(i <= n/2){
        
        if(n%i==0){
            printf("%d \t",i);
            sum = sum + i;
        }
        
        i++;
    }
    
    printf("\n\n");
    
    if(sum == n){
        printf("%d is a perfect number",n);
    } else {
        printf("%d is not a perfect number",n);
    }
    
    return 0;
}
