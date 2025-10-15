#include<stdio.h>

int main() {
    int i, j, nor, noc;
    int A[10][10], B[10][10], C[10][10], D[10][10], E[10][10],F[10][10];

    printf("Enter the number of rows and columns for the matrices (both 2 for 2x2): ");
    scanf("%d %d", &nor, &noc);

    printf("\nEnter matrix A:\n");
    for(i = 0; i < nor; i++) {
       for(j = 0; j < noc; j++) {
         printf("A[%d][%d]: ", i, j);
         scanf("%d", &A[i][j]);
       }
       printf("\n");
    }

    printf("\nEnter matrix B:\n");
    for(i = 0; i < nor; i++) {
       for(j = 0; j < noc; j++) {
         printf("B[%d][%d]: ", i, j);
         scanf("%d", &B[i][j]);
       }
       printf("\n");
    }

    printf("\nMatrix A:\n");
    for(i = 0; i < nor; i++) {
       printf("\t");
       for(j = 0; j < noc; j++) {
         printf("%d ", A[i][j]);
       }
       printf("\n");
    }

    printf("\nMatrix B:\n");
    for(i = 0; i < nor; i++) {
       printf("\t");
       for(j = 0; j < noc; j++) {
         printf("%d ", B[i][j]);
       }
       printf("\n");
    }

    printf("\nMatrix C (A + B):\n");
    for(i = 0; i < nor; i++) {
       printf("\t");
       for(j = 0; j < noc; j++) {
         C[i][j] = A[i][j] + B[i][j];
         printf("%d ", C[i][j]);
       }
       printf("\n");
    }

    printf("\nMatrix D (A-B):\n");
    for(i=0;i<nor;i++){
        printf("\t");
        for(j=0;j<noc;j++){
            D[i][j]=A[i][j]-B[i][j];
            printf("%d ",D[i][j]);
        }
        printf("\n");
    }

     printf("\nMatrix E (A*B):\n");
    for(i=0;i<nor;i++){
        printf("\t");
        for(j=0;j<noc;j++){
            E[i][j]=A[i][j]*B[i][j];
            printf("%d ",E[i][j]);
        }
        printf("\n");
    }

     printf("\nMatrix F (A/B):\n");
    for(i=0;i<nor;i++){
        printf("\t");
        for(j=0;j<noc;j++){
            F[i][j]=A[i][j]-B[i][j];
            printf("%d ",FA[i][j]);
        }
        printf("\n");
    }




    return 0;
}
