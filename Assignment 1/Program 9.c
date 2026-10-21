#include <stdio.h>
#include <math.h>

int main(){
    
    float principal, time, rate, simple_interest, amount, compound_interest,difference;
    
    printf("Enter principal amount : ");
    scanf("%f",&principal);
    printf("Enter time period(in years) : ");
    scanf("%f",&time);
    printf("Enter rate of interest : ");
    scanf("%f",&rate);
    
    simple_interest = principal*time*rate/100;
    
    amount = principal*pow(1 + (0.01*rate),time);
    compound_interest = amount - principal;

    difference = simple_interest - compound_interest;
    
    printf("Simple interest is : %f \n",simple_interest);
    printf("Compound interest is : %f \n",compound_interest);
    printf("Difference between simple interest and compound interest is : %f \n",difference);
    
    return 0;
}
