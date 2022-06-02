// write  c program to add two numbers.
/*
#include <stdio.h>
#include  <stdlib.h>
int main(){
    int num1 ,num2;
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the second number:");
    scanf("%d",&num2);
    printf("sum is :%d",num1+num2);
    return 0;
}*/

//write a c program to enter two numbers and perform all arithmetic operation.
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n1,n2;
    char mathoperation;
    printf("enter the operation:");
    scanf("%c", &mathoperation);
    printf("enetr the num1:");
    scanf("%d", &n1);
    printf("enter the num2:");
    scanf("%d",&n2);
  
    switch(mathoperation){
        case '+':
            printf("sum is %d",n1+n2);
            break;
        case '-':
            printf("sub is %d",n1-n2);
            break;
        case '*':
            printf("multiplication  is %d",n1*n2);
            break;
        case '/':
            printf("division is %d",n1/n2);
            break;
    }
    return 0;
} 
*/

//calculate length and breadth of rectangle and find its perimeter.
/*
#include <stdio.h>
#include<stdlib.h>
int main(){
    int l ,b ,peri;
    printf("enter the length:");
    scanf("%d",&l);
    printf("enter the breadth:");
    scanf("%d",&b);
    peri= 2*(l+b);
    printf("perimeter is %d",peri);

    return 0;
} */

//calculate length and breadth of rectangle and find its area.
/*
#include <stdio.h>
#include<stdlib.h>
int main(){
    int l ,b ,area;
    printf("enter the length:");
    scanf("%d",&l);
    printf("enter the breadth:");
    scanf("%d",&b);
    area= (l*b);
    printf("perimeter is %d",area);

    return 0;
} */

//find the radiius of the circle and find its diameter, circumference and the area.
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    int r,dia,circum , area;
    printf("enter the radius of the cicle:");
    scanf("%d",&r);
    dia= 2*r;
    circum=2 *3.14 *r;
    area=3.14*r*r;
    printf("diameter is: %d\n",dia);
    printf("circumference is : %d\n",circum);
    printf("area is :%d\n",area);
    return 0;
} */

//enter the lenght in cm and convert into meter and kilometer
/*
#include<stdio.h>
#include<stdlib.h>
int main(){
    float m,cm,km;
    printf("enter the length in cm:");
    scanf("%f",&cm);
    m = cm/100;
    km  =cm/100000;
    printf("length in m: %f\n",m);
    printf("length in km: %f\n",km);
    return 0;
} */

//enter the temperature in celsius and convert it into fahrenteit.
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    int c,f;
    printf("enter the temperature in clesius:");
    scanf("%d",&c);
    f= (c*9)/5 + 32;
    printf("temperature in fahrenheit: %d",f);
    return 0 ;

}*/

//enter the temperature in celsius and convert it into fahrenteit.
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    int c,f;
    printf("enter the temperature in clesius:");
    scanf("%d",&c);
    c=(f-32)*(9/5);
    printf("temperature in fahrenheit: %d",f);
    return 0 ;
}*/

// write c program to convert days into year,weeks and days.
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    int d,year,week,days;
    printf("enter the days:");
    scanf("%d",&d);
    return 0;
}*/

//write a c program to find the power of the any number
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    int x ,result=1 ,pow ,i;
    printf("enter the 1st num:");
    scanf("%d",&x);
    printf("enter the 2nd num:");
    scanf("%d",&pow);
    for (i=pow; i>=1; i--){
        result=result*x;
    }
    printf("answer is: %d ",result);

    return 0;
}
*/

//enter the number and calculate its square.
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,result;
    printf("enter the num: ");
    scanf("%d",&n);
    result=n*n;
    printf("square is %d",result);
    return 0;
}*/

//enter the two angles of the triangle and find the third one.
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a1,a2;
    printf("enter the angle 1st:");
    scanf("%d",&a1);
    printf("enter the angle 2nd:");
    scanf("%d",&a2);
    printf("the 3rd angle is %d",180-(a1+a2));

    return 0;
} */

//enter the height and base of the triangle and find its area
/*
#include  <stdio.h>
#include <stdlib.h>
int main(){
    int l,b ;
    printf("enter the length:");
    scanf("%d", &l);
    printf("enter the base:");
    scanf("%d", &b);
    printf("area of triangle: %f",l*b*0.5);
    return 0; 
}
*/