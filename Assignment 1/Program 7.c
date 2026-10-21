#include <stdio.h>

int main(){
    
    float Angle1, Angle2, Angle3; //Here angle is of triangle
    
    printf("Enter value of angle 1 : ");
    scanf("%f",&Angle1);
    printf("Enter value of angle 2 : ");
    scanf("%f",&Angle2);
    
    Angle3 = 180 - (Angle1 + Angle2);
    
    printf("Value of angle 3 is : %f",Angle3);
    
    return 0;
}
