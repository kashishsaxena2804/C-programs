#include  <stdio.h>
#include <stdlib.h>
#define SIZE 5
int main(){
    int i;
    int arr[SIZE]={1,2,3,7,1};
    int maxsum=arr[0]+ arr[1];
    
    for (i=0; i<SIZE-1; i++){
        if  (maxsum< arr[i]+arr[i+1])
            maxsum= arr[i]+arr[i+1] ;
    }
    printf("max of the two neighbours: %d\n",maxsum);
    return 0;
}