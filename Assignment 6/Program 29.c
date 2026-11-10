#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    int count = 0;

    printf("Enter string : ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';

    for(int i = 0; str[i]!='\0'; i++){
        if(str[i]>='A'&&str[i]<='Z' || str[i]>='a'&&str[i]<='z'){
            count++;
        }      
    }
    
    printf("No. of alphabets in a string is : %d\n",count);
    
    return 0;
}
