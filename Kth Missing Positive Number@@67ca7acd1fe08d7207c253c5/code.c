#include <stdio.h>

// Function to find the Kth missing positive number
int findKthMissing(int arr[], int n, int k) {
    int missingCount = 0; // Count of missing numbers
    int current = 1;      // Start checking from 1
    int index = 0;        // Index to traverse the array

    while (missingCount < k) {
        if (index < n && arr[index] == current) {
            // Current number is in the array, move to the next number
            index++;
        } else {
            // Current number is missing
            missingCount++;
            if (missingCount == k) {
                return current; // Return the Kth missing positive
            }
        }
        current++;
    }
    return -1; // If not found, which shouldn't happen for valid
}    