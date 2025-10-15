#include<stdio.h>
int main()
{
    int n,r,c,count=0;
    printf("Enter any  number=");
    scanf("%d",&n);

    for(r=1; r<=n; r++)
    {
        for(c=1; c<=r; c++)
        {
            printf("%d",++count);
        }
        printf("\n");
    }

}
