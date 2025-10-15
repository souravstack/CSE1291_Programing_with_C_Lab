#include<stdio.h>
int main()
{
    int a[]={2,4,75,3,8,6,54};
    int *p,*q;
    p=&a[0];
    printf("%d %d %d\n",(*p)++,*++p,*++p);
    printf("%d\n",*p);
    q=p+3;
    printf("%d\n",*q-3);
    printf("%d\n",*p+*q);
}
