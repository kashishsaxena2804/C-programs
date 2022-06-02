#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("enter num:");
    scanf("%d",&n);
    if(n%5==0)
        printf("divisible by 5");
    else if (n%11==0)
        printf("divisible by 11");
    else 
        printf("number is neither divisible by 5 nor 11");
    return 0;
}