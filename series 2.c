#include<stdio.h>
int main()
{
    int result=1,i,n;
    printf("enter n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)

    {
        result = result*i;
         printf("Result = %d",result);
    }


    return 0
    ;
}
