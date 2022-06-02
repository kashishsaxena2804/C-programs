#include <stdio.h>
#include <stdlib.h>
# define size 10
int strlen(char *str){
    int i=0, l=0;
     while(str[i] != '\0'){
         i++;
         l++;
     }
     return l;
}
int main(){
    
    int stringlength;
    char teststr[size];
    stringlength= strlen(teststr);
    printf("the length of string '%s' is %d \n",teststr,stringlength);

return 0;
}