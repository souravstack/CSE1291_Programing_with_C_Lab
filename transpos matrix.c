#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int N, M;
    scanf("%d %d", &N, &M); // Input the dimensions of the matrix

    int matrix[MAX_SIZE][MAX_SIZE];

    // Input the matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the transpose of the matrix
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
