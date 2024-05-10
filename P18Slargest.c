#include <stdio.h>

int main() {
    int arr[50], size, i;
    int max1, max2;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max1 and max2 with the first two elements
    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }

    // Find the first and second largest elements
    for (i = 2; i < size; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    printf("The second largest element is: %d\n", max2);

    return 0;
}