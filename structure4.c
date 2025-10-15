#include <stdio.h>
#include <stdbool.h>

// Define the structure to store date elements
struct Date {
    int day;
    int month;
    int year;
};

// Function to compare two dates
bool areDatesEqual(struct Date date1, struct Date date2) {
    // Compare the day, month, and year of both dates
    return (date1.day == date2.day) &&
           (date1.month == date2.month) &&
           (date1.year == date2.year);
}

int main() {
    struct Date date1, date2;

    // Input first date
    printf("Enter the first date (dd mm yyyy): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    // Input second date
    printf("Enter the second date (dd mm yyyy): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    // Compare the dates
    if (areDatesEqual(date1, date2)) {
        printf("Dates are equal.\n");
    } else {
        printf("Dates are not equal.\n");
    }

    return 0;
}

