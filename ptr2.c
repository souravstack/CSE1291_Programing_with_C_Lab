#include<stdio.h>
int main()
{
    int x,var=20;/*_?_variable declaration*/
    int *ip;     /*_?_variable declaration*/
    ip=&var;     /*initialization-store_?_of var in pointer variable*/
    x=*ip;
    printf("%d\n",&var);
    printf("%d\n",ip);
    printf("%d\n",*ip);
    printf("%d\n",x);

}
