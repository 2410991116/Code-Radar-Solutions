#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    for (int i=a;i>0;i++){
        for (int j=1;j<=a;j++){
            printf("%c ",'A'+j-1);
        }
        printf("\n");
    }
}
