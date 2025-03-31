#include <stdio.h>

int main() {
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize a flag to track if a peak is found
    int peakFound = 0;

    // Traverse the array to find the first peak element
    for (int i = 0; i < size; i++) {
        if ((i == 0 || arr[i] > arr[i - 1]) &&
            (i == size - 1 || arr[i] > arr[i + 1])) {
            printf("The first peak element is: %d\n", arr[i]);
            peakFound = 1; // Mark that a peak has been found
            break; // Exit loop after finding the first peak
        }
    }

    // If no peak element is found, print -1
    if (!peakFound) {
        printf("-1\n");
    }

    return 0;
}