#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i,j,k;
    printf("enter the row:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(k=n;k>=i;k--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}