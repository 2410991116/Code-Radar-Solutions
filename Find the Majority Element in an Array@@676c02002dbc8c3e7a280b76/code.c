#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size],freq[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
     
    for (int i=0;i<size;i++){
        int count=1;
        for (int j=i+1;j<size;j++){
            if (arr[i]==arr[j]){
                count++;
                freq[j]=0;
            }
        }
        if (freq[i]!=0){
            freq[i]=count;
        }
    } 

    int maxFreq = 0;
    int maxElement = -1;
    int maxCount = 0; 

    for (int i = 0; i < size; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxElement = arr[i];
            maxCount = 1;
        } else if (freq[i] == maxFreq && freq[i] != 0) {
            maxCount++;
        }
    }

    
    if (maxCount > 1) {
        printf("-1");
    } else {
        printf("%d", maxElement);
    }

    


}