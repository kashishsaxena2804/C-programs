#include  <stdio.h>
#include <Stdlib.h>
int checkfunc(int x, int y){
    int i=0 ,sum=0;
    if(x < 0)
        x=x* (-1);
    while(x !=0){
        if(x%10 < y){
            i++;
            sum+= x%10;
        }
        x=x/10;
    }
    printf("total amount of digis in %d =%d",x,y);
    return (int)sum/i;
}

int main(){
    int num, digit,out;
    printf("enter the num:");
    scanf("%d",&num);
    printf("enter the digit:");
    scanf("%d",&digit);
    out=checkfunc(num,digit);
    printf("%d",out);
    return 0;
}