#include <stdio.h>

int main() {

    char str[100];
    int length = 0;
    
    printf("Enter the string to calculate its length : ");
    fgets(str, 100, stdin);
    
    for(int i = 0; str[i]!='\0'; i++){   //to get rid of new line that produces at the end of string due to fgets
        if(str[i]=='\n'){                // we can also use length -= 1; after calculating whole length instead of this loop 
            str[i] = '\0';
        }
    }

    for(int i = 0; str[i]!='\0'; i++){
        length++;
    }
    
    printf("Length of a string is : %d\n",length);
    
    return 0;
}
