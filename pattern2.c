#include <stdio.h>
#include<stdlib.h>
int main(){
    int n,i,j;
    printf("enter the row:");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}