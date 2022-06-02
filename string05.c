#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char sen[100];
    printf("enter the string:");
    scanf("%s",sen);
    int l= strlen(sen);
    int i,flag=0;
    printf("%d\n",l);
    for(i=l-1;i>=0;i--){
        printf("%c",sen[i]);
        
    }
    printf("\n");
    for(i=0;i<l;i++){
        if(sen[i] != sen[l-i-1]){
            flag = 1;
            break;
    }
}
if(flag==1){
    printf("not palindrom");
}
else{
    printf("palindrom");
}

    return 0;
}