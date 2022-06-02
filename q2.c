#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i,sum=0;
    printf("enter size:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter the element:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}