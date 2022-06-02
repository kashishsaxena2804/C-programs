#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int main(){
    int arr [SIZE]={1,2,5,7,10};
    int flag=1;
    int i;
    for(i=0; i<SIZE; i++){
        printf("enter the array: %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    for (i=0; i<SIZE; i++){
        if (arr[i]> arr[i+1]){
            flag=0;
            break;
        }
        if(arr[i]==arr[i+1]){
            flag=3;
        }
        if(arr[i]<arr[i+1]){
            flag=2;
            break;
        }
        
    }
    if(flag==0)
        printf("not  sorted");// 2 1 4 53 22
    else if(flag==2)
        printf(" really sorted"); // 1 3 5 6 7
    else if (flag==3)
        printf("sorted");// 1 2 2 3 4
    return 0;
}