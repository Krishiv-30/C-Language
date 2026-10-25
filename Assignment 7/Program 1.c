#include<stdio.h>

void printHello(int N);

int main(){

    int N;
    printf("Enter N : ");
    scanf("%d",&N);
    
    printHello(N);
    
    return 0;
}

void printHello(int N){
    
    if(N==0){
        return;
    }
    
    printf("Hello \n");
    printHello(N-1);
    
}
