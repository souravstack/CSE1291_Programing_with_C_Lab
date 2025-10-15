#include<stdio.h>
int main()
{
    int n,r,c;
    printf("Enter any  number=");
    scanf("%d",&n);

    for(r=1; r<=n-1; r++)
    {
        for(c=1; c<=n-r; c++)
        {
            printf(" ");
        }
        for(c=1; c<=r; c++)
        {
            printf("%d",c);
        }

        for(c=r-1; c>=1; c--)
        {
            printf("%d",c);
        }
        printf("\n");


    }

}
