#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i,fact=1;
    printf("enter the num:");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        fact=fact*i;   
    }
    printf("%d",fact);
    return 0;
}