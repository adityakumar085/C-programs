#include <stdio.h>

// Function to convert binary to decimal recursively
int binaryToDecimal(int binaryNum, int base) {
    if (binaryNum == 0) // Base case: when the binary number becomes 0
        return 0;
    else
        return (binaryNum % 10) * base + binaryToDecimal(binaryNum / 10, base * 2);
}

int main() {
    int binaryNum;

    // Input binary number from the user
    printf("Enter a binary number: ");
    scanf("%d", &binaryNum);

    // Calling the recursive function to convert binary to decimal
    int decimalNum = binaryToDecimal(binaryNum, 1);

    // Displaying the decimal equivalent
    printf("Decimal equivalent: %d\n", decimalNum);

    return 0;
}