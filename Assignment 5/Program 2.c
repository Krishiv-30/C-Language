#include <stdio.h>

int main(){

    char ch = 'A';
    while(ch <= 'E'){
        
        char ch_ = 'A';
        while(ch_ <= ch){
        
            printf("%c \t",ch_);
            
            ch_++;
        }
        
        printf("\n");
        
        ch++;
    }
    
    return 0;
}
