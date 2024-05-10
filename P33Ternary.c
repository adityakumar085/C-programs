#include <stdio.h>

int main() {
    int num1, num2, max;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Using ternary operator to find the maximum of two numbers
    max = (num1 > num2) ? num1 : num2;

    // Printing the maximum number
    printf("Maximum number is: %d\n", max);

    return 0;
}