#include <stdio.h>

// Function to calculate factorial using for loop
int factorial_for(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate factorial using while loop
int factorial_while(int n) {
    int fact = 1;
    int i = 1;
    while (i <= n) {
        fact *= i;
        i++;
    }
    return fact;
}

// Function to calculate factorial using do-while loop
int factorial_do_while(int n) {
    int fact = 1;
    int i = 1;
    do {
        fact *= i;
        i++;
    } while (i <= n);
    return fact;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate factorial using for loop
    printf("Factorial using for loop: %d\n", factorial_for(num));

    // Calculate factorial using while loop
    printf("Factorial using while loop: %d\n", factorial_while(num));

    // Calculate factorial using do-while loop
    printf("Factorial using do-while loop: %d\n", factorial_do_while(num));

    return 0;
}
