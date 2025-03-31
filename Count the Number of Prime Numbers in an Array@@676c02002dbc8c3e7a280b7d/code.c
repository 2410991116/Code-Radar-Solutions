#include <stdio.h>

int prime(int a){
    if (a<=1){
        return 0;
    }
    for (int i=2;i*i<=a;i++){
        if (a%i==0){
            return 0;
        }
    }
    return 1;
}


int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int count=0;

    for (int i=0;i<size;i++){
        if (prime(arr[i])){
            count+=1;
        }
    }

    printf("%d",count);
}