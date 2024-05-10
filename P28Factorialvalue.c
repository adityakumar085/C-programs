#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0)
        return 1;
    // Recursive call to calculate factorial
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate factorial using recursion
    int result = factorial(num);

    printf("Factorial of %d is %d\n", num, result);

    return 0;
}