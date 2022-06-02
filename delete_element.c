#include <stdio.h>

int main()
{
    int n=5,i,pos;
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter position of element to be deleted: ");
    scanf("%d",&pos);
    if(pos<0 || pos>n)
    {
        printf("Invalid position! Please enter position between 1 to %d", n);
    }
    else
    {
        for(i=pos-1;i<n-1;i++)
        {
            a[i] = a[i+1];
        }
        n--;
        for(i=0;i<n;i++)
        {
            printf("%d",a[i]);
        }
    }

}