#include <stdio.h>
#include <stdlib.h>
int main(){
    int n1 ,n2;
    printf("enter the num1: ");
    scanf("%d",&n1);
    printf("enter the num2: ");
    scanf("%d",&n2);
    switch(n1>n2){
        case 1:
            printf("%d is greater",n1);
            break;
        case 0:
            switch(n1<n2){
                case 1:
                    printf("%d  is greater ",n2);
                    break;
                case 0: 
                    printf("both are equal");
            }
    }
    return 0;
}