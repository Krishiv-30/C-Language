#include <stdio.h>

int main(){

    int i = 1;
    while(i <= 5){
        
        int j = i;
        while(j >= 1){
            printf("%d\t",j);
            j--;
        }
        printf("\n");
    
        i++;
    }
    
    return 0;
}
