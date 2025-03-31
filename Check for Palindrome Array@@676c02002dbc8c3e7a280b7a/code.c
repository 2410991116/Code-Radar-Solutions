#include <stdio.h>

int isPalindromic(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - 1 - i]) {
            return 0; // Not palindromic
        }
    }
    return 1; // Palindromic
}

int main() {
    int n;
    
    scanf("%d", &n);

    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (isPalindromic(arr, n)) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}