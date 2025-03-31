#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for (int i==0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int largest=-1,seclargest=-1;

    for (int i=0;i<size;i++){
        if (arr[i]>largest){
            seclargest=largest;
            largest=arr[i];
        }else if(arr[i]>seclargest && arr[i]!=largest){
            seclargest=arr[i];
        }
    }

    if (seclargest!=-1){
        printf("%d",seclargest);
    }else{
        printf("-1");
    }
}