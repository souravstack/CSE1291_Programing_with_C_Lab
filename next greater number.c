#include <stdio.h>
#include <string.h>

// Function to swap two characters
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

// Function to reverse a portion of the string
void reverse(char *start, char *end) {
    while (start < end) {
        swap(start, end);
        start++;
        end--;
    }
}

// Function to find the next greater permutation
void findNextGreater(char digits[]) {
    int n = strlen(digits);
    int i, j;

    // Step 1: Find the first decreasing element from the end
    for (i = n - 2; i >= 0; i--) {
        if (digits[i] < digits[i + 1]) {
            break;
        }
    }

    // If no such element is found, it's the last permutation
    if (i == -1) {
        printf("Not exist\n");
        return;
    }

    // Step 2: Find the element just larger than digits[i]
    for (j = n - 1; j > i; j--) {
        if (digits[j] > digits[i]) {
            break;
        }
    }

    // Step 3: Swap the found elements
    swap(&digits[i], &digits[j]);

    // Step 4: Reverse the sequence after the first element
    reverse(digits + i + 1, digits + n - 1);

    printf("%s\n", digits);
}

int main() {
    char digits[20];

    printf("Enter a number: ");
    scanf("%s", digits);  // Read as a string to handle leading zeros

    findNextGreater(digits);

    return 0;
}
