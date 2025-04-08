#include <stdio.h>

int bubbleSort(int arr[],int n ){
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    
}

int findOccurrence(int arr[], int n, char mode, int t) {
    if (n <= 0){ 
        return -1;
    }    
    
    bubbleSort(arr, n);
    
    mode = toupper(mode); 
    if (mode != 'F' && mode != 'L'){
        return -1;
    }     
    
    if (mode == 'F') {
        for (int i = 0; i < n; i++) {
            if (arr[i] == t) {
                return i; 
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
