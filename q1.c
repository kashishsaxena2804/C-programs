#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i;
    printf("enter size");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter element:");
        scanf("%d",&a[i]);
    }
    for(i= n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}