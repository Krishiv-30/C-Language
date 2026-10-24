#include <stdio.h>

int main() {

    char str[] = "COMPUTER";
    
    for(int i = 8; i >= 1; i--){
        
        for(int j = 0; j <= i-1; j++){
            printf("%c\t",str[j]);
        }
        
        printf("\n");
    }

    return 0;
}
