#include<stdio.h>
int main()
{
    int a[]={10,11,-1,56,67,5,4};
    int *p,*q;
    p=a;
    q=&a[0]+3;
    printf("%d %d %d\n",(*p)++,(*p)++,*(++p));//12,11,11
    printf("%d\n",*p);//13
    printf("%d\n",(*p)++);//13
    printf("%d\n",(*p)++);//14
    q--;
    printf("%d\n",*q);//-1
    printf("%d\n",(*(q+2))--);//67
    printf("%d\n",*(p+2)-2);//54
    printf("%d\n",*p);//15
    printf("%d\n",*(p++ -2)-1);



}
