#include <stdio.h>

int main(){
    
    float Rupees, Dollar, Euros, Dirham;
    
    printf("Enter your value in rupees : ");
    scanf("%f",&Rupees);
    
    Dollar = Rupees/95.55;
    Euros = Rupees/111.25;
    Dirham = Rupees/26.02;
    
    printf("Value of %f rupees in dollar is : %f \n",Rupees, Dollar);
    printf("Value of %f rupees in euros is : %f \n",Rupees, Euros);
    printf("Value of %f rupees in dirham is : %f \n",Rupees, Dirham);
    
    return 0;
}
