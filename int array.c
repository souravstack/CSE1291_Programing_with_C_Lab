#include <stdio.h>

int main() {
    int students = 5;
    int subjects = 2;
    float marks[100][100];
    float sum, average;

    // Input marks for each student
    for (int i = 0; i < students; i++) {
        printf("Enter marks for Student %d:\n", i + 1);
        for (int j = 0; j < subjects; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%f", &marks[i][j]);

        }
    }

    // Calculate and display average for each student
    for (int i = 0; i < students; i++) {
        sum = 0;
        for (int j = 0; j < subjects; j++) {
           sum += marks[i][j]; // Sum marks of each subject for the student
        }
        average = sum / subjects;
        printf("Average marks for Student %d: %.2f\n", i + 1, average);
    }

    return 0;
}

