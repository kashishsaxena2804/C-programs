#include <stdio.h>
#include <stdlib.h>
int main(){
    int l,b,i,j;
    printf("enter the leng:");
    scanf("%d",&l);
    printf("enter the breadth:");
    scanf("%d",&b);
    for(i=1;i<=l;i++){
        for(j=1;j<=b;j++){
            if(i==1 || i==l|| j==1 || j==b){
                printf("*");
            }
            else{
                printf(" ");
            }
    }
        printf("\n");
    }
    return 0;
}