#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int max=arr[0];

    for (int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
            break;
        }
    }
    printf("%d",max);
}