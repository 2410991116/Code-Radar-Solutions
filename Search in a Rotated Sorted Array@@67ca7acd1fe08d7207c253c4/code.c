#include <stdio.h>

int searchInRotatedArray(int arr[], int n, int k) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; 

        if (arr[mid] == k) {
            return mid;
        }

        if (arr[left] <= arr[mid]) { 
            if (k >= arr[left] && k < arr[mid]) {
                right = mid - 1; 
            } else {
                left = mid + 1;
            }
        } else { 
            if (k > arr[mid] && k <= arr[right]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }

    return -1;
}

