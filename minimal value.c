#include<stdio.h>
void findMinimalDigits(int num)
{
    int digits[10];
    int index=0,i;

    for(i=9;i>=2;i--){
        if(num%i==0){
            digits[index++]=i;
            num=num/i;
        }
    }
    if(num>1){
        printf("not posible:");
        return;
    }

    printf("digits:");
    for(i=index-1;i>=0;i--){
        printf("%d ",digits[i]);
    }
}

int main()
{
    int num;
    printf("enter any number:");
    scanf("%d",&num);
    findMinimalDigits(num);
    return 0;
}
