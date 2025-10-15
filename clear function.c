#include<stdio.h>

int sum(int a, int b)
{

    return a+b;
}

int main()
{
    int a=20,b=30;
    int add=sum(a,b);
    printf("the sum is=%d\n",add);
    return 0;
}
