#include <stdio.h>

int main(){
    int a,i=0,j;
    scanf("%d",&a);
    while (i<=a){
        j=0;
        while (j<i){
            printf("* ");
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}