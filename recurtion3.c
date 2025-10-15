#include<stdio.h>
int main()
{
    count(3);
}

void count (int a)
{
    if(a<1)
        return ;
    static d=1;
   // printf("%d",a);
    count(a-1);
    d++;
    printf("%d",d);

}
