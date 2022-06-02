#include<stdio.h>
#include <stdlib.h>
int main(){
    int n1,n2;
    printf("enter the first num:");
    scanf("%d",&n1);
    printf("enter the second num:");
    scanf("%d",&n2);
    if(n1>n2)
        printf("%d is greater than %d",n1,n2);
    else
        printf("%d is greater than %d",n2,n1);
    
    return 0;
}