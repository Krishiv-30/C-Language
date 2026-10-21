#include <stdio.h>

int main(){
    
    float centimeter, metre, kilometer;
    
    printf("Enter your length in centimeter : ");
    scanf("%f",&centimeter);
    
    metre = centimeter/100;
    kilometer = centimeter/100000;
    
    printf("Length in metre of %f centimeter is : %f \n",centimeter, metre);
    printf("Length in kilometre of %f centimeter is : %f \n",centimeter, kilometer);
    
    return 0;
}
