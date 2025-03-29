#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int sum=arr[0];

    for (int i=1;i<size;i++){
        printf("%d",sum+arr[i]);
    }

   


}