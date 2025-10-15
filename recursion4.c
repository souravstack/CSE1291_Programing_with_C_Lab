#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    int result=facterial(num);
    printf("%d",result);
    return 0;
}
int facterial(int n)
{
    if(n==0)
        return 1;
    else{
        return n*facterial(n-1);
    }
}
