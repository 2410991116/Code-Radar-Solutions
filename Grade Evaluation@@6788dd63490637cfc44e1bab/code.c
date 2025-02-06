#include <stdio.h>

int main(){
    char a;
    scanf("%s",&a);
    if (a==A){
        printf("Exellent");
    }else if(a==B){
        printf("Good");
    }else if(a==C){
        printf("Average");
    }else if(a==D){
        printf("Below Average");
    } else if(a==F){
        printf("Fali");
    }
}