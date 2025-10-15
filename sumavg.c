#include <stdio.h>

int main() {
    int students = 5, subjects = 3;
    float marks[students][subjects];
    float sum, average;

    // Taking input of marks for each student
    for (int i = 0; i < students; i++) {
        printf("Enter marks for student %d:\n", i + 1);
        for (int j = 0; j < subjects; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%f", &marks[i][j]);
        }
    }

    // Calculating and displaying average marks for each student
    printf("\nAverage marks for each student:\n");
    for (int i = 0; i < students; i++) {
        sum = 0;  // Reset sum for each student
        for (int j = 0; j < subjects; j++) {
            sum += marks[i][j];
        }
       average = sum / subjects;  // Calculate average
        printf("Student %d: %.2f\n", i + 1, average);
    }



    return 0;
}

