#include <stdio.h>

int main(){
    int size;
    scaf("%d",&size);

    int arr[size],freq[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[size]);
        freq[i]=-1;
    }

    for (int i=0;i<size;i++){
        int count=1;
        for (int j=i+1;i<size-1;j++){
            if (arr[i]==arr[j]){
                count++;
                freq[j]=0;
            }
        }
        if (freq[i]!=0){
            freq[i]=count;
        }
    }

    for (int i=0;i<size;i++){
        printf("%d %d",arr[i],freq[i]);
    }
}