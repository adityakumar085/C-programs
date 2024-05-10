#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr; // Pointer to integer to hold dynamically allocated memory

    // Allocate memory dynamically for 5 integers
    ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Return error code
    }

    printf("Memory allocation successful!\n");

    // Assign values to the dynamically allocated memory
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }

    // Print the values
    printf("Values stored in dynamically allocated memory:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Deallocate the dynamically allocated memory
    free(ptr);

    printf("Memory deallocation successful!\n");

    return 0; // Return success code
}