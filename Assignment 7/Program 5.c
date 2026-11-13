#include <stdio.h>

void temp_convert(float n, char temp_type);

int main(){
    
    float n;
    char temp_type;

    printf("Enter in which degree you want to enter temperature (c/f/k) : ");
    scanf("%c",&temp_type);

    if(temp_type=='c'){

        printf("Enter the temperature in celsius : ");
        scanf("%f",&n);

        if(n>=(-273.15)){
            temp_convert(n, temp_type);       
        }else if(n<(-273.15)){
            printf("Temperature in celsius cannot exceed this much according to thermodynamics");
        }

    } else if(temp_type=='f'){

        printf("Enter the temperature in fahrenheit : ");
        scanf("%f",&n);

        if(n>=(-459.69)){
            temp_convert(n, temp_type);       
        }else if(n<(-459.69)){
            printf("Temperature in fahrenheit cannot exceed this much according to thermodynamics");
        }

    } else if(temp_type=='k'){

        printf("Enter the temperature in kelvin : ");
        scanf("%f",&n);

        if(n>=0){
            temp_convert(n, temp_type);
        } else if(n<0){
            printf("Temperature in kelvin cannot be negative");
        }

    } else{
        printf("Invalid choice!!");
    }

    return 0;
}

void temp_convert(float n, char temp_type){

    if(temp_type=='c'){
        printf("Temperature in fahrenheit is : %f\n",(9.0/5.0)*n+32.0);
        printf("Temperature in kelvin is : %f\n",n+273.15);
    }else if(temp_type=='f'){
        printf("Temperature in celsius is : %f\n",(n-32.0)*(5.0/9.0));
        printf("Temperature in kelvin is : %f\n",(n-32.0)*(5.0/9.0)+273.15);
    }else if(temp_type=='k'){
        printf("Temperature in celsius is : %f\n",n-273.15);
        printf("Temperature in fahrenheit is : %f\n",(n-273.15)*(9.0/5.0)+32.0);
    }
    
}
