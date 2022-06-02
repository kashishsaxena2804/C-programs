// factorial
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i,fact=1;
    printf("enter  the  num:");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}

// palindrome
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,temp,r,sum=0;
    printf("enter the  num: ");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    n=temp;
    if(sum==n){
        printf("palindrome");
    }
    else{
        printf("not a palindrome");
    }
    return 0;
}
*/

// for  checking the number is prime or not.
/*
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,flag=0;
    printf("enter the num:");
    scanf("%d",&n);
    if(n==0|| n==1){
        flag=1;
    }
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("prime");
    }
    else{
        printf("not prime");
        }
    return 0;
}
*/
// prime numbers in a range
/*
#include<stdio.h>
void main(){
   int i, j, n, count;
   printf("Enter the range: \n");
   scanf("%d", &n);
   printf("The prime numbers in between the range 1 to %d:",n);
   for(i = 1;i<=n;i++){
      count = 0;
      for(j=2;j<=i/2;j++){
         if(i%j==0){
            count++;
         break;
      }
   }
   if(count==0 && i!= 1)
      printf("%d ",i);
   }
}
*/
// perfect number
/*
#include <stdio.h>
int main(){
    int n,i,j,sum;
    printf("range: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=0;
        for(j=1;j<i;j++){
            if(i%j==0){
                sum+=j;
            }
        }
        if(sum==i){
            printf("%d ",i);
        } 
        
    }
    return 0;
}
*/
// perfect nummber in n terms only
/*
#include <stdio.h>
int main(){
    int n,sum=0,i,j;
    printf("num:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        j=n%i;
        if(j==0){
                sum=sum+i;
        }        
    }
    if(sum==n)
         printf("perfect");
    else
        printf("not perfect");
    
    return 0;
}*/
// armstrong
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,r,sum=0,temp;
    printf("num: ");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum){
        printf("armstrong num");
    }
    else{
        printf("not an armstrong");
    }
    return 0;
}

// strong num
#include <stdio.h>
 
int main()
{
  int Number, Temp, Reminder, Sum = 0, i; 
  long Factorial;
 
  printf("\nPlease Enter a Number to Check for Strong Number \n");
  scanf("%d", &Number);
  
  //Helps to prevent altering the original value
  Temp = Number;
  while( Temp > 0)
   {
     Factorial = 1, i = 1; 
     Reminder = Temp % 10;
     while (i <= Reminder)
     {
     	Factorial = Factorial * i;
     	i++;
     }
     printf("\n Factorial of %d = %d\n", Reminder, Factorial);
     Sum = Sum + Factorial;
     Temp = Temp /10;
   }
 
  printf("\n Sum of the Factorials of a Given Number %d is = %d\n", Number, Sum);
 
  if ( Number == Sum )
      printf("\n %d is a Strong Number.\n", Number);
  else
      printf("\n %d is not a Strong Number.\n", Number);
 
  return 0;
}