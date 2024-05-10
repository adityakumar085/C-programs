#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    // Input a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is positive
    if (num <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; // Exit with error code
    }

    // Calculate sum of digits
    while (num > 0) {
        digit = num % 10; // Extract the last digit
        sum += digit;     // Add the digit to the sum
        num /= 10;        // Remove the last digit
    }

    // Display the sum
    printf("Sum of the digits: %d\n", sum);

    return 0;
}