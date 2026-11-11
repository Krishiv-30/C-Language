#include <stdio.h>
#include <string.h>

int main(){

    char original_str[100], reverse_str[100];

    printf("Enter string : ");
    fgets(original_str, 100, stdin);

    original_str[strcspn(original_str, "\n")] = '\0';
    
    int length = strlen(original_str); 
    for(int i = 0, j = length-1; i<length, j>=0; i++, j--){
        reverse_str[i] = original_str[j];
    }
    reverse_str[length] = '\0';
    
    printf("Reverse string is : %s\n",reverse_str);
    
    if(strcmp(reverse_str, original_str)==0){
        printf("String is palindrome\n");
    } else {
        printf("String is not palindrome\n");
    }

    return 0;
}
