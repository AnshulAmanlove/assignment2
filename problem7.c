#include <stdio.h>

int main() {
    int number;
    int sum = 0;

    // Keep asking the user to enter numbers until 0 is entered
    printf("Enter integers (enter 0 to stop):\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &number);

        // Stop the loop when the user enters 0
        if (number == 0) {
            break;
        }

        // Add the number only if it is positive
        if (number > 0) {
            sum = sum + number;
        }
    }

    // Display the sum of all positive numbers
    printf("Sum of positive integers = %d\n", sum);

    return 0;
}
