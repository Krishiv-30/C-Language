#include <stdio.h>

int main(){
    
    float day, week, month, year;
    
    printf("Enter no of days : ");
    scanf("%f",&day);
    
    week = day/7;
    month = day/30;
    year = day/365;
    
    printf("No. of week passed till %f day is : %f \n",day, week);
    printf("No. of month passed till %f day is : %f \n",day, month);
    printf("No. of year passed till %f day is : %f \n",day, year);
    
    return 0;
}
