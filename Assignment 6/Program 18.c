#include <stdio.h>

int main(){

    int arr1[10][10], rows1, cols1;
    int arr2[10][10], rows2, cols2;
    int arr_add[10][10], arr_subtract[10][10];
    
    printf("Enter the number of rows of array one : ");
    scanf("%d",&rows1);
    printf("Enter the number of columns of array one : ");
    scanf("%d",&cols1);

    printf("Enter the number of rows of array two : ");
    scanf("%d",&rows2);
    printf("Enter the number of columns of array two : ");
    scanf("%d",&cols2);

    if(rows1==rows2 && cols1==cols2){

        printf("Enter elements of array one : ");
        for(int i = 0; i < rows1; i++){
            for(int j = 0; j < cols1; j++){
                scanf("%d",&arr1[i][j]);
            }
        }
        printf("Matrix one is :\n");
        for(int i = 0; i < rows1; i++){
            printf("[\t");
            for(int j = 0; j < cols1; j++){
                printf("%d\t",arr1[i][j]);
            }
            printf("]\n");
        }
        
        printf("Enter elements of array two : ");
        for(int i = 0; i < rows2; i++){
            for(int j = 0; j < cols2; j++){
                scanf("%d",&arr2[i][j]);
            }
        }
        printf("Matrix two is :\n");
        for(int i = 0; i < rows2; i++){
            printf("[\t");
            for(int j = 0; j < cols2; j++){
                printf("%d\t",arr2[i][j]);
            }
            printf("]\n");
        }
        
        //to add and subtract two matrices :
        for(int i = 0; i < rows1; i++){
            for(int j = 0; j < cols1; j++){
                arr_add[i][j] = arr1[i][j]+arr2[i][j];
                arr_subtract[i][j] = arr1[i][j]-arr2[i][j];
            }
        }
        
        printf("Addition of two matrices is :\n");
        for(int i = 0; i < rows1; i++){
            printf("[\t");
            for(int j = 0; j < cols1; j++){
                printf("%d\t",arr_add[i][j]);
            }
            printf("]\n");
        }
        
        printf("Subtraction of two matrices is :\n");
        for(int i = 0; i < rows1; i++){
            printf("[\t");
            for(int j = 0; j < cols1; j++){
                printf("%d\t",arr_subtract[i][j]);
            }
            printf("]\n");
        }

    } else {
        printf("Matrix addition and subtraction is not possible as order of matrices are not same");
    }

    return 0;
}
