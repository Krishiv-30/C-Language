#include <stdio.h>

int main(){
    
    float radius, diameter, circumference, area;
    
    printf("Enter the radius of circle : ");
    scanf("%f",&radius);
    
    diameter = 2*radius;
    circumference = 2*3.14*radius;
    area = 3.14*radius*radius;
    
    printf("Diameter of circle having radius %f is : %f \n",radius, diameter);
    printf("Circumference of circle having radius %f is : %f \n",radius, circumference);
    printf("Area of circle having radius %f is : %f \n",radius, area);
    
    return 0;
}
