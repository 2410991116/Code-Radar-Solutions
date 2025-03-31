#include <stdio.h>

int Series(int a){
    if (a==0){
        return 0;
    }
    if (a==1){
        return 1;
    }
    return Series(a-1)+Series(a-2);
}

int fibonacciSeries(int n){
    for (int i=0;i<=n;i++){
        printf("%d ",Series(i));
    }
}