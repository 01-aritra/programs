/* Write a function string longestCommonSuffix(vector&lt;string&gt;&amp; arr, int n) that finds 
the longest common suffix among an array of strings. The function should compare characters from the 
end of the strings and return the longest suffix that is common to all strings in the array.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* find_longest_suffix(const char** arr, int n) {
    if (n == 0) {
        char* empty = (char*)malloc(1 * sizeof(char));
        empty[0] = '\0';
        return empty;
    }

    // Find the minimum length string in the array
    int min_length = strlen(arr[0]);
    for (int i = 1; i < n; i++) {
        if (strlen(arr[i]) < min_length) {
            min_length = strlen(arr[i]);
        }
    }

    char* ans = (char*)malloc((min_length + 1) * sizeof(char));
    int ans_index = 0;

    // Traversing from the end of the strings
    for (int i = 0; i < min_length; i++) {
        char ch = arr[0][strlen(arr[0]) - 1 - i];
        int match = 1;

        for (int j = 1; j < n; j++) {
            if (arr[j][strlen(arr[j]) - 1 - i] != ch) {
                match = 0;
                break;
            }
        }

        if (!match) {
            break;
        } else {
            ans[ans_index++] = ch;
        }
    }

    ans[ans_index] = '\0';

    // Reverse the suffix since we collected it backwards
    for (int i = 0; i < ans_index / 2; i++) {
        char temp = ans[i];
        ans[i] = ans[ans_index - 1 - i];
        ans[ans_index - 1 - i] = temp;
    }

    return ans;
}

int main() {
    const char* arr[] = {"walking", "talking", "baking"};
    int n = sizeof(arr) / sizeof(arr[0]);

    char* result = find_longest_suffix(arr, n);
    printf("The longest common suffix is: %s\n", result);

    free(result); // Free allocated memory
    return 0;
}

