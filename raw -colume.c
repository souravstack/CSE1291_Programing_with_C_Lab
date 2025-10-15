#include<stdio.h>
int main()
{

int n ,raw ,col;
printf("enter N=");
scanf("%d",&n);

for(raw=1;raw<=n;raw++)
{
    for(col=1;col<=n-raw;col++)
    {
        printf(" ",raw);

    }

    for(col=1;col<=raw;col++)
    {
        printf("%d",col);

    }
    printf("\n");

}


}
