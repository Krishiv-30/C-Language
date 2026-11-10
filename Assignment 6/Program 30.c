#include <stdio.h>
#include <string.h>

int main(){

    char str[100], reverse_str[100];

    printf("Enter string : ");
    fgets(str, 100, stdin);
    
    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str);
    for(int i = 0, j = length-1; i<length, j>=0; i++, j--){
        reverse_str[i] = str[j];
    }
    reverse_str[length] = '\0';
    
    printf("Reverse string is : %s",reverse_str);
    
    return 0;
}
