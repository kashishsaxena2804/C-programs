#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int r;
    printf("Enter from where to rotate from left: ");
    scanf("%d",&r);
    for(i=r;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<r;i++)
    {
        printf("%d ",arr[i]);
    }
}
