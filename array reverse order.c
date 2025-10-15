#include<stdio.h>
int main ()
{
    int array[100],i,sum=0,n;
    printf("enter n number=");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=n-1;i>=0;i--)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
