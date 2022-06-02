#include <stdio.h>
#include <stdlib.h>
int main(){
    char alpha;
    printf("enter the letter:");
    scanf("%c",&alpha);
    switch(alpha){
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
         printf("vowels");
         break;
     default:
        printf("consonant");
         break;
     }
     return 0;
}