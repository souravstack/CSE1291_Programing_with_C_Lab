//array declars
//array initialize
//data type -name size
#include<stdio.h>
int main()
{
    int a[5],sum=0,i,n;

    printf("How many numbers=");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
   for (i=0;i<n;i++)
   {
     sum = sum + a[i];
   }


    printf("the sum is =%d\n",sum);
  printf("the average is =.2f\n",(float)sum/n);





}
