#include <stdio.h>

int main(){
    int a,i=0,j;
    scanf("%d",&a);
    while (i<=a){
        j=0;
        while (j<=i){
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}