#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i,j;
    char ch;
    printf("enter the num:");
    scanf("%d",&n);
    ch=65;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}