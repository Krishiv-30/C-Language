#include <stdio.h>

int main() {

    char str[] = "AHOVC";
    
    for(int i = 0; i<=5; i++){
    
        for(int j = 0; j <= i; j++){
            printf("%c\t",str[j]);
        }
    
        printf("\n");
    }

    return 0;
}
