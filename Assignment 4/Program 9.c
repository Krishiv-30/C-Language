#include <stdio.h>

int main(){

    int n;
    printf("Enter range(n) : ");
    scanf("%d",&n);
    
    printf("\n");
    
    //odd numbers : 
    printf("All odd numbers upto %d are : \n",n);
    int i = 0;
    while(i <= n){
        
        if(i%2!=0){
            printf("%d \t",i);
        }
    
        i++;
    }
    
    printf("\n\n");
    
    //even numbers ;
    printf("All even numbers upto %d are : \n",n);
    int j = 0;
    while(j <= n){
        
        if(j%2==0){
            printf("%d \t",j);
        }
        
        j++;
    }
    
    return 0;
}
