#include <stdio.h>

int main() {

    for(int i = 0; i <= 4; i++){
    
        for(int sp = 3; sp >= i; sp--){
            printf("  ");
        }
        
        for(int j = i; j >= 0; j--){
            printf("%d ",j);
        }
    
        for(int k = 1; k <= i; k++){
            printf("%d ",k);
        }
    
        printf("\n");
    }

    return 0;
}
