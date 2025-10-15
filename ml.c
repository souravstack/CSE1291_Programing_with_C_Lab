#include<stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10], i, j, r1, r2, c1, c2;

    printf("Enter the rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    while (c1 != r2) {
        printf("Error !! Columns of first matrix are not equal to rows of second matrix\n");

        printf("Enter the rows and columns for first matrix: ");
        scanf("%d %d", &r1, &c1);

        printf("Enter the rows and columns for second matrix: ");
        scanf("%d %d", &r2, &c2);
    }

    printf("\nEnter the elements of first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("Matrix A [%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter the elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Matrix B [%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }


    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
           C[i][j]=A[i][j]*B[i][j];

        }
    }

    printf ("matrix C= %d\n",C[i][j]);

