#include <stdio.h>

int main(){

    int arr[100];
    int arr_size;

    printf("Enter the size of an array : ");
    scanf("%d",&arr_size);

    printf("Enter the elements of an array : ");
    for(int i = 0; i < arr_size; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Negative elements in an array are : \n");
    for(int i = 0; i < arr_size; i++){
        if(arr[i] < 0){
            printf("%d\t",arr[i]);
        }
    }

    return 0;
}
