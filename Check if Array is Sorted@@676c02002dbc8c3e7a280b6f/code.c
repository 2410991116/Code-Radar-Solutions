#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];;
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int found=0;

    for (int i=0;i<size;i++){
        if (arr[i]>arr[i+1]){
            found=1;
        }
    }

    if (found){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
}