#include <stdio.h>
#include <string.h>

int main(){
    
    char password[100], salt[50];

    printf("Enter your password : ");
    scanf("%s",password);
    printf("Enter company's salt : ");
    scanf("%s",salt);
    
    strcat(password, salt);
    printf("Your password with company's salt is : %s",password);
    
    return 0;
}
