#include<stdio.h>
int main()
{
    int x=2,y=5;
    x++;
    y=x+3;
    x+=y;
    printf("x++=%d\n",++y);
    return 0;
}
