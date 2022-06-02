#include <stdio.h>
#include<stdlib.h>
int main(){
    int l,b,i,j;
    printf("enter the length:");
    scanf("%d",&l);
    printf("enter the breadth:");
    scanf("%d",&b);
    for(i=1;i<=l;i++){
        for(j=1;j<=b;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}