#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int matrix[ROWS][COLS] = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};
    int transposed[COLS][ROWS];
    int i, j;

    printf("Original matrix:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Transpose the matrix
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }

    printf("\nTransposed matrix:\n");
    for (i = 0; i < COLS; i++) {
        for (j = 0; j < ROWS; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}
