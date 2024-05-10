#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    
    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Prime numbers between 1 and %d are:\n", n);
    
    // Check and print prime numbers between 1 and n
    for (int i = 2; i <= n; ++i) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}