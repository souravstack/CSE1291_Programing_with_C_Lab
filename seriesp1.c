#include<stdio.h>
int main()
{
    int i,n;
    int sum=0,current_sum=0;
    printf("enter any integer:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        current_sum=current_sum+i;
        sum=sum+current_sum;
    }
    printf("the series sum is=%d\n",sum);
    return 0;

}
