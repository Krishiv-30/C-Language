#include <stdio.h>

int main(){

    int arr[10][10], rows, cols;
    int count = 0;
    
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    printf("Enter the number of columns : ");
    scanf("%d",&cols);

    printf("Enter elements of array : ");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Matrix is : \n");
    for(int i = 0; i < rows; i++){
        printf("[\t");
        for(int j = 0; j < cols; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("]\n");
    }
    
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(arr[i][j]==1){
                count++;
            }
        }
    }
    if(count==(rows*cols)){
        printf("Matrix is an identity matrix\n");
    } else {
        printf("Matrix is not an identity matrix\n");
    }
    
    return 0;
}
