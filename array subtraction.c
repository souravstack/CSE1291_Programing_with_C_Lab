#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int *p=&a[0];
    int *q=&a[4];


      printf("value =%d\n",p-q);
      p=p+3;
      printf("value =%d\n",*p);
      q=q-6;
      printf("value =%d\n",*q);

}

