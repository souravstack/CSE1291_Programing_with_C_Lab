#include<stdio.h>
int main()
{
    int i,n,array[100],sum=0;
    printf("enter n number input of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+array[i];
    }

    float avg= (float) sum/n;
     printf("%d\n",sum);
      printf("%f",avg);
      return 0;
}
