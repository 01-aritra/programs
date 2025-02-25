/*Q : Write a C program that uses pointers to concatenate two strings entered by the user. 
The program should prompt the user to enter two strings,
concatenate them using pointers, and then display the concatenated 
string back to the user.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char *ptr1, *ptr2;

    // Prompt the user for the first string
    printf("Enter the first string: ");
    fgets(str1, 100, stdin);

    // Prompt the user for the second string
    printf("Enter the second string: ");
    fgets(str2, 100, stdin);

    // Remove newline characters from input strings
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Concatenate the two strings using pointers
    ptr1 = str1 + strlen(str1);
    ptr2 = str2;
    while(*ptr2 != '\0') {
        *ptr1++ = *ptr2++;
    }
    *ptr1 = '\0';

    // Display the concatenated string
    printf("\nConcatenated String: %s\n", str1);

    return 0;
}

