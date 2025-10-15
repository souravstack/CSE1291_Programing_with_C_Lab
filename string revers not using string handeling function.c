#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    // Input the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate the length of the string without using strlen()
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Display the string in reverse order using a for loop
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

