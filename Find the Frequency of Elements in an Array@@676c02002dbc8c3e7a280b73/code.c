#include <stdio.h>

int main() {
    int n;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], freq[n];

    // Input the elements of the array
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize the frequency array
    }

    // Find frequencies of elements
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // Mark duplicate elements
            }
        }
        if (freq[i] != 0) {
            freq[i] = count; // Store frequency of the element
        }
    }

    // Display the frequency of each element
    printf("Element | Frequency\n");
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("   %d    |     %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}