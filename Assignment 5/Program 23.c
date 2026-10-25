#include <stdio.h>

int main(){

    char str[] = "COMPUTER";
    
    for(int i = 8; i >= 1; i--){
        
        for(int j = 1; j <= i-1; j++){
            printf("\t");
        }
        
        for(int k = 7; k >= i-1; k--){
            printf("%c\t",str[k]);
        }
        
        printf("\n");
    }

    return 0;
}
