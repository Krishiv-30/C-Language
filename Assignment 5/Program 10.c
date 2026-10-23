#include <stdio.h>

int main(){

    for(int i = 1; i <= 5; i++){
        
        for(int sp = 4; sp >= i; sp--){
            printf("  ");
        }
        
        for(int j = i; j >= 1; j--){
            printf("%d ",j*j*j);
        }
    
        printf("\n");
    }
    
    return 0;
}
