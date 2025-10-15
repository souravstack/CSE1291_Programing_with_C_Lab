#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int zero_count = 0;
    int total_elements = N * M;


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int element;
            scanf("%d", &element);
            if (element == 0) {
                zero_count++;
            }
        }
    }


    if (zero_count > total_elements / 2) {
        printf("The matrix is a sparse matrix.\n");
    } else {
        printf("The matrix is not a sparse matrix.\n");
    }

    return 0;
}
