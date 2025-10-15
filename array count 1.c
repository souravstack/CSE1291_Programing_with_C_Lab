#include<stdio.h>
int main()
{
    int i,j,array[3][4],count=0,x;
    printf("enter array elements:\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&array[i][j]);
        }
    }
    printf("enter value x:\n");
    scanf("%d",&x);
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
           if(array[i][j]==x){
           count++;
           }
        }
    }
    printf("count of %d=%d",x,count);

    return 0;
}


