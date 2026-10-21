#include <stdio.h>

int main(){

    printf("All alphabets(in upper-case) are : \n");
    
    char ch = 'A';
    while(ch <= 'Z'){
        printf("%c\t",ch);
        ch++;
    }
    
    return 0;
}
