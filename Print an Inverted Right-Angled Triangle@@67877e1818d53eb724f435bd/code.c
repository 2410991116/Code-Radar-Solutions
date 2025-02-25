#include <stdio.h>

int main(){
    int a,i,j;
    scanf("%d",&a);
    i=a;
    while (i>0){
        j=0;
        while (j<i){
            printf("* ");
            j++;
        }
        i--;
        printf("\n");
    }
    return 0;

}    