#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size]:
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int maxprod=arr[0]*arr[1];

    for (int i=0;i<size;i++){
        for (int j=i+1;j<size;j++){
            int product=arr[i]*arr[j];
            if (product>maxprod){
                maxprod=product;
            }
        }
    }
    printf("%d",maxprod);
}