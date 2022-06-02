#include <stdio.h>
#include <stdlib.h>
char tolowercase(char letter)
{
    if(letter>='A' && letter<='Z')
       return (letter - 'A' + 'a') ; //let letter 'C' so ascii value of C=67 , A= 65 and a=97 : 67-65+97=99 which is the ascii value of c 
    else 
        return -1;
    
}
int main(){
    char x,out;
    printf("enter the character:");
    scanf("%c",&x);
    out=tolowercase(x);
    printf("output is : %c",out);
    return 0;   
}
