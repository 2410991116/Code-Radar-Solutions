#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int tar;
    scanf("%d",&tar);

    int sum=0;
    for (int i=0;i<size;i++){
        if (arr[i]==tar){
            sum=sum+i;
        }
    }

    if (sum==0){
        printf("-1");
    }else{
        printf("%d",sum);
    }
}