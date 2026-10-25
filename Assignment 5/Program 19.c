#include <stdio.h>

int main(){

    char str[] = "MOUSE";
    
    for(int i = 1; i <= 5; i++){
    
        for(int j = 4; j >= 5-i; j--){
            printf("%c ",str[j]);
        }
        
        for(int k = 1; k <= 9-(2*i); k++){
            printf("  ");
        }
            
        for(int x = (i==5? 1 : 5-i); x <= 4; x++){
            printf("%c ",str[x]);
        }
        
        
        printf("\n");
    }
    
    for(int i = 4; i >= 1; i--){
        
        for(int j = 4; j >= 5-i; j--){
            printf("%c ",str[j]);
        }
        
        for(int k = 1; k <= 9-2*i; k++){
            printf("  ");
        }
        
        for(int x = 5-i; x <= 4; x++){
            printf("%c ",str[x]);
        }
        
        printf("\n");
    }

    return 0;
}
