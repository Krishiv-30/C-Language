#include <stdio.h>

int main(){

    char binary[100];  //to store binary number 
    char ones[100];    //to store 1's complement 
    char twos[100];    //to store 2's complement 
    
    int length = 0;   //to calculate length of binary number
    int carry = 1;    //to add +1 to 1's complement 
    
    printf("Enter a binary number : ");
    scanf("%s",binary);
   
    //calculate length of binary number :
    while(binary[length] != '\0'){
        length++;
    }
    
    //to calculate 1's complement :
    int i = 0;
    while(i < length){
        
        if(binary[i] == '.'){
            ones[i] = '.';
        } else if(binary[i] == '0'){
            ones[i] = '1';
        } else if(binary[i] == '1'){
            ones[i] = '0';
        }
    
        i++;
    }
    
    ones[length] = '\0';
    
    //to calculate 2's complement :
    int j = length - 1;
    while(j >= 0){
        
        if(ones[j] == '.'){
            twos[j] = '.';
        } else if(carry == 1){
            
            if(ones[j] == '1'){
                twos[j] = '0';
            } else {
                twos[j] = '1';
                carry = 0;
            }
            
        } else {
            twos[j] = ones[j];
        }
    
        j--;
    }
    
    twos[length] = '\0';
    
    printf("1's complement is : %s \n",ones);
    printf("2's complement is : %s \n",twos);
    
    return 0;
}
