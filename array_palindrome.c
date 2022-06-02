#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
int main(){
    int arr[SIZE]= {1,2,3,3,2,5};
    int i;
    int flag=1;
    for (i=0;i<SIZE/2; i++)
    {
      if(arr[i] != arr[SIZE-1-i]){
          flag=0;
          break;
      }
    }
    if(flag==0)
        printf("not a palindrome");
    else
        printf("a palindrome");
    return 0;
}
