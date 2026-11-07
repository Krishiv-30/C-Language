#include<stdio.h>
#include<string.h>

int main(){

    char str1[300];
    char str2[100];
    
    printf("Enter first string : ");
    fgets(str1, 300, stdin);
    
    printf("Enter second string : ");
    fgets(str2, 100, stdin);
    
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    int len_str1 = strlen(str1);

    int i = len_str1, j = 0;
    while(str2[j]!='\0'){
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    printf("String after concatenate is : %s",str1);
    
    return 0;
}
