#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    int count_alphabet = 0, count_digit = 0, count_special = 0;
    
    printf("Enter string : ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';

    for(int i = 0; str[i]!='\0'; i++){
        if(str[i]>='A'&&str[i]<='Z' || str[i]>='a'&&str[i]<='z'){
            count_alphabet++;
        } else if(str[i]>='0' && str[i]<='9'){
            count_digit++;
        } else {
            count_special++;
        }
    } 
    printf("No. of alphabet are : %d\n",count_alphabet);
    printf("No. of digits are : %d\n",count_digit);
    printf("No. of special characters are : %d\n",count_special);

    return 0;
}
