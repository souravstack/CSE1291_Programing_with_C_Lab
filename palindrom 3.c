#include<stdio.h>
int main()
{
    int sum=0,temp,num,rem;
    printf("enter the numbers=");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    if(num==sum)
        printf("palindrom number");
    else
        printf("not palindrom number");


}
