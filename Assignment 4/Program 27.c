#include <stdio.h>

int main(){

    int number;
    
    printf("Enter number : ");
    scanf("%d",&number);
    
    printf("Factors of %d are : \n",number);
    
    int i = 1;
    while(i <= number){
        
        if(number%i == 0){
            printf("%d\t",i);
        }
    
        i++;
    }
    
    return 0;
}
