#include <stdio.h>

void main() {
    int a = 195;               // Declare and initialize an integer variable 'a'
    char *ptr1;               // Declare a pointer to char
    unsigned char *ptr2;      // Declare a pointer to unsigned char

    ptr1 = (char*) &a;        // Cast the address of 'a' to a char pointer
    printf("%d\n", *ptr1);    // Print the value pointed to by 'ptr1'

    ptr2 = (unsigned char*) &a; // Cast the address of 'a' to an unsigned char pointer
    printf("%d\n", *ptr2);      // Print the value pointed to by 'ptr2'
}
