#include <stdio.h>
#include <stdlib.h>
int main(){
    int y;
    printf("enter the year:");
    scanf("%d",&y);
    if(y%4==0 && y%100 != 0)
        printf("leap year");
    else if( y%100==0 && y%400==0)
        printf("leap year");
    else 
        printf("not a leap year");
    return 0;
}