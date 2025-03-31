#include <stdio.h>
#include <string.h>

int selectionSort(char str[],int n){
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (str[j]>str[j+1]){
                int temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
}

int printArray(char str[],int n){
    for (int i=0;i<n;i++){
        printf("%c ",str[i]);
    }
}
