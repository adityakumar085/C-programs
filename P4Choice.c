#include <stdio.h>

int main() {
    int choice;
    float radius;
    const float PI = 3.14159265359;

    // Input choice from user
    printf("Enter choice (1 for area, 2 for circumference): ");
    scanf("%d", &choice);

    // Input radius from user
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    // Perform calculations based on choice
    if (choice == 1) {
        // Calculate and print area of the circle
        printf("Area of the circle: %.2f\n", PI * radius * radius);
    } else if (choice == 2) {
        // Calculate and print circumference of the circle
        printf("Circumference of the circle: %.2f\n", 2 * PI * radius);
    } else {
        // Invalid choice
        printf("Invalid choice! Please enter either 1 or 2.\n");
    }

    return 0;
}
