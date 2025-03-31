#include <stdio.h>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int findSecondLargestUsingBubbleSort(int arr[], int size) {
    if (size < 2) {
        return -1; // Invalid case: array size is less than 2
    }

    bubbleSort(arr, size); // Sort the array using bubble sort

    // Find the second largest element
    int largest = arr[size - 1];
    for (int i = size - 2; i >= 0; i--) {
        if (arr[i] < largest) {
            return arr[i]; // Found the second largest
        }
    }
    return -1; // No valid second largest found (e.g., all elements are identical)
}

int main() {
    int n;
    
    scanf("%d", &n);

    int arr[n];
   
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = findSecondLargestUsingBubbleSort(arr, n);
    if (result == -1) {
        printf("-1\n");
    } else {
        printf("%d\n", result);
    }

    return 0;
}