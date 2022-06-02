#include <stdio.h>
#include <stdlib.h>
int main(){
    
    char a[100];
    printf("enter the string: ");
    scanf("%s",a);
    int i;
    while(a[i] != '\0'){
        printf("%c",a[i]);
        i++;
    }
    printf(gets(a)); // this function is used to read the space characters as well...

    /*
    char a[50];
    printf("enter the element:");
    scanf("%s",a);
    printf("%s",a);// this will print the 1st name only.....
*/
    return 0;
}