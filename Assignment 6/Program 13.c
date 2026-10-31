#include <stdio.h>

int main(){

    int arr[100], arr_size, visited[100] = {0};

    printf("Enter size of the elements: ");
    scanf("%d",&arr_size);

    printf("Enter the elements of an array : ");
    for(int i = 0; i < arr_size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Frequency of each element :\n");

    for(int i = 0; i < arr_size; i++){
    
        int count = 1;

        if(visited[i]==1){
            continue;
        }
        
        for(int j = i + 1; j < arr_size; j++){
            if(arr[i]==arr[j]){
                count++;
                visited[j] = 1;
            }
        }

        printf("%d = %d times\n", a[i], count);
    }

    return 0;
}
