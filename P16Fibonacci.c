#include <stdio.h>

// Function to generate and print Fibonacci series
void fibonacci(int n) {
    int prev = 0, curr = 1, next;
    
    printf("Fibonacci Series up to %d terms:\n", n);
    
    for (int i = 1; i <= n; ++i) {
        printf("%d, ", prev);
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    printf("\n");
}

int main() {
    int n;
    
    // Input the number of terms
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);
    
    // Call the function to generate Fibonacci series
    fibonacci(n);
    
    return 0;
}