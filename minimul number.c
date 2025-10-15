#include <stdio.h>

void findMinimalDigits(int n) {
    // Array to store the digits
    int digits[10];
    int index = 0;

    // Factor the number using digits from 9 to 2
    for (int i = 9; i >= 2; i--) {
        while (n % i == 0) {
            digits[index++] = i; // Store the digit
            n /= i; // Reduce n
        }
    }

    // If n is not 1, it means it couldn't be fully factored into digits
    if (n != 1) {
        printf("Not possible to form such a number.\n");
        return;
    }

    // Print the digits in reverse order for the minimal product
    printf("Digits: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d ", digits[i]);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    findMinimalDigits(num);
    return 0;
}
