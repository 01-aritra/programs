#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    printf("Array in reverse order: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", *(arr + i));
    }

    free(arr);
    return 0;
}
