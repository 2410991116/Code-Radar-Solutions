#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];;
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int found=1;

    for (int i=0;i<size;i++){
        if (arr[i]<=arr[i+1]){
            found=0;
        }
    }

    if (found){
        printf("Not Sorted");
    }else{
        printf("Sorted");
    }
}