/*Q: Write a C program that reads a string entered by the user and then counts the number of vowels 
in the string using pointers. The program should prompt the user to enter a string, compute the number 
of vowels in the string using pointers, and then display the number of vowels back to the user. */
#include <stdio.h>
#include <string.h>

int count_vowels(char *str);

int main() {
    char str[100];

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, 100, stdin);

    // Compute the number of vowels in the string using pointers
    int num_vowels = count_vowels(str);

    // Display the number of vowels in the string
    printf("Number of vowels in the string: %d\n", num_vowels);

    return 0;
}

int count_vowels(char *str) {
    int count = 0;
    int len = strlen(str);

    // Count the number of vowels in the string using pointers
    for (int i = 0; i < len; i++) {
        if (*(str + i) == 'a' || *(str + i) == 'e' || *(str + i) == 'i' || *(str + i) == 'o' || *(str + i) == 'u' || *(str + i) == 'A' || *(str + i) == 'E' || *(str + i) == 'I' || *(str + i) == 'O' || *(str + i) == 'U') {
            count++;
        }
    }

    return count;
}
