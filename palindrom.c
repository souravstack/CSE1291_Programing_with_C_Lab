#include<stdio.h>
int main()
{
    int i,num,rem,temp,sum=0;
    printf("enter any integer:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    if(num==sum){
        printf("palindrom number");
    }
    else{
        printf("not malindrom number");
    }
    return 0;
}
