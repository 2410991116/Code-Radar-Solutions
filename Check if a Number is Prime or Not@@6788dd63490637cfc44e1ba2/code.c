#include <stdio.h>

int main(){
    int num,i,is_prime=1;
    scanf("%d",&num);
    if (num<=1){
        is_prime=0;
    }else{
        for (i=2;i<=num/2;i++){
            if (num%i==0){
                is_prime=0;
                break;
            }
        }
    }
    if (is_prime){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}