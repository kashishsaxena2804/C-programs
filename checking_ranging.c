#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if (a>0)
        printf("num is positive");
    else if(a<0)
        printf("num is negative");
    else 
        printf("enteres num is zero");
    return 0;

}