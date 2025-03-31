#include <stdio.h>.

int findOccurrence(int arr[],int n,char mode,int t ){
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int fount=0;
    if (mode=='F'){
        for (int i=0;i<n;i++){
            if (arr[i]==t){
                return ("%d",i);
                fount=1;
                break;
            }else{
                if (!fount){
                    return -1;
                }
            }
        }
    }else if(mode=='L'){
        for (int i=n;i>0;i--){
            if (arr[i]==t){
                return ("%d",i);
                fount=1;
                break;
            }else{
                if (!fount){
                    return -1;
                }
            }
        }
    }
}