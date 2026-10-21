#include <stdio.h>

int main(){
    
    float marks1, marks2, marks3, marks4, marks5, total, avg, percentage;
    
    printf("Enter the marks(0-100) of first subject : ");
    scanf("%f",&marks1);
    printf("Enter the marks(0-100) of second subject : ");
    scanf("%f",&marks2);
    printf("Enter the marks(0-100) of third subject : ");
    scanf("%f",&marks3);
    printf("Enter the marks(0-100) of fourth subject : ");
    scanf("%f",&marks4);
    printf("Enter the marks(0-100) of fifth subject : ");
    scanf("%f",&marks5);
    
    total = (marks1+marks2+marks3+marks4+marks5);
    avg = total/5;
    percentage = (total/500)*100;
    
    printf("Total marks of student is : %f \n",total);
    printf("Average marks of student is : %f \n",avg);
    printf("Percentage of student is : %f \n",percentage);
    
    return 0;
}
