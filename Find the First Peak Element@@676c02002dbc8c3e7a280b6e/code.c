#include <stdio.h>

int main(){
    int size,peak=-1;
    scanf("%d",&size);

    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<size;i++){
        if ((i==0 || arr[i]>arr[i-1])&&(i==size-1 || arr[i]>arr[i+1])){
            peak=i;
            break;
        }
    }
    if (peak!=-1){
        printf("%d",arr[peak]);
    }else{
        printf("-1");
    }

}
