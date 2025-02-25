#include <stdio.h>

int main(){
    int a,i,j;
    scanf("%d",a);
    i=0;
    while (i<=a){
        j=0;
        while (j<i){
            printf("%d",j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}