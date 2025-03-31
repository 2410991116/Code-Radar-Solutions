#include <stdio.h>
#include <string.h>

void selectionSort(char str[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                char temp[100];
                strcpy(temp, arr[i]);       
                strcpy(str[i], arr[j]);
                strcpy(str[j], temp);

            }
        }
    }
}

int printArray(char str[][100],int n){
    for (int i=0;i<n;i++){
        printf("%c[100] ",str[i]);
    }
}
