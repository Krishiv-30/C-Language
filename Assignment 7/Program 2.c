#include<stdio.h>

void print1toN(int N);

int main(){

    int N;
    printf("Enter N : ");
    scanf("%d",&N);
    
    print1toN(N);
    
    return 0;
}

void print1toN(int N){

    if(N==0){
        return;
    }
    
    print1toN(N-1);
    printf("%d\t",N);

}
