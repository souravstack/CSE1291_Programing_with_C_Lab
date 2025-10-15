//matrix muttiplication
#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10],i,j,k,r1,r2,c1,c2,sum=0;

    printf("Enter the raw and col for first matrix:");
    scanf("%d %d",&r1,&c1);

    printf("Enter the raw and col for secend matrix:");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
    printf("Error !! colume of first matrix is not equal to row of secend matrix\n2");

    printf("Enter the raw and col for first matrix:");
    scanf("%d %d",&r1,&c1);

    printf("Enter the raw and col for secend matrix:");
    scanf("%d %d",&r2,&c2);

    }


    printf("\nenter the element of A matrix:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("Matrix A [%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nenter the element of B matrix:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("Matrix B [%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
    }


    printf("\nmatrix A:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
                printf("%d ",A[i][j]);
        }
        printf("\n");
    }


    printf("\nmatrix B:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("%d ",B[i][j]);
       }
         printf("\n");
    }










     // Multiplication
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            sum = 0;
            for(k = 0; k < c1; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    // Output Result
    printf("\nResultant matrix C:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;



}
