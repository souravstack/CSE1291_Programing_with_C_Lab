#include<stdio.h>
int fun(int n)
{
    int s;
    for(int i=0;i<n;i++){
        printf("ICE-RU");
        s++;
    }
    return s;
}
int main()
{
    int p;
    int (*ptr)(int)=fun;
    p=(*ptr)(2);
    printf("%d times",p);
    return 0;
}
