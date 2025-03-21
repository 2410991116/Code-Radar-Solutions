#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array
void rotateArray(int arr[], int n, int k) {
    k = k % n; // To handle cases where K is greater than the size of the array
    reverse(arr, 0, n - 1);     // Step 1: Reverse the entire array
    reverse(arr, 0, k - 1);     // Step 2: Reverse the first K elements
    reverse(arr, k, n - 1);     // Step 3: Reverse the remaining elements
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2; // Number of positions to rotate

    rotateArray(arr, n, k);

    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
