#include <stdio.h>
#include <stdlib.h>
int main(){
    char a1[100];
    char a2[100];
    printf("enter the first name:");
    scanf("%s",a1);
    printf("enter the last name:");
    scanf("%s",a2);

    printf("your full name is: %s %s",a1,a2);
    return 0;
}