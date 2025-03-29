#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int totalsum=0;

    for (int i=0;i<size;i++){
        int num=arr[i];
        while (num>0){
            totalsum+=num%10;
            num/=10;
            printf("%d ",totalsum);
        }
    }
}    