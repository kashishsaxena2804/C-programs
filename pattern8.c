#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i,j,k,l;
    printf("enter the num:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n-1;j>=i;j--){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
        for(l=2;l<=i;l++){
            printf("*");
        }
        printf("\n");
    } 
    return 0;
}