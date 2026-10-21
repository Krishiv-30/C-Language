#include <stdio.h>
#include <math.h>

int main(){

    //Quadratic equation : ax² + bx + c = 0
    
    float a, b, c, discriminant, root1, root2;
    int check;
    
    printf("Enter a : ");
    scanf("%f",&a);
    printf("Enter b : ");
    scanf("%f",&b);
    printf("Enter c : ");
    scanf("%f",&c);
    
    discriminant = (b*b - (4*a*c));
    
    if(discriminant>0){
        check = 1;
    } else if(discriminant==0){
        check = 2;
    } else if(discriminant<0){
        check = 3;
    }
    
    switch(check){
    
        case 1 : root1 = (-b + sqrt(discriminant))/(2*a);
                 root2 = (-b - sqrt(discriminant))/(2*a);
             
                 printf("First root is : %f \n",root1);
                 printf("Second root is : %f \n",root2);
             
                 break;
             
        case 2 : root1 = (-b)/(2*a);         
    
                 printf("Both roots are equal \n");
                 printf("Roots is : %f",root1);
             
                 break;
             
        case 3 : printf("Roots does not exist");
                 break;
    
    }
    
    return 0;
}
