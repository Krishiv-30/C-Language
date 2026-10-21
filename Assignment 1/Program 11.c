#include <stdio.h>

int main(){
    
    int n, original, rev = 0, rem;
    printf("Enter four-digit number : ");
    scanf("%d",&n);
    
    original = n;
    
    while(n>0){
        rem = n%10;
        rev = rev*10 + rem;
        n /= 10;
    }
    
    printf("Reverse number of %d is : %d",original, rev);
    
    return 0;
}
