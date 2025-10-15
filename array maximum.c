#include<stdio.h>
int main()
{
    int i,j,count=0,array[3][4],max;
    printf("enter array elements:\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&array[i][j]);
        }
    }
    max=array[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
           if(array[i][j]>max){
            max=array[i][j];
           }
        }
    }
    printf("maximum value is=%d",max);

    return 0;
}

