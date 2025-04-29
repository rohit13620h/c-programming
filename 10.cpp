#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);


    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            printf("  "); // Two spaces for better formatting
        }

        // Print stars
        for (j = 1; j <= i; j++) {
            printf("* "); // Star followed by a space
        }

        printf("\n"); }// Move to the next line

    return 0; // Indicate successful execution
}
