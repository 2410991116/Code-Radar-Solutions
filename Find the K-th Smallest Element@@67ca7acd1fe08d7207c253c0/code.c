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

    for (int i=1;i<=k;i++){
        printf("%d",arr[k]);
    }
}