#include <stdio.h>

int main() {

    for(int i = 1; i <= 5; i++){
        
        if(i<=5){
            printf("        ");
        }
        
        for(int j = 1; j <= i; j++){
            printf("%d ",j);
        }
        
        printf("\n");
    }
    
    for(int i = 5; i >= 1; i--){
        
        if(i<5){
            for(int j = 1; j <= 5-i; j++){
                printf("  ");
            }
        }
        
        for(int k = i; k >= 1; k--){
            printf("%d ",k);
        }
        
        printf("\n");
    }

    return 0;
}
