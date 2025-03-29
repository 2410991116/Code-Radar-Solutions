#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int sorted=1;

    for (int i=0;i<size-1;i++){
        if (arr[i]>arr[i-1]){
            sorted=0;
            break;
        }
    }

    if (sorted==0){
        printf("Not Sorted");
    }else{
        printf("Sorted");
    }
}