#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int derivative(int a,int b, int c){
    int powervalue= pow(a,b-1);// here maths  header file is include to 
    return b*powervalue*c;
}
int main(){
    int x,pow,c,out;
    printf("enter the num:");
    scanf("%d",&x);
    printf("enter the power:");
    scanf("%d",&pow);
    printf("enter the constant:");
    scanf("%d",&c);
    out=derivative(x,pow,c);
    printf("%d",out);
    return 0;
}