#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        // If number is even, print its square
        int square = number * number;
        printf("Square of %d is %d\n", number, square);
    } else {
        // If number is odd, print its cube
        int cube = number * number * number;
        printf("Cube of %d is %d\n", number, cube);
    }

    return 0;
}
