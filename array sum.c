#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
     int *ptr;
    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    ptr = arr;
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }
    printf("Sum of array elements: %d\n", sum);
    return 0;
}

