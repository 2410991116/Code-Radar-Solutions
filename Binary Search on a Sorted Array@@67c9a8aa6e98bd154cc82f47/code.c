#include <stdio.h>

int binarySearch(int arr[],int n,int t){
    int found=0;
    for (int i=0;i<n;i++){
        if (arr[i]==t){
            return ("%d",i);
            found=1;
        }
    }
    if (!found){
        return -1;
    }

}