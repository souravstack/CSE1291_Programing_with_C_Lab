#include<stdio.h>

int main()
{
    int x[5]={10,20,30,40,50};

    int *ptr,i;
    ptr=&x;

    for(i=0;i<5;i++)
    {
        printf("x=%d\n",x[i]);
        ptr++;
    }




    return 0;

}
