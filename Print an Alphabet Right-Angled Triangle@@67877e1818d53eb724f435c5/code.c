int main(){
    int a,i,j;
    scanf("%d",&a);
    i=a;
    while (i>0){
        j=1;
        while(j<=i){
            printf("%c ",j);
            j++;
        }
        printf("\n");
        i--;
    }
    return 0;
}