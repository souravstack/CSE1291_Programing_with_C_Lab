#include<stdio.h>
int main()
{
    int a=7,b=5;
    a=a-b;
    b=a+b;
    a=b-a;

    printf("a=%d\n",a);

    printf("b=%d\n",b);
}
