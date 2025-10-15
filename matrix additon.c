#include<stdio.h>
int main()
{
    int i,j,array1[3][3],array2[3][3],array3[3][3];

    printf("enter the elements of the array1:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&array1[i][j]);
        }
    }
    printf("enter the elements of the array2:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&array2[i][j]);
        }
    }


    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            array3[i][j]=array1[i][j]+array2[i][j];
        }

    }
    printf("array3 is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",array3[i][j]);
        }
        printf("\n");
    }

      return 0;
}

