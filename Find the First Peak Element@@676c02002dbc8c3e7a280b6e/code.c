#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int count=0;

    for (int i=0;i<size;i++){
        if ((i==0 || arr[i]>arr[i-1])&&(i==size-1 || arr[i]>arr[i+1])){
            count=arr[i];
            break;
        }

    }


    if (!count){
        printf("-1");
    }else{
        printf("%d",count);
    }    
    }
}