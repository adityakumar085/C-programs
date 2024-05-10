#include <stdio.h>

void findSecondSmallestAndLargest(int arr[], int size) {
    int firstSmallest, secondSmallest, firstLargest, secondLargest;
    firstSmallest = secondSmallest = firstLargest = secondLargest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < firstSmallest) {
            secondSmallest = firstSmallest;
            firstSmallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != firstSmallest) {
            secondSmallest = arr[i];
        }

        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
    }

    printf("Second smallest element: %d\n", secondSmallest);
    printf("Second largest element: %d\n", secondLargest);
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    findSecondSmallestAndLargest(arr, size);

    return 0;
}
