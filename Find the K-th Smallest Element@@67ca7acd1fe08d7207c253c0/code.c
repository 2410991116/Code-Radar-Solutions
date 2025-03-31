#include <stdio.h>

int kthSmallest(int arr[],int n,int k){
    for (int i=1;i<n-2;i++){
        for (int j=1;j<n-i-2;j++){
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
        return arr[k];
    }
}