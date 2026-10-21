#include <stdio.h>
#include <math.h>

int main(){
    
    // ax² + bx + c = 0 is quadratic equation 
    float a, b, c, discriminant, root1, root2;
    
    printf("Enter value of a : ");
    scanf("%f",&a);
    printf("Enter value of b : ");
    scanf("%f",&b);
    printf("Enter value of c : ");
    scanf("%f",&c);
    
    discriminant = b*b - (4*a*c);
    
    if(discriminant > 0){
    
        root1 = (-b + sqrt(discriminant))/(2*a);
        root2 = (-b - sqrt(discriminant))/(2*a);
        
        printf("First root is : %f \n",root1);
        printf("Second root is : %f \n",root2);
        
    } else if (discriminant == 0){
    
        root1 = -b/(2*a);
        
        printf("Both roots are equal and value is : %f \n",root1);
        
    } else if(discriminant < 0){
        printf("Roots does not exist \n");
    }
    
    
    return 0;
}
