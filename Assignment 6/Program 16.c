#include <stdio.h>

int main(){

    int arr[10][10], rows, cols;
    int count = 0;
    
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    printf("Enter the number of columns : ");
    scanf("%d",&cols);

    if(rows==cols){
        printf("Enter elements of array one : ");
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
                if(arr[i][j]==arr[j][i]){
                    count++;
                }
            }
        }
        if(count==(rows*cols)){
            printf("Matrix is symmetrical\n");
        } else {
            printf("Matrix is not symmetrical\n");
        }
    } else {
        printf("Matrix is not a square matrix\n");
        printf("Hence, matrix cannot be symmetrical\n");
    }
    
    return 0;
}
