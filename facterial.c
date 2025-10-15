#include<stdio.h>
int main()
{
    int n,fact;
    printf("enter the number:");
    scanf("%d",&n);
    num_fact(&n,&fact);
    printf("%d",fact);
}

void num_fact(int *n, int *fact)
{
     *fact=1;
      for(int i=1;i<*n;i++){
       *fact=*fact * i;
    }
    return *fact;
}
