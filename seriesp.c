#include<stdio.h>
int main()
{
    int i,n,sum=0,term;
    printf("enter any integer:");
    scanf("%d",&n);

    if(n<0){
        printf("please enter a positive integer greter than 0.\n");
        return 1;
    }

    for(i=1;i<=n;i++){
        term=2*i;
        sum=sum+term*term;
    }
    printf("the sum is=%d\n",sum);
    return 0;
}
