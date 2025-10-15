#include<stdio.h>
int main()
{
    int i,n=6,count=0,array[100],x;
    printf("enter integer numbers:\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("enter value x:");
    {
        scanf("%d",&x);
    }
    for(i=0;i<n;i++){
        if(array[i]==x){
            count++;
        }
    }
    printf("count of %d:%d\n"x,count);
    return 0;
}
