#include <stdio.h>

int main(){
    int a,i,j;
    scanf("%d",&a);
    i=1;
    while (i<=a){
        j=1;
        while (j<=i){
            printf("%d ",j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}