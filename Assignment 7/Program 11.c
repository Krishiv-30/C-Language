#include <stdio.h>

void reverseArr(int arr[], int arr_size);
void printArr(int arr[], int arr_size);

int main(){
    
    int arr[100], arr_size;

    printf("Enter the size of an array : ");
    scanf("%d",&arr_size);
    
    printf("Enter the elements  of an array : ");
    for(int i = 0; i < arr_size; i++){
        scanf("%d",&arr[i]);
    }
    
    reverseArr(arr, arr_size);
    printArr(arr, arr_size);
    
    return 0;
}

void reverseArr(int arr[], int arr_size){
    for(int i = 0; i < arr_size/2; i++){
        int FirstValue = arr[i];
        int SecondValue = arr[arr_size-i-1];
        arr[i] = SecondValue;
        arr[arr_size-i-1] = FirstValue;
    }
}

void printArr(int arr[], int arr_size){
    for(int i = 0; i < arr_size; i++){
        printf("%d\t",arr[i]);
    }
}
