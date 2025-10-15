#include<stdio.h>
int main()
{
    int i,j;
    int A[2][3], B[2][3],C[2][3];
    printf("enter elements for A matrix:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){

            scanf("%d",&A[i][j]);
        }
    }
    printf("\nenter elements for B matrix:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){

            scanf("%d",&B[i][j]);
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("C= matrix:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\t",C [i][j]);
        }
        printf("\n");
    }





    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            C[i][j]=A[i][j]-B[i][j];
        }
    }
    printf("C=(A-B) matrix:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }



    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            C[i][j]=A[i][j]*B[i][j];
        }
    }
    printf("C=(A*B) matrix:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\t",C [i][j]);
        }
        printf("\n");
    }

    return 0;


}
