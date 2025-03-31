#include <stdio.h>
#include <string.h>

void selectionSort(char str[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                char temp[100];
                strcpy(temp, str[i]);       
                strcpy(str[i], str[j]);
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
