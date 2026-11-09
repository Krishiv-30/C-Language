#include <stdio.h>

int main(){

    int arr1[10][10], rows1, cols1;
    int arr2[10][10], rows2, cols2;
    int count = 0;
    
    printf("Enter the rows of matrix one : ");
    scanf("%d",&rows1);
    printf("Enter the columns of matrix one : ");
    scanf("%d",&cols1);

    printf("Enter the rows of matrix two : ");
    scanf("%d",&rows2);
    printf("Enter the columns of matrix two : ");
    scanf("%d",&cols2);

    if(rows1==rows2 && cols1==cols2){

        printf("Enter elements of matrix one : ");
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
        
        printf("Enter elements of matrix two : ");
        for(int i = 0; i < rows2; i++){
            for(int j = 0; j < cols2; j++){
                scanf("%d",&arr2[i][j]);
            }
        }
        printf("Matrix two is : \n");
        for(int i = 0; i < rows2; i++){
            printf("[\t");
            for(int j = 0; j < cols2; j++){
                printf("%d\t",arr1[i][j]);
            }
            printf("]\n");
        }
        
        for(int i = 0; i < rows1; i++){
            for(int j = 0; j < cols1; j++){
                if(arr1[i][j]==arr2[i][j]){
                    count++;
                }
            }
        }

        if(count==(rows1*cols1)){

            printf("Matrices are equal\n");

            for(int i = 0, j = 0; i < rows1 && j < rows2; i++, j++){
                printf("[\t");
                for(int x = 0; x < cols1; x++){
                    printf("%d\t",arr1[i][x]);
                }
                printf("]\t");
                i==1? printf("=\t") : printf(" \t");
                printf("[\t");
                for(int y = 0; y < cols2; y++){
                    printf("%d\t",arr2[j][y]);
                }
                printf("]\n");
            }           

        } else{
            printf("Matrices are not equal\n");
            for(int i = 0, j = 0; i < rows1 && j < rows2; i++, j++){
                printf("[\t");
                for(int x = 0; x < cols1; x++){
                    printf("%d\t",arr1[i][x]);
                }
                printf("]\t");
                i==1? printf("!=\t") : printf(" \t");
                printf("[\t");             
                for(int y = 0; y < cols2; y++){
                    printf("%d\t",arr2[j][y]);
                }
                printf("]\n");
            }
        }

    } else{
        printf("Matrices are not equal as orders of matrices are not equal");
    }

    return 0;
}
