#include <stdio.h>

int isprime(int a){
    if (a<=1){
        return 0;
    }
    for (int n=2;i*i<=a;i++){
        if (a%i==0){
            return 0;
        }
    }
    return 1;
}

int printPrimesInRange(int a,int b){
    int found=0;
    for (int i=a;i<=b;i++){
        if (isprime(i)){
            printf("%d ",i);
        }
    }
    if (!found){
        printf("No prime numbers");
    }
}