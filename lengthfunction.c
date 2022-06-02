#include <stdio.h>
#include <stdlib.h>
int lenfunc(int len){
    int i,num=0;
    for (i=1;i<len;i++){
        if (len<9){
           printf("%d",i);
        }
        else{    
            num=num*10+9;
            printf("%d",num);
             }
    }
}
int main(){
    int lens,out;
    printf("enter the length:");
    scanf("%d",&lens);
    out=lenfunc(lens);
    printf("%d",out);

}