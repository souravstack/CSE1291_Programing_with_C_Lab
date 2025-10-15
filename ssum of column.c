#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    for (int j = 0; j < M; j++) {
        int column_sum = 0;

        for (int i = 0; i < N; i++) {
            int element;
            scanf("%d", &element);
            column_sum += element;
        }
        printf("%d\n", column_sum);
    }

    return 0;
}

