#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<size;i++){
        int sum=0;
        while (arr[i]>0){
            sum+=arr[i]%10;
            arr[i]/=10;
        }
        printf("%d",sum);
    }
}