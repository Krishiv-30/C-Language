#include <stdio.h>

int main(){

    int a[10][10], r, c, choice, temp;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter array elements:\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n1. Left Rotate\n");
    printf("2. Right Rotate\n");
    printf("3. Up Rotate\n");
    printf("4. Bottom Rotate\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    if(choice==1){       //Left rotate
        for(int i = 0; i < r; i++){
            temp = a[i][0];

            for(int j = 0; j < c - 1; j++){
                a[i][j] = a[i][j + 1];
            }
            a[i][c - 1] = temp;
        }
    } else if(choice==2){      //right rotate
        for(int i = 0; i < r; i++){
            temp = a[i][c - 1];

            for(int j = c - 1; j > 0; j--){
                a[i][j] = a[i][j - 1];
            }
            a[i][0] = temp;
        }
    } else if(choice==3){      //up rotate
        for(int j = 0; j < c; j++){
            temp = a[0][j];

            for(int i = 0; i < r - 1; i++){
                a[i][j] = a[i + 1][j];
            }
            a[r - 1][j] = temp;
        }
    } else if(choice==4){        //bottom rotate
        for(int j = 0; j < c; j++){
            temp = a[r - 1][j];

            for(int i = r - 1; i > 0; i--){
                a[i][j] = a[i - 1][j];
            }
            a[0][j] = temp;
        }
    } else{
        printf("Invalid choice!");
        return 0;
    }

    printf("\n");
    
    printf("Rotated array :\n");
    for(int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("%d\t", a[i][j]);
        }    
        printf("\n");
    }

    return 0;
}
