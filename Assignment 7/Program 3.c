#include<stdio.h>

void printNto1(int N);

int main(){

    int N;
    printf("Enter N : ");
    scanf("%d",&N);
    
    printNto1(N);
    
    return 0;
}

void printNto1(int N){
    
    if(N==0){
        return;
    }
    
    printf("%d\t",N);
    printNto1(N-1);

}
