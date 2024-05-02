#include<stdio.h>
#include<math.h>

//Function declarations: 
float circleAreaCalculator(float r);
float squareAreaCalculator(float s);
float rectangleAreaCalculator(float a, float b);

int main() {
    float radius, side, length, width; //The dimensions of the shapes

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Enter the side of the square: ");
    scanf("%f", &side);
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    float circle_area = circleAreaCalculator(radius);
    float square_area = squareAreaCalculator(side);
    float rectangle_area = rectangleAreaCalculator(length, width);

    printf("The area of the circle is: %f unit sq.\n", circle_area);
    printf("The area of the square is: %f unit sq.\n", square_area);
    printf("The area of the rectangle is: %f unit sq.\n", rectangle_area);

    return 0;
}

//Function definitions:
float circleAreaCalculator(float r) { //Function to calculate area of circle
    return 3.14*pow(r, 2);
}
float squareAreaCalculator(float s) { //Function to calculate area of square
    return pow(s, 2);
}
float rectangleAreaCalculator(float a, float b) { //Function to calculate area of rectangle
    return a*b;
}
