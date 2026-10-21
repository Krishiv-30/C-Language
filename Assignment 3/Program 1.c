#include<stdio.h>

int main(){
    
    int day; // 1=Monday, 2=Tuesday, 3=Wednesday, 4=Thursday, 5=Friday, 6=Saturday, 7=Sunday
    printf("Enter day no.(1-7) : ");
    scanf("%d",&day);
    
    switch(day){
    
        case 1 : printf("This is Monday");
                 break; 
    
        case 2 : printf("This is Tuesday");
                 break;
             
        case 3 : printf("This is Wednesday");
                 break;
    
        case 4 : printf("This is Thursday");
                 break;
    
        case 5 : printf("This is Friday");
                 break;   
    
        case 6 : printf("This is Saturday");
                 break;
    
        case 7 : printf("This is Sunday");
                 break;
             
        default : printf("Invalid input!!");
    }
    
    
    return 0;
}
