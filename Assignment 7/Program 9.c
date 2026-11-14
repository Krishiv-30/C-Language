#include <stdio.h>

void calculatePrice(float value);

int main(){
    
    float value;
    printf("Enter your value : ");
    scanf("%f", &value);
    
    printf("Marketing price without GST is : %f\n",value);
    calculatePrice(value);
    
    return 0;
}

void calculatePrice(float value){
    value += (value*0.18);
    printf("Final price of product with GST is : %f\n", value);
}
