#include <stdio.h>

int main(){
    
    float Physics, Chemistry, Biology, Mathematics, Computer, Percentage;
    
    printf("Enter marks of physics(0-100) : ");
    scanf("%f",&Physics);
    printf("Enter marks of chemistry(0-100) : ");
    scanf("%f",&Chemistry);
    printf("Enter marks of biology(0-100) : ");
    scanf("%f",&Biology);
    printf("Enter marks of mathematics(0-100) : ");
    scanf("%f",&Mathematics);
    printf("Enter marks of computer(0-100) : ");
    scanf("%f",&Computer);
    
    Percentage = (Physics + Chemistry + Biology + Mathematics + Computer)/500*100;
    
    if(Percentage<=100 && Percentage>=90){
        printf("Grade A");
    } else if(Percentage<90 && Percentage>=80){
        printf("Grade B");
    } else if(Percentage<80 && Percentage>=70){
        printf("Grade C");
    } else if(Percentage<70 && Percentage>=60){
        printf("Grade D");
    } else if(Percentage<60 && Percentage>=40){
        printf("Grade E");
    } else if(Percentage<40 && Percentage>=0){
        printf("Grade F");
    } else if(Percentage>100 || Percentage<0){
        printf("Invalid marks!!");
    }
    
    return 0;
}
