#include <stdio.h>

// Function to add two binary numbers
long long addBinary(long long binary1, long long binary2) {
    int i = 0, carry = 0;
    long long result = 0;

    // Arrays to store binary digits separately
    int sum[20];

    // Initialize sum array elements to 0
    for (int i = 0; i < 20; i++) {
        sum[i] = 0;
    }

    // Add binary digits one by one
    while (binary1 != 0 || binary2 != 0 || carry != 0) {
        sum[i++] = (binary1 % 10 + binary2 % 10 + carry) % 2;
        carry = (binary1 % 10 + binary2 % 10 + carry) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
    }

    // Convert sum array back to a single number
    for (int j = i - 1; j >= 0; j--) {
        result = result * 10 + sum[j];
    }

    return result;
}

int main() {
    long long binary1, binary2;

    // Input two binary numbers
    printf("Enter first binary number: ");
    scanf("%lld", &binary1);
    printf("Enter second binary number: ");
    scanf("%lld", &binary2);

    // Add binary numbers
    long long sum = addBinary(binary1, binary2);

    // Output the result
    printf("Sum of the binary numbers: %lld\n", sum);

    return 0;
}