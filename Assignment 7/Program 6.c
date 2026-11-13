#include<stdio.h>

float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float length, float breadth);
float triangleArea(float base, float height);
float parallelogramArea(float base, float height);
float rhombusArea(float first_diagonal, float second_diagonal);
float trapeziumArea(float first_parallelside, float second_parallelside, float height);

int main(){
    
    float choice, side, radius, length, breadth, base, height, first_diagonal, second_diagonal, first_parallelside, second_parallelside;
    
    printf("Enter which figure area you want to calculate :\n");
    printf("1. Square\n");
    printf("2. Circle\n");
    printf("3. Rectangle\n");
    printf("4. Triangle\n");
    printf("5. Parallelogram\n");
    printf("6. Rhombus\n");
    printf("7. Trapezium\n");
    scanf("%f",&choice);

    if(choice==1){
        printf("Enter the side of square : ");
        scanf("%f",&side);
        printf("Area of a square is : %f\n",squareArea(side));
    } else if(choice==2){
        printf("Enter the radius of circle : ");
        scanf("%f",&radius);
        printf("Area of a Circle is : %f\n",circleArea(radius));
    } else if(choice==3){
        printf("Enter the length of rectangle : ");
        scanf("%f",&length);
        printf("Enter the breadth of rectangle : ");
        scanf("%f",&breadth);
        printf("Area of a rectangle is : %f\n",rectangleArea(length, breadth));
    } else if(choice==4){
        printf("Enter the base of triangle : ");
        scanf("%f",&base);
        printf("Enter the height of triangle : ");
        scanf("%f",&height);
        printf("Area of a triangle is : %f\n",triangleArea(base, height));
    } else if(choice==5){
        printf("Enter the base of parallelogram : ");
        scanf("%f",&base);
        printf("Enter the height of parallelogram : ");
        scanf("%f",&height);
        printf("Area of a parallelogram is : %f\n",parallelogramArea(base, height));
    } else if(choice==6){
        printf("Enter the first diagonal of rhombus : ");
        scanf("%f",&first_diagonal);
        printf("Enter the second diagonal of rhombus : ");
        scanf("%f",&second_diagonal);
        printf("Area of a rhombus is : %f\n",rhombusArea(first_diagonal, second_diagonal));
    } else if(choice==7){
        printf("Enter the first parallel side of trapezium : ");
        scanf("%f",&first_parallelside);
        printf("Enter the second parallel side of trapezium : ");
        scanf("%f",&second_parallelside);
        printf("Enter the height of trapezium : ");
        scanf("%f",&height);
        printf("Area of a trapezium is : %f\n",trapeziumArea(first_parallelside, second_parallelside, height));
    } else{
        printf("Invalid choice!!");
    }
      
    return 0;
}

float squareArea(float side){
    return side*side;
}

float circleArea(float radius){
    return 3.14*radius*radius;
}

float rectangleArea(float length, float breadth){
    return length*breadth;
}

float triangleArea(float base, float height){
    return (base*height)/2.0;
}

float parallelogramArea(float base, float height){
    return base*height;
}

float rhombusArea(float first_diagonal, float second_diagonal){
    return (first_diagonal*second_diagonal)/2.0;
}

float trapeziumArea(float first_parallelside, float second_parallelside, float height){
    return (first_parallelside+second_parallelside)*height/2.0;
}
