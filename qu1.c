// 1 2 3 4 5
// 1 2 4 3
// 5

#include<stdio.h>
int main()
{
    int n,i,ar[20],sum=0,sum1=0,j;
    scanf("%d",&n);

    for(i=0; i<n-1; i++)
    {
        scanf("%d",&ar[i]);
    }

  for(i=0; i<n-1; i++){
    sum=sum+ar[i];
  }

  for(i=1; i<=n; i++){
    sum1=sum1+i;
  }
  j=sum1-sum;


   printf("%d",j);
   return 0;
}
