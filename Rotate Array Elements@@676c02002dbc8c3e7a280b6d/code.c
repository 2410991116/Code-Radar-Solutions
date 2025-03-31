#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<k;i++){
        int temp=arr[0];
        for (int j=0;j<n-1;j++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }

    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}