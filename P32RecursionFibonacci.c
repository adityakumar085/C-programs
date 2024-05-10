#include <stdio.h>

// Recursive function to find Fibonacci series
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function to print Fibonacci series
void printFibonacci(int n) {
    int i;
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int terms;
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);
    printFibonacci(terms);
    return 0;
}