#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int k;
    scanf("%d",&k);

    for (int i=0;i<k;i++){
        int temp=arr[0];
        for (int j=0;j<size-1;j++){
            arr[i]=arr[i+1];
        }
        arr[size-1]=temp;
    }

    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}