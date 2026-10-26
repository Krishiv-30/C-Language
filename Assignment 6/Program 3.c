#include <stdio.h>

int main(){

    int arr[100];
    int arr_size, sum = 0;

    printf("Enter the size of an array : ");
    scanf("%d",&arr_size);

    printf("Enter the elements of an array : ");
    for(int i = 0; i < arr_size; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Sum of all elements of array is : ");
    for(int i = 0; i < arr_size; i++){
        sum += arr[i];
    }
    printf("%d",sum);
    
    return 0;
}
