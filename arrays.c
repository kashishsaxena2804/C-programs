
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n ,c,i,flag=0;
    printf("enter the num of element:");
    scanf("%d",&n);
    printf("enter the element u want to search: ");
    scanf("%d",&c);
    int a[n];
    for (i=0;i<n;i++){
        printf("enter the element:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if (a[i]==c){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("%d element is present at the index %d",c,i);
    }
    else{
        printf("not found");
    }
    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i;
    printf("size of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n;i++){
        printf("enter the element: ");
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}
*/
                                // printing the even index....
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i;
    printf("size:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter the element:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(i%2==0){
            printf("%d ",a[i]);
        }
    }
    return 0;
}*/
                                         // rotation from left
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i;
    printf("enter the size:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter the element:");
        scanf("%d",&arr[i]);
    }
    int r;
    printf("enter the index:");
    scanf("%d",&r);

    for(i=r;i<n;i++){
        printf(" %d ",arr[i]);
    }
    for(i=0;i<r;i++){
        printf(" %d ",arr[i]);
    }
}*/
                                    //max and min element.....
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i;
    printf("size:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter the element: ");
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d is the max element\n",max);
    printf("%d is the min element",min);
    return 0;
}*/ 
                                 // second highest element
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i;
    printf("enter the size:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter the element");
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){

    }
}*/

                                // count the number of even and odd element....
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i;
    printf("size: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter the element:");
        scanf("%d",&arr[i]);
    }
    int counte=0,count0=0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            counte=counte+1;
        }
        else{
            count0=count0+1;
        }
    }
    printf("%d is even\n",counte);
    printf("%d is odd",count0);
}
*/