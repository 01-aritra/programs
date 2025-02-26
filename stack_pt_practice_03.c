#include <stdio.h>

int main() {
    char str1[100], str2[100], str3[200];
    int i, j;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Copy str1 to str3
    i = 0;
    while (str1[i] != '\0') {
        str3[i] = str1[i];
        i++;
    }

    // Concatenate str2 to str3
    j = 0;
    while (str2[j] != '\0') {
        str3[i] = str2[j];
        i++;
        j++;
    }

    // Add null terminator at the end
    str3[i] = '\0';

    printf("Concatenated string: %s", str3);

    return 0;
}

