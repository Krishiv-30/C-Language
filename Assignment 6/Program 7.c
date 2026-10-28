#include <stdio.h>

int main() {

    int arrA[100], arrA_size;
    int arrB[100], arrB_size;
    int arrC[200];

    printf("Enter the size of array A : ");
    scanf("%d",&arrA_size);
    printf("Enter the elements of array A : ");
    for(int i = 0; i < arrA_size; i++){
        scanf("%d",&arrA[i]);
    }

    printf("Enter the size of array B : ");
    scanf("%d",&arrB_size);
    printf("Enter the elements of array B : ");
    for(int i = 0; i < arrB_size; i++){
        scanf("%d",&arrB[i]);
    }
    
    for(int i = 0; i < arrA_size; i++){
        arrC[i] = arrA[i];
    }
    for(int i = 0; i < arrB_size; i++){
        arrC[arrA_size+i] = arrB[i];
    }
    
    printf("Elements in arrC(i.e. merge elements of arrA and aarB) is :\n");
    for(int i = 0; i < (arrA_size+arrB_size); i++){
        printf("%d\t",arrC[i]);
    }

    return 0;
}
