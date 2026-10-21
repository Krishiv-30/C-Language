#include <stdio.h>

int main(){
    
    char ch;
    printf("Enter your alphabet(upper-case) : ");
    scanf("%c",&ch);
    
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        printf("Alphabet is vowel");
    } else {
        printf("Alphabet is consonant");
    }
    
    return 0;
}
