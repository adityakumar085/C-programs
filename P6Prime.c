#include <stdio.h>

int main() {
    int number, i;
    int isPrime = 1; // Assume number is prime initially

    // Input a number from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is less than 2
    if (number < 2) {
        isPrime = 0; // Numbers less than 2 are not prime
    } else {
        // Check divisibility from 2 to square root of the number
        for (i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                isPrime = 0; // If divisible, not a prime number
                break;
            }
        }
    }

    // Display whether the number is prime or not
    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}