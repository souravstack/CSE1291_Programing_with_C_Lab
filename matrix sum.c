#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int sum_matrix[N][M];


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int element;
            scanf("%d", &element);
            sum_matrix[i][j] = element;
        }
    }


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int element;
            scanf("%d", &element);
            sum_matrix[i][j] += element;
        }
    }


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", sum_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
