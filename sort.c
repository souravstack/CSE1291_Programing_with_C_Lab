int main() {
    int i, n = 10, value;
    int x[n];

    // Read n integers into the array x
    for (i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    // Read the value to search for
    printf("enter value:\n");
    scanf("%d", &value);

    // Search for the value in the array
    for (i = 0; i < n; i++) {
        if (x[i] == value) {
            break; // Exit the loop if the value is found
        }
    }

    // Check if the value was found and print the result
    if (i < n) {
        printf("x[%d] = %d, value = %d\n", i, x[i], value);
    } else {
        printf("Value %d not found in the array.\n", value);
    }

    return 0;
}
