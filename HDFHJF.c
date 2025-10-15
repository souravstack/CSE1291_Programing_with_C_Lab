#include <stdio.h>

#define MAX_SIZE 100  // Define maximum array size

int main() {
    int arr[MAX_SIZE];
    int n, i;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Input elements of the array
    printf("Enter elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print elements of array in reverse order
    printf("Elements of the array in reverse order:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
