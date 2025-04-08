#include <stdio.h>

// Function to search in a rotated sorted array
int searchRotatedArray(int arr[], int n, int k) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Prevent overflow for large arrays

        // Check if mid element is the target
        if (arr[mid] == k) {
            return mid;
        }

        // Determine which half is sorted
        if (arr[left] <= arr[mid]) { // Left half is sorted
            if (k >= arr[left] && k < arr[mid]) {
                right = mid - 1; // Search in the left sorted half
            } else {
                left = mid + 1; // Search in the right half
            }
        } else { // Right half is sorted
            if (k > arr[mid] && k <= arr[right]) {
                left = mid + 1; // Search in the right sorted half
            } else {
                right = mid - 1; // Search in the left half
            }
        }
    }

    return -1; // Target not found
}

