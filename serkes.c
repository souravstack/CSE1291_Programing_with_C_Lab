
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;  // To store the total sum of the series
    int current_sum = 0;  // To store the sum of current sub-series (1 + 2 + ... + i)

    for (int i = 1; i <= n; i++) {
        current_sum += i;  // Add i to the current sum of the sub-series
        sum += current_sum;  // Add the current sum of sub-series to the total sum
    }

    printf("Sum of the series 1 + (1+2) + ... + (1+2+...+n) for n = %d is: %d\n", n, sum);

    return 0;
}
