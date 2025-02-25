/*Q: Write a C program that uses pointers to swap the values of two strings
 entered by the user. The program should prompt the user to enter two strings,
 swap their values using pointers, and then display the swapped strings back 
 to the user.*/

 #include<stdio.h>
 #include <stdio.h>
#include <string.h>

void swap(char **str1, char **str2);

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

    // Point the pointers to the input strings
    ptr1 = str1;
    ptr2 = str2;

    // Swap the strings using pointers
    swap(&ptr1, &ptr2);

    // Display the swapped strings
    printf("\nSwapped Strings: %s %s\n", ptr1, ptr2);

    return 0;
}

void swap(char **str1, char **str2) {
    char *temp;

    temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}
