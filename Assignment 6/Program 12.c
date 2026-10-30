#include <stdio.h>

int main(){

    int arr[100], arr_size;
    
    printf("Enter size of the number of elements : ");
    scanf("%d",&arr_size);
    
    printf("Enter elements of array : ");
    for(int i = 0; i < arr_size; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Unique elements in array is : \n");
    for(int i = 0; i < arr_size; i++){
        
        int count = 0;
        
        for(int j = 0; j < arr_size; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        
        if(count==1){
            printf("%d\t",arr[i]);
        }
        
    }
    
    return 0;
}
