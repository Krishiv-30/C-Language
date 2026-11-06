#include <stdio.h>

int main() {

    char first_str[100];
    char second_str[100];
    
    printf("Enter first string : ");
    fgets(first_str, 100, stdin);
    
    printf("Enter second string : ");
    fgets(second_str, 100, stdin);

    int i = 0;
    while(first_str[i]!='\0'){
        second_str[i] = first_str[i];
        i++;
    }
    second_str[i] = '\0';
    
    printf("First string is : %s",first_str);
    printf("Second string after copying is : %s",second_str);
    
    return 0;
}
