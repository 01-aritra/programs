#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* "); // Print an asterisk followed by a space
        }
        printf("\n"); // Move to the next line after printing the pattern
    }

    return 0;
}
