#include <stdio.h>

int main(){
    
    float celsius, fahrenheit;
    
    printf("Enter your temperature in celsius : ");
    scanf("%f",&celsius);
    
    fahrenheit = (9.0/5.0)*celsius + 32.0;
    
    printf("Temperature of %f degree celsius in fahrenheit is : %f \n",celsius, fahrenheit);
    
    return 0;
}
