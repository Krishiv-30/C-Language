#include <stdio.h>

int main(){

    int arr1[3][3];
    int arr2[3][3];
    int count = 0;
    
    printf("Enter elements of array one : ");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Matrix one is : \n");
    printf("[ %d %d %d]\n",arr1[0][0],arr1[0][1],arr1[0][2]);
    printf("[ %d %d %d]\n",arr1[1][0],arr1[1][1],arr1[1][2]);
    printf("[ %d %d %d]\n",arr1[2][0],arr1[2][1],arr1[2][2]);
    
    printf("Enter elements of array two : ");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("Matrix two is : \n");
    printf("[ %d %d %d]\n",arr2[0][0],arr2[0][1],arr2[0][2]);
    printf("[ %d %d %d]\n",arr2[1][0],arr2[1][1],arr2[1][2]);
    printf("[ %d %d %d]\n",arr2[2][0],arr2[2][1],arr2[2][2]);
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr1[i][j]==arr2[i][j]){
                count++;
            }
        }
    }
    if(count==9){
        printf("Matrices are equal\n");
        printf("[ %d %d %d] = [ %d %d %d]\n",arr1[0][0],arr1[0][1],arr1[0][2],arr2[0][0],arr2[0][1],arr2[0][2]);
        printf("[ %d %d %d] = [ %d %d %d]\n",arr1[1][0],arr1[1][1],arr1[1][2],arr2[1][0],arr2[1][1],arr2[1][2]);
        printf("[ %d %d %d] = [ %d %d %d]\n",arr1[2][0],arr1[2][1],arr1[2][2],arr2[2][0],arr2[2][1],arr2[2][2]);
    } else {
        printf("Matrices are not equal\n");
    }
    
    return 0;
}
