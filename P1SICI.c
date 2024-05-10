#include <stdio.h>
#include <math.h>

int main() {
    float principle, rate, time;
    float simple_interest, compound_interest;

    // Input principle, rate, and time
    printf("Enter principle amount: ");
    scanf("%f", &principle);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time in years: ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simple_interest = (principle * rate * time) / 100;

    // Calculate Compound Interest
    compound_interest = principle * (pow((1 + rate / 100), time)) - principle;

    // Display results
    printf("\nSimple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}
