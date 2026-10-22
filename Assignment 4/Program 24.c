#include <stdio.h>

int main(){
    
    int n;
    int a = 0;
    int b = 1;
    int c;
    
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    
    int i = 1;
    while(i <= n){
        
        printf("%d \t",a);
        c = a + b;
        a = b;
        b = c;
        
        i++;
    }

    return 0;
}
