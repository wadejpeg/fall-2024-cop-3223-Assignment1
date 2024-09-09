//********************************************************
// fracturing.c
// Author: Charles Crawford 5615445
// Class: COP 3223, Professor Parra
// Purpose: Write a program that will house many internal
// functions.
// Input: points on a graph
//
// Output: distance, perimeter, area, width, height.
//********************************************************

#include <stdio.h>
#include <math.h>    // Include the math library for mathematical functions
#define PI 3.14159   // Define a constant for PI that can be used in calculations if needed

// Declare functions that will be defined later
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

// Main function where the program execution begins
int main(int argc, char **argv) {

    // Call each function in turn. Each function handles its own input and output.
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0; // Return 0 to indicate that the program ended successfully
}

// Function to calculate and output the distance between two points
double calculateDistance() {
    double x1, y1, x2, y2;

    // Prompt user for input and read in the coordinates for two points
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    // Output the points that were entered for verification
    printf("Point #1 entered: x1 =%f; y1=%f\nPoint #2 entered: x2 =%f; y2=%f\n",x1, x2, y1, y2);

    // Calculate the Euclidean distance between the two points
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Print the calculated distance
    printf("The distance between the two points is %f\n", distance);

    return distance; // Return the calculated distance
}

// Function to calculate and output the perimeter based on coordinates entered
double calculatePerimeter() {
    double x1, y1, x2, y2;

   // Prompt user for input and read in the coordinates for two points
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    // Output entered points for verification
    printf("Point #1 entered: x1 =%f; y1=%f\nPoint #2 entered: x2 =%f; y2=%f\n",x1, x2, y1, y2);

    // Calculate perimeter, assuming a rectangular path connecting the points
    double perimeter = (((y2-y1)+(x2-x1))*2);

    // Print the calculated perimeter
    printf(" The perimeter of the city encompassed by your request is %f\n", perimeter);

    return 2.5; // Placeholder return value
}

// Function to calculate and output the area based on coordinates entered
double calculateArea() {
    double x1, y1, x2, y2;

   // Prompt user for input and read in the coordinates for two points
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    // Output entered points for verification
    printf("Point #1 entered: x1 =%f; y1=%f\nPoint #2 entered: x2 =%f; y2=%f\n",x1, x2, y1, y2);

    // Calculate area based on the rectangle formed by the points
    double area = ((y2-y1)*(x2-x1));

    // Print the calculated area
    printf("The area of the city encompassed by your request is %f\n", area);

    return 2.5; // Placeholder return value
}

// Function to calculate and output the width based on coordinates entered
double calculateWidth() {
    double x1, y1, x2, y2;

   // Prompt user for input and read in the coordinates for two points
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    // Output entered points for verification
    printf("Point #1 entered: x1 =%f; y1=%f\nPoint #2 entered: x2 =%f; y2=%f\n",x1, x2, y1, y2);

    // Calculate the width as the difference between the x-coordinates
    double width = (x2 - x1);

    // Print the calculated width
    printf("The width of the city encompassed by your request is %f\n", width);

    return 2.5; // Placeholder return value
}

// Function to calculate and output the height based on coordinates entered
double calculateHeight() {
    double x1, y1, x2, y2;

   // Prompt user for input and read in the coordinates for two points
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    // Output entered points for verification
    printf("Point #1 entered: x1 =%f; y1=%f\nPoint #2 entered: x2 =%f; y2=%f\n",x1, x2, y1, y2);

    // Calculate the height as the difference between the y-coordinates
    double height = (y2 - y1);

    // Print the calculated height
    printf("The height of the city encompassed by your request is %f\n", height);

    return 2.5; // Placeholder return value
}

// end of line
