#include <stdio.h>

int main(){
    
    float Dollar, Rupees;
    
    printf("Enter your value in dollar : ");
    scanf("%f",&Dollar);
    
    Rupees = Dollar*95.55;
    printf("Value of %f dollar in rupees is : %f \n",Dollar, Rupees);
    
    return 0;
}
