#include <stdio.h>

int kthSmallest(int arr[],int n,int k){
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    if (k>n){
        return -1;
    }else{
        for (int i=0;i<n+1;i++){
            return ("%d",arr[k-1]);
        }
    }
}