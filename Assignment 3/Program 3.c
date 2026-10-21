#include <stdio.h>

int main(){
    
    char ch;
    printf("Enter alphabet(upper-case) : ");
    scanf("%c",&ch);
    
    switch(ch){

        case 'A' : printf("Alphabet is vowel");
                   break;
                   
        case 'E' : printf("Alphabet is vowel");
                   break;
              
        case 'I' : printf("Alphabet is vowel");
                   break;           
        
        case 'O' : printf("Alphabet is vowel");
                   break;                        
        
        case 'U' : printf("Alphabet is vowel");
                   break;     
        
        default : printf("Alphabet is consonant");
    }
    
    return 0;
}
