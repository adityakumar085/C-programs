#include <stdio.h>
#include <math.h>

// Function to count the number of digits in a number
int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        count++;
        number /= 10;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int number) {
    int originalNumber = number;
    int numDigits = countDigits(number);
    int sum = 0;

    while (number != 0) {
        int digit = number % 10;
        sum += pow(digit, numDigits);
        number /= 10;
    }

    return (sum == originalNumber);
}

int main() {
    int number;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is an Armstrong number
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}