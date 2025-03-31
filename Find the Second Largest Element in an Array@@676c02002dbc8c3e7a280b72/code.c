#include <stdio.h>

int bubble(int arr[],int n){
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

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    bubble(arr,size);

    

    int largest=arr[size-1];
    int second=-1;
    for (int i=size-2;i>=0;i--){
        if (arr[i]!=largest){
            second=arr[i];
            break;
        }
    }

    if (second==-1){
        printf("-1");
    }else{
        printf("%d",second);
    }
}