#include <stdio.h>
#include <string.h>

int main() {

    char first_str[100], second_str[100];
    int diff = 0;
    
    printf("Enter first string : ");
    fgets(first_str, 100, stdin);
    
    printf("Enter second string : ");
    fgets(second_str, 100, stdin);
    
    first_str[strcspn(first_str, "\n")] = '\0';
    second_str[strcspn(second_str, "\n")] = '\0';

    for(int i = 0; first_str[i]!='\0' && second_str[i]!='\0'; i++){
        if(first_str[i]!=second_str[i]){
            diff = first_str[i]-second_str[i];
            break;
        }
    }
    
    if(diff==0){
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
        printf("Both strings differ by : %d\n",diff);
    }
    
    return 0;
}
