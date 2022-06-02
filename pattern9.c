#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i,j,k,l,m;
    printf("enter the rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n-1;j>=i;j--){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
        for(l=n-1;l>=i;l--){
            printf(" ");
        }
        for(m=1;m<=i;m++){
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}