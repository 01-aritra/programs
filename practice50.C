#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *s;
    s = (char*)malloc(1024 * sizeof(char));

    if (s == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    scanf("%d", s);

    // Tokenize the input string
    char *token = strtok(s, " ");

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    free(s);  // Free the allocated memory

    return 0;
}
