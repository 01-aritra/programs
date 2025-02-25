/*Q:Write a C program that uses pointers to reverse a string entered by the user.
 The program should prompt the user to enter a string, reverse the string using pointers, 
and then display the reversed string back to the user.*/

#include <stdio.h>
#include <string.h>

void reverse(char *str);

int main() {
    char str[100];

    // Prompt the user for a string
    printf("Enter a string: ");
    fgets(str, 100, stdin);

    // Remove newline character from the input string
    str[strcspn(str, "\n")] = '\0';

    // Reverse the string using pointers
    reverse(str);

    // Display the reversed string
    printf("\nReversed string: %s\n", str);

    return 0;
}

void reverse(char *str) {
    int i, j;
    char temp;

    // Find the length of the string
    j = strlen(str) - 1;

    // Reverse the string using pointers
    for (i = 0; i < j; i++, j--) {
        temp = *(str + i);
        *(str + i) = *(str + j);
        *(str + j) = temp;
    }
}
