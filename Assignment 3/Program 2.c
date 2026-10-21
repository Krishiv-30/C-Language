#include <stdio.h>

int main(){
    
    int month, year;
    
    printf("Enter month no.(1-12) : ");
    scanf("%d",&month);
    
    printf("Enter year : ");
    scanf("%d",&year);
    
    switch(month){
    
        case 1 : printf("January has 31 days");
             break;
             
        case 2 : if(year%4==0){
                     printf("This is a leap year \n");
                     printf("February has 29 days \n");
                 } else {
                     printf("This is not a leap year \n");
                     printf("February has 28 days \n");
                 }
                 break;
    
        case 3 : printf("March has 31 days");
                 break;
    
        case 4 : printf("April has 30 days");
                 break;
    
        case 5 : printf("May has 31 days");
                 break;
    
        case 6 : printf("June has 30 days");
                 break;
             
        case 7 : printf("July has 31 days");
                 break;
    
        case 8 : printf("August has 31 days");
                 break;
    
        case 9 : printf("September has 30 days");
                 break;
    
        case 10 : printf("October has 31 days");
                 break;
             
        case 11 : printf("Novemeber has 30 days");
                 break;         
             
        case 12 : printf("December has 31 days");
                 break;         
    
        default : printf("Invalid input!!");
    }
    
    return 0;
}
