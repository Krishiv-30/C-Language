#include <stdio.h>

int main(){

    int arr1[10][10], rows1, cols1;
    int arr2[10][10], rows2, cols2;
    int arr_multiply[10][10];
    
    printf("Enter rows of Matrix A : ");
    scanf("%d",&rows1);
    printf("Enter columns of Matrix A : ");
    scanf("%d",&cols1);
    printf("Enter rows of Matrix B : ");
    scanf("%d",&rows2);
    printf("Enter columns of Matrix B : ");
    scanf("%d",&cols2);
    
    if(cols1==rows2){
        
        //Matrix A :
        printf("Enter elements of array one : ");
        for(int i = 0; i < rows1; i++){
            for(int j = 0; j < cols1; j++){
                scanf("%d",&arr1[i][j]);
            }
        }
        printf("Matrix one is : \n");
        for(int i = 0; i < rows1; i++){
            printf("[\t");
            for(int j = 0; j < cols1; j++){
                printf("%d\t",arr1[i][j]);
            }
            printf("]\n");
        }
    
        //Matrix B :
        printf("Enter elements of array two : ");
        for(int i = 0; i < rows2; i++){
            for(int j = 0; j < cols2; j++){
                scanf("%d",&arr2[i][j]);
            }
        }
        printf("Matrix two is : \n");
        for(int i = 0; i < rows2; i++){
            printf("[\t");
            for(int j = 0; j < cols2; j++){
                printf("%d\t",arr2[i][j]);
            }
            printf("]\n");
        }
    
        printf("\n");
        
        //intiallizing multiplication matrix :
        for(int i = 0; i < rows1; i++){
            for(int j = 0; j < cols2; j++){
                arr_multiply[i][j] = 0;
            }
        }
        
        for(int i = 0; i < rows1; i++){
            for(int j = 0; j < cols2; j++){
                for(int k = 0; k < cols1; k++){
                    arr_multiply[i][j] += arr1[i][k]*arr2[k][j];
                }
            }
        }
        
        printf("Multiplication of two matrices is : \n");
        for(int i = 0; i < rows1; i++){
            printf("[\t");
            for(int j = 0; j < cols2; j++){
                printf("%d\t",arr_multiply[i][j]);
            }
            printf("]\n");
        }
        
    } else {
        printf("Matrix multiplication not possible");
    }
        
    return 0;
}
