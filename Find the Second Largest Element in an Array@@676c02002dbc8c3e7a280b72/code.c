#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for (int i=1;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int largest=-1;secondlargest=-1;

    for (int i=0;i<size;i++){
        if (arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }else if(arr[i]>secondlargest && arr[i]!=largest){
            secondlargest=arr[i];
        }
    }

    if (secondlargest=-1){
        printf("-1");
    }else{
        printf("%d",secondlargest)
    }
}