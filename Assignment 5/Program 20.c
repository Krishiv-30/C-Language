#include <stdio.h>

int main(){

    char star = '*';
    
    for(int i = 1; i <= 5; i++){
        
        for(int j = 1; j <= i; j++){
            printf("%c\t",star);
        }
        
        printf("\n");
    }

    return 0;
}
