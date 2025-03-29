#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",arr[i]);
    }

    int sorted=1;

    for (int i=0;i<size;i++){
        if (arr[i+1]>arr[i]){
            sorted=0;
            break;
        }
    }

    if (sorted){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
}