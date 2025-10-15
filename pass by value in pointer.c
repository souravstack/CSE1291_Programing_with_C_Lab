#include<stdio.h>
void modifyvalue(int *ptr)
{
    *ptr=30;
}


int main()
{
    int num=10;

    printf ("before modification the  value of num=%d\n",num);
    modifyvalue(&num);
    printf ("After modification the value of num=%d\n",num);

    return 0;

}
