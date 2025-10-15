//d) Explain and determine the output of the following program
#include<stdio.h>
void my_recursive_function(int n)
{
    if(n==0)
    {
        printf("\n");
        return ;
    }
   // printf("%d ",n);
    my_recursive_function(n-1);
    printf("%d ",n);

}
int main()
{
    my_recursive_function(10);
    return 0;
}

