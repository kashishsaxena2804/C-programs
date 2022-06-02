//total number od duplicate element
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i,j,m=1,c=0;
    printf("enter size:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
          printf("enter element:");
          scanf("%d",&a[i]);
    }
    int b[n];
    int c[n];
    for(i=0;i<n;i++){
        b[i]=a[i];
        c[i]=0;
    }
}