#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    int count_vowel = 0, count_consonant = 0;

    printf("Enter string : ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';

    for(int i = 0; str[i]!='\0'; i++){
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count_vowel++;
        } else if(str[i]>='A'&&str[i]<='Z' || str[i]>='a'&&str[i]<='z'){
            count_consonant++;
        }     
    }    
    printf("No. of vowels in sentence are : %d\n",count_vowel);
    printf("No. of consonants in sentence are : %d\n",count_consonant);
    
    return 0;
}
