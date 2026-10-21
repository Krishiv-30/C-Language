#include <stdio.h>

int main(){
    
    int N;
    printf("Enter N : ");
    scanf("%d",&N);
    
    printf("Natural numbers from %d to 1 is : \n",N);
    
    int i = N;
    while(i>=1){
        printf("%d \t",i);
        i--;
    }
    
    return 0;
}
