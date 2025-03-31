#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int peak = 0; // Flag to track if a peak element is found

    for (int i = 0; i < size; i++) {
        if ((i == 0 || arr[i] >= arr[i - 1]) && 
            (i == size - 1 || arr[i] >= arr[i + 1])) {
            printf("%d\n", arr[i]); // Print the first peak element
            peak = 1; // Update flag since a peak is found
            break; // Exit the loop
        }
    }

    if (!peak) { // If no peak element was found
        printf("-1\n");
    }

    return 0;
}