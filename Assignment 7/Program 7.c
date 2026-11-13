#include <stdio.h>

int Fib(int n);

int main(){
    
    int n;
    printf("Enter the terms of fibonacci sequence : ");
    scanf("%d",&n);

    printf("%d",Fib(n));
    
    return 0;
}

int Fib(int n){

    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibn1 = Fib(n-1);
    int fibn2 = Fib(n-2);
    int fibn = fibn1 + fibn2;

    return fibn;
}
