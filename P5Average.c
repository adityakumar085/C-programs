#include <stdio.h>

int main() {
    int numbers[10];
    int sum = 0;
    float average;
    int largest, smallest;

    // Input 10 numbers
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];

        // Update largest and smallest numbers
        if (i == 0) {
            largest = smallest = numbers[i];
        } else {
            if (numbers[i] > largest) {
                largest = numbers[i];
            }
            if (numbers[i] < smallest) {
                smallest = numbers[i];
            }
        }
    }

    // Calculate average
    average = (float)sum / 10;

    // Display sum, average, largest, and smallest
    printf("\nSum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}
