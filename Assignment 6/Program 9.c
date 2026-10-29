#include <stdio.h>

int main() {

    int arr[100], arr_size;
    int n, found = 0;
    
    printf("Enter the size of an array : ");
    scanf("%d",&arr_size);
    printf("Enter the elements  of an array : ");
    for(int i = 0; i < arr_size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the element that you want to search in an array : ");
    scanf("%d",&n);
    
    for(int i = 0; i < arr_size; i++){
        if(arr[i]==n){
            printf("Element found in an array");
            found = 1;
            break;
        }
    }
    
    if(found==0){
        printf("Element not found in an array");
    }
    
    return 0;
}
