#include <stdio.h>

int main(){

    int arr[100];
    int arr_size, count_even = 0, count_odd = 0;

    printf("Enter the size of an array : ");
    scanf("%d",&arr_size);

    printf("Enter the elements of an array : ");
    for(int i = 0; i < arr_size; i++){
        scanf("%d",&arr[i]);
    }
    
    //to count no. of even elements in array :
    for(int i = 0; i < arr_size; i++){
        if(arr[i]%2==0){
            count_even++;
        }
    }
    printf("No. of even elements in array is : %d\n",count_even);
    
    //to count no. of odd elements in array :
    for(int i = 0; i < arr_size; i++){
        if(arr[i]%2!=0){
            count_odd++;
        }
    }
    printf("No. of odd elements in array is : %d\n",count_odd);
    
    return 0;
}
