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

    int max = 0, min = arr[0];
    
    //maximum elements in array :
    for(int i = 0; i < arr_size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Maximum element in array is : %d\n",max);
    
    //minimum elements in array :
    for(int i = 0; i < arr_size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Minimum elements in array is : %d\n",min);
    
    return 0;
}
