#include <stdio.h>

int main() {

    int arr[100], arr_size;
    int arr_even[100], arr_odd[100];
    int e = 0, o = 0;
    
    printf("Enetr the size of an array : ");
    scanf("%d",&arr_size);
    printf("Enetr the elements of an array : ");
    for(int i = 0; i < arr_size; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < arr_size; i++){
    
        if(arr[i]%2==0){
            arr_even[e++] = arr[i];
        } else {
            arr_odd[o++] = arr[i];
        }
        
    }
    
    //even elements array : 
    printf("Even elements in array is : \n");
    for(int i = 0; i < e; i++){
        printf("%d\t",arr_even[i]);
    }
    
    printf("\n");
    
    //odd elements array : 
    printf("Odd elements in array is : \n");
    for(int i = 0; i < o; i++){
        printf("%d\t",arr_odd[i]);
    }
    
    return 0;
}
