#include <stdio.h>

int main(){
     
    float a, b, sum, difference, product, division;
    
    printf("Enter two numbers : ");
    scanf("%f %f",&a, &b);
    
    sum = a+b;
    difference = a-b;
    product = a*b;
    division = a/b;
    
    printf("Sum of two numbers is : %f\n",sum);
    printf("Difference of two numbers is : %f\n",difference);
    printf("Product of two numbers is : %f\n",product);
    printf("Division of two numbers is : %f \n",division);
    
    return 0;
}
