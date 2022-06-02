#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i;
    printf("enter size:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter element");
        scanf("%d",&a[i]);
    }
    int b[n];
    for(i=0;i<n;i++){
        b[i]=a[i];
        printf("%d ",b[i]);
    }
    return 0;
}
