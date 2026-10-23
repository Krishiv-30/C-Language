#include <stdio.h>

int main() {

    int n = 0;
    for (int i = 0; i <= 4; i++){
    
        for (int j = 0; j <= i; j++){
            printf("%d ", n%5);
            n++;
        }
        
        printf("\n");
    }

    return 0;
}
