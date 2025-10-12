#include<stdio.h>
int main()
{
    int i,j,k;
    int array [3][3][3]={1,2,3,4,5,6,7,8,9};

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                printf("%d ",array[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

}
