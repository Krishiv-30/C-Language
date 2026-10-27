#include <stdio.h>

int main(){

    int arr[100];
    int arr_size;
    int largest = 0, second_largest = 0; //assuming all inputs are positive , as this works for a positive inputs only not for negative inputs

    printf("Enter the size of an array : ");
    scanf("%d",&arr_size);

    printf("Enter the elements of an array : ");
    for(int i = 0; i < arr_size; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0; i < arr_size; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    
    for(int i = 0; i < arr_size; i++){
        if(arr[i] > second_largest && arr[i]!=largest){
            second_largest = arr[i];
        }
    }
    printf("Second largest element in array is : %d",second_largest);

    return 0;
}
