#include <stdio.h>

int main(){
    
    int N, check;
    printf("Enter your number : ");
    scanf("%d",&N);
    
    if(N>0){
        check = 1;
    } else if(N<0){
        check = 2;
    }
    
    switch(check){
    
        case 1 : printf("Number is positive");
                 break;
    
        case 2 : printf("Number is negative");
                 break;
    
        default : printf("Number is zero");
    }
    
    return 0;
}
