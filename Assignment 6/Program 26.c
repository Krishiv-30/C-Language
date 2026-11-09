#include <stdio.h>
#include <string.h>

int main() {

    char str[100];

    printf("Enter string : ");
    fgets(str, 100, stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    for(int i = 0; str[i]!='\0'; i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] += 32;
        }else if(str[i]>='a' && str[i]<='z'){
            str[i] -= 32;
        }
    }

    printf("Above string in toggle case is : %s",str);

    return 0;
}
