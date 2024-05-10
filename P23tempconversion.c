#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

// Function to convert Celsius to Kelvin
float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

// Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

// Function to convert Fahrenheit to Kelvin
float fahrenheitToKelvin(float fahrenheit) {
    return (fahrenheit + 459.67) * 5.0 / 9.0;
}

// Function to convert Kelvin to Celsius
float kelvinToCelsius(float kelvin) {
    return kelvin - 273.15;
}

// Function to convert Kelvin to Fahrenheit
float kelvinToFahrenheit(float kelvin) {
    return kelvin * 9.0 / 5.0 - 459.67;
}

int main() {
    float temperature;
    char choice;

    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    printf("Choose the conversion:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Celsius to Kelvin\n");
    printf("3. Fahrenheit to Celsius\n");
    printf("4. Fahrenheit to Kelvin\n");
    printf("5. Kelvin to Celsius\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);

    switch(choice) {
        case '1':
            printf("%.2f Celsius is %.2f Fahrenheit\n", temperature, celsiusToFahrenheit(temperature));
            break;
        case '2':
            printf("%.2f Celsius is %.2f Kelvin\n", temperature, celsiusToKelvin(temperature));
            break;
        case '3':
            printf("%.2f Fahrenheit is %.2f Celsius\n", temperature, fahrenheitToCelsius(temperature));
            break;
        case '4':
            printf("%.2f Fahrenheit is %.2f Kelvin\n", temperature, fahrenheitToKelvin(temperature));
            break;
        case '5':
            printf("%.2f Kelvin is %.2f Celsius\n", temperature, kelvinToCelsius(temperature));
            break;
        case '6':
            printf("%.2f Kelvin is %.2f Fahrenheit\n", temperature, kelvinToFahrenheit(temperature));
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}