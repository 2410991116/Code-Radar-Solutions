#include <stdio.h>

int main() {
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    if (size < 2) {
        printf("-1\n"); // Not enough elements for a second largest
        return 0;
    }

    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = -1, secondLargest = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; // Update second largest
            largest = arr[i];        // Update largest
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i]; // Update only second largest
        }
    }

    if (secondLargest != -1) {
        printf("The second largest element is: %d\n", secondLargest);
    } else {
        printf("-1\n"); // No second largest element found
    }

    return 0;
}