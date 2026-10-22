#include <stdio.h>

int main(){
    
    int N, remainder;
    int count_0 = 0, count_1 = 0, count_2 = 0, count_3 = 0, count_4 = 0, count_5 = 0, count_6 = 0, count_7 = 0, count_8 = 0, count_9 = 0;
    
    printf("Enter number : ");
    scanf("%d",&N);
    
    while(N != 0){
    
        remainder = N%10;
      
        switch(remainder){
        
            case 1 : count_1++;
                     break;
        
            case 2 : count_2++;
                     break;
        
            case 3 : count_3++;
                     break;
        
            case 4 : count_4++;
                     break;
        
            case 5 : count_5++;
                     break;
        
            case 6 : count_6++;
                     break;
        
            case 7 : count_7++;
                     break;
        
            case 8 : count_8++;
                     break;
        
            case 9 : count_9++;
                     break;
            
            default : count_0++;
        }
    
        N = N/10;
    }
    
    printf("0 appears %d times \n",count_0);
    printf("1 appears %d times \n",count_1);
    printf("2 appears %d times \n",count_2);
    printf("3 appears %d times \n",count_3);
    printf("4 appears %d times \n",count_4);
    printf("5 appears %d times \n",count_5);
    printf("6 appears %d times \n",count_6);
    printf("7 appears %d times \n",count_7);
    printf("8 appears %d times \n",count_8);
    printf("9 appears %d times \n",count_9);
    
    return 0;
}
