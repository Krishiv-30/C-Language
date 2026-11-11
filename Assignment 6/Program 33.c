#include <stdio.h>
#include <string.h>

int main(){

    char str[100], ch_find, ch_replace;
    
    printf("Enter string : ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';
    
    printf("Enter the character you want to find : ");
    scanf("%c",&ch_find);
    
    printf("Enter the character you want to replace with : ");
    scanf(" %c",&ch_replace);
    
    for(int i = 0; str[i]!='\0'; i++){
        if(str[i]==ch_find){
            str[i] = ch_replace;
        }
    }
    printf("Replace string is : %s",str);
    
    return 0;
}
