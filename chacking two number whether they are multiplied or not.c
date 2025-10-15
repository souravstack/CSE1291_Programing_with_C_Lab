#include<stdio.h>
int main ()
{
    int num1,num2,temp;
    printf("enter two number :");
    scanf("%d %d",&num1,&num2);

    if(num1<num2){
        temp=num1;
        num1=num2;
        num2=temp;
    }

    if(num1 !=0 && num1%num2 ==0){
        printf("they are multiplied\n");

    }
    else{
        printf("they are not multiplied\n");
    }
    return 0;
}
