#include <stdio.h>
#include <string.h>

int main(){

    char str[100], ch;
    int check = 0, count = 0;
    
    printf("Enter string : ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';
    
    printf("Enter the character you want to search : ");
    scanf("%c",&ch);
    
    for(int i = 0; str[i]!='\0'; i++){
        if(str[i]==ch){
            printf("It occurs at %d index of an array\n",i);
            check = 1;
            count++;
        }
    }

    if(check==0){
        printf("Not found a character in a string\n");
    } else if(check==1){
        printf("%c occurs %d times in a string",ch, count);
    }  
    
    return 0;
}
