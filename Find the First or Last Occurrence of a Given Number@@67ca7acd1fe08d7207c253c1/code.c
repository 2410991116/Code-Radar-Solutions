#include <stdio.h>

int findOccurrence(int arr[], int n, char mode, int t) {    
    if (mode == 'F') { // Find the first occurrence
        for (int i = 0; i < n; i++) {
            if (arr[i] == t) {
                return i; // Return the index of the first occurrence
            }
        }
    } 
    else if (mode == 'L') { // Find the last occurrence
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] == t) {
                return i; // Return the index of the last occurrence
            }
        }
    }


    return -1;
}

