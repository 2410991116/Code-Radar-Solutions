#include <stdio.h>

int palindrome(int arr[],int n){
    for (int i=0;i<n/2;i++){
        if (arr[i]!=arr[n-1-i]){
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

    if (palindrome(arr,size)){
        printf("YES");
    }else{
        printf("NO");
    }
}