#include <stdio.h>

#define PI 3.14159

// Function to calculate the area of a circle
float calculateCircleArea(float radius) {
    return PI * radius * radius;
}

// Function to calculate the perimeter of a circle
float calculateCirclePerimeter(float radius) {
    return 2 * PI * radius;
}

// Function to calculate the area of a rectangle
float calculateRectangleArea(float length, float width) {
    return length * width;
}

// Function to calculate the perimeter of a rectangle
float calculateRectanglePerimeter(float length, float width) {
    return 2 * (length + width);
}

int main() {
    float radius, length, width;
    
    // Circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    printf("Area of the circle: %.2f\n", calculateCircleArea(radius));
    printf("Perimeter of the circle: %.2f\n", calculateCirclePerimeter(radius));
    
    // Rectangle
    printf("\nEnter the length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    
    printf("Area of the rectangle: %.2f\n", calculateRectangleArea(length, width));
    printf("Perimeter of the rectangle: %.2f\n", calculateRectanglePerimeter(length, width));
    
    return 0;
}