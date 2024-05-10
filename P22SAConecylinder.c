#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

// Function to calculate surface area and volume of a sphere
void sphereProperties(float radius) {
    float surfaceArea = 4 * PI * radius * radius;
    float volume = (4.0 / 3.0) * PI * radius * radius * radius;

    printf("Sphere Properties:\n");
    printf("Surface Area: %.2f\n", surfaceArea);
    printf("Volume: %.2f\n", volume);
}

// Function to calculate surface area and volume of a cone
void coneProperties(float radius, float height) {
    float surfaceArea = PI * radius * (radius + sqrt(height * height + radius * radius));
    float volume = (1.0 / 3.0) * PI * radius * radius * height;

    printf("Cone Properties:\n");
    printf("Surface Area: %.2f\n", surfaceArea);
    printf("Volume: %.2f\n", volume);
}

// Function to calculate surface area and volume of a cylinder
void cylinderProperties(float radius, float height) {
    float surfaceArea = 2 * PI * radius * (radius + height);
    float volume = PI * radius * radius * height;

    printf("Cylinder Properties:\n");
    printf("Surface Area: %.2f\n", surfaceArea);
    printf("Volume: %.2f\n", volume);
}

int main() {
    float radius, height;

    // Input for Sphere
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    sphereProperties(radius);

    // Input for Cone
    printf("\nEnter the radius and height of the cone (space-separated): ");
    scanf("%f %f", &radius, &height);
    coneProperties(radius, height);

    // Input for Cylinder
    printf("\nEnter the radius and height of the cylinder (space-separated): ");
    scanf("%f %f", &radius, &height);
    cylinderProperties(radius, height);

    return 0;
}
