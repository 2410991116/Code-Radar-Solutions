#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 100
#define MAX_LENGTH 100

void bubbleSortStrings(char arr[][MAX_LENGTH], int n) {
    char temp[MAX_LENGTH];
    int i, j, swapped;
    
    for (i = 0; i < n - 1; i++) {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // Swap strings
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
                swapped = 1;
            }
        }
        // If no swaps occurred, array is sorted
        if (!swapped) break;
    }
}

int main() {
    char strings[MAX_STRINGS][MAX_LENGTH];
    int n, i;

    scanf("%d", &n);
    getchar(); // To consume the newline character
    
    if (n <= 0 || n > MAX_STRINGS) {
        
        return 1;
    }

    for (i = 0; i < n; i++) {
        fgets(strings[i], MAX_LENGTH, stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0';
    }

    bubbleSortStrings(strings, n);

    for (i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}