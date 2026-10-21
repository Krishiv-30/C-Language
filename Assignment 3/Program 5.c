#include <stdio.h>

int main(){
    
    int n, check;
    
    printf("Enter your number : ");
    scanf("%d",&n);
    
    if(n%2==0){
        check = 1;
    } else {
        check = 2;
    }
    
    switch(check){
    
        case 1 : printf("Number is even");
                 break;
    
        case 2 : printf("Number is odd");
                 break;
    
    }
    
    return 0;
}
