#include <stdio.h>

void printTable(int n, int m);

int main(){
    
    int n, m;
    printf("Enter number which multiplication table you want : ");
    scanf("%d",&n);
    printf("Enter upto which you want multiplication table of %d : ",n);
    scanf("%d",&m);

    printTable(n, m);
    
    return 0;
}

void printTable(int n, int m){
    for(int i = 1; i <= m; i++){
        printf("%d\t",n*i);
    }
}
