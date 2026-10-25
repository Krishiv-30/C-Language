#include <stdio.h>

int main(){

    int arr[100];
    int arr_size;

    printf("Enter the size of an array : ");
    scanf("%d",&arr_size);

    printf("Enter the elements of array : ");
    for(int i = 0; i < arr_size; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Reverse elements of array is : \n");
    for(int i = arr_size-1; i >= 0; i--){
        printf("%d\t",arr[i]);
    }

    return 0;
}
