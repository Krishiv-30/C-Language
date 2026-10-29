#include <stdio.h>

int main(){

    int arr[100];
    int arr_size, temp;
    
    printf("Enter the size of elements in an array : ");
    scanf("%d",&arr_size);

    printf("Enter the elements of array : ");
    for(int i = 0; i < arr_size; i++){
        scanf("%d",&arr[i]);
    }

    //Array in ascending order :
    printf("Array in ascending order are : \n");
    for(int i = 0; i < arr_size-1; i++){
        for(int j = i+1; j < arr_size; j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < arr_size; i++){
        printf("%d\t",arr[i]);
    }
    
    printf("\n");
    
    //Array in descending order :
    printf("Array in descending order are : \n");
    for(int i = 0; i < arr_size-1; i++){
        for(int j = i+1; j < arr_size; j++){
            if(arr[i]<arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < arr_size; i++){
        printf("%d\t",arr[i]);
    }
    
    return 0;
}
