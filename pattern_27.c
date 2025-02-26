#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" "); // Print spaces before the pattern
        }

        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*"); // Print asterisks for the pattern
        }

        printf("\n"); // Move to the next line after printing the pattern
    }

    return 0;
}
