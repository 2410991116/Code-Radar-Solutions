#include <stdio.h>

int fibonacciSeries(int a){
    if (a==0){
        return 0;
    }
    if (a==1){
        return 1;
    }
    return fibonacciSeries(a-1)+fibonacciSeries(a-2);
}