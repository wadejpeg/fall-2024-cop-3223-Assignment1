//********************************************************
// fracturing.c
// Author: Charles Crawford
// Class: COP 3223, Professor Parra
// Purpose: write a program that will house many internal
// functions.
// Input: None
//
// Output: distance, preimeter, area, width, height.
// //********************************************************

#include <stdio.h>
#include <math.h>
#define PI 3.14159

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc, char **argv) {

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}

double calculateDistance()
{
    double x1, y1, x2, y2;

    printf("Enter x1: ");
    scanf("%lf", &x1);

    printf("Enter y1: ");
    scanf("%lf", &y1);

    printf("Enter x2: ");
    scanf("%lf", &x2);

    printf("Enter y2: ");
    scanf("%lf", &y2);

    printf("Point #1 entered: x1 =%f; y1=%f\nPoint #2 entered: x2 =%f; y2=%f\n",x1, x2, y1, y2 );

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("The distance between the two points is %f\n", distance);

    return distance;
}

double calculatePerimeter()
{
    double x1, y1, x2, y2;

    printf("Enter x1: ");
    scanf("%lf", &x1);

    printf("Enter y1: ");
    scanf("%lf", &y1);

    printf("Enter x2: ");
    scanf("%lf", &x2);

    printf("Enter y2: ");
    scanf("%lf", &y2);

    printf("Point #1 entered: x1 =%f; y1=%f\nPoint #2 entered: x2 =%f; y2=%f\n",x1, x2, y1, y2 );

    double perimeter = ((y2-y1)*(x2-x1)*2);

    printf(" The perimeter of the city encompassed by your request is %f\n", perimeter);

    return 2.5;
}

double calculateArea()
{
    double x1, y1, x2, y2;
    
    printf("Enter x1: ");
    scanf("%lf", &x1);

    printf("Enter y1: ");
    scanf("%lf", &y1);

    printf("Enter x2: ");
    scanf("%lf", &x2);

    printf("Enter y2: ");
    scanf("%lf", &y2);
    
    printf("Point #1 entered: x1 =%f; y1=%f\nPoint #2 entered: x2 =%f; y2=%f\n",x1, x2, y1, y2 );

    double area = ((y2-y1)*(x2-x1));

    printf("The area of the city encompassed by your request is %f\n", area);

    return 2.5;

}

double calculateWidth()
{
    double x1, y1, x2, y2;
    
    printf("Enter x1: ");
    scanf("%lf", &x1);

    printf("Enter y1: ");
    scanf("%lf", &y1);

    printf("Enter x2: ");
    scanf("%lf", &x2);

    printf("Enter y2: ");
    scanf("%lf", &y2);

    printf("Point #1 entered: x1 =%f; y1=%f\nPoint #2 entered: x2 =%f; y2=%f\n",x1, x2, y1, y2 );

    double width = (x2 - x1);

    printf("The width of the city encompassed by your request is %f\n", width);

    return 2.5;

}

double calculateHeight()
{    
    double x1, y1, x2, y2;
    
    printf("Enter x1: ");
    scanf("%lf", &x1);

    printf("Enter y1: ");
    scanf("%lf", &y1);

    printf("Enter x2: ");
    scanf("%lf", &x2);

    printf("Enter y2: ");
    scanf("%lf", &y2);

    printf("Point #1 entered: x1 =%f; y1=%f\nPoint #2 entered: x2 =%f; y2=%f\n",x1, x2, y1, y2 );

    double height = (y2 - y1);

    printf("The height of the city encompassed by your request is %f\n", height);

    return 2.5;

}

//end of line