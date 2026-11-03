#include <stdio.h>

int main(){

    int arr[10][10], arr_transpose[10][10], rows, cols;

    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    printf("Enter the number of column : ");
    scanf("%d",&cols);

    printf("Enter elements of the matrix : ");
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
            arr_transpose[j][i] = arr[i][j];
        }
    }
    
    printf("Transpose of Matrix is :\n");
    for(int i = 0; i < cols; i++){
        printf("[\t");
        for(int j = 0; j < rows; j++){
            printf("%d\t",arr_transpose[i][j]);
        }
        printf("]\n");
    }
    
    return 0;
}
