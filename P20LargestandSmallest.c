#include <stdio.h>

int main() {
    int n, i;

    // Input the number of elements in the list
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    // Check if the list is empty
    if (n <= 0) {
        printf("No elements in the list.\n");
        return 1; // Exit with error code
    }

    int list[n];

    // Input the elements of the list
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }

    // Initialize the largest and smallest numbers
    int largest = list[0];
    int smallest = list[0];

    // Find the largest and smallest numbers
    for (i = 1; i < n; i++) {
        if (list[i] > largest) {
            largest = list[i];
        }
        if (list[i] < smallest) {
            smallest = list[i];
        }
    }

    // Print the largest and smallest numbers
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}