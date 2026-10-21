#include <stdio.h>

int main(){
    
    float meter_reading, electricity_bill_amount;
    
    printf("Enter total meter reading(in units) : ");
    scanf("%f",&meter_reading);
    
    if(meter_reading <= 50){
        electricity_bill_amount =  100 + meter_reading*1.50;
    } else if(meter_reading <= 150){
        electricity_bill_amount = 100 + 50*1.50 + (meter_reading - 50)*3.75;
    } else if(meter_reading <= 250){
        electricity_bill_amount = 100 + 50*1.50 + 100*3.75 + (meter_reading - 150)*5.20;
    } else if(meter_reading > 250){
        electricity_bill_amount = 100 + 50*1.50 + 100*3.75 + 100*5.20 + (meter_reading - 250)*8.50;
    }
    
    //surcharge amount
    electricity_bill_amount *= 0.20;
    
    printf("Total bill amount is : %f",electricity_bill_amount);
    
    return 0;
}
