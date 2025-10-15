#include<stdio.h>
int main()
{
    int n,i,array[5];
    scanf("%d",&n);
    printf("store the n array element:\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int *ptr;
    ptr=array;
    printf("printf the array element with pointer\n");
    for(i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
}
