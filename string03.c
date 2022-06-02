#include <stdio.h>
#include <stdlib.h>
int main(){
     char sen[30];
     int cwords=0;
     int i;
     printf("enter string: ");
     gets(sen);
     for(i=0;i<strlen(sen);i++){
          if(sen[i]==' ')
            cwords++;
     }
     printf("total amount of words is %d",cwords);
    return 0;
}