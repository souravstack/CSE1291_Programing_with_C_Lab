#include <stdio.h>
#include <stdlib.h>


int compare_function(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);

    while (t--) {
        int n;
        printf("Enter the number of elements: ");
        scanf("%d", &n);

        int arr[n];
        printf("Enter %d integers separated by space: ", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        qsort(arr, n, sizeof(int), compare_function);

        printf("Integers in descending order: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
