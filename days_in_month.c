#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("enter the month num:");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("jan\n");
            printf("31");
            break;
        case 2:
            printf("feb\n");
            printf("28 or 29");
            break;
        case 3:
            printf("march\n");
            printf("31");
            break;
        case 4:
            printf("april\n");
            printf("30");
            break;
        case 5:
            printf("may\n");
            printf("31");
            break;
        case 6:
            printf("june\n");
            printf("30");
            break;
        case 7:
            printf("july\n");
            printf("31");
            break;
        case 8:
            printf("aug\n");
            printf("31");
            break;
        case 9:
            printf("sept\n");
            printf("30");
            break;
        case 10:
            printf("oct\n");
            printf("31");
            break;
        case 11:
            printf("nov\n");
            printf("30");
            break;
        case 12:
            printf("dec\n");
            printf("31");
            break;

    }
    return 0;
}