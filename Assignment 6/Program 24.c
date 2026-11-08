#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    
    printf("Enter string in lowercase : ");
    fgets(str, 100, stdin);
    
    str[strcspn(str, "\n")] = '\0';

    for(int i = 0; str[i]!='\0'; i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] -= 32;
        }
    }
    
    printf("Above string in uppercase is : %s",str);
    
    return 0;
}
