#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    int N, check = 0;
    
    printf("Enter string : ");
    fgets(str, 100, stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    printf("Enter the position of word you want to search in string : ");
    scanf("%d",&N);
    
    for(int i = 0; str[i]!='\0'; i++){
        if(i==N){
            printf("Word at %dth position of a string is : %c",N, str[i]);
            check = 1;
        }
    }
    
    if(check==0){
        printf("Enter position is greater than string\n");
    }
    
    return 0;
}
