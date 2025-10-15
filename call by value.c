#include<stdio.h>
void swap(int a,int b)
{
    int temp=a;
        a=b;
        b=temp;
}

int main()
{
    int a=2,b=3;
    printf("before swaping the value of a and b =%d ,%d\n",a,b);
    swap(a,b);
    printf("after swaping the value of a and b =%d ,%d\n",a,b);
    return 0;
}
