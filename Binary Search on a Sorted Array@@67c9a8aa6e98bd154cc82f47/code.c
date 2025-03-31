#include <stdio.h>

int binarySearch(int arr[],int n,int t){
    for (int i=0;i<n;i++){
        if (n<t){
            return -1;
        }else{
            if (arr[i]==t){
                return ("%d",i);
            }
        }
    }
}