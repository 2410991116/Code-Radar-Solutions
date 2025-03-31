#include <stdio.h>

int main(){
    int size;
    scanf("%D",&size);

    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int k;
    scanf("%d",&k);

    for (int i=0;i<k;i++){
        int temp = arr[size-1];
        for (int j=size-1;j>0;j--){
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }

    for (int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
}