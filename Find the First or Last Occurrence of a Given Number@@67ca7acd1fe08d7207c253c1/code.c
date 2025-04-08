#include <stdio.h>



int findOccurrence(int arr[], int n, char mode, int t) {    
    
    if (mode == 'F') {
        for (int i = 0; i < n; i++) {
            if (arr[i] == t) {
                return i; 
                break;
            }
        }
    }
    else if (mode == 'L') {
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] == t) {
                return i;
            }
        }
    }

    

}

