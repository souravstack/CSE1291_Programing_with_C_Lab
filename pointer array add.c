#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int *p=&a[0];

      printf("value of a =%d\n",*p);
      printf("address=%d\n",p);
      p=p+1;
      *p=43;
      printf("value of a =%d\n",*p);
      printf("address=%d\n",p);
}

