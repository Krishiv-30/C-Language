#include <stdio.h>
#include <string.h>

void sliceofstring(char str[], int n, int m);

int main(){
    
    char str[100];
    printf("Enter string : ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';
    
    int n, m;
    printf("Enter starting and ending position of character : ");
    scanf("%d %d",&n,&m);
    
    sliceofstring(str, n, m);
    
    return 0;
}

void sliceofstring(char str[], int n, int m){
    for(int i = n-1; i <= m-1; i++){
        printf("%c",str[i]);
    }
}
