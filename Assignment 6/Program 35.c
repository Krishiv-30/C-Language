#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    
    printf("Enter string : ");
    fgets(str, 100, stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    int j = 0;
    for(int i = 0; str[i]!='\0'; i++){
        if(str[i]==' ' && str[i+1]==' '){
            continue;
        }
        str[j++] = str[i];
    }
    str[j] = '\0';   
    printf("String after removing extra spaces : %s",str);

    return 0;
}
