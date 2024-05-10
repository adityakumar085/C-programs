#include <stdio.h>

int main() {
    int year;

    // Input year from the user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is divisible by 4 and not divisible by 100
    // or if it is divisible by 400, then it's a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}