#include <stdio.h>

int main() {

    for(int i = 1; i <= 5; i++){
        
        for(int j = 1; j <= 5-i; j++){
            printf("\t");
        }
        
        for(int k = 1; k <= i; k++){
            printf("%d\t",k);
        }
        
        if(i>1){
            for(int x = i-1; x >= 1; x--){
                printf("%d\t",x);
            }
        }
        
        printf("\n");
    }
    
    for(int i = 4; i >= 1; i--){
    
        for(int j = 1; j <= 5-i; j++){
            printf("\t");
        }
        
        for(int k = 1; k <= i; k++){
            printf("%d\t",k);
        }
        
        if(i>1){
            for(int x = i-1; x >= 1; x--){
                printf("%d\t",x);
            }
        }
        
        printf("\n");
    }

    return 0;
}
